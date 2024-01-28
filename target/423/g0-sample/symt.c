/*
 * symt.c
 */

/*
 * The functions in this file maintain a hash table mapping strings to
 *   symbol table entries.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symt.h"
#include "nonterm.h"
#include "120gram.h"
void dovariabledeclarator(nodeptr n, typeptr t);
void semanticerror(char *s, nodeptr n);
int errors;

SymbolTable globals;
SymbolTable current;

char *alloc(int n);		    /* calloc + check for NULL */


/*
 * new_st - construct symbol (hash) table.
 *  Allocate space first for the structure, then
 *  for the array of buckets.
 */
SymbolTable new_st(int nbuckets)
   {
   SymbolTable rv;
   rv = (SymbolTable) alloc(sizeof(struct sym_table));
   rv->tbl = (struct sym_entry **)
      alloc((unsigned int)(nbuckets * sizeof(struct sym_entry *)));
   rv->nBuckets = nbuckets;
   rv->nEntries = 0;
   return rv;
   }

/*
 * delete_st - destruct symbol table.
 */
void delete_st(SymbolTable st)
   {
   SymbolTableEntry se, se1;
   int h;

   for (h = 0; h < st->nBuckets; ++h)
      for (se = st->tbl[h]; se != NULL; se = se1) {
         se1 = se->next;
	 free((char *)se->s); /* strings in the table were all strdup'ed. */
         free((char *)se);
         }
   free((char *)st->tbl);
   free((char *)st);
   }

/*
 * Compute hash value.
 */
int hash(SymbolTable st, char *s)
{
   register int h = 0;
   register char c;
   while ((c = *s++) != 0) {
      h += c & 0377;
      h *= 37;
      }
   if (h < 0) h = -h;
   return h % st->nBuckets;
}

/*
 * Insert a symbol into a symbol table.
 */
int insert_sym(SymbolTable st, char *s, typeptr t)
{
   int h;
   struct sym_entry *se;

   h = hash(st, s);
   for (se = st->tbl[h]; se != NULL; se = se->next)
      if (!strcmp(s, se->s)) {
         /*
          * A copy of the string is already in the table.
          */
         return 0;
         }

   /*
    * The string is not in the table. Add the copy from the
    *  buffer to the table.
    */
   se = (SymbolTableEntry)alloc((unsigned int) sizeof (struct sym_entry));
   se->next = st->tbl[h];
   se->table = st;
   st->tbl[h] = se;
   se->s = strdup(s);
   se->type = t;
   st->nEntries++;
   return 1;
}

/*
 * lookup_st - search the symbol table for a given symbol, return its entry.
 */
SymbolTableEntry lookup_st(SymbolTable st, char *s)
   {
   int h;
   SymbolTableEntry se;

   h = hash(st, s);
   for (se = st->tbl[h]; se != NULL; se = se->next)
      if (!strcmp(s, se->s)) {
         /*
          *  Return a pointer to the symbol table entry.
          */
         return se;
         }
   return NULL;
   }



char * alloc(int n)
{
   char *a = calloc(n, sizeof(char));
   if (a == NULL) {
      fprintf(stderr, "alloc(%d): out of memory\n", (int)n);
      exit(-1);
      }
   return a;
}

void enter_newscope(char *s, int typ)
{
  SymbolTable new = new_st(13);
  typeptr t;
  t = (typ==CLASS_TYPE) ? alcclasstype(s, new):alcmethodtype(NULL,NULL,new);
  new->scope = t;
  insert_sym(current, s, t);
  pushscope(new);
}

void populate_symboltables(nodeptr n)
{
   int i;
   if (n == NULL) return;
   /* pre-order activity */
   switch (n->id) {
   case CONSTRUCTORDECLARATION: {
     enter_newscope(n->kid[1]->kid[0]->t->text, METHOD_TYPE);
     break;
     }
   case METHODDECLARATION: {
     enter_newscope(n->kid[0]->kid[2]->kid[0]->t->text,METHOD_TYPE);
     break;
     }
   case CLASSDECLARATION: {
      enter_newscope(n->kid[1]->t->text, CLASS_TYPE);
      break;
      }
   case LOCALVARIABLEDECLARATION_1: {
       /* kid 1 is a "list" of variables */
       nodeptr t = n->kid[1];
       while (t->id == VARIABLEDECLARATORS_2) {
	  /* do t->kid[1] */
	  dovariabledeclarator(t->kid[1], n->kid[0]->type);
	  t = t->kid[0];
          }
       /* do t */
       dovariabledeclarator(t->kid[0], n->kid[0]->type);
       break;
   }
   case SIMPLENAME: {
      SymbolTableEntry ste = NULL;
      SymbolTable st = current;
      do {
	 ste = lookup_st(st, n->kid[0]->t->text);
	 st = st->parent;
         } while (!ste && st);
      if (!ste) semanticerror("undeclared name", n->kid[0]);
      else {
	 n->type = ste->type;
	 printf("%s", n->kid[0]->t->text);
	 if (ste->table) {
	    if (ste->table->scope) {
	      if (ste->table->scope->basetype==METHOD_TYPE)
		printf("\tlocal");
	      else
		printf("\tclass");
	      }
	    else
	      printf("\tglobal");
	    }
	 if (ste->type)
	    printf("\t%s", typename(ste->type));
	 printf("\n");
	 }
      }
   }
   /* visit children */
   for (i=0; i<n->nkids; i++)
      populate_symboltables(n->kid[i]);

   /* post-order activity */
   switch (n->id) {
   case FIELDDECLARATION: {
       /* kid 2 is a "list" of variables */
       nodeptr t = n->kid[2];
       if (!(n->kid[1]) || !(n->kid[1]->type)) {
	  printf("fielddecl no type\n"); fflush(stdout);
          }
       else
	  printf("fielddecl type %s\n", typename(n->kid[1]->type));
       while (t && t->id == VARIABLEDECLARATORS_2) {
	  /* do t->kid[1] */
	  dovariabledeclarator(t->kid[1], n->kid[1]->type);
	  t = t->kid[0];
          }
       /* do t */
       if (t)
	   dovariabledeclarator(t->kid[0], n->kid[1]->type);
       break;
       }
   case CONSTRUCTORDECLARATION:
   case METHODDECLARATION:
   case CLASSDECLARATION:
     popscope();
   }
}

void dovariabledeclarator(nodeptr n, typeptr t)
{
  n = n->kid[0]; /* get variabledeclaratorid */
  if (n->id == VARIABLEDECLARATORID_2) {
    semanticerror("arrays unimplemented", n);
    exit(0);
  }
  insert_sym(current, n->kid[0]->t->text, t);
}

void printsymbols(SymbolTable st, int level)
{
   int i, j;
   SymbolTableEntry ste;
   if (st == NULL) return;
   for (i=0;i<st->nBuckets;i++) {
      for (ste = st->tbl[i]; ste; ste=ste->next) {
	 for (j=0; j < level; j++) printf("  ");
	 printf("%s\n", ste->s);
	 if (!ste->type) continue;
	 switch (ste->type->basetype) {
         case CLASS_TYPE:
	   printsymbols(ste->type->u.c.st, level+1);
	   break;
	 case METHOD_TYPE:
	   printsymbols(ste->type->u.m.st, level+1);
	   break;
         }
      }
   }
}

void semanticerror(char *s, nodeptr n)
{
   while (n && (n->nkids > 0)) n=n->kid[0];
   if (n) {
     fprintf(stderr, "%s:%d: ", n->t->filename, n->t->line);
   }
  fprintf(stderr, "%s", s);
  if (n && n->id == IDENTIFIER) fprintf(stderr, " %s", n->t->text);
  fprintf(stderr, "\n");
  errors++;
}

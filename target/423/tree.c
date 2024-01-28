#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "token.h"
#include "nonterm.h"
#include "cgram.tab.h"
/* not used */
struct tree *alcleaf()
{
   struct tree *ptr = malloc(sizeof(struct tree));
   return ptr;
}

int serial;

struct tree *alctree(int label, char *sname, int nkids, ...)
{
   int i;
   va_list ap;
#if 0
   struct tree *ptr = malloc(sizeof(struct tree) +
                             (nkids-1)*sizeof(struct tree *));
#else
   struct tree *ptr = malloc(sizeof(struct tree));
#endif
   if (ptr == NULL) {fprintf(stderr, "alctree out of memory\n"); exit(1)
; }
   ptr->id = serial++;
   ptr->prodrule = label;
   ptr->symbolname = sname;
   ptr->nkids = nkids;
   va_start(ap, nkids);
   for(i=0; i < nkids; i++)
      ptr->kids[i] = va_arg(ap, struct tree *);
   va_end(ap);
   return ptr;
}

void printnode(struct tree *t)
{
   if (t == NULL) {fprintf(stderr, "NULL t\n"); exit(1); }
   printf("t %p rule %d leaf? %d text %s\n",
	  t, t->prodrule, (t->nkids==0), (t->leaf!=NULL)?t->leaf->text:"");
   fflush(stdout);
}

void printsymbol(char *s)
{
   printf("%s\n", s); fflush(stdout);
}

void printsyms(struct tree *t)
{
   int i;
   if (t == NULL) {fprintf(stderr, "NULL t\n"); exit(1); }
   if (t->nkids==0 && (t->leaf!=NULL)) {
      if (t->leaf->category==IDENTIFIER)
	 printsymbol(t->leaf->text);
      }
   for(i=0; i<t->nkids; i++) printsyms(t->kids[i]);
}

void printtree(struct tree *t, int depth)
{
   int i;
   if (t == NULL) {fprintf(stderr, "NULL t\n"); exit(1); }
   for(i=0; i<depth; i++) printf(" ");
   printnode(t);
   for(i=0; i<t->nkids; i++) printtree(t->kids[i], depth+1);
}

/* add a \ before leading and trailing double quotes */
char *escape(char *s) {
   char *s2 = malloc(strlen(s)+4);
   if (s[0] == '\"') {
      if (s[strlen(s)-1] != '\"') {
	 fprintf(stderr, "What is it?!\n");
	 }
      sprintf(s2, "\\%s", s);
      strcat(s2+strlen(s2)-1, "\\\"");
      return s2;
     }
   else return s;
}

char *pretty_print_name(struct tree *t) {
   char *s2 = malloc(40);
   if (t->leaf == NULL) {
      sprintf(s2, "%s#%d", t->symbolname, t->prodrule%10);
      return s2;
      }
   else {
      sprintf(s2,"%s:%d", escape(t->leaf->text), t->leaf->category);
      return s2;
      }
}

void print_branch(struct tree *t, FILE *f) {
   fprintf(f, "N%d [shape=box label=\"%s\"];\n", t->id, pretty_print_name(t));
}

char *yyname(int);

void print_leaf(struct tree *t, FILE *f) {
   char * s = yyname(t->leaf->category);
   // print_branch(t, f);
   fprintf(f, "N%d [shape=box style=dotted label=\" %s \\n ", t->id, s);
   fprintf(f, "text = %s \\l lineno = %d \\l\"];\n", escape(t->leaf->text),
   t->leaf->lineno);
}

void print_graph2(struct tree *t, FILE *f) {
   int i;
   if (t->leaf != NULL) {
      print_leaf(t, f);
      return;
      }
   /* not a leaf ==> internal node */
   print_branch(t, f);
   for(i=0; i<t->nkids; i++) {
      if (t->kids[i] != NULL) {
         fprintf(f, "N%d -> N%d;\n", t->id, t->kids[i]->id);
	 print_graph2(t->kids[i], f);
	 }
      else { /* NULL kid, epsilon production or something */
         fprintf(f, "N%d -> N%d%d;\n", t->id, t->id, serial);
	 fprintf(f, "N%d%d [label=\"%s\"];\n", t->id, serial, "Empty rule");
	 serial++;
	 }
      }
}

void print_graph(struct tree *t, char *filename){
      FILE *f = fopen(filename, "w"); /* should check for NULL */
      fprintf(f, "digraph {\n");
      print_graph2(t, f);
      fprintf(f,"}\n");
      fclose(f);
}



void assign_first(struct tree *t)
{
   int i;

   for(i=0; i<t->nkids; i++) assign_first(t->kids[i]);

   t->first = NULL;

   switch(t->prodrule) {
   case CSTMT: t->first = t->kids[0]->first;
      break;
   case CSO: t->first = t->kids[1]->first;
      break;
   case DECL_LIST:
      break;
   case AD:
      break;
   case PE_FCALL:
      break;
   case DD_DD_ARRAY:
      break;
   case PDA:
      break;
   case DD_DD_FUNC:
      break;
   case D_P_DD:
      break;
   case SL_SL_S: t->first = t->kids[0]->first;
      t->kids[1]->first = genlabel(); /* 2nd stmt may be jumped to by 1st kid*/
      break;
   case SS_IT:
      break;
   case SS_ITE:
      break;
   case IS_WHILE: {
/*      first = ?? */

      t->kids[0]->first = genlabel(); /* target to come back next iteration */
      t->kids[1]->first = genlabel(); /* target to start loop body, used in expr */
      printf("genned labels %d and %d for a while loop\n",
             t->kids[0]->first->u.offset, t->kids[1]->first->u.offset);

      break;
      }
   case JS_RET:
      break;
   case JS_RET_EX:
      break;
   case ADDITIVE:
      break;
   case ADDITIVE_MINUS:
      break;
   case RE_LT:
      break;
   case ASN_EX:
      break;
   default:
      break;
   }
}

/* inherited attribute, to be called after assign_first has done its thing */
void assign_follow(struct tree *t)
{
   int i;

  /* inherited attribute usually means: pre-order  */

   switch(t->prodrule) {
   case CSTMT:
      t->kids[0]->follow = t->follow;
      break;
   case CSO:
      t->kids[1]->follow = t->follow;
      break;
   case FD_DS_FDE_CS:
      t->kids[2]->follow = genlabel(); /* should also generate a RETURN */
      break;
   case SL_SL_S:
      t->kids[0]->follow = t->kids[1]->first;
      t->kids[1]->follow = t->follow;
      printf("assigned follow (label %d) from sibling's first!\n",
	     t->kids[0]->follow->u.offset);
      if (t->kids[1]->follow)
      printf("assigned follow (label %d) from my follow!\n",
	     t->kids[1]->follow->u.offset);
      else {
         printf("assigned null follow from my follow!\n");
	 }
      break;
   default:
      break;
      }

   for(i=0; i<t->nkids; i++) assign_follow(t->kids[i]);
}


void assign_onTrue(struct tree *t)
{
   int i;
   switch(t->prodrule) {
   case LOG_EQ: { /* ?? */
      break;
      }
   case LOG_AND: {
      if (t->kids[1]->first == NULL) {
	 printf("oh, we need a label for a right operand!\n");
	 t->kids[1]->first = genlabel();
	 }
      t->kids[0]->onTrue = t->kids[1]->first;
      t->kids[1]->onTrue = t->onTrue;
      break;
      }
   case IS_WHILE: {
      t->kids[0]->onTrue = t->kids[1]->first;
      break;
      }
      }

   for(i=0; i<t->nkids; i++) assign_onTrue(t->kids[i]);
}

void assign_onFalse(struct tree *t)
{
   int i;
   switch(t->prodrule) {
   case LOG_EQ: { /* ?? */
      break;
      }
   case LOG_AND: {
      if (t->kids[1]->first == NULL) {
	 printf("oh, we need a label for a right operand!\n");
	 t->kids[1]->first = genlabel();
	 }
      t->kids[0]->onFalse = t->follow;
      t->kids[1]->onFalse = t->follow;
      break;
      }
   case IS_WHILE: {
      t->kids[0]->onFalse = t->follow;
      break;
      }
      }

   for(i=0; i<t->nkids; i++) assign_onFalse(t->kids[i]);
}

/*
 * libctab.c, from symt.c
 */

/*
 * The functions in this file maintain a hash table mapping string or int
 *   keys onto string values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libctab.h"

char *alloc(int n);		    /* calloc + check for NULL */

/*
 * new_ct - construct C table.
 *  Allocate space first for the structure, then for the array of buckets.
 */
CTable new_ct(int nbuckets)
   {
   int h;
   CTable rv;
   rv = (CTable) alloc(sizeof(struct c_table));
   rv->tbl = (struct c_entry **)
      alloc((unsigned int)(nbuckets * sizeof(struct c_entry *)));
   rv->nBuckets = nbuckets;
   rv->nEntries = 0;
   return rv;
   }

/*
 * delete_ct - destruct C table.
 */
void delete_ct(CTable ct)
   {
   CTableEntry ce, ce1;
   int h;

   for (h = 0; h < ct->nBuckets; ++h)
      for (ce = ct->tbl[h]; ce != NULL; ce = ce1) {
         ce1 = ce->next;
	 if(ce->s_or_i == 0)
	    free((char *)ce->key.s); /* strings in the table were strdup'ed. */
         free((char *)ce);
         }
   free((char *)ct->tbl);
   free((char *)ct);
   }

/*
 * Compute hash value.
 */
int hash_s(CTable ct, char *s)
{
   register int h = 0;
   register char c;
   while (c = *s++) {
      h += c & 0377;
      h *= 37;
      }
   if (h < 0) h = -h;
   return h % ct->nBuckets;
}
/*
 * Compute hash value for integer.
 */
int hash_i(CTable ct, int i)
{
   if (i < 0) i = -i;
   return i % ct->nBuckets;
}

/*
 * Insert a string key into a table.
 */
int insert_s(CTable ct, char *s, char *val)
{
   register int i, h, l;
   struct c_entry *ce;

   h = hash_s(ct, s);
   for (ce = ct->tbl[h]; ce != NULL; ce = ce->next)
      if ((ce->s_or_i == 0) && (!strcmp(s, ce->key.s))) {
         /*
          * A copy of the string is already in the table. Replace it.
          */
	 free(ce->value);
	 ce->value = strdup(val);
         return 0;
         }

   /*
    * The string key is not in the table. Insert it.
    */
   ce = (CTableEntry)alloc((unsigned int) sizeof (struct c_entry));
   ce->next = ct->tbl[h];
   ct->tbl[h] = ce;
   ce->s_or_i = 0;
   ce->key.s = strdup(s);
   ce->value = strdup(val);
   ct->nEntries++;
   return 1;
}

/*
 * Insert an integer key into a table.
 */
int insert_i(CTable ct, int k, char *val)
{
   register int i, h, l;
   struct c_entry *ce;

   h = hash_i(ct, k);
   for (ce = ct->tbl[h]; ce != NULL; ce = ce->next)
      if ((ce->s_or_i == 1) && (k == ce->key.i)) {
         /*
          * A copy of the key is already in the table. Replace its value.
          */
	 free(ce->value);
	 ce->value = strdup(val);
         return 0;
         }

   /*
    * The key is not in the table. Insert it.
    */
   ce = (CTableEntry)alloc((unsigned int) sizeof (struct c_entry));
   ce->next = ct->tbl[h];
   ct->tbl[h] = ce;
   ce->s_or_i = 1;
   ce->key.i = k;
   ce->value = strdup(val);
   ct->nEntries++;
   return 1;
}


/*
 * lookup_s - search the table for a given key; return pointer to its
 * value entry, which can then be read from or assigned.
 */
char ** lookup_s(CTable ct, char *s)
   {
   register int i, h;
   CTableEntry ce;

   h = hash_s(ct, s);
   for (ce = ct->tbl[h]; ce != NULL; ce = ce->next)
      if ((ce->s_or_i == 0) && (!strcmp(s, ce->key.s))) {
         /*
          *  Return a pointer to the table entry's value field.
          */
         return &(ce->value);
         }
   return NULL;
   }

/*
 * lookup_i - search the table for a given key; return pointer to its
 * value entry, which can then be read from or assigned.
 */
char ** lookup_i(CTable ct, int k)
   {
   register int i, h;
   CTableEntry ce;

   h = hash_i(ct, k);
   for (ce = ct->tbl[h]; ce != NULL; ce = ce->next)
      if ((ce->s_or_i == 1) && (k == ce->key.i)) {
         /*
          *  Return a pointer to the table entry's value field.
          */
         return &(ce->value);
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

struct tree *tree(int rule, char *nonterm, int nkids, ...)
{
   struct tree *t = calloc(1, sizeof(struct tree) +
			   (nkids-1)*sizeof(struct tree *));
   if (t==NULL) {
      fprintf(stderr, "out of memory in tree()\n"); fflush(stderr);
      exit(1);
      }
   t->prodrule = rule;
   t->nonterm = strdup(nonterm);
   return t;
}

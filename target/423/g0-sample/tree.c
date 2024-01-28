#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "tree.h"

struct tree *alctree(int label, int nkids, ...)
{
   int i;
   va_list ap;
   struct tree *ptr = malloc(sizeof(struct tree) +
                             (nkids-1)*sizeof(struct tree *));
   if (ptr == NULL) {fprintf(stderr, "alctree out of memory\n"); exit(1); }
   ptr->id = label;
   ptr->nkids = nkids;
   va_start(ap, nkids);
   for(i=0; i < nkids; i++)
      ptr->kid[i] = va_arg(ap, struct tree *);
   va_end(ap);
   return ptr;
}

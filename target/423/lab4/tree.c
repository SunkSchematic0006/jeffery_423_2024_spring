#include "tree.h"

struct tree *alctree(int R, int N){
   struct tree *rv;
   rv = calloc(1, sizeof(struct tree));
   if (rv == NULL) {
      fprintf(stderr, "out of memory in alctree\n");
      exit(1);
      }
   rv->produle = R;
   rv->nkids = N;
   return rv;
}

void printnode(struct tree *t)
{
   if(t->nkids == 0) { /* its a leaf */
      /* printf leaf as per HW#2 */
      }
   else { /* its an internal node */
      }
}

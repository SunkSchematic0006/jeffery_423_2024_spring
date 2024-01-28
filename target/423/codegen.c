#include <stdio.h>
#include "tree.h"

void codegen(struct tree * t)
{
   int i, j;
   if (t==NULL) return;

   /*
    * this is a post-order traversal, so visit children first
    */
   for(i=0;i<t->nkids;i++)
      codegen(t->child[i]);

   /*
    * back from children, consider what we have to do with
    * this node. The main thing we have to do, one way or
    * another, is assign t->code
    */
   switch (t->label) {
   case O_ADD: {
      struct instr *g;
      t->code = concat(t->child[0]->code, t->child[1]->code);
      g = gen(O_ADD, t->address,
              t->child[0]->address, t->child[1]->address);
      t->code = concat(t->code, g);
      break;
      }
   /*
    * ... really, a bazillion cases, up to one for each
    * production rule (in the worst case)
    */
   default:
      /* default is: concatenate our children's code */
      t->code = NULL;
      for(i=0;i<t->nkids;i++)
         t->code = concat(t->code, t->child[i]->code);
   }
}

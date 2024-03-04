#ifndef TREE_H
#define TREE_H

#include <stdarg.h>
#include "tac.h"


struct tree {
   int prodrule;
   char *symbolname;
   int id;               /* unique instance serial #! */
   int nkids;
   struct typeinfo *type;
   struct tree *kids[9]; /* if nkids >0 */
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */

   struct addr *first, *follow;
   struct addr *onTrue, *onFalse;
};

void printnode(struct tree *t);
struct tree *alctree(int label, char *sname, int nkids, ...);
void assign_first(struct tree *t);
void assign_follow(struct tree *t);
void assign_onTrue(struct tree *t);
void assign_onFalse(struct tree *t);


#if 0
/* fancier tree for variable-size tree nodes */
struct tree {
   short label;			/* what production rule this came from */
   int isleaf;
   short nkids;			/* how many children it really has */
   struct addr address;
   struct instr *code;
   struct token *t;
   struct tree *child[1];	/* array of children, size varies 0..k */
};
#endif
#endif

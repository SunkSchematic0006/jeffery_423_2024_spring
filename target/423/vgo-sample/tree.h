#ifndef TREE_H
#define TREE_H 1

#include "token.h"
typedef struct tree {
   short id;			/* what production rule this came from */
   struct typeinfo *type;
   struct token *t;
   short nkids;			/* how many children it really has */
   struct tree *kid[1];		/* array of children, size varies 0..k */
} *nodeptr;

struct tree *alctree(int label, int nkids, ...);
#endif

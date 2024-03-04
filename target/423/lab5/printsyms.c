#include "tree.h"

void printsymbol(char *s);

void printsyms(struct tree *t)
{
   if (t == NULL) return;
   if (t->nkids > 0) {
      int i;
      for(i=0;i<t->nkids; i++) printsyms(t->kids[i]);
      }
   /* else you are a leaf, but are you an identifier? */
   else {
      if(t->leaf->cat == NAME) printsymbol(t->leaf->text);
      }
}

void printsymbol(char *s)
{
   printf("%s\n", s); fflush(stdout);
}

#include "token.h"
struct token *alctoken(int c, char *t){
   struct token *rv = malloc(sizeof (struct token));
   rv->category = c;
   rv->text = strdup(t);
   return rv;
   }

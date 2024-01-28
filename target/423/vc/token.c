#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "go.tab.h"
struct token *alctoken(int cat, char *text, int ln, int col, char *fn)
{
   struct token *t = calloc(sizeof(struct token),1);
   if (t==NULL) return t;
   t->category = cat;
   t->text = strdup(text);
   t->linenumber = ln;
   t->column = col;
   t->filename = fn;
   if (cat == LLITERAL) {
      /* figure out what to do */
      }
   return t;
}

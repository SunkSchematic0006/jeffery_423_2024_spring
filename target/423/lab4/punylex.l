%{
#include "tree.h"
#include "punygram.tab.h"

%}
%option noyywrap
%%
<<EOF>> { retrn ENDMARKER; }
[a-zA-Z]+ { return NAME; }
[0-9]+ { yylval.treeptr = alctree(0, 0);
         yylval.treeptr->leaf = alctoken(NUMBER, yytext);
         printnode(yylval.treeptr);
         return NUMBER; }
[\n] { return NEWLINE; }
[ \t\n]+ { }
. { fprintf(stderr, "bad char\n"); }

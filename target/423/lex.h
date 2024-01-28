#ifndef NOTDEF
#define NOTDEF

struct token {
   int code;
   char *text;
   };

int yylex();
extern struct token *yytoken;
#endif

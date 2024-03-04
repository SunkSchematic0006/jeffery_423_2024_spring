#include <stdio.h>
#include <stdlib.h>
#include "symt.h"
int yyparse();
extern int lineno;
extern FILE *yyin;

int main(int argc, char *argv[])
{
   globals = new_st(37);
   if (argc < 2) {
      fprintf(stderr, "usage: 120 filename\n");
      exit(1);
      }
   if ((yyin=fopen(argv[1],"r")) == NULL) {
      fprintf(stderr, "cannot open %s\n", argv[1]);
      exit(1);
      }
   lineno = 1;
   switch(yyparse()) {
   case 0: printf("parse succeeded\n"); break;
   case 1: printf("parse failed (syntax)\n"); break;
   case 2: printf("parse failed (memory)\n"); break;
      }
   return 0;
}

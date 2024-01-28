#include <stdio.h>
#include <stdlib.h>

extern FILE* yyin;
int yyparse();
int main(int argc, char *argv[])
{
   yyin = fopen(argv[1], "r");
   printf("yyparse returns %d\n", yyparse());
   return 0;
}

int yyerror(char *s)
{
   fprintf(stderr, "parse error %s\n", s);
   exit(1);
}

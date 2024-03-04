#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;

int yyparse();
int main(int argc, char *argv[])
{
   int i;
   yyin = fopen(argv[1], "r");
   if (yyin==NULL) {
     fprintf(stderr, "usage: lab3 filename\n");
     exit(1);
   }
   i = yyparse();
   printf("yyparse returns %d\n", i);
   exit(i);
   }

int yyerror(char *s) {
   fprintf(stderr, "%s\n", s); exit(1);
}

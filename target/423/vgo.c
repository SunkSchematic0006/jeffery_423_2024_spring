#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yyparse();
int errors;
FILE *outfile;
char *CurFileName;
extern int yydebug;

int main(int argc, char **argv)
{
   int rv;
   outfile = stdout;
   CurFileName = argv[1];
   yydebug = 1;
   if (argc == 1) {
      fprintf(stderr, "usage: vgo files[.go] ...\n");
      fflush(stderr);
      exit(1);
      }
   if ((yyin = fopen(argv[1], "r")) == NULL){
      fprintf(stderr, "can't open %s\n", argv[1]);
      }
   rv = yyparse();
   printf("yyparse returned %d\n", rv);
   return 0;
}

#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern char *yytext;
int main()
{
   int i;
   yyin = fopen("hello.c", "r");
   if (yyin == NULL) {
      fprintf(stderr, "can't open hello.c\n");
      exit(1);
      }

   while ((i = yylex()) > 0) {
      printf("%d: %s\n", i, yytext);
      }
   return 0;
}

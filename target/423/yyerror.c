#include <stdio.h>
#include <stdlib.h>
int yyerror(char *s)
{
   fprintf(stderr, "%s\n", s);
   exit(2);
}

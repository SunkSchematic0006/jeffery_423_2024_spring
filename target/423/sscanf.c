#include <stdio.h>
#include <stdlib.h>
int main()
{
   double d;
   char *yytext = "2.71";
   sscanf(yytext, "%lg", &d);
   printf("%lg\n", d);
}

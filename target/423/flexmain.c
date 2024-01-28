#include <stdio.h>
   int yylex();
extern int rows, words, chars;
int main()
{
   while (yylex()> 0) ;
printf("lines %d\n", rows);   
printf("words %d\n", words);   
printf("chars %d\n", chars);   
   return 0;
}

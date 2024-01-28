#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"
extern FILE *yyin;
extern char *yytext;
extern int yylex();



int main(int argc, char *argv[])
{
   int cat;
   if (argc==1) {
      fprintf(stderr, "usage punny [file]\n"); fflush(stderr);
      exit(1);
      }
   /* append .py onto the end of argv[1] if needed */
   if (strcmp(argv[1]+strlen(argv[1])-3, ".py")!=0) {
      strcat(argv[1], ".py"); /* what is wrong with this line? */
      }

   if ((yyin = fopen(argv[1],"r")) == NULL) {
      fprintf(stderr, "can't open %s\n", argv[1]); fflush(stderr);
      exit(1);
      }
   printf("Category  Text        Lineno    Filename    Ival/Sval\n");
   printf("-------------------------------------------------------------\n");
   while ((cat=yylex()) > 0) 
   printf("%-8s  %-12s%-8d  %12s  %s   \n",
	  catname(cat),
	  ((yytext[0]!='\n')?yytext:"\\n"),
	  0, "?", "?");
   return 0;
}

#include <stdio.h>
extern FILE *yyin;
main(int argc, char *argv[])
{
   yyin = fopen(argv[1], "r");
   if (yyin==NULL) {
     fprintf(stderr, "usage: lab3 filename\n");
     exit(1);
   }

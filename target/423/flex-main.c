#include <stdio.h>
#include <stdlib.h>
   
int yylex();
extern FILE *yyin;
extern int rows, words, chars;

int main(int argc, char *argv[]) {
    if (argc < 2) {
       printf("usage: wc file");
       exit(1);
       }
    yyin = fopen(argv[1], "r");
    yylex();
    printf("\t%d\t%d\t%d\n", rows, words, chars);
    fclose(yyin);
    return 0;
}

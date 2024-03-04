#include <stdio.h>
int yylex();
extern FILE *yyin;

int main(int argc, char **argv )
               {
               ++argv, --argc;  /* skip over program name */
               if ( argc > 0 )
                       yyin = fopen( argv[0], "r" );
               else
                       yyin = stdin;

               yylex();
               }

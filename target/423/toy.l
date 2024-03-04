/* scanner for a toy Pascal-like language */

%{
#include <stdio.h>
   /* need this for the call to atof() below */
#include <math.h>
#include "toy.h"
%}

DIGIT    [0-9]
ID       [a-z][a-z0-9]*

%option noyywrap
%%

{DIGIT}+    {	return INTEGER;
                       }

{DIGIT}+"."{DIGIT}*        { return FLOAT;
                       }

if|then|begin|end|procedure|function        {
                       printf( "A keyword: %s\n", yytext );
                       }

{ID}        { printf( "An identifier: %s\n", yytext ); }

"+"|"-"|"*"|"/"   { printf( "An operator: %s\n", yytext ); }

"{"[^}\n]*"}"     {  /* eat up one-line comments */ }

[ \t\n]+          { /* eat up whitespace */ }

.         {  printf( "Unrecognized character: %s\n", yytext ); }

%%

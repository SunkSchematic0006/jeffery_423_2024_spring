%{
#include <stdio.h>
%}
%option noyywrap
%%
"abc"	{ printf("!!!"); }
%%
int main()
{
   yyin = stdin;
   return yylex();
}

/* -*-bison-*- */
/* Simple wc implementation in Flex */
%option noyywrap
%option noinput
%option nounput
%{
#include "token.h"
#include "y.tab.h"

int dentstack[100]={0};
int top=0;
int indentlevel(char *s);
int rows = 1, words = 0, column = 1;
int dedentcount;
int firsttime;
#define yylex real_yylex
%}
%%
<<EOF>>         { if (firsttime++ == 0) return ENDMARKER; else return -1; }
"#".*
\\\n		{ rows++; column=1; }
\n[ \t]*	{ int il = indentlevel(yytext+1);
                  rows++; column=il+1;
		  if (il > dentstack[top]) {
		    dentstack[++top] = il;
                    /* return an INDENT token, except NEWLINE first */
		    dedentcount = -1;
                    }
		  else if (il < dentstack[top]) {
                    /* return one or more DEDENT tokens */
		    dedentcount=0;
                    /* count how many */
		    while (top>0 && dentstack[top]>il) {
                       dedentcount++; top--; }
		    if (dentstack[top] != il) {
		       fprintf(stderr, "Python indent error line %d\n", rows);
		       fflush(stderr); exit(1);
		       }
		    /* need to dedent by dedentcount, but returning NEWLINE */
                    }
		  else {
                    /* still at ILEVEL il, no INDENT or DEDENT */
                    }
                  rows++; column++;
                  return NEWLINE; }
"("             { return LPAREN; }
")"             { return RPAREN; }
":"		{ return COLON; }
"<"             { return LESSTHAN; }
"="             { return ASGN; }
"\""[^"\n]*"\""     { return STRINGLIT; }
while { words++; column+=5; return WHILE; }
if { words++; column+=2; return IF; }
else { words++; column+=4; return ELSE; }
[0-9]+          {
     words++; column += strlen(yytext);
     yytoken = mktoken(NUMBER);
     return NUMBER;
}
[A-Za-z0-9]+	{
     words++; column += strlen(yytext);
     yytoken = mktoken(NAME);
     return NAME;
     }
.		{ column++; }
%%

int indentlevel(char *s)
{      
   int column = 1;
   while(*s != '\0') {
      if (*s == '\t') {
         column++; /* tab adds at least one space */
         while (((column-1) % 8) != 0) column++;
      }
      else if (*s == ' ') column++;
      else { column++; printf("but wtf is %c\n", *s);}
      s++;
   }
   return column-1;
}

#undef yylex

int yylex() {
   if (dedentcount<0) {
     dedentcount++;
     return INDENT;
     }
   if(dedentcount>0) {
     dedentcount--;
     return DEDENT;
     }
   return real_yylex();
}

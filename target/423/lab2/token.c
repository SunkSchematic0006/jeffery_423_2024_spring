#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "y.tab.h"
extern char *yytext;

struct token *yytoken;

struct token *mktoken(int c)
{
   struct token *rv = malloc(sizeof(struct token));
   if (rv == NULL) { fprintf(stderr, "malloc fails\n"); fflush(stderr); }
   rv->cat = c;
   return rv;
}

char *catname(int c)
{
   switch(c) {
   case STRINGLIT: return "STRING";
   case LPAREN: return "LPAREN";
   case RPAREN: return "RPAREN";
   case NAME: return "NAME";
   case ENDMARKER: return "ENDMARKER";
   case NEWLINE: return "NEWLINE";
   case INDENT: return "INDENT";
   case DEDENT: return "DEDENT";
   case ASGN: return "ASGN";
   case LESSTHAN: return "LESSTHAN";
   case NUMBER: return "NUMBER";
   case WHILE: return "WHILE";
   case IF: return "IF";
   case ELSE: return "ELSE";
   case COLON: return "COLON";
   default: return "unknown";
      }
}

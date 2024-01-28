O                       [0-7]
D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)
W                       [ \t\f]*
LIT                     \"(\\.|[^\\"])*\"

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "g0gram.tab.h"

int comment();
int line_num = 1;
char lastid[256];
%}

%%

"/*"                    { comment(); }

^{W}#.*\n               { yyerror("g0 has no #preprocessor direcives. Are you feeding it C/C++ code?"); }

\n                      { }
[ \t\f]+                { }

"boolean"               { return BOOLEAN; }
"break"                 { return BREAK; }
"class"                 { return CLASS; }
"continue"              { return CONTINUE; }
"double"                { return DOUBLE; }
"else"                  { return ELSE; }
"for"                   { return FOR; }
"if"                    { return IF; }
"int"                   { return INT; }
"list"                  { return LIST; }
"return"                { return RETURN; }
"string"                { return STRING;}
"table"                 { return TABLE; }
"this"                  { return THIS; }
"void"                  { return VOID; }
"while"                 { return WHILE; }
"null"                  { return NULLLITERAL; }
"true"                  { return BOOLLITERAL; }
"false"                 { return BOOLLITERAL; }
{L}({L}|{D})*           { return IDENT; }

{D}+{IS}?               { return INTLITERAL; }

'(\\.|[^\\'])+'         { return CHARLITERAL; }

{D}+{E}{FS}?            { return FLOATLITERAL; }
{D}*"."{D}+({E})?{FS}?  { return FLOATLITERAL; }
{D}+"."{D}*({E})?{FS}?  { return FLOATLITERAL; }

{LIT}                   { return STRINGLITERAL; }

"("                     { return LP; }
")"                     { return RP; }
"{"                     { return LC; }
"}"                     { return RC; }
"["                     { return LB; }
"]"                     { return RB; }
";"                     { return SM; }
","                     { return CM; }
"."                     { return DOT; }


"="                     { return ASN; }
"<"                     { return LT; }
">"                     { return GT; }
"!"                     { return BANG; }
"~"                     { return TILDE; }
"?"                     { return QUEST; }
":"                     { return COLON; }
"=="                    { return EQ; }
"!="                    { return NE; }
"<="                    { return LE; }
">="                    { return GE; }
"&&"                    { return ANDAND; }
"||"                    { return OROR; }
"++"                    { return INC; }
"--"                    { return DEC; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return MUL; }
"/"                     { return DIV; }
"&"                     { return AND; }
"|"                     { return OR; }
"^"                     { return CARET; }
"%"                     { return MOD; }
"<<"                    { return SHL; }
">>"                    { return SHR; }
">>>"                   { return LSHR; }
"+="                    { return PLASN; }
"-="                    { return MIASN; }
"*="                    { return MUASN; }
"/="                    { return DIASN; }
"&="                    { return ANDASN; }
"|="                    { return ORASN; }
"^="                    { return CARETASN; }
"%="                    { return MODASN; }
"<<="                   { return SLASN; }
">>="                   { return SRASN; }
">>>="                  { return LSRASN; }

.                       { yyerror("lexical error"); }

%%

char *yyfilename = NULL;
int yychar;
int errors;

yyerror(char *s)
{
   errors++;

   fprintf(stderr, "%s: ", s);

   if (yyfilename)
      fprintf(stderr, "file \"%s\", ", yyfilename );

   fprintf(stderr, "line %d, token = \"%s\"\n", yylineno, yytext);
   exit(1);
}

comment()
{
	
	int splat_seen = 0;

	for(;;) {
	   int ch = input();
	   switch (ch) {
	      default:
		 splat_seen = 0;
					  break;
	      case '*':
		 splat_seen = 1;
		 break;
	      case '/':
		 if(splat_seen)
						  return;
		 else
		    splat_seen = 0;
		 break;
				  case 0: {
		   yychar = BAD_TOKEN;
		   yyerror("Unterminated comment");
		   exit(-(++errors));
	       }
	   }

	}

}

#ifndef yywrap

int yywrap(){
    return 1;
}

#endif


lex_sync()
{
    /* Probably because of its use for interactive line-interpreters
     * like "dc", original yacc uses a "lazy" lookahead, that is to say, it
     * does not fetch a lookahead when the only action is the default
     * reduction. But our scanner-feedback must keep the lookahead in
     * sync. This routine sees to it that the lookahead has been
     * fetched.
     *
     * yychar is the yacc lookahead token. It is -1 when
     * yacc is being "lazy". yylex() is allowed to return -1 (or any
     * negative int) to indicate EOF, but yacc uses 0 to indicate EOF.
     */
    
    if(yychar == -1)
      if((yychar = yylex()) < 0)
	      yychar = 0;
}

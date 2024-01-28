O        [0-7]
D        [0-9]
L        [a-zA-Z_]
H        [a-fA-F0-9]
E        [Ee][+-]?{D}+
FS       (f|F|l|L)
IS       (u|U|l|L)
W        [ \t\f]*
LIT      \"(\\.|[^\\"])*\"

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "cgram.tab.h"
#include "token.h"
#include "tree.h"

void exit(int);
int token(int);
extern int yychar;

void lexerr(char *s);
void handle_include();

/* #define DEBUG */

int line_num = 1;
int errors;
int included_stdio = 0;
FILE *saved_yyin;
%}
%option noinput
%option nounput
%%

\n                      { line_num++; }
[ \t\f]+                { }

"break"                 { return token(BREAK); }
"case"                  { return token(CASE); }
"char"                  { return token(CHAR); }
"const"                 { return token(CONST); }
"continue"              { return token(CONTINUE); }
"default"               { return token(DEFAULT); }
"do"                    { return token(DO); }
"double"                { return token(DOUBLE); }
"else"                  { return token(ELSE); }
"enum"                  { return token(ENUM); }
"extern"                { return token(EXTERN); }
"float"                 { return token(FLOAT); }
"for"                   { return token(FOR); }
"goto"                  { return token(GOTO); }
"if"                    { return token(IF); }
"int"                   { return token(INT); }
"long"                  { return token(LONG); }
"register"              { return token(REGISTER); }
"return"                { return token(RETURN); }
"short"                 { return token(SHORT); }
"signed"                { return token(SIGNED); }
"sizeof"                { return token(SIZEOF); }
"static"                { return token(STATIC); }
"struct"                { return token(STRUCT); }
"switch"                { return token(SWITCH); }
"typedef"               { return token(TYPEDEF); }
"union"                 { return token(UNION); }
"unsigned"              { return token(UNSIGNED); }
"void"                  { return token(VOID); }
"volatile"              { return token(VOLATILE); }
"while"                 { return token(WHILE); }

{L}({L}|{D})*           { return token(IDENTIFIER); }


0[xX]{H}+{IS}?          { lexerr("Hex not supported\n"); }

0{O}+{IS}?              { lexerr("Octal not supported\n"); }

{D}+{IS}?               { return token(ICON); }

'(\\.|[^\\'])+'         { return token(CCON); }

{D}+{E}{FS}?            { return token(FCON); }
{D}*"."{D}+({E})?{FS}?  { return token(FCON); }
{D}+"."{D}*({E})?{FS}?  { return token(FCON); }

{LIT}                   { return token(STRING); }

"#include"[ ]*\"[^\\"]+\"  { handle_include(); }

"#include <stdio.h>"   { included_stdio = 1; }

">>="                   { return token(SRASN); }
"<<="                   { return token(SLASN); }
"+="                    { return token(PLASN); }
"-="                    { return token(MIASN); }
"*="                    { return token(MUASN); }
"/="                    { return token(DIASN); }
"%="                    { return token(MOASN); }
"&="                    { return token(ANASN); }
"^="                    { return token(ERASN); }
"|="                    { return token(ORASN); }
">>"                    { return token(SHR); }
"<<"                    { return token(SHL); }
"++"                    { return token(INCOP); }
"--"                    { return token(DECOP); }
"->"                    { return token(FOLLOW); }
"&&"                    { return token(ANDAND); }
"||"                    { return token(OROR); }
"<="                    { return token(LE); }
">="                    { return token(GE); }
"=="                    { return token(EQ); }
"!="                    { return token(NE); }
";"                     { return token(SM); }
"{"                     { return token(LC); }
"}"                     { return token(RC); }
","                     { return token(CM); }
":"                     { return token(COLON); }
"="                     { return token(ASN); }
"("                     { return token(LP); }
")"                     { return token(RP); }
"["                     { return token(LB); }
"]"                     { return token(RB); }
"."                     { return token(DOT); }
"&"                     { return token(AND); }
"!"                     { return token(BANG); }
"~"                     { return token(NOT); }
"-"                     { return token(MINUS); }
"+"                     { return token(PLUS); }
"*"                     { return token(MUL); }
"/"                     { return token(DIV); }
"%"                     { return token(MOD); }
"<"                     { return token(LT); }
">"                     { return token(GT); }
"^"                     { return token(ER); }
"|"                     { return token(OR); }
"?"                     { return token(QUEST); }
%%

void lexerr(char *s)
{
	errors++;

	fprintf(stderr, "%s: lexical error", s);

	/* to do: add mechanism for reporting file name and line number */

	fprintf(stderr, ", token = \"%s\"\n", yytext);
}

/*
 * Return 1 if done, 0 if yyin points at more input
 */
int yywrap()
{
   return 1;
}

void handle_include()
{
#if 1
   return;
#else
   char *newfilename = malloc(strlen(yytext)+1-strlen("#include \"\""));
   saved_yyin = yyin;
   char *fname = strchr(yytext, '\"')+1;
   fname[strlen(fname)-1] = '\0';
   // fprintf(stdout, "included filename '%s'\n", fname); fflush(stdout);
   yyin = fopen(fname,"r");
   if (yyin == NULL) {
     lexerr("cannot open include file");
     exit(1);
   }
#endif
}

void memerr()
{
   fprintf(stderr, "out of memory\n");
   exit(1);
}

extern int serial;
extern char *yyname();

int token(int cat)
{
   if ((yylval.treeptr = (struct tree *)calloc(1, sizeof (struct tree))) == NULL)
       memerr();
   /* initialize other tree fields */
   yylval.treeptr->id = serial++;
   yylval.treeptr->prodrule = cat;
   yylval.treeptr->symbolname = yyname(cat);
   yylval.treeptr->nkids = 0;


   if ((yylval.treeptr->leaf = (struct token *)malloc(sizeof (struct token)))==NULL)
       memerr();
   yylval.treeptr->leaf->category = cat;
   yylval.treeptr->leaf->text = strdup(yytext);
   /* more of your HW#2 here... */
   return cat;
}

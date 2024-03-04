%{
/* 
 * Adapted from from the Rust project's deleted lexer.l
 * via the Wayback Machine.

// Copyright 2015 The Rust Project Developers. See the COPYRIGHT
// file at the top-level directory of this distribution and at
// http://rust-lang.org/COPYRIGHT.
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

 */

#include <stdio.h>
#include <ctype.h>
#include "token.h"
#include "rustgram.tab.h"

extern YYSTYPE yylval;
extern int yylineno;
int token(int i);

%}

%option noyywrap
%option stack
%option yylineno

%x str
%x rawstr
%x rawstr_esc_begin
%x rawstr_esc_body
%x rawstr_esc_end
%x byte
%x bytestr
%x rawbytestr
%x rawbytestr_nohash
%x pound
%x shebang_or_attr
%x ltorchar
%x linecomment
%x doc_line
%x blockcomment
%x doc_block
%x suffix

ident [a-zA-Z\x80-\xff_][a-zA-Z0-9\x80-\xff_]*

%%

[ \n\t\r]             { }
"//".*                { }
"\""([^\n"\\]|"\\"[\\nt"])*"\""            { return token(LIT_STR); }

_        { return token(UNDERSCORE); }
abstract { return token(ABSTRACT); }
alignof  { return token(ALIGNOF); }
as       { return token(AS); }
become   { return token(BECOME); }
box      { return token(BOX); }
break    { return token(BREAK); }
catch    { return token(CATCH); }
const    { return token(CONST); }
continue { return token(CONTINUE); }
crate    { return token(CRATE); }
default  { return token(DEFAULT); }
do       { return token(DO); }
else     { return token(ELSE); }
enum     { return token(ENUM); }
extern   { return token(EXTERN); }
false    { return token(FALSE); }
final    { return token(FINAL); }
fn       { return token(FN); }
for      { return token(FOR); }
if       { return token(IF); }
impl     { return token(IMPL); }
in       { return token(IN); }
let      { return token(LET); }
loop     { return token(LOOP); }
macro    { return token(MACRO); }
match    { return token(MATCH); }
mod      { return token(MOD); }
move     { return token(MOVE); }
mut      { return token(MUT); }
offsetof { return token(OFFSETOF); }
override { return token(OVERRIDE); }
priv     { return token(PRIV); }
proc     { return token(PROC); }
pure     { return token(PURE); }
pub      { return token(PUB); }
ref      { return token(REF); }
return   { return token(RETURN); }
self     { return token(SELF); }
sizeof   { return token(SIZEOF); }
static   { return token(STATIC); }
struct   { return token(STRUCT); }
super    { return token(SUPER); }
trait    { return token(TRAIT); }
true     { return token(TRUE); }
type     { return token(TYPE); }
typeof   { return token(TYPEOF); }
union    { return token(UNION); }
unsafe   { return token(UNSAFE); }
unsized  { return token(UNSIZED); }
use      { return token(USE); }
virtual  { return token(VIRTUAL); }
where    { return token(WHERE); }
while    { return token(WHILE); }
yield    { return token(YIELD); }

{ident}  { return token(IDENT); }

0x[0-9a-fA-F_]+                                    { BEGIN(suffix); return token(LIT_INTEGER); }
0o[0-7_]+                                          { BEGIN(suffix); return token(LIT_INTEGER); }
0b[01_]+                                           { BEGIN(suffix); return token(LIT_INTEGER); }
[0-9][0-9_]*                                       { BEGIN(suffix); return token(LIT_INTEGER); }
[0-9][0-9_]*\.(\.|[a-zA-Z])    { yyless(yyleng - 2); BEGIN(suffix); return token(LIT_INTEGER); }

[0-9][0-9_]*\.[0-9_]*([eE][-\+]?[0-9_]+)?          { BEGIN(suffix); return token(LIT_FLOAT); }
[0-9][0-9_]*(\.[0-9_]*)?[eE][-\+]?[0-9_]+          { BEGIN(suffix); return token(LIT_FLOAT); }

;      { return token(';'); }
,      { return token(','); }
\.\.\. { return token(DOTDOTDOT); }
\.\.   { return token(DOTDOT); }
\.     { return token('.'); }
\(     { return token('('); }
\)     { return token(')'); }
\{     { return token('{'); }
\}     { return token('}'); }
\[     { return token('['); }
\]     { return token(']'); }
@      { return token('@'); }

\~     { return token('~'); }
::     { return token(MOD_SEP); }
:      { return token(':'); }
\$     { return token('$'); }
\?     { return token('?'); }

==    { return token(EQEQ); }
=>    { return token(FAT_ARROW); }
=     { return token('='); }
\!=   { return token(NE); }
\!    { return token('!'); }
\<=   { return token(LE); }
\<\<  { return token(SHL); }
\<\<= { return token(SHLEQ); }
\<    { return token('<'); }
\>=   { return token(GE); }
\>\>  { return token(SHR); }
\>\>= { return token(SHREQ); }
\>    { return token('>'); }

\<-  { return token(LARROW); }
-\>  { return token(RARROW); }
-    { return token('-'); }
-=   { return token(MINUSEQ); }
&&   { return token(ANDAND); }
&    { return token('&'); }
&=   { return token(ANDEQ); }
\|\| { return token(OROR); }
\|   { return token('|'); }
\|=  { return token(OREQ); }
\+   { return token('+'); }
\+=  { return token(PLUSEQ); }
\*   { return token('*'); }
\*=  { return token(STAREQ); }
\/   { return token('/'); }
\/=  { return token(SLASHEQ); }
\^   { return token('^'); }
\^=  { return token(CARETEQ); }
%    { return token('%'); }
%=   { return token(PERCENTEQ); }

<<EOF>> { return 0; }

%%

int token(int i)
{
  struct token *t = malloc(sizeof(struct token));
  t->category = i;
  t->text = strdup(yytext);
  t->lineno = yylineno;

  return i;
}

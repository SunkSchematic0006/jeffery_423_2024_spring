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
#include "rustgram.tab.h"

static int num_hashes;
static int end_hashes;
static int saw_non_hash;

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
"\""([^\n"\\]|"\\"[\\nt"])*"\""            { return LIT_STR; }

_        { return UNDERSCORE; }
abstract { return ABSTRACT; }
alignof  { return ALIGNOF; }
as       { return AS; }
become   { return BECOME; }
box      { return BOX; }
break    { return BREAK; }
catch    { return CATCH; }
const    { return CONST; }
continue { return CONTINUE; }
crate    { return CRATE; }
default  { return DEFAULT; }
do       { return DO; }
else     { return ELSE; }
enum     { return ENUM; }
extern   { return EXTERN; }
false    { return FALSE; }
final    { return FINAL; }
fn       { return FN; }
for      { return FOR; }
if       { return IF; }
impl     { return IMPL; }
in       { return IN; }
let      { return LET; }
loop     { return LOOP; }
macro    { return MACRO; }
match    { return MATCH; }
mod      { return MOD; }
move     { return MOVE; }
mut      { return MUT; }
offsetof { return OFFSETOF; }
override { return OVERRIDE; }
priv     { return PRIV; }
proc     { return PROC; }
pure     { return PURE; }
pub      { return PUB; }
ref      { return REF; }
return   { return RETURN; }
self     { return SELF; }
sizeof   { return SIZEOF; }
static   { return STATIC; }
struct   { return STRUCT; }
super    { return SUPER; }
trait    { return TRAIT; }
true     { return TRUE; }
type     { return TYPE; }
typeof   { return TYPEOF; }
union    { return UNION; }
unsafe   { return UNSAFE; }
unsized  { return UNSIZED; }
use      { return USE; }
virtual  { return VIRTUAL; }
where    { return WHERE; }
while    { return WHILE; }
yield    { return YIELD; }

{ident}  { return IDENT; }

0x[0-9a-fA-F_]+                                    { BEGIN(suffix); return LIT_INTEGER; }
0o[0-7_]+                                          { BEGIN(suffix); return LIT_INTEGER; }
0b[01_]+                                           { BEGIN(suffix); return LIT_INTEGER; }
[0-9][0-9_]*                                       { BEGIN(suffix); return LIT_INTEGER; }
[0-9][0-9_]*\.(\.|[a-zA-Z])    { yyless(yyleng - 2); BEGIN(suffix); return LIT_INTEGER; }

[0-9][0-9_]*\.[0-9_]*([eE][-\+]?[0-9_]+)?          { BEGIN(suffix); return LIT_FLOAT; }
[0-9][0-9_]*(\.[0-9_]*)?[eE][-\+]?[0-9_]+          { BEGIN(suffix); return LIT_FLOAT; }

;      { return ';'; }
,      { return ','; }
\.\.\. { return DOTDOTDOT; }
\.\.   { return DOTDOT; }
\.     { return '.'; }
\(     { return '('; }
\)     { return ')'; }
\{     { return '{'; }
\}     { return '}'; }
\[     { return '['; }
\]     { return ']'; }
@      { return '@'; }

\~     { return '~'; }
::     { return MOD_SEP; }
:      { return ':'; }
\$     { return '$'; }
\?     { return '?'; }

==    { return EQEQ; }
=>    { return FAT_ARROW; }
=     { return '='; }
\!=   { return NE; }
\!    { return '!'; }
\<=   { return LE; }
\<\<  { return SHL; }
\<\<= { return SHLEQ; }
\<    { return '<'; }
\>=   { return GE; }
\>\>  { return SHR; }
\>\>= { return SHREQ; }
\>    { return '>'; }

\<-  { return LARROW; }
-\>  { return RARROW; }
-    { return '-'; }
-=   { return MINUSEQ; }
&&   { return ANDAND; }
&    { return '&'; }
&=   { return ANDEQ; }
\|\| { return OROR; }
\|   { return '|'; }
\|=  { return OREQ; }
\+   { return '+'; }
\+=  { return PLUSEQ; }
\*   { return '*'; }
\*=  { return STAREQ; }
\/   { return '/'; }
\/=  { return SLASHEQ; }
\^   { return '^'; }
\^=  { return CARETEQ; }
%    { return '%'; }
%=   { return PERCENTEQ; }

<<EOF>> { return 0; }

%%

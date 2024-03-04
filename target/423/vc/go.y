// Copyright 2009 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file
// (a copy is at www2.cs.uidaho.edu/~jeffery/courses/445/go/LICENSE).

/*
 * Go language grammar adapted from Go 1.2.2.
 *
 * The Go semicolon rules are:
 *
 *  1. all statements and declarations are terminated by semicolons.
 *  2. semicolons can be omitted before a closing ) or }.
 *  3. semicolons are inserted by the lexer before a newline
 *      following a specific list of tokens.
 *
 * Rules #1 and #2 are accomplished by writing the lists as
 * semicolon-separated lists with an optional trailing semicolon.
 * Rule #3 is implemented in yylex.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int yylex();
int yyerror();
#define YYDEBUG 1
#include "tree.h"
#define UNKNOWN -1000
%}

%union {
 struct tree *n;
}

%token <n>		LLITERAL
%token	<n>	LASOP LCOLAS
%token	<n>	LBREAK LCASE LCHAN LCONST LCONTINUE LDDD
%token	<n>	LDEFAULT LDEFER LELSE LFALL LFOR LFUNC LGO LGOTO
%token	<n>	LIF LIMPORT LINTERFACE LMAP LNAME
%token	<n>	LPACKAGE LRANGE LRETURN LSELECT LSTRUCT LSWITCH
%token	<n>	LTYPE LVAR

%token	<n>	LANDAND LANDNOT LCOMM LDEC LEQ LGE LGT
%token	<n>	LIGNORE LINC LLE LLSH LLT LNE LOROR LRSH
%token <n> '.' '(' '*' '{' '[' '@' '?' '^' '!' '-' '+' '&' ',' ';'

%type <n>	file package import imports import_stmt import_stmt_list
%type <n>	import_package import_safety
%type <n>		import_here
%type	<n>	sym packname
%type	<n>	oliteral

%type	<n>	stmt ntype
%type	<n>	arg_type
%type	<n>	case caseblock
%type	<n>	compound_stmt dotname embed expr complitexpr bare_complitexpr
%type	<n>	expr_or_type
%type	<n>	fndcl fnliteral fnlitdcl
%type	<n>	for_body for_header for_stmt if_header if_stmt non_dcl_stmt
%type	<n>	interfacedcl keyval labelname name
%type	<n>	name_or_type non_expr_type
%type	<n>	new_name dcl_name oexpr typedclname
%type	<n>	onew_name
%type	<n>	osimple_stmt pexpr pexpr_no_paren
%type	<n>	pseudocall range_stmt select_stmt
%type	<n>	simple_stmt
%type	<n>	switch_stmt uexpr
%type	<n>	xfndcl typedcl

%type	<n>	xdcl fnbody fnres loop_body dcl_name_list
%type	<n>	new_name_list expr_list keyval_list braced_keyval_list expr_or_type_list xdcl_list
%type	<n>	oexpr_list caseblock_list elseif elseif_list else stmt_list oarg_type_list_ocomma arg_type_list
%type	<n>	interfacedcl_list vardcl vardcl_list structdcl structdcl_list
%type	<n>	common_dcl constdcl constdcl1 constdcl_list typedcl_list

%type	<n>	convtype comptype dotdotdot
%type	<n>	indcl interfacetype structtype ptrtype
%type	<n>	recvchantype non_recvchantype othertype fnret_type fntype

%type	<n>	hidden_importsym lconst ocomma osemi


%left		LCOMM	/* outside the usual hierarchy; here for good error messages */

%left		LOROR
%left		LANDAND
%left		LEQ LNE LLE LGE LLT LGT
%left		'+' '-' '|' '^'
%left		'*' '/' '%' '&' LLSH LRSH LANDNOT

/*
 * manual override of shift/reduce conflicts.
 * the general form is that we assign a precedence
 * to the token being shifted and then introduce
 * NotToken with lower precedence or PreferToToken with higher
 * and annotate the reducing rule accordingly.
 */
%left		NotPackage
%left		LPACKAGE

%left		NotParen
%left		'('

%left		')'
%left		PreferToRightParen

%%
file:	package	imports	xdcl_list { $$ = tree(UNKNOWN, "?", 0); }
	;

package:
	%prec NotPackage 
	{
		yyerror("package statement must be first");
		exit(1);
	}
|	LPACKAGE sym ';' { $$ = tree(UNKNOWN, "?", 0); }
	;

imports: { $$ = NULL; }
|	imports import ';' { $$ = tree(UNKNOWN, "?", 0); }
	;

import:
	LIMPORT import_stmt { $$ = tree(UNKNOWN, "?", 0); }
|	LIMPORT '(' import_stmt_list osemi ')' { $$ = tree(UNKNOWN, "?", 0); }
|	LIMPORT '(' ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

import_stmt:
	import_here import_package { $$ = tree(UNKNOWN, "?", 0); }
|	import_here
	;

import_stmt_list:
	import_stmt
|	import_stmt_list ';' import_stmt { $$ = tree(UNKNOWN, "?", 0); }
	;

import_here:
	LLITERAL
|	sym LLITERAL { $$ = tree(UNKNOWN, "?", 0); }
|	'.' LLITERAL { $$ = tree(UNKNOWN, "?", 0); }
	;

import_package:
	LPACKAGE LNAME import_safety ';' { $$ = tree(UNKNOWN, "?", 0); }
	;

import_safety: { $$ = NULL; }
|	LNAME
	;

/*
 * declarations
 */
xdcl:
	{
		yyerror("empty top-level declaration");
		$$ = 0;
	}
|	common_dcl
|	xfndcl
|	non_dcl_stmt
	{
		yyerror("non-declaration statement outside function body");
		$$ = 0;
	}
|	error
	{
		$$ = 0;
	}
	;

common_dcl:
	LVAR vardcl { $$ = tree(UNKNOWN, "?", 0); }
|	LVAR '(' vardcl_list osemi ')' { $$ = tree(UNKNOWN, "?", 0); }
|	LVAR '(' ')' { $$ = tree(UNKNOWN, "?", 0); }
|	lconst constdcl { $$ = tree(UNKNOWN, "?", 0); }
|	lconst '(' constdcl osemi ')' { $$ = tree(UNKNOWN, "?", 0); }
|	lconst '(' constdcl ';' constdcl_list osemi ')' { $$ = tree(UNKNOWN, "?", 0); }
|	lconst '(' ')' { $$ = tree(UNKNOWN, "?", 0); }
|	LTYPE typedcl { $$ = tree(UNKNOWN, "?", 0); }
|	LTYPE '(' typedcl_list osemi ')' { $$ = tree(UNKNOWN, "?", 0); }
|	LTYPE '(' ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

lconst:
	LCONST
	;

vardcl:
	dcl_name_list ntype { $$ = tree(UNKNOWN, "?", 0); }
|	dcl_name_list ntype '=' expr_list { $$ = tree(UNKNOWN, "?", 0); }
|	dcl_name_list '=' expr_list { $$ = tree(UNKNOWN, "?", 0); }
	;

constdcl:
	dcl_name_list ntype '=' expr_list { $$ = tree(UNKNOWN, "?", 0); }
|	dcl_name_list '=' expr_list { $$ = tree(UNKNOWN, "?", 0); }
	;

constdcl1:
	constdcl
|	dcl_name_list ntype { $$ = tree(UNKNOWN, "?", 0); }
|	dcl_name_list
	;

typedclname:
	sym
	{
		// the name becomes visible right here, not at the end
		// of the declaration.
	}
	;

typedcl:
	typedclname ntype { $$ = tree(UNKNOWN, "?", 0); }
	;

simple_stmt:
	expr
|	expr LASOP expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr_list '=' expr_list { $$ = tree(UNKNOWN, "?", 0); }
|	expr_list LCOLAS expr_list { $$ = tree(UNKNOWN, "?", 0); }
|	expr LINC { $$ = tree(UNKNOWN, "?", 0); }
|	expr LDEC { $$ = tree(UNKNOWN, "?", 0); }
	;

case:
	LCASE expr_or_type_list ':' { $$ = tree(UNKNOWN, "?", 0); }
|	LCASE expr_or_type_list '=' expr ':' { $$ = tree(UNKNOWN, "?", 0); }
|	LCASE expr_or_type_list LCOLAS expr ':' { $$ = tree(UNKNOWN, "?", 0); }
|	LDEFAULT ':' { $$ = tree(UNKNOWN, "?", 0); }
	;

compound_stmt:
	'{' stmt_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

caseblock:
	case
	{
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		// yylast = yychar;
	}
	stmt_list
	{
//		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		// last = yyprev;

		// if(last > 0 && last != ';' && yychar != '}')
		//	yyerror("missing statement after label");

	$$ = tree(UNKNOWN, "?", 0);
	}

caseblock_list: { $$ = NULL; }
|	caseblock_list caseblock { $$ = tree(UNKNOWN, "?", 0); }
	;

loop_body:
	'{' stmt_list '}'  { $$ = tree(UNKNOWN, "?", 0); }
	;

range_stmt:
	expr_list '=' LRANGE expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr_list LCOLAS LRANGE expr { $$ = tree(UNKNOWN, "?", 0); }
	;

for_header:
	osimple_stmt ';' osimple_stmt ';' osimple_stmt { $$ = tree(UNKNOWN, "?", 0); }
|	osimple_stmt
|	range_stmt
	;

for_body:
	for_header loop_body { $$ = tree(UNKNOWN, "?", 0); }
	;

for_stmt:
	LFOR
	for_body { $$ = tree(UNKNOWN, "?", 0); }
	;

if_header:
	osimple_stmt
|	osimple_stmt ';' osimple_stmt { $$ = tree(UNKNOWN, "?", 0); }
	;

/* IF cond body (ELSE IF cond body)* (ELSE block)? */
if_stmt:
	LIF
	if_header
	loop_body
	elseif_list else { $$ = tree(UNKNOWN, "?", 0); }
	;

elseif:
	LELSE LIF 
	if_header loop_body { $$ = tree(UNKNOWN, "?", 0); }
	;

elseif_list: { $$ = NULL; }
|	elseif_list elseif { $$ = tree(UNKNOWN, "?", 0); }
	;

else: { $$ = NULL; }
|	LELSE compound_stmt { $$ = tree(UNKNOWN, "?", 0); }
	;

switch_stmt:
	LSWITCH
	if_header
	'{' caseblock_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

select_stmt:
	LSELECT
	'{' caseblock_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * expressions
 */
expr:
	uexpr
|	expr LOROR expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LANDAND expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LEQ expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LNE expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LLT expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LLE expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LGE expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LGT expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '+' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '-' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '|' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '^' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '*' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '/' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '%' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr '&' expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LANDNOT expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LLSH expr { $$ = tree(UNKNOWN, "?", 0); }
|	expr LRSH expr { $$ = tree(UNKNOWN, "?", 0); }
	/* not an expression anymore, but left in so we can give a good error */
|	expr LCOMM expr { $$ = tree(UNKNOWN, "?", 0); }
	;

uexpr:
	pexpr
|	'*' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	'&' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	'+' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	'-' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	'!' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	'~' uexpr
	{
		yyerror("the bitwise complement operator is ^");
	}
|	'^' uexpr { $$ = tree(UNKNOWN, "?", 0); }
|	LCOMM uexpr { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * call-like statements that
 * can be preceded by 'defer' and 'go'
 */
pseudocall:
	pexpr '(' ')' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '(' expr_or_type_list ocomma ')' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '(' expr_or_type_list LDDD ocomma ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
   The following were deleted in order to allow deletion of LBODY hack:
  |	'(' expr_or_type ')' '{' braced_keyval_list '}'
	{
		yyerror("cannot parenthesize type in composite literal");
	}
 */
pexpr_no_paren:
	LLITERAL
|	name
|	pexpr '.' sym { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '.' '(' expr_or_type ')' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '.' '(' LTYPE ')' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '[' expr ']' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '[' oexpr ':' oexpr ']' { $$ = tree(UNKNOWN, "?", 0); }
|	pexpr '[' oexpr ':' oexpr ':' oexpr ']' { $$ = tree(UNKNOWN, "?", 0); }
|	pseudocall
|	pexpr_no_paren '{' braced_keyval_list '}' { $$ = tree(UNKNOWN,"?",0); }
|	convtype '(' expr ocomma ')' { $$ = tree(UNKNOWN, "?", 0); }
|	comptype '{' braced_keyval_list '}' { $$ = tree(UNKNOWN, "?", 0); }
|	fnliteral

keyval:
	expr ':' complitexpr { $$ = tree(UNKNOWN, "?", 0); }
	;

bare_complitexpr:
	expr
|	'{' braced_keyval_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

complitexpr:
	expr
|	'{' braced_keyval_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

pexpr:
	pexpr_no_paren
|	'(' expr_or_type ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

expr_or_type:
	expr
|	non_expr_type	%prec PreferToRightParen
	;

name_or_type:
	ntype

/*
 * names and types
 *	newname is used before declared
 *	oldname is used after declared
 */
new_name:
	sym
	;

dcl_name:
	sym
	;

onew_name: { $$ = NULL; }
|	new_name
	;

sym:
	LNAME
|	hidden_importsym
|	'?'
	;

hidden_importsym:
	'@' LLITERAL '.' LNAME { $$ = tree(UNKNOWN, "?", 0); }
|	'@' LLITERAL '.' '?' { $$ = tree(UNKNOWN, "?", 0); }
	;

name:
	sym	%prec NotParen
	;

labelname:
	new_name
	;

/*
 * to avoid parsing conflicts, type is split into
 *	channel types
 *	function types
 *	parenthesized types
 *	any other type
 * the type system makes additional restrictions,
 * but those are not implemented in the grammar.
 */
dotdotdot:
	LDDD
	{
		yyerror("final argument in variadic function missing type");
	}
|	LDDD ntype { $$ = tree(UNKNOWN, "?", 0); }
	;

ntype:
	recvchantype
|	fntype
|	othertype
|	ptrtype
|	dotname
|	'(' ntype ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

non_expr_type:
	recvchantype
|	fntype
|	othertype
|	'*' non_expr_type { $$ = tree(UNKNOWN, "?", 0); }
	;

non_recvchantype:
	fntype
|	othertype
|	ptrtype
|	dotname
|	'(' ntype ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

convtype:
	fntype
|	othertype

comptype:
	othertype
	;

fnret_type:
	recvchantype
|	fntype
|	othertype
|	ptrtype
|	dotname
	;

dotname:
	name
|	name '.' sym { $$ = tree(UNKNOWN, "?", 0); }
	;

othertype:
	'[' oexpr ']' ntype { $$ = tree(UNKNOWN, "?", 0); }
|	'[' LDDD ']' ntype { $$ = tree(UNKNOWN, "?", 0); }
|	LCHAN non_recvchantype { $$ = tree(UNKNOWN, "?", 0); }
|	LCHAN LCOMM ntype { $$ = tree(UNKNOWN, "?", 0); }
|	LMAP '[' ntype ']' ntype { $$ = tree(UNKNOWN, "?", 0); }
|	structtype
|	interfacetype
	;

ptrtype:
	'*' ntype { $$ = tree(UNKNOWN, "?", 0); }
	;

recvchantype:
	LCOMM LCHAN ntype { $$ = tree(UNKNOWN, "?", 0); }
	;

structtype:
	LSTRUCT '{' structdcl_list osemi '}' { $$ = tree(UNKNOWN, "?", 0); }
|	LSTRUCT '{' '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

interfacetype:
	LINTERFACE '{' interfacedcl_list osemi '}' { $$ = tree(UNKNOWN, "?", 0); }
|	LINTERFACE '{' '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * function stuff
 * all in one place to show how crappy it all is
 */
xfndcl:
	LFUNC fndcl fnbody { $$ = tree(UNKNOWN, "?", 0); }
	;

fndcl:
	sym '(' oarg_type_list_ocomma ')' fnres { $$ = tree(UNKNOWN, "?", 0); }
|	'(' oarg_type_list_ocomma ')' sym '(' oarg_type_list_ocomma ')' fnres { $$ = tree(UNKNOWN, "?", 0); }
	;

fntype:
	LFUNC '(' oarg_type_list_ocomma ')' fnres { $$ = tree(UNKNOWN, "?", 0); }
	;

fnbody: { $$ = NULL; }
|	'{' stmt_list '}' { $$ = tree(UNKNOWN, "?", 0); }
	;

fnres: { $$ = NULL; }
	%prec NotParen
|	fnret_type
|	'(' oarg_type_list_ocomma ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

fnlitdcl:
	fntype
	;

fnliteral:
	fnlitdcl '{' stmt_list '}' { $$ = tree(UNKNOWN, "?", 0); }
|	fnlitdcl error
	;

/*
 * lists of things
 * note that they are left recursive to conserve yacc stack. they need to
 * be reversed to interpret correctly
 */
xdcl_list: { $$ = NULL; }
|	xdcl_list xdcl ';' { $$ = tree(UNKNOWN, "?", 0); }
	;

vardcl_list:
	vardcl
|	vardcl_list ';' vardcl { $$ = tree(UNKNOWN, "?", 0); }
	;

constdcl_list:
	constdcl1
|	constdcl_list ';' constdcl1 { $$ = tree(UNKNOWN, "?", 0); }
	;

typedcl_list:
	typedcl
|	typedcl_list ';' typedcl { $$ = tree(UNKNOWN, "?", 0); }
	;

structdcl_list:
	structdcl
|	structdcl_list ';' structdcl { $$ = tree(UNKNOWN, "?", 0); }
	;

interfacedcl_list:
	interfacedcl
|	interfacedcl_list ';' interfacedcl { $$ = tree(UNKNOWN, "?", 0); }
	;

structdcl:
	new_name_list ntype oliteral { $$ = tree(UNKNOWN, "?", 0); }
|	embed oliteral { $$ = tree(UNKNOWN, "?", 0); }
|	'(' embed ')' oliteral { $$ = tree(UNKNOWN, "?", 0); }
|	'*' embed oliteral { $$ = tree(UNKNOWN, "?", 0); }
|	'(' '*' embed ')' oliteral { $$ = tree(UNKNOWN, "?", 0); }
|	'*' '(' embed ')' oliteral { $$ = tree(UNKNOWN, "?", 0); }
	;

packname:
	LNAME
|	LNAME '.' sym { $$ = tree(UNKNOWN, "?", 0); }
	;

embed:
	packname
	;

interfacedcl:
	new_name indcl { $$ = tree(UNKNOWN, "?", 0); }
|	packname
|	'(' packname ')' { $$ = tree(UNKNOWN, "?", 0); }
	;

indcl:
	'(' oarg_type_list_ocomma ')' fnres { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * function arguments.
 */
arg_type:
	name_or_type
|	sym name_or_type { $$ = tree(UNKNOWN, "?", 0); }
|	sym dotdotdot { $$ = tree(UNKNOWN, "?", 0); }
|	dotdotdot
	;

arg_type_list:
	arg_type
|	arg_type_list ',' arg_type { $$ = tree(UNKNOWN, "?", 0); }
	;

oarg_type_list_ocomma: { $$ = NULL; }
|	arg_type_list ocomma { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * statement
 */
stmt: { $$ = NULL; }
|	compound_stmt
|	common_dcl
|	non_dcl_stmt
|	error { $$ = NULL; }
	;

non_dcl_stmt:
	simple_stmt
|	for_stmt
|	switch_stmt
|	select_stmt
|	if_stmt
|	labelname ':' stmt { $$ = tree(UNKNOWN, "?", 0); }
|	LFALL
|	LBREAK onew_name { $$ = tree(UNKNOWN, "?", 0); }
|	LCONTINUE onew_name { $$ = tree(UNKNOWN, "?", 0); }
|	LGO pseudocall { $$ = tree(UNKNOWN, "?", 0); }
|	LDEFER pseudocall { $$ = tree(UNKNOWN, "?", 0); }
|	LGOTO new_name { $$ = tree(UNKNOWN, "?", 0); }
|	LRETURN oexpr_list { $$ = tree(UNKNOWN, "?", 0); }
	;

stmt_list:
	stmt
|	stmt_list ';' stmt { $$ = tree(UNKNOWN, "?", 0); }
	;

new_name_list:
	new_name
|	new_name_list ',' new_name { $$ = tree(UNKNOWN, "?", 0); }
	;

dcl_name_list:
	dcl_name
|	dcl_name_list ',' dcl_name { $$ = tree(UNKNOWN, "?", 0); }
	;

expr_list:
	expr
|	expr_list ',' expr { $$ = tree(UNKNOWN, "?", 0); }
	;

expr_or_type_list:
	expr_or_type
|	expr_or_type_list ',' expr_or_type { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * list of combo of keyval and val
 */
keyval_list:
	keyval
|	bare_complitexpr
|	keyval_list ',' keyval { $$ = tree(UNKNOWN, "?", 0); }
|	keyval_list ',' bare_complitexpr { $$ = tree(UNKNOWN, "?", 0); }
	;

braced_keyval_list: { $$ = NULL; }
|	keyval_list ocomma { $$ = tree(UNKNOWN, "?", 0); }
	;

/*
 * optional things
 */
osemi: { $$ = NULL; }
|	';'
	;

ocomma: { $$ = NULL; }
|	','
	;

oexpr: { $$ = NULL; }
|	expr
	;

oexpr_list: { $$ = NULL; }
|	expr_list
	;

osimple_stmt: { $$ = NULL; }
|	simple_stmt
	;

oliteral: { $$ = NULL; }
|	LLITERAL
	;

%%

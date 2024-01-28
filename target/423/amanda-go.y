// Amanda Ward
// CS445 - Fall 2019 VGO language
//
//
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
/*#include "token.h"*/
struct Token {
 int cat;
 };

struct Tree {
 int prodrule;
 }
int yylex();
int yyerror();
#define YYDEBUG 1

void NotLegal();
//void humanreadable(t);
Tree makeTree1(char* nodeid, int kids, Tree *one);
Tree makeTree2(char* nodeid, int kids, Tree *one, Tree *two);
Tree makeTree3(char* nodeid, int kids, Tree *one, Tree *two, Tree *three);
Tree makeTree4(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four);
Tree makeTree5(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five);
Tree makeTree6(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six);
Tree makeTree7(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six, Tree *seven);
Tree makeTree8(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six, Tree *seven, Tree *eight);
%}


%union {
 struct Token *token;
 struct Tree *tree;
}


%token 		<token>LLITERAL
%token		<token>LASOP LCOLAS
%token		<token>LBREAK LCASE LCHAN LCONST LCONTINUE LDDD
%token		<token>LDEFAULT LDEFER LELSE LFALL LFOR LFUNC LGO LGOTO
%token		<token>LIF LIMPORT LINTERFACE LMAP LNAME
%token		<token>LPACKAGE LRANGE LRETURN LSELECT LSTRUCT LSWITCH
%token		<token>LTYPE LVAR

%token		<token>LANDAND LANDNOT LCOMM LDEC LEQ LGE LGT
%token		<token>LIGNORE LINC LLE LLSH LLT LNE LOROR LRSH




%type 		<tree>lbrace import_here
%type		<tree>sym packname
%type		<tree>oliteral

%type		<tree>stmt ntype
%type		<tree>arg_type
%type		<tree>case caseblock
%type		<tree>compound_stmt dotname embed expr complitexpr bare_complitexpr
%type		<tree>expr_or_type
%type		<tree>fndcl fnliteral
%type		<tree>for_body for_header for_stmt if_header if_stmt non_dcl_stmt
%type		<tree>interfacedcl keyval labelname name
%type		<tree>name_or_type non_expr_type
%type		<tree>new_name dcl_name oexpr typedclname
%type		<tree>onew_name
%type		<tree>osimple_stmt pexpr pexpr_no_paren
%type		<tree>pseudocall range_stmt select_stmt
%type		<tree>simple_stmt
%type		<tree>switch_stmt uexpr
%type		<tree>xfndcl typedcl start_complit

%type		<tree>xdcl fnbody fnres loop_body dcl_name_list
%type		<tree>new_name_list expr_list keyval_list braced_keyval_list expr_or_type_list xdcl_list
%type		<tree>oexpr_list caseblock_list elseif elseif_list else stmt_list oarg_type_list_ocomma arg_type_list
%type		<tree>interfacedcl_list vardcl vardcl_list structdcl structdcl_list
%type		<tree>common_dcl constdcl constdcl1 constdcl_list typedcl_list

%type		<tree>convtype comptype dotdotdot
%type		<tree>indcl interfacetype structtype ptrtype
%type		<tree>recvchantype non_recvchantype othertype fnret_type fntype

%type		<tree>hidden_importsym

//I added some...
%type		<tree>ocomma 


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

%start		file

%%
file:	package	imports	xdcl_list 				{$$=makeTree3("file",3,$1,$2,$3);}// this is my root node. Something extra should happen here
	;
package:
	%prec NotPackage 
	{
		yyerror("package statement must be first");
		exit(1);
	}
|	LPACKAGE sym ';'					{$$=makeTree2("package", 2, makeLeaf($1), $2);}	
				
	;							
																					

imports:							{$$=NULL;}
|	imports import ';'			 		{$$=makeTree2("imports",2,$1,$2);}					
	;							

import:
	LIMPORT import_stmt					{$$=makeTree2("import",2,makeLeaf($1),$2);}
|	LIMPORT '(' import_stmt_list osemi ')'			{NotLegal();}
|	LIMPORT '(' ')'						{NotLegal();}
	;

import_stmt:
	import_here import_package				{$$=makeTree2("import_stmt",2,$1,$2);}	
|	import_here						{$$=makeTree1("import_stmt2",1,$1);}
	;

import_stmt_list:
	import_stmt						{$$=makeTree1("import_stmt_list",1,$1);}	
|	import_stmt_list ';' import_stmt			{NotLegal();}	
	;

import_here:
	LLITERAL						{$$=makeTree1(makeLeaf($1));}
|	sym LLITERAL						{NotLegal();}	
|	'.' LLITERAL						{NotLegal();}	
	;

import_package:
	LPACKAGE LNAME import_safety ';'			{NotLegal();}
	;

import_safety:							{$$=NULL;}
|	LNAME							{$$=makeTree1(makeLeaf($1));}			
	;

/*
 * declarations
 */
xdcl:
	{
		yyerror("empty top-level declaration");
		$$ = 0;
	}
|	common_dcl						{$$=makeTree1("xdcl_common_dcl",1,$1);}
|	xfndcl							{$$=makeTree1("xdcl_xfndcl",1,$1);}
|	non_dcl_stmt						{$$=makeTree1("xdcl_non_dcl_stmt",1,$1);}
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
	LVAR vardcl						{$$=makeTree2("common_single_var",2,makeLeaf($1),$2);}
|	LVAR '(' vardcl_list osemi ')'				{NotLegal();}
|	LVAR '(' ')'						{NotLegal();}
|	lconst constdcl						{$$=makeTree2("common_single_const",2,$1,$2);}
|	lconst '(' constdcl osemi ')'				{$$=makeTree5("common_single_const2",5,$1,makeLeaf($2),$3,$5,makeLeaf($6));}
|	lconst '(' constdcl ';' constdcl_list osemi ')'		{NotLegal();}
|	lconst '(' ')'						{NotLegal();}
|	LTYPE typedcl						{$$=makeTree2("common_typrdcl",2,makeLeaf($1),$2);}
|	LTYPE '(' typedcl_list osemi ')'			{NotLegal();}
|	LTYPE '(' ')'						{NotLegal();}
	;

lconst:
	LCONST							{$$=makeTree1(makeLeaf($1));}
	;

vardcl:
	dcl_name_list ntype 					{$$=makeTree2("vardcl",2,$1,$2);}
						
|	dcl_name_list ntype '=' expr_list			{NotLegal();}
|	dcl_name_list '=' expr_list				{$$=makeTree3("vardcl_set_equal_to",3,$1,makeLeaf($2),$3);}
	;

constdcl:
	dcl_name_list ntype '=' expr_list			{NotLegal();}
|	dcl_name_list '=' expr_list				{$$=makeTree3("constdcl_set_equal_to",3,$1,makeLeaf($2),$3);}
	;

constdcl1:
	constdcl						{$$=makeTree1("constdcl1",1,$1);}
|	dcl_name_list ntype					{$$=makeTree2("constdcl1_2",2,$1,$2);}
|	dcl_name_list						{$$=makeTree1("constdcl1_2",1,$1);}
	;

typedclname:
	sym							{$$=makeTree1("typedclname",1,$1);}
	{
		// the name becomes visible right here, not at the end
		// of the declaration.
	}
	;

typedcl://i feel like something is missing
	typedclname
 ntype					{$$=makeTree2("typedcl",2,$1,$2);}
	;


simple_stmt:
	expr					      		{$$=makeTree2("simple_stmt_expr",2,$1,$2);}					
|	expr LASOP expr						{NotLegal();}
|	expr_list '=' expr_list					{NotLegal();}
|	expr_list LCOLAS expr_list				{NotLegal();}	
|	expr LINC						{$$=makeTree2("simple_stmt_exprinc",2,$1,makeLeaf($2));}
|	expr LDEC						{$$=makeTree2("simple_stmt_expdec",2,$1,makeLeaf($2));}
	;

case:
	LCASE expr_or_type_list ':'				{NotLegal();}
|	LCASE expr_or_type_list '=' expr ':'			{NotLegal();}
|	LCASE expr_or_type_list LCOLAS expr ':'			{NotLegal();}
|	LDEFAULT ':'						{NotLegal();}
	;

compound_stmt:
	'{'
	stmt_list '}'						{$$=makeTree3("compound_stmt",3,makeLeaf($1),$2,makeLeaf($3));}
	;

caseblock:
	case							{NotLegal();}
	{
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		// yylast = yychar;
	}
	//stmt_list I (amanda) commented this thing out. 
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
	}

caseblock_list:							{NotLegal();}
|	caseblock_list caseblock				{NotLegal();}
	;

loop_body:
	'{'
	stmt_list '}'						{$$=makeTree3("loop_body",3,makeLeaf($1),$2,leafLeaf($3));}
	;

range_stmt:
	expr_list '=' LRANGE expr				{NotLegal();}
|	expr_list LCOLAS LRANGE expr				{NotLegal();}
	;

for_header:
	osimple_stmt ';' osimple_stmt ';' osimple_stmt		{$$=makeTree3("for_header_simple_multi",3,$1,$3,$5);}
|	osimple_stmt						{$$=makeTree1("for_header_simple_single",1,$1);}
|	range_stmt						{$$=makeTree1("for_header_range",1,$1);}
	;

for_body:
	for_header loop_body					{$$=makeTree2("for_body",2,$1,$2);}
	;

for_stmt:
	LFOR
	for_body						{$$=makeTree2("for_stmt",2,makeLeaf($1),$2);}
	;

if_header:
	osimple_stmt						{$$=makeTree1("if_header_single",1,$1);}
|	osimple_stmt ';' osimple_stmt				{$$=makeTree2("if_header_multi",2,$1,$3);}
	;

/* IF cond body (ELSE IF cond body)* (ELSE block)? */
if_stmt:
	LIF
	if_header
	loop_body
	elseif_list else					{$$=makeTree5("if_stmt",5,makeLeaf($1),$2,$3,$4,$5);}
	;

elseif:
	LELSE LIF 
	if_header loop_body					{$$=makeTree4("elseif",4,makeLeaf($1),makeLeaf($2),$3,$4);}
	;

elseif_list:							{$$=NULL;}
|	elseif_list elseif					{$$=(makeTree2("elseif_list",2,$1,$2);}
	;

else:								{$$=NULL;}
|	LELSE compound_stmt					{$$=makeTree2("else",2,makeLeaf($1),$2);}
	;

switch_stmt:
	LSWITCH
	if_header
	'{' caseblock_list '}'					{$$=makeTree5("switch_stmt",5,makeLeaf($1),$2,makeLeaf($3),$4,makeLeaf($5));}
	;

select_stmt:
	LSELECT
	'{' caseblock_list '}'					{$$=makeTree4("select_stmt",4,makeLeaf($1),makeLeaf($2),$3,makeLeaf($4));}
	;

/*
 * expressions
 */
expr:
	uexpr							{$$=$1;}
|	expr LOROR expr						{$$=makeTree3("or_expr",3,$1,makeLeaf($2),$3);}
|	expr LANDAND expr					{$$=makeTree3("andand_expr",3,$1,makeLeaf($2),$3);}
|	expr LEQ expr						{$$=makeTree3("compare_eq_expr",3,$1,makeLeaf($2),$3);}
|	expr LNE expr						{$$=makeTree3("noteq_expr",3,$1,makeLeaf($2),$3);}
|	expr LLT expr						{$$=makeTree3("less_expr",3,$1,makeLeaf($2),$3);}
|	expr LLE expr						{$$=makeTree3("lessequal_expr",3,$1,makeLeaf($2),$3);}
|	expr LGE expr						{$$=makeTree3("greatequal_expr",3,$1,makeLeaf($2),$3);}
|	expr LGT expr						{$$=makeTree3("great_expr",3,$1,makeLeaf($2),$3);}
|	expr '+' expr						{$$=makeTree3("exprplusexpr",3,$1,makeLeaf($2),$3);}
|	expr '-' expr						{$$=makeTree3("exprminusexpr",3,$1,makeLeaf($2),$3);}
|	expr '|' expr						{NotLegal();}
|	expr '^' expr						{$$=makeTree3("caret_expr",3,$1,makeLeaf($2),$3);}
|	expr '*' expr						{$$=makeTree3("asterisk_expr",3,$1,makeLeaf($2),$3);}
|	expr '/' expr						{$$=makeTree3("div_expr",3,$1,makeLeaf($2),$3);}
|	expr '%' expr						{$$=makeTree3("mod_expr",3,$1,makeLeaf($2),$3);}
|	expr '&' expr						{NotLegal();}
|	expr LANDNOT expr					{$$=makeTree3("andnot_expr",3,$1,makeLeaf($2),$3);}
|	expr LLSH expr						{NotLegal();}
|	expr LRSH expr						{NotLegal();}
	/* not an expression anymore, but left in so we can give a good error */
|	expr LCOMM expr						{NotLegal();}
	;

uexpr:
	pexpr							{$$=$1;}
|	'*' uexpr						{$$=makeTree2("asterisk_uexpr",2,makeLeaf($1),$2);}
|	'&' uexpr						{NotLegal();}
|	'+' uexpr						{$$=makeTree2("plus_uexpr",2,makeLeaf($1),$2);}
|	'-' uexpr						{$$=makeTree2("minus_uexpr",2,makeLeaf($1),$2);}
|	'!' uexpr						{$$=makeTree2("exclamation_uexpr",2,makeLeaf($1),$2);}
|	'~' uexpr						{$$=makeTree2("tilde_uexpr",2,makeLeaf($1),$2);}
	
		//yyerror("the bitwise complement operator is ^");
	
|	'^' uexpr						{$$=makeTree2("caret_uexpr",2,makeLeaf($1),$2);}
|	LCOMM uexpr						{NotLegal();}
	;

/*
 * call-like statements that
 * can be preceded by 'defer' and 'go'
 */
pseudocall:
	pexpr '(' ')'						{$$=makeTree3("pseudocall_empty",3,makeLeaf($1),$2,makeLeaf($3));}
						
|	pexpr '(' expr_or_type_list ocomma ')'			{$$=makeTree5("pseudocall",5,$1,makeLeaf($2),$3,$4,makeLeaf($5));}
|	pexpr '(' expr_or_type_list LDDD ocomma ')'		{NotLegal();}
	;

/*
   The following were deleted in order to allow deletion of LBODY hack:
  |	pexpr_no_paren '{' start_complit braced_keyval_list '}'
  |	'(' expr_or_type ')' '{' start_complit braced_keyval_list '}'
	{
		yyerror("cannot parenthesize type in composite literal");
	}
 */
pexpr_no_paren:
	LLITERAL						{$$=$1;}
|	name							{$$=$1;}
|	pexpr '.' sym						{$$=makeTree("pexpr_no_paren3",3,$1,makeLeaf($2),$3);}
|	pexpr '.' '(' expr_or_type ')'				{$$=makeTree5("pexpr_no_paren4",5,$1,makeLeaf($2),makeLeaf($3),$4,makeLeaf($5));}
|	pexpr '.' '(' LTYPE ')'					{$$=makeTree2("pexpr_no_paren5",2,$1,makeLeaf($2),makeLeaf($3),$4,makeLeaf($5));}
|	pexpr '[' expr ']'					{$$=makeTree4("pexpr_no_paren6",4,$1,makeLeaf($2),$3,makeLeaf($4));}
|	pexpr '[' oexpr ':' oexpr ']'				{$$=makeTree6("pexpr_no_paren7",6,$1,makeLeaf($2),$3,makeLeaf($4),$5,makeLeaf($6));}
|	pexpr '[' oexpr ':' oexpr ':' oexpr ']'			{$$=makeTree8("pexpr_no_paren8",8,$1,makeLeaf($2),$3,makeLeaf($4),$5,makeLeaf($6),$7,makeLeaf($8));}
|	pseudocall						{$$=$1;}
|	convtype '(' expr ocomma ')'				{$$=makeTree4("pexpr_no_paren10",4,$1,makeLeaf($2),$3,makeLeaf($4));}	
|	comptype lbrace start_complit braced_keyval_list '}'	{$$=makeTree5("pexpr_no_paren11",5,$1,makeLeaf($2),$3,$4,makeLeaf($5));}
	
	;

keyval:
	expr ':' complitexpr					{NotLegal();}
	;

bare_complitexpr:
	expr							{$$=$1;}
|	'{' start_complit braced_keyval_list '}'		{$$=makeTree4("bare_complitexpr2",4,makeLeaf($1),$2,$3,makeLeaf($4));}
	;

complitexpr:
	expr							{$$=$1;}
|	'{' start_complit braced_keyval_list '}'		{$$=makeTree4("complitexpr2",4,makeLeaf($1),$2,$3,makeLeaf($4));}
	;

pexpr:
	pexpr_no_paren						{$$=$1;}
|	'(' expr_or_type ')'					{$$=makeTree3("pexpr2",3,makeLeaf($1),$2,makeLeaf($3));}
	;

expr_or_type:
	expr							{$$=$1;}
|	non_expr_type	%prec PreferToRightParen
	;

name_or_type:
	ntype							{$$=$1;}
	;
lbrace:
	'{' 							{$$=$1;}
	;

/*
 * names and types
 *	newname is used before declared
 *	oldname is used after declared
 */
new_name:
	sym							{$$=$1;}
	;

dcl_name:
	sym							{$$=$1;}
	;

onew_name:
|	new_name						{$$=$1;}
	;

sym:
	LNAME							{$$=makeTree1("lname_sym",1,makeLeaf($1));}
|	hidden_importsym					{NotLegal();}
|	'?'							{NotLegal();}
	;

hidden_importsym:
	'@' LLITERAL '.' LNAME					{NotLegal();}
|	'@' LLITERAL '.' '?'					{NotLegal();}
	;

name:
	sym	%prec NotParen
	;

labelname:
	new_name						{$$=$1;}
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
	LDDD							{NotLegal();}
	{
		yyerror("final argument in variadic function missing type");
	}
|	LDDD ntype						{NotLegal();}
	;

ntype:
	recvchantype						{$$=makeTree1("recvchantype_ntype",1,$1);}
|	fntype							{$$=makeTree1("fntype_ntype",1,$1);}
|	othertype						{$$=makeTree1("othertpe_ntype",1,$1);}
|	ptrtype							{$$=makeTree1("ptrtype_ntype",1,$1);}
|	dotname							{$$=makeTree1("dotname_ntype",1,$1);}
|	'(' ntype ')'						{$$=makeTree3("paren_ntype",3,makeLeaf($1),$2,makeLeaf($3));}
	;

non_expr_type:
	recvchantype						{$$=makeTree1("recvchantype_non_expr_type",1,$1);}
|	fntype							{$$=makeTree1("fntype_non_expr_type",1,$1);}
|	othertype						{$$=makeTree1("othertype_non_expr_type",1,$1);}
|	'*' non_expr_type					{$$=makeTree2("ptr_non_expr_type",2,makeLeaf($1),$2);}
	;

non_recvchantype:
	fntype							{$$=makeTree1("fntype_non_recvchantype",1,$1);}
|	othertype						{$$=makeTree1("othertype_non_recvchantype",1,$1);}
|	ptrtype							{$$=makeTree1("ptrtype_non_recvchantype",1,$1);}
|	dotname							{$$=makeTree1("dotname_non_recvchantype",1,$1);}
|	'(' ntype ')'						{$$=makeTree3("paren_ntype_non_recvchantype",3,makeLeaf($1),$2,makeLeaf($3));}
	;

convtype:
	fntype							{$$=makeTree1("fntype_convtype",1,$1);}
|	othertype						{$$=makeTree1("othertype_convtype",1,$1);}
	;
comptype:
	othertype						{$$=$1;}
	;

fnret_type:
	recvchantype						{$$=$1;}
|	fntype							{$$=$1;}
|	othertype						{$$=$1;}
|	ptrtype							{$$=$1;}
|	dotname							{$$=$1;}
	;

dotname:
	name							{$$=$1;}
|	name '.' sym						{$$=makeTree3("dotname2",3,$1,makeLeaf($2),$3);}
	;

othertype:
	'[' oexpr ']' ntype					{$$=makeTree4("othertype1",4,makeLeaf($1),$2,makeLeaf($3),$4);}
|	'[' LDDD ']' ntype					{$$=makeTree4("othertype2",4,makeLeaf($1),$2,makeLeaf($3),$4);}
|	LCHAN non_recvchantype					{$$=makeTree2("othertype3",2,$1,$2);}
|	LCHAN LCOMM ntype					{NotLegal();}
|	LMAP '[' ntype ']' ntype				{$$=makeTree5("othertype4",5,$1,makeLeaf($2),$3,makeLeaf($4),$5);}				
|	structtype						{$$=$1;}
|	interfacetype						{$$=$1;}
	;

ptrtype:
	'*' ntype						{$$=makeTree2("ptrtype",2,makeLeaf($1),$2);}
	;

recvchantype:
	LCOMM LCHAN ntype					{NotLegal();}
	;

structtype:
	LSTRUCT lbrace structdcl_list osemi '}'			{$$=makeTree3("structtype1",3,makeLeaf($1),makeLeaf($2),$3,$4,makeLeaf($5));}
|	LSTRUCT lbrace '}'					{$$=makeTree2("structtype2",2,makeLeaf($1),makeLeaf($2),makeLeaf($3));}
	;

interfacetype:
	LINTERFACE lbrace interfacedcl_list osemi '}'		{$$=makeTree5("interfacetype1",5,makeLeaf($1),makeLeaf($2),$3,$4,makeLeaf($5));}
|	LINTERFACE lbrace '}'					{$$=makeTree3("interfacetype2",3,makeLeaf($1),makeLeaf($2),makeLeaf($3));}
	;

/*
 * function stuff
 * all in one place to show how crappy it all is
 */
xfndcl:
	LFUNC fndcl fnbody					{$$=makeTree3("xfndcl",3,makeLeaf($1),$2,$3);}					
	;

fndcl:
	sym '(' oarg_type_list_ocomma ')' fnres			{$$=makeTree3("fndcl1",3,$1,makeLeaf($2),$3,makeLeaf($4),$5);}
|	'(' oarg_type_list_ocomma ')' sym '(' oarg_type_list_ocomma ')' fnres {$$=makeTree8("fndcl2",8,makeLeaf($1),$2,makeLeaf($3),$4,makeLeaf($5),$6,makeLeaf($7),$8);}
	;

fntype:
	LFUNC '(' oarg_type_list_ocomma ')' fnres				{$$=makeTree5("fntype",5,makeLeaf($1),makeLeaf($2),$3,makeLeaf($4),$5);}
	;

fnbody:
|	'{' stmt_list '}'							{$$=makeTree3("fnbody",3,makeLeaf($1),$2,makeLeaf($3));}
	;

fnres:
	%prec NotParen
|	fnret_type								{$$=$1;}								
|	'(' oarg_type_list_ocomma ')'						{$$=makeTtree3("fnres",3,makeLeaf($1),$2,makeLeaf($3));}
	;

fnlitdcl:
	fntype									{$$=$1;}
	;

fnliteral:
	fnlitdcl lbrace stmt_list '}'						{$$=makeTree("fnliteral1",4,$1,makeLeaf($2),$3,makeLeaf($4));}
|	fnlitdcl error								{$$=tree2("fnliteral2",2,$1,$2);}
	;

/*
 * lists of things
 * note that they are left recursive to conserve yacc stack. they need to
 * be reversed to interpret correctly
 */
xdcl_list:									{$$=NULL;}
|	xdcl_list xdcl ';'							{$$=tree2("xdcl_list",2,$1,$2);}
	;

vardcl_list:
	vardcl									{$$=$1;}
|	vardcl_list ';' vardcl							{NotLegal();}						
	;

constdcl_list:
	constdcl1								{$$=$1;}
|	constdcl_list ';' constdcl1						{$$=makeTree2("cocnstdcl_list2",2,$1,$3);}
	;

typedcl_list:
	typedcl									{$$=$1;}
|	typedcl_list ';' typedcl						{$$=makeTree2("typedecl_list2",2,$1,$3);}
	;

structdcl_list:
	structdcl								{$$=$1;}
|	structdcl_list ';' structdcl						{$$=makeTree2("structdcl_list2",2,$1,$3);}
	;

interfacedcl_list:
	interfacedcl								{$$=$1;}
|	interfacedcl_list ';' interfacedcl					{$$=makeTree2("interfacedcl_list2",2,$1,$3);}
	;

structdcl:
	new_name_list ntype oliteral						{$$=makeTree3("structdcl1",3,$1,$2,$3);}
|	embed oliteral								{$$=makeTree2("structdcl2",2,$1,$2);}
|	'(' embed ')' oliteral							{$$=makeTree4("structdcl3",4,makeLeaf($1),$2,makeLeaf($3),$4);}
|	'*' embed oliteral							{$$=makeTree3("structdcl4",3,makeLeaf($1),$2,$3);}
|	'(' '*' embed ')' oliteral						{$$=makeTree5("structdcl5",5,makeLeaf($1),makeLeaf($2),$3,makeLeaf($4),$5);}
|	'*' '(' embed ')' oliteral						{$$=makeTree5("structdcl6",5,makeLeaf($1),makeLeaf($2),$3,makeLeaf($4),$5);}
	;

packname:
	LNAME									{$$=$1;}
|	LNAME '.' sym								{$$=makeTree3("packname2",3,$1,makeLeaf($2),$3);}
	;

embed:
	packname								{$$=$1;}								
	;

interfacedcl:
	new_name indcl								{$$=makeTree2("interfacedcl1",2,$1,$2);}
|	packname								{$$=$1;}
|	'(' packname ')'							{$$=makeTree3("interfacedcl3",3,makeLeaf($1),$2,makeLeaf($3);}
	;

indcl:
	'(' oarg_type_list_ocomma ')' fnres					{$$=makeTree4("indcl",4,makeLeaf($1),$2,makeLeaf($3),$4);}
	;

/*
 * function arguments.
 */
arg_type:
	name_or_type								{$$=$1;}
|	sym name_or_type							{$$=makeTree2("arg_type:name_or_type",2,$1,$2);}
|	sym dotdotdot								{$$=makeTree2("arg_type:sym_dotdotdot",2,$1,$2);}
							
|	dotdotdot								{$$=$1;}
	;

arg_type_list:
	arg_type								{$$=$1;}
|	arg_type_list ',' arg_type						{$$=makeTree3("arg_type_list2",3,$1,makeLeaf($2),$3);}				
	;

oarg_type_list_ocomma:
|	arg_type_list ocomma							{$$=makeTree2("oarg_type_list_ocomma",2,$1,$2);}
	;

/*
 * statement
 */
stmt:										{$$=NULL;}
|	compound_stmt								{$$=makeTree1("compound_stmt_stmt"),1,$1);}
|	common_dcl								{$$=makeTree1("common_dcl_stmt",1,$1);}
|	non_dcl_stmt								{$$=makeTree3("non_dcl_stmt_stmt",3,$1,$2,$3);}
|	error									{$$=makeTree1("error_stmt",1,$1);}
	;

non_dcl_stmt:
	simple_stmt								{$$=$1;}
|	for_stmt								{$$=$1;}
|	switch_stmt								{NotLegal();}
|	select_stmt								{$$=$1;}
|	if_stmt									{$$=$1;}
|	labelname ':'								{$$=makeTree2("non_dcl_stmt:labelname",2,$1,makeLeaf($2));}
	stmt									{$$=$1;}
|	LFALL									{$$=$1;}
|	LBREAK onew_name							{$$=makeTree2("non_dcl_stmt9",2,makeLeaf($1),$2);}
|	LCONTINUE onew_name							{$$=makeTree2("non_dcl_stmt10",2,makeLeaf($1),$2);}
|	LGO pseudocall								{$$=makeTree2("non_dcl_stmt11",2,makeLeaf($1),$2);}
|	LDEFER pseudocall							{$$=makeTree2("non_dcl_stmt12",2,makeLeaf($1),$2);}
|	LGOTO new_name								{$$=makeTree2("non_dcl_stmt13",2,makeLeaf($1),$2);}
|	LRETURN oexpr_list							{$$=makeTree2("non_dcl_stmt14",2,makeLeaf($1),$2);}
	;

stmt_list:
	stmt									{$$=$1;}
|	stmt_list ';' stmt							{$$=makeTree2("stmt_list_multi_stmt",2,$1,$3);}
	;

new_name_list:
	new_name								{$$=$1;}
|	new_name_list ',' new_name						{$$=makeTree3("new_name_list",3,$1,makeLeaf($2),$3);}
	;

dcl_name_list:
	dcl_name								{$$=$1;}
|	dcl_name_list ',' dcl_name						{$$=makeTree3("new_name_list2",3,$1,makeLeaf($2),$3);}
	;

expr_list:
	expr									{$$=makeTree1("expr_list",1,$1);}
|	expr_list ',' expr							{NotLegal();}
	;

expr_or_type_list:
	expr_or_type								{$$=$1;}
|	expr_or_type_list ',' expr_or_type					{$$=makeTree3("exper_or_type_list2",3,$1,makeLeaf($2),$3);}
	;

/*
 * list of combo of keyval and val
 */
keyval_list:
	keyval									{NotLegal();}
|	bare_complitexpr							{$$=$1;}
|	keyval_list ',' keyval							{NotLegal();}
|	keyval_list ',' bare_complitexpr					{$$=makeTree3("keyval_list2",3,$1,makeLeaf($2),$3);}
	;

braced_keyval_list:								{$$=NULL;}
|	keyval_list ocomma							{$$=makeTree2("braced_keyval_list",2,$1,$2);}
	;

/*
 * optional things
 */
osemi:										{$$=NULL;}
|	';'									{$$=$1;}
	;

ocomma:										{$$=NULL;}
|	','									{$$=$1;}
	;

oexpr:										{$$=NULL;}
|	expr									{$$=$1;}
	;

oexpr_list:									{$$=NULL;}
|	expr_list								{$$=$1;}
	;

osimple_stmt:									{$$=NULL;}
|	simple_stmt								{$$=makeTree1("osimple_stmt",1,$1);}
	;

oliteral:									{$$=NULL;}
|	LLITERAL								{$$=makeTree1("oliteral",1,makeLeaf($1));}
	;

%%


// I am using this function to tell the user when a program element is not legal vgo
void NotLegal(){
	printf("Not legal vgo");
	printf(" File Name: ");
	printf("%s", yyfilename);
	printf(" Line number: ");
	printf("%d\n", yylineno);
	exit(2);
}

// I took this struct from Dr.J's homework 2 description and changed it a little
typedef struct tree {
   char *prodrule;
   int nkids;
   struct tree *kids[8]; /* if nkids >0 */ //I think the max size was 8 
   struct token *leaf;   /* if nkids == 0; might be null */
}Tree;


//Dr.J approved function to make a leaf
Tree *makeLeaf(struct *token){
Tree *newLeaf = (Tree*)malloc(sizeof(Tree));
newLeaf->productrule = token->category;
newLeaf->nkids = 0;
newLeaf->token = token;
return newLeaf;
}

//Dr. J approved way to make node with one child
Tree makeTree1(char* nodeid, int kids, Tree *one){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
return newNode;
}

//make node with two children
Tree makeTree2(char* nodeid, int kids, Tree *one, Tree *two){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
return newNode;
}

//make node with three children
Tree makeTree3(char* nodeid, int kids, Tree *one, Tree *two, Tree *three){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
return newNode;
}

//make node with four children
Tree makeTree4(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
newNode->kid[3] = four;
return newNode;
}

//make node with five children
Tree makeTree5(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
newNode->kid[3] = four;
newNode->kid[4] = five;
return newNode;

//make node with six children
Tree makeTree3(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
newNode->kid[3] = four;
newNode->kid[4] = five;
newNode->kid[5] = six;
return newNode;
}

//make node with seven children
Tree makeTree7(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six, Tree *seven){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
newNode->kid[3] = four;
newNode->kid[4] = five;
newNode->kid[5] = six;
newNode->kid[6] = seven;
return newNode;
}

//make node with eight children
Tree makeTree8(char* nodeid, int kids, Tree *one, Tree *two, Tree *three, Tree *four, Tree *five, Tree *six, Tree *seven, Tree *eight){
Tree *newNode = (Tree*)malloc(sizeof(Tree));
newNode->productrule = nodeid;
newNode->nkids = kids;
newNode->kid[0] = one;
newNode->kid[1] = two;
newNode->kid[2] = three;
newNode->kid[3] = four;
newNode->kid[4] = five;
newNode->kid[5] = six;
newNode->kid[6] = seven;
newNode->kid[7] = eight;
return newNode;
}






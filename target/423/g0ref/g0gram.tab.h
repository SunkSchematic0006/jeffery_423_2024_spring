/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_G0GRAM_TAB_H_INCLUDED
# define YY_YY_G0GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    DROLL = 259,
    DOUBLE = 260,
    ELSE = 261,
    FOR = 262,
    IF = 263,
    INT = 264,
    RETURN = 265,
    VOID = 266,
    WHILE = 267,
    IDENTIFIER = 268,
    CLASSNAME = 269,
    CLASS = 270,
    LIST = 271,
    TABLE = 272,
    PERIOD = 273,
    STRING = 274,
    BOOL = 275,
    INTLIT = 276,
    DOUBLELIT = 277,
    STRINGLIT = 278,
    BOOLFALSE = 279,
    BOOLTRUE = 280,
    NULLVAL = 281,
    LEFTPAREN = 282,
    RIGHTPAREN = 283,
    LEFTSUBSCRIPT = 284,
    RIGHTSUBSCRIPT = 285,
    LEFTBRACE = 286,
    RIGHTBRACE = 287,
    SEMICOLON = 288,
    COLON = 289,
    COMMA = 290,
    LOGICALNOT = 291,
    SIZE = 292,
    MULTIPLY = 293,
    DIVIDE = 294,
    MODULUS = 295,
    PLUS = 296,
    MINUS = 297,
    LESSTHAN = 298,
    LESSTHANOREQUAL = 299,
    GREATERTHAN = 300,
    GREATERTHANOREQUAL = 301,
    ISEQUALTO = 302,
    NOTEQUALTO = 303,
    LOGICALAND = 304,
    LOGICALOR = 305,
    EQUALS = 306,
    INCREMENT = 307,
    DECREMENT = 308,
    SWAP = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "g0gram.y" /* yacc.c:1909  */

struct token *tok;

#line 113 "g0gram.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_G0GRAM_TAB_H_INCLUDED  */

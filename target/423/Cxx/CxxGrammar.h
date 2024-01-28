/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARROW = 258,
    ARROW_STAR = 259,
    DEC = 260,
    EQ = 261,
    GE = 262,
    INC = 263,
    LE = 264,
    LOG_AND = 265,
    LOG_OR = 266,
    NE = 267,
    SHL = 268,
    SHR = 269,
    ASS_ADD = 270,
    ASS_AND = 271,
    ASS_DIV = 272,
    ASS_MOD = 273,
    ASS_MUL = 274,
    ASS_OR = 275,
    ASS_SHL = 276,
    ASS_SHR = 277,
    ASS_SUB = 278,
    ASS_XOR = 279,
    DOT_STAR = 280,
    ELLIPSIS = 281,
    SCOPE = 282,
    PRIVATE = 283,
    PROTECTED = 284,
    PUBLIC = 285,
    BOOL = 286,
    CHAR = 287,
    DOUBLE = 288,
    FLOAT = 289,
    INT = 290,
    LONG = 291,
    SHORT = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    VOID = 295,
    WCHAR_T = 296,
    CLASS = 297,
    ENUM = 298,
    NAMESPACE = 299,
    STRUCT = 300,
    TYPENAME = 301,
    UNION = 302,
    CONST = 303,
    VOLATILE = 304,
    AUTO = 305,
    EXPLICIT = 306,
    EXPORT = 307,
    EXTERN = 308,
    FRIEND = 309,
    INLINE = 310,
    MUTABLE = 311,
    REGISTER = 312,
    STATIC = 313,
    TEMPLATE = 314,
    TYPEDEF = 315,
    USING = 316,
    VIRTUAL = 317,
    ASM = 318,
    BREAK = 319,
    CASE = 320,
    CATCH = 321,
    CONST_CAST = 322,
    CONTINUE = 323,
    DEFAULT = 324,
    DELETE = 325,
    DO = 326,
    DYNAMIC_CAST = 327,
    ELSE = 328,
    FALSE = 329,
    FOR = 330,
    GOTO = 331,
    IF = 332,
    NEW = 333,
    OPERATOR = 334,
    REINTERPRET_CAST = 335,
    RETURN = 336,
    SIZEOF = 337,
    STATIC_CAST = 338,
    SWITCH = 339,
    THIS = 340,
    THROW = 341,
    TRUE = 342,
    TRY = 343,
    TYPEID = 344,
    WHILE = 345,
    CharacterLiteral = 346,
    FloatingLiteral = 347,
    Identifier = 348,
    IntegerLiteral = 349,
    NumberLiteral = 350,
    StringLiteral = 351,
    SHIFT_THERE = 352,
    REDUCE_HERE_MOSTLY = 353
  };
#endif
/* Tokens.  */
#define ARROW 258
#define ARROW_STAR 259
#define DEC 260
#define EQ 261
#define GE 262
#define INC 263
#define LE 264
#define LOG_AND 265
#define LOG_OR 266
#define NE 267
#define SHL 268
#define SHR 269
#define ASS_ADD 270
#define ASS_AND 271
#define ASS_DIV 272
#define ASS_MOD 273
#define ASS_MUL 274
#define ASS_OR 275
#define ASS_SHL 276
#define ASS_SHR 277
#define ASS_SUB 278
#define ASS_XOR 279
#define DOT_STAR 280
#define ELLIPSIS 281
#define SCOPE 282
#define PRIVATE 283
#define PROTECTED 284
#define PUBLIC 285
#define BOOL 286
#define CHAR 287
#define DOUBLE 288
#define FLOAT 289
#define INT 290
#define LONG 291
#define SHORT 292
#define SIGNED 293
#define UNSIGNED 294
#define VOID 295
#define WCHAR_T 296
#define CLASS 297
#define ENUM 298
#define NAMESPACE 299
#define STRUCT 300
#define TYPENAME 301
#define UNION 302
#define CONST 303
#define VOLATILE 304
#define AUTO 305
#define EXPLICIT 306
#define EXPORT 307
#define EXTERN 308
#define FRIEND 309
#define INLINE 310
#define MUTABLE 311
#define REGISTER 312
#define STATIC 313
#define TEMPLATE 314
#define TYPEDEF 315
#define USING 316
#define VIRTUAL 317
#define ASM 318
#define BREAK 319
#define CASE 320
#define CATCH 321
#define CONST_CAST 322
#define CONTINUE 323
#define DEFAULT 324
#define DELETE 325
#define DO 326
#define DYNAMIC_CAST 327
#define ELSE 328
#define FALSE 329
#define FOR 330
#define GOTO 331
#define IF 332
#define NEW 333
#define OPERATOR 334
#define REINTERPRET_CAST 335
#define RETURN 336
#define SIZEOF 337
#define STATIC_CAST 338
#define SWITCH 339
#define THIS 340
#define THROW 341
#define TRUE 342
#define TRY 343
#define TYPEID 344
#define WHILE 345
#define CharacterLiteral 346
#define FloatingLiteral 347
#define Identifier 348
#define IntegerLiteral 349
#define NumberLiteral 350
#define StringLiteral 351
#define SHIFT_THERE 352
#define REDUCE_HERE_MOSTLY 353

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "CxxGrammar.y" /* yacc.c:1909  */

   int keyword;
   int access_specifier;
   int built_in_id;
   int class_key;
   int cv_qualifiers;
   int decl_specifier_id;
   int character_literal;
   int floating_literal;
   int identifier;
   int integer_literal;
   int number_literal;
   int string_literal;
   

#line 266 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

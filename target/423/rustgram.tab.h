/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_RUSTGRAM_TAB_H_INCLUDED
# define YY_YY_RUSTGRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SHL = 258,                     /* SHL  */
    SHR = 259,                     /* SHR  */
    LE = 260,                      /* LE  */
    EQEQ = 261,                    /* EQEQ  */
    NE = 262,                      /* NE  */
    GE = 263,                      /* GE  */
    ANDAND = 264,                  /* ANDAND  */
    OROR = 265,                    /* OROR  */
    SHLEQ = 266,                   /* SHLEQ  */
    SHREQ = 267,                   /* SHREQ  */
    MINUSEQ = 268,                 /* MINUSEQ  */
    ANDEQ = 269,                   /* ANDEQ  */
    OREQ = 270,                    /* OREQ  */
    PLUSEQ = 271,                  /* PLUSEQ  */
    STAREQ = 272,                  /* STAREQ  */
    SLASHEQ = 273,                 /* SLASHEQ  */
    CARETEQ = 274,                 /* CARETEQ  */
    PERCENTEQ = 275,               /* PERCENTEQ  */
    DOTDOT = 276,                  /* DOTDOT  */
    DOTDOTDOT = 277,               /* DOTDOTDOT  */
    MOD_SEP = 278,                 /* MOD_SEP  */
    RARROW = 279,                  /* RARROW  */
    LARROW = 280,                  /* LARROW  */
    FAT_ARROW = 281,               /* FAT_ARROW  */
    LIT_BYTE = 282,                /* LIT_BYTE  */
    LIT_CHAR = 283,                /* LIT_CHAR  */
    LIT_INTEGER = 284,             /* LIT_INTEGER  */
    LIT_FLOAT = 285,               /* LIT_FLOAT  */
    LIT_STR = 286,                 /* LIT_STR  */
    LIT_STR_RAW = 287,             /* LIT_STR_RAW  */
    LIT_BYTE_STR = 288,            /* LIT_BYTE_STR  */
    LIT_BYTE_STR_RAW = 289,        /* LIT_BYTE_STR_RAW  */
    IDENT = 290,                   /* IDENT  */
    UNDERSCORE = 291,              /* UNDERSCORE  */
    LIFETIME = 292,                /* LIFETIME  */
    SELF = 293,                    /* SELF  */
    STATIC = 294,                  /* STATIC  */
    ABSTRACT = 295,                /* ABSTRACT  */
    ALIGNOF = 296,                 /* ALIGNOF  */
    AS = 297,                      /* AS  */
    BECOME = 298,                  /* BECOME  */
    BREAK = 299,                   /* BREAK  */
    CATCH = 300,                   /* CATCH  */
    CRATE = 301,                   /* CRATE  */
    DO = 302,                      /* DO  */
    ELSE = 303,                    /* ELSE  */
    ENUM = 304,                    /* ENUM  */
    EXTERN = 305,                  /* EXTERN  */
    FALSE = 306,                   /* FALSE  */
    FINAL = 307,                   /* FINAL  */
    FN = 308,                      /* FN  */
    FOR = 309,                     /* FOR  */
    IF = 310,                      /* IF  */
    IMPL = 311,                    /* IMPL  */
    IN = 312,                      /* IN  */
    LET = 313,                     /* LET  */
    LOOP = 314,                    /* LOOP  */
    MACRO = 315,                   /* MACRO  */
    MATCH = 316,                   /* MATCH  */
    MOD = 317,                     /* MOD  */
    MOVE = 318,                    /* MOVE  */
    MUT = 319,                     /* MUT  */
    OFFSETOF = 320,                /* OFFSETOF  */
    OVERRIDE = 321,                /* OVERRIDE  */
    PRIV = 322,                    /* PRIV  */
    PUB = 323,                     /* PUB  */
    PURE = 324,                    /* PURE  */
    REF = 325,                     /* REF  */
    RETURN = 326,                  /* RETURN  */
    SIZEOF = 327,                  /* SIZEOF  */
    STRUCT = 328,                  /* STRUCT  */
    SUPER = 329,                   /* SUPER  */
    UNION = 330,                   /* UNION  */
    UNSIZED = 331,                 /* UNSIZED  */
    TRUE = 332,                    /* TRUE  */
    TRAIT = 333,                   /* TRAIT  */
    TYPE = 334,                    /* TYPE  */
    UNSAFE = 335,                  /* UNSAFE  */
    VIRTUAL = 336,                 /* VIRTUAL  */
    YIELD = 337,                   /* YIELD  */
    DEFAULT = 338,                 /* DEFAULT  */
    USE = 339,                     /* USE  */
    WHILE = 340,                   /* WHILE  */
    CONTINUE = 341,                /* CONTINUE  */
    PROC = 342,                    /* PROC  */
    BOX = 343,                     /* BOX  */
    CONST = 344,                   /* CONST  */
    WHERE = 345,                   /* WHERE  */
    TYPEOF = 346,                  /* TYPEOF  */
    INNER_DOC_COMMENT = 347,       /* INNER_DOC_COMMENT  */
    OUTER_DOC_COMMENT = 348,       /* OUTER_DOC_COMMENT  */
    SHEBANG = 349,                 /* SHEBANG  */
    SHEBANG_LINE = 350,            /* SHEBANG_LINE  */
    STATIC_LIFETIME = 351,         /* STATIC_LIFETIME  */
    LAMBDA = 352,                  /* LAMBDA  */
    SHIFTPLUS = 353,               /* SHIFTPLUS  */
    FORTYPE = 354,                 /* FORTYPE  */
    RANGE = 355                    /* RANGE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_RUSTGRAM_TAB_H_INCLUDED  */

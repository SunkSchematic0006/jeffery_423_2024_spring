/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "rustgram.y"


/* 
 * Adapted from from the Rust project's deleted parser-lalr.y
 * via the Wayback Machine. Since that grammar was old and
 * Rust changed incompatibly since then, you should test/check
 * everything and trust nothing.

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

#define YYERROR_VERBOSE
#define YYSTYPE struct node *
extern int yylex();
extern void yyerror(char const *s);

#line 97 "rustgram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "rustgram.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SHL = 3,                        /* SHL  */
  YYSYMBOL_SHR = 4,                        /* SHR  */
  YYSYMBOL_LE = 5,                         /* LE  */
  YYSYMBOL_EQEQ = 6,                       /* EQEQ  */
  YYSYMBOL_NE = 7,                         /* NE  */
  YYSYMBOL_GE = 8,                         /* GE  */
  YYSYMBOL_ANDAND = 9,                     /* ANDAND  */
  YYSYMBOL_OROR = 10,                      /* OROR  */
  YYSYMBOL_SHLEQ = 11,                     /* SHLEQ  */
  YYSYMBOL_SHREQ = 12,                     /* SHREQ  */
  YYSYMBOL_MINUSEQ = 13,                   /* MINUSEQ  */
  YYSYMBOL_ANDEQ = 14,                     /* ANDEQ  */
  YYSYMBOL_OREQ = 15,                      /* OREQ  */
  YYSYMBOL_PLUSEQ = 16,                    /* PLUSEQ  */
  YYSYMBOL_STAREQ = 17,                    /* STAREQ  */
  YYSYMBOL_SLASHEQ = 18,                   /* SLASHEQ  */
  YYSYMBOL_CARETEQ = 19,                   /* CARETEQ  */
  YYSYMBOL_PERCENTEQ = 20,                 /* PERCENTEQ  */
  YYSYMBOL_DOTDOT = 21,                    /* DOTDOT  */
  YYSYMBOL_DOTDOTDOT = 22,                 /* DOTDOTDOT  */
  YYSYMBOL_MOD_SEP = 23,                   /* MOD_SEP  */
  YYSYMBOL_RARROW = 24,                    /* RARROW  */
  YYSYMBOL_LARROW = 25,                    /* LARROW  */
  YYSYMBOL_FAT_ARROW = 26,                 /* FAT_ARROW  */
  YYSYMBOL_LIT_BYTE = 27,                  /* LIT_BYTE  */
  YYSYMBOL_LIT_CHAR = 28,                  /* LIT_CHAR  */
  YYSYMBOL_LIT_INTEGER = 29,               /* LIT_INTEGER  */
  YYSYMBOL_LIT_FLOAT = 30,                 /* LIT_FLOAT  */
  YYSYMBOL_LIT_STR = 31,                   /* LIT_STR  */
  YYSYMBOL_LIT_STR_RAW = 32,               /* LIT_STR_RAW  */
  YYSYMBOL_LIT_BYTE_STR = 33,              /* LIT_BYTE_STR  */
  YYSYMBOL_LIT_BYTE_STR_RAW = 34,          /* LIT_BYTE_STR_RAW  */
  YYSYMBOL_IDENT = 35,                     /* IDENT  */
  YYSYMBOL_UNDERSCORE = 36,                /* UNDERSCORE  */
  YYSYMBOL_LIFETIME = 37,                  /* LIFETIME  */
  YYSYMBOL_SELF = 38,                      /* SELF  */
  YYSYMBOL_STATIC = 39,                    /* STATIC  */
  YYSYMBOL_ABSTRACT = 40,                  /* ABSTRACT  */
  YYSYMBOL_ALIGNOF = 41,                   /* ALIGNOF  */
  YYSYMBOL_AS = 42,                        /* AS  */
  YYSYMBOL_BECOME = 43,                    /* BECOME  */
  YYSYMBOL_BREAK = 44,                     /* BREAK  */
  YYSYMBOL_CATCH = 45,                     /* CATCH  */
  YYSYMBOL_CRATE = 46,                     /* CRATE  */
  YYSYMBOL_DO = 47,                        /* DO  */
  YYSYMBOL_ELSE = 48,                      /* ELSE  */
  YYSYMBOL_ENUM = 49,                      /* ENUM  */
  YYSYMBOL_EXTERN = 50,                    /* EXTERN  */
  YYSYMBOL_FALSE = 51,                     /* FALSE  */
  YYSYMBOL_FINAL = 52,                     /* FINAL  */
  YYSYMBOL_FN = 53,                        /* FN  */
  YYSYMBOL_FOR = 54,                       /* FOR  */
  YYSYMBOL_IF = 55,                        /* IF  */
  YYSYMBOL_IMPL = 56,                      /* IMPL  */
  YYSYMBOL_IN = 57,                        /* IN  */
  YYSYMBOL_LET = 58,                       /* LET  */
  YYSYMBOL_LOOP = 59,                      /* LOOP  */
  YYSYMBOL_MACRO = 60,                     /* MACRO  */
  YYSYMBOL_MATCH = 61,                     /* MATCH  */
  YYSYMBOL_MOD = 62,                       /* MOD  */
  YYSYMBOL_MOVE = 63,                      /* MOVE  */
  YYSYMBOL_MUT = 64,                       /* MUT  */
  YYSYMBOL_OFFSETOF = 65,                  /* OFFSETOF  */
  YYSYMBOL_OVERRIDE = 66,                  /* OVERRIDE  */
  YYSYMBOL_PRIV = 67,                      /* PRIV  */
  YYSYMBOL_PUB = 68,                       /* PUB  */
  YYSYMBOL_PURE = 69,                      /* PURE  */
  YYSYMBOL_REF = 70,                       /* REF  */
  YYSYMBOL_RETURN = 71,                    /* RETURN  */
  YYSYMBOL_SIZEOF = 72,                    /* SIZEOF  */
  YYSYMBOL_STRUCT = 73,                    /* STRUCT  */
  YYSYMBOL_SUPER = 74,                     /* SUPER  */
  YYSYMBOL_UNION = 75,                     /* UNION  */
  YYSYMBOL_UNSIZED = 76,                   /* UNSIZED  */
  YYSYMBOL_TRUE = 77,                      /* TRUE  */
  YYSYMBOL_TRAIT = 78,                     /* TRAIT  */
  YYSYMBOL_TYPE = 79,                      /* TYPE  */
  YYSYMBOL_UNSAFE = 80,                    /* UNSAFE  */
  YYSYMBOL_VIRTUAL = 81,                   /* VIRTUAL  */
  YYSYMBOL_YIELD = 82,                     /* YIELD  */
  YYSYMBOL_DEFAULT = 83,                   /* DEFAULT  */
  YYSYMBOL_USE = 84,                       /* USE  */
  YYSYMBOL_WHILE = 85,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 86,                  /* CONTINUE  */
  YYSYMBOL_PROC = 87,                      /* PROC  */
  YYSYMBOL_BOX = 88,                       /* BOX  */
  YYSYMBOL_CONST = 89,                     /* CONST  */
  YYSYMBOL_WHERE = 90,                     /* WHERE  */
  YYSYMBOL_TYPEOF = 91,                    /* TYPEOF  */
  YYSYMBOL_INNER_DOC_COMMENT = 92,         /* INNER_DOC_COMMENT  */
  YYSYMBOL_OUTER_DOC_COMMENT = 93,         /* OUTER_DOC_COMMENT  */
  YYSYMBOL_SHEBANG = 94,                   /* SHEBANG  */
  YYSYMBOL_SHEBANG_LINE = 95,              /* SHEBANG_LINE  */
  YYSYMBOL_STATIC_LIFETIME = 96,           /* STATIC_LIFETIME  */
  YYSYMBOL_LAMBDA = 97,                    /* LAMBDA  */
  YYSYMBOL_SHIFTPLUS = 98,                 /* SHIFTPLUS  */
  YYSYMBOL_99_ = 99,                       /* ':'  */
  YYSYMBOL_FORTYPE = 100,                  /* FORTYPE  */
  YYSYMBOL_101_ = 101,                     /* '?'  */
  YYSYMBOL_102_ = 102,                     /* '='  */
  YYSYMBOL_103_ = 103,                     /* '<'  */
  YYSYMBOL_104_ = 104,                     /* '>'  */
  YYSYMBOL_105_ = 105,                     /* '|'  */
  YYSYMBOL_106_ = 106,                     /* '^'  */
  YYSYMBOL_107_ = 107,                     /* '&'  */
  YYSYMBOL_108_ = 108,                     /* '+'  */
  YYSYMBOL_109_ = 109,                     /* '-'  */
  YYSYMBOL_110_ = 110,                     /* '*'  */
  YYSYMBOL_111_ = 111,                     /* '/'  */
  YYSYMBOL_112_ = 112,                     /* '%'  */
  YYSYMBOL_113_ = 113,                     /* '!'  */
  YYSYMBOL_114_ = 114,                     /* '{'  */
  YYSYMBOL_115_ = 115,                     /* '['  */
  YYSYMBOL_116_ = 116,                     /* '('  */
  YYSYMBOL_117_ = 117,                     /* '.'  */
  YYSYMBOL_RANGE = 118,                    /* RANGE  */
  YYSYMBOL_119_ = 119,                     /* ']'  */
  YYSYMBOL_120_ = 120,                     /* '#'  */
  YYSYMBOL_121_ = 121,                     /* ')'  */
  YYSYMBOL_122_ = 122,                     /* ','  */
  YYSYMBOL_123_ = 123,                     /* ';'  */
  YYSYMBOL_124_ = 124,                     /* '}'  */
  YYSYMBOL_125_ = 125,                     /* '@'  */
  YYSYMBOL_126_ = 126,                     /* '~'  */
  YYSYMBOL_127_ = 127,                     /* '$'  */
  YYSYMBOL_YYACCEPT = 128,                 /* $accept  */
  YYSYMBOL_crate = 129,                    /* crate  */
  YYSYMBOL_maybe_shebang = 130,            /* maybe_shebang  */
  YYSYMBOL_maybe_inner_attrs = 131,        /* maybe_inner_attrs  */
  YYSYMBOL_inner_attrs = 132,              /* inner_attrs  */
  YYSYMBOL_inner_attr = 133,               /* inner_attr  */
  YYSYMBOL_maybe_outer_attrs = 134,        /* maybe_outer_attrs  */
  YYSYMBOL_outer_attrs = 135,              /* outer_attrs  */
  YYSYMBOL_outer_attr = 136,               /* outer_attr  */
  YYSYMBOL_meta_item = 137,                /* meta_item  */
  YYSYMBOL_meta_seq = 138,                 /* meta_seq  */
  YYSYMBOL_maybe_mod_items = 139,          /* maybe_mod_items  */
  YYSYMBOL_mod_items = 140,                /* mod_items  */
  YYSYMBOL_attrs_and_vis = 141,            /* attrs_and_vis  */
  YYSYMBOL_mod_item = 142,                 /* mod_item  */
  YYSYMBOL_item = 143,                     /* item  */
  YYSYMBOL_stmt_item = 144,                /* stmt_item  */
  YYSYMBOL_item_static = 145,              /* item_static  */
  YYSYMBOL_item_const = 146,               /* item_const  */
  YYSYMBOL_item_macro = 147,               /* item_macro  */
  YYSYMBOL_view_item = 148,                /* view_item  */
  YYSYMBOL_extern_fn_item = 149,           /* extern_fn_item  */
  YYSYMBOL_use_item = 150,                 /* use_item  */
  YYSYMBOL_view_path = 151,                /* view_path  */
  YYSYMBOL_block_item = 152,               /* block_item  */
  YYSYMBOL_maybe_ty_ascription = 153,      /* maybe_ty_ascription  */
  YYSYMBOL_maybe_init_expr = 154,          /* maybe_init_expr  */
  YYSYMBOL_item_struct = 155,              /* item_struct  */
  YYSYMBOL_struct_decl_args = 156,         /* struct_decl_args  */
  YYSYMBOL_struct_tuple_args = 157,        /* struct_tuple_args  */
  YYSYMBOL_struct_decl_fields = 158,       /* struct_decl_fields  */
  YYSYMBOL_struct_decl_field = 159,        /* struct_decl_field  */
  YYSYMBOL_struct_tuple_fields = 160,      /* struct_tuple_fields  */
  YYSYMBOL_struct_tuple_field = 161,       /* struct_tuple_field  */
  YYSYMBOL_item_enum = 162,                /* item_enum  */
  YYSYMBOL_enum_defs = 163,                /* enum_defs  */
  YYSYMBOL_enum_def = 164,                 /* enum_def  */
  YYSYMBOL_enum_args = 165,                /* enum_args  */
  YYSYMBOL_item_union = 166,               /* item_union  */
  YYSYMBOL_item_mod = 167,                 /* item_mod  */
  YYSYMBOL_item_foreign_mod = 168,         /* item_foreign_mod  */
  YYSYMBOL_maybe_abi = 169,                /* maybe_abi  */
  YYSYMBOL_maybe_foreign_items = 170,      /* maybe_foreign_items  */
  YYSYMBOL_foreign_items = 171,            /* foreign_items  */
  YYSYMBOL_foreign_item = 172,             /* foreign_item  */
  YYSYMBOL_item_foreign_static = 173,      /* item_foreign_static  */
  YYSYMBOL_item_foreign_fn = 174,          /* item_foreign_fn  */
  YYSYMBOL_fn_decl_allow_variadic = 175,   /* fn_decl_allow_variadic  */
  YYSYMBOL_fn_params_allow_variadic = 176, /* fn_params_allow_variadic  */
  YYSYMBOL_visibility = 177,               /* visibility  */
  YYSYMBOL_idents_or_self = 178,           /* idents_or_self  */
  YYSYMBOL_ident_or_self = 179,            /* ident_or_self  */
  YYSYMBOL_item_type = 180,                /* item_type  */
  YYSYMBOL_for_sized = 181,                /* for_sized  */
  YYSYMBOL_item_trait = 182,               /* item_trait  */
  YYSYMBOL_maybe_trait_items = 183,        /* maybe_trait_items  */
  YYSYMBOL_trait_items = 184,              /* trait_items  */
  YYSYMBOL_trait_item = 185,               /* trait_item  */
  YYSYMBOL_trait_const = 186,              /* trait_const  */
  YYSYMBOL_maybe_const_default = 187,      /* maybe_const_default  */
  YYSYMBOL_trait_type = 188,               /* trait_type  */
  YYSYMBOL_maybe_unsafe = 189,             /* maybe_unsafe  */
  YYSYMBOL_maybe_default_maybe_unsafe = 190, /* maybe_default_maybe_unsafe  */
  YYSYMBOL_trait_method = 191,             /* trait_method  */
  YYSYMBOL_type_method = 192,              /* type_method  */
  YYSYMBOL_method = 193,                   /* method  */
  YYSYMBOL_impl_method = 194,              /* impl_method  */
  YYSYMBOL_item_impl = 195,                /* item_impl  */
  YYSYMBOL_maybe_impl_items = 196,         /* maybe_impl_items  */
  YYSYMBOL_impl_items = 197,               /* impl_items  */
  YYSYMBOL_impl_item = 198,                /* impl_item  */
  YYSYMBOL_maybe_default = 199,            /* maybe_default  */
  YYSYMBOL_impl_const = 200,               /* impl_const  */
  YYSYMBOL_impl_type = 201,                /* impl_type  */
  YYSYMBOL_item_fn = 202,                  /* item_fn  */
  YYSYMBOL_item_unsafe_fn = 203,           /* item_unsafe_fn  */
  YYSYMBOL_fn_decl = 204,                  /* fn_decl  */
  YYSYMBOL_fn_decl_with_self = 205,        /* fn_decl_with_self  */
  YYSYMBOL_fn_decl_with_self_allow_anon_params = 206, /* fn_decl_with_self_allow_anon_params  */
  YYSYMBOL_fn_params = 207,                /* fn_params  */
  YYSYMBOL_fn_anon_params = 208,           /* fn_anon_params  */
  YYSYMBOL_fn_params_with_self = 209,      /* fn_params_with_self  */
  YYSYMBOL_fn_anon_params_with_self = 210, /* fn_anon_params_with_self  */
  YYSYMBOL_maybe_params = 211,             /* maybe_params  */
  YYSYMBOL_params = 212,                   /* params  */
  YYSYMBOL_param = 213,                    /* param  */
  YYSYMBOL_inferrable_params = 214,        /* inferrable_params  */
  YYSYMBOL_inferrable_param = 215,         /* inferrable_param  */
  YYSYMBOL_maybe_comma_params = 216,       /* maybe_comma_params  */
  YYSYMBOL_maybe_comma_anon_params = 217,  /* maybe_comma_anon_params  */
  YYSYMBOL_maybe_anon_params = 218,        /* maybe_anon_params  */
  YYSYMBOL_anon_params = 219,              /* anon_params  */
  YYSYMBOL_anon_param = 220,               /* anon_param  */
  YYSYMBOL_anon_params_allow_variadic_tail = 221, /* anon_params_allow_variadic_tail  */
  YYSYMBOL_named_arg = 222,                /* named_arg  */
  YYSYMBOL_ret_ty = 223,                   /* ret_ty  */
  YYSYMBOL_generic_params = 224,           /* generic_params  */
  YYSYMBOL_maybe_where_clause = 225,       /* maybe_where_clause  */
  YYSYMBOL_where_clause = 226,             /* where_clause  */
  YYSYMBOL_where_predicates = 227,         /* where_predicates  */
  YYSYMBOL_where_predicate = 228,          /* where_predicate  */
  YYSYMBOL_maybe_for_lifetimes = 229,      /* maybe_for_lifetimes  */
  YYSYMBOL_ty_params = 230,                /* ty_params  */
  YYSYMBOL_path_no_types_allowed = 231,    /* path_no_types_allowed  */
  YYSYMBOL_path_generic_args_without_colons = 232, /* path_generic_args_without_colons  */
  YYSYMBOL_generic_args = 233,             /* generic_args  */
  YYSYMBOL_generic_values = 234,           /* generic_values  */
  YYSYMBOL_maybe_ty_sums_and_or_bindings = 235, /* maybe_ty_sums_and_or_bindings  */
  YYSYMBOL_maybe_bindings = 236,           /* maybe_bindings  */
  YYSYMBOL_pat = 237,                      /* pat  */
  YYSYMBOL_pats_or = 238,                  /* pats_or  */
  YYSYMBOL_binding_mode = 239,             /* binding_mode  */
  YYSYMBOL_lit_or_path = 240,              /* lit_or_path  */
  YYSYMBOL_pat_field = 241,                /* pat_field  */
  YYSYMBOL_pat_fields = 242,               /* pat_fields  */
  YYSYMBOL_pat_struct = 243,               /* pat_struct  */
  YYSYMBOL_pat_tup = 244,                  /* pat_tup  */
  YYSYMBOL_pat_tup_elts = 245,             /* pat_tup_elts  */
  YYSYMBOL_pat_vec = 246,                  /* pat_vec  */
  YYSYMBOL_pat_vec_elts = 247,             /* pat_vec_elts  */
  YYSYMBOL_ty = 248,                       /* ty  */
  YYSYMBOL_ty_prim = 249,                  /* ty_prim  */
  YYSYMBOL_ty_bare_fn = 250,               /* ty_bare_fn  */
  YYSYMBOL_ty_fn_decl = 251,               /* ty_fn_decl  */
  YYSYMBOL_ty_closure = 252,               /* ty_closure  */
  YYSYMBOL_for_in_type = 253,              /* for_in_type  */
  YYSYMBOL_for_in_type_suffix = 254,       /* for_in_type_suffix  */
  YYSYMBOL_maybe_mut = 255,                /* maybe_mut  */
  YYSYMBOL_maybe_mut_or_const = 256,       /* maybe_mut_or_const  */
  YYSYMBOL_ty_qualified_path_and_generic_values = 257, /* ty_qualified_path_and_generic_values  */
  YYSYMBOL_ty_qualified_path = 258,        /* ty_qualified_path  */
  YYSYMBOL_maybe_ty_sums = 259,            /* maybe_ty_sums  */
  YYSYMBOL_ty_sums = 260,                  /* ty_sums  */
  YYSYMBOL_ty_sum = 261,                   /* ty_sum  */
  YYSYMBOL_ty_sum_elt = 262,               /* ty_sum_elt  */
  YYSYMBOL_ty_prim_sum = 263,              /* ty_prim_sum  */
  YYSYMBOL_ty_prim_sum_elt = 264,          /* ty_prim_sum_elt  */
  YYSYMBOL_maybe_ty_param_bounds = 265,    /* maybe_ty_param_bounds  */
  YYSYMBOL_ty_param_bounds = 266,          /* ty_param_bounds  */
  YYSYMBOL_boundseq = 267,                 /* boundseq  */
  YYSYMBOL_polybound = 268,                /* polybound  */
  YYSYMBOL_bindings = 269,                 /* bindings  */
  YYSYMBOL_binding = 270,                  /* binding  */
  YYSYMBOL_ty_param = 271,                 /* ty_param  */
  YYSYMBOL_maybe_bounds = 272,             /* maybe_bounds  */
  YYSYMBOL_bounds = 273,                   /* bounds  */
  YYSYMBOL_bound = 274,                    /* bound  */
  YYSYMBOL_maybe_ltbounds = 275,           /* maybe_ltbounds  */
  YYSYMBOL_ltbounds = 276,                 /* ltbounds  */
  YYSYMBOL_maybe_ty_default = 277,         /* maybe_ty_default  */
  YYSYMBOL_maybe_lifetimes = 278,          /* maybe_lifetimes  */
  YYSYMBOL_lifetimes = 279,                /* lifetimes  */
  YYSYMBOL_lifetime_and_bounds = 280,      /* lifetime_and_bounds  */
  YYSYMBOL_lifetime = 281,                 /* lifetime  */
  YYSYMBOL_trait_ref = 282,                /* trait_ref  */
  YYSYMBOL_inner_attrs_and_block = 283,    /* inner_attrs_and_block  */
  YYSYMBOL_block = 284,                    /* block  */
  YYSYMBOL_maybe_stmts = 285,              /* maybe_stmts  */
  YYSYMBOL_stmts = 286,                    /* stmts  */
  YYSYMBOL_stmt = 287,                     /* stmt  */
  YYSYMBOL_maybe_exprs = 288,              /* maybe_exprs  */
  YYSYMBOL_maybe_expr = 289,               /* maybe_expr  */
  YYSYMBOL_exprs = 290,                    /* exprs  */
  YYSYMBOL_path_expr = 291,                /* path_expr  */
  YYSYMBOL_path_generic_args_with_colons = 292, /* path_generic_args_with_colons  */
  YYSYMBOL_macro_expr = 293,               /* macro_expr  */
  YYSYMBOL_nonblock_expr = 294,            /* nonblock_expr  */
  YYSYMBOL_expr = 295,                     /* expr  */
  YYSYMBOL_expr_nostruct = 296,            /* expr_nostruct  */
  YYSYMBOL_nonblock_prefix_expr_nostruct = 297, /* nonblock_prefix_expr_nostruct  */
  YYSYMBOL_nonblock_prefix_expr = 298,     /* nonblock_prefix_expr  */
  YYSYMBOL_expr_qualified_path = 299,      /* expr_qualified_path  */
  YYSYMBOL_maybe_qpath_params = 300,       /* maybe_qpath_params  */
  YYSYMBOL_maybe_as_trait_ref = 301,       /* maybe_as_trait_ref  */
  YYSYMBOL_lambda_expr = 302,              /* lambda_expr  */
  YYSYMBOL_lambda_expr_no_first_bar = 303, /* lambda_expr_no_first_bar  */
  YYSYMBOL_lambda_expr_nostruct = 304,     /* lambda_expr_nostruct  */
  YYSYMBOL_lambda_expr_nostruct_no_first_bar = 305, /* lambda_expr_nostruct_no_first_bar  */
  YYSYMBOL_vec_expr = 306,                 /* vec_expr  */
  YYSYMBOL_struct_expr_fields = 307,       /* struct_expr_fields  */
  YYSYMBOL_maybe_field_inits = 308,        /* maybe_field_inits  */
  YYSYMBOL_field_inits = 309,              /* field_inits  */
  YYSYMBOL_field_init = 310,               /* field_init  */
  YYSYMBOL_default_field_init = 311,       /* default_field_init  */
  YYSYMBOL_block_expr = 312,               /* block_expr  */
  YYSYMBOL_full_block_expr = 313,          /* full_block_expr  */
  YYSYMBOL_block_expr_dot = 314,           /* block_expr_dot  */
  YYSYMBOL_expr_match = 315,               /* expr_match  */
  YYSYMBOL_match_clauses = 316,            /* match_clauses  */
  YYSYMBOL_match_clause = 317,             /* match_clause  */
  YYSYMBOL_nonblock_match_clause = 318,    /* nonblock_match_clause  */
  YYSYMBOL_block_match_clause = 319,       /* block_match_clause  */
  YYSYMBOL_maybe_guard = 320,              /* maybe_guard  */
  YYSYMBOL_expr_if = 321,                  /* expr_if  */
  YYSYMBOL_expr_if_let = 322,              /* expr_if_let  */
  YYSYMBOL_block_or_if = 323,              /* block_or_if  */
  YYSYMBOL_expr_while = 324,               /* expr_while  */
  YYSYMBOL_expr_while_let = 325,           /* expr_while_let  */
  YYSYMBOL_expr_loop = 326,                /* expr_loop  */
  YYSYMBOL_expr_for = 327,                 /* expr_for  */
  YYSYMBOL_maybe_label = 328,              /* maybe_label  */
  YYSYMBOL_let = 329,                      /* let  */
  YYSYMBOL_lit = 330,                      /* lit  */
  YYSYMBOL_str = 331,                      /* str  */
  YYSYMBOL_maybe_ident = 332,              /* maybe_ident  */
  YYSYMBOL_ident = 333,                    /* ident  */
  YYSYMBOL_unpaired_token = 334,           /* unpaired_token  */
  YYSYMBOL_token_trees = 335,              /* token_trees  */
  YYSYMBOL_token_tree = 336,               /* token_tree  */
  YYSYMBOL_delimited_token_trees = 337,    /* delimited_token_trees  */
  YYSYMBOL_parens_delimited_token_trees = 338, /* parens_delimited_token_trees  */
  YYSYMBOL_braces_delimited_token_trees = 339, /* braces_delimited_token_trees  */
  YYSYMBOL_brackets_delimited_token_trees = 340 /* brackets_delimited_token_trees  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  213
/* YYNRULES -- Number of rules.  */
#define YYNRULES  917
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1646

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   355


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,     2,   120,   127,   112,   107,     2,
     116,   121,   110,   108,   122,   109,   117,   111,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,   123,
     103,   102,   104,   101,   125,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   115,     2,   119,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,   105,   124,   126,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   100,   118
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   221,   221,   222,   225,   226,   229,   230,   233,   234,
     237,   238,   241,   242,   245,   246,   249,   250,   253,   254,
     255,   256,   259,   260,   261,   264,   265,   268,   269,   272,
     275,   279,   280,   284,   285,   286,   287,   288,   291,   292,
     295,   298,   299,   300,   303,   304,   305,   306,   309,   312,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   342,   343,   346,   347,   351,   354,   357,
     362,   363,   366,   367,   370,   371,   372,   375,   378,   379,
     380,   383,   387,   389,   393,   394,   395,   398,   401,   402,
     403,   404,   405,   409,   410,   413,   414,   415,   418,   419,
     422,   423,   426,   427,   430,   431,   434,   435,   436,   440,
     444,   448,   451,   452,   453,   454,   457,   458,   461,   462,
     463,   466,   467,   470,   473,   474,   475,   478,   485,   486,
     489,   490,   493,   494,   495,   496,   499,   503,   504,   507,
     510,   511,   514,   515,   516,   517,   520,   521,   524,   529,
     533,   540,   545,   550,   557,   561,   566,   588,   592,   596,
     599,   604,   608,   614,   615,   618,   619,   622,   623,   624,
     625,   628,   629,   632,   635,   639,   643,   649,   653,   657,
     663,   666,   669,   672,   675,   676,   679,   681,   683,   685,
     688,   690,   692,   694,   697,   698,   699,   702,   703,   706,
     709,   710,   713,   716,   717,   718,   719,   722,   723,   724,
     725,   728,   729,   730,   733,   734,   739,   740,   743,   744,
     745,   748,   749,   750,   751,   752,   753,   754,   757,   758,
     759,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   778,   779,   782,   783,   786,
     787,   790,   791,   794,   795,   798,   799,   806,   807,   808,
     809,   810,   811,   812,   826,   828,   830,   832,   834,   836,
     840,   841,   842,   843,   848,   849,   850,   851,   854,   857,
     858,   859,   860,   861,   862,   865,   866,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   897,   898,   901,   902,
     903,   906,   907,   908,   911,   912,   913,   914,   915,   916,
     917,   920,   921,   924,   925,   926,   927,   928,   931,   932,
     933,   934,   935,   936,   937,   938,   939,   940,   941,   944,
     945,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   962,   963,   970,   971,   972,   973,   975,
     976,   977,   980,   981,   982,   983,   985,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1004,  1005,  1006,  1007,  1010,  1013,  1014,  1015,
    1016,  1019,  1022,  1023,  1024,  1027,  1028,  1031,  1032,  1033,
    1036,  1039,  1044,  1045,  1048,  1049,  1050,  1053,  1054,  1057,
    1058,  1061,  1062,  1065,  1066,  1069,  1070,  1073,  1074,  1077,
    1078,  1081,  1082,  1085,  1086,  1087,  1088,  1091,  1092,  1095,
    1098,  1099,  1102,  1103,  1106,  1107,  1110,  1111,  1114,  1115,
    1118,  1119,  1122,  1123,  1126,  1127,  1128,  1131,  1132,  1135,
    1136,  1139,  1140,  1143,  1144,  1151,  1154,  1157,  1158,  1159,
    1160,  1187,  1188,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1200,  1203,  1204,  1205,  1208,  1209,  1212,  1213,
    1216,  1217,  1218,  1226,  1227,  1228,  1229,  1230,  1234,  1235,
    1238,  1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,  1247,
    1248,  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
    1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1298,  1299,
    1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,
    1320,  1321,  1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,
    1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,
    1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1360,  1361,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,
    1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,
    1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,
    1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,
    1412,  1413,  1414,  1415,  1416,  1417,  1418,  1421,  1422,  1423,
    1424,  1425,  1426,  1427,  1430,  1431,  1432,  1433,  1434,  1435,
    1436,  1439,  1443,  1447,  1451,  1455,  1461,  1462,  1465,  1466,
    1469,  1470,  1471,  1472,  1475,  1476,  1477,  1480,  1481,  1482,
    1483,  1487,  1488,  1489,  1493,  1494,  1497,  1498,  1499,  1500,
    1503,  1504,  1505,  1508,  1509,  1512,  1513,  1514,  1517,  1520,
    1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1531,  1532,
    1535,  1536,  1537,  1539,  1541,  1543,  1544,  1545,  1548,  1549,
    1550,  1551,  1554,  1555,  1558,  1559,  1560,  1563,  1565,  1568,
    1569,  1572,  1573,  1576,  1577,  1580,  1581,  1584,  1585,  1586,
    1589,  1592,  1595,  1598,  1601,  1602,  1605,  1612,  1613,  1614,
    1615,  1616,  1617,  1618,  1621,  1622,  1623,  1624,  1627,  1628,
    1631,  1633,  1634,  1635,  1638,  1639,  1640,  1641,  1642,  1643,
    1644,  1645,  1646,  1647,  1648,  1649,  1650,  1651,  1652,  1653,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,
    1664,  1665,  1666,  1667,  1668,  1669,  1670,  1671,  1672,  1673,
    1674,  1675,  1676,  1677,  1678,  1679,  1680,  1681,  1682,  1683,
    1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,
    1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,
    1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,
    1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,
    1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1754,  1755,
    1758,  1759,  1762,  1763,  1764,  1767,  1772,  1777
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SHL", "SHR", "LE",
  "EQEQ", "NE", "GE", "ANDAND", "OROR", "SHLEQ", "SHREQ", "MINUSEQ",
  "ANDEQ", "OREQ", "PLUSEQ", "STAREQ", "SLASHEQ", "CARETEQ", "PERCENTEQ",
  "DOTDOT", "DOTDOTDOT", "MOD_SEP", "RARROW", "LARROW", "FAT_ARROW",
  "LIT_BYTE", "LIT_CHAR", "LIT_INTEGER", "LIT_FLOAT", "LIT_STR",
  "LIT_STR_RAW", "LIT_BYTE_STR", "LIT_BYTE_STR_RAW", "IDENT", "UNDERSCORE",
  "LIFETIME", "SELF", "STATIC", "ABSTRACT", "ALIGNOF", "AS", "BECOME",
  "BREAK", "CATCH", "CRATE", "DO", "ELSE", "ENUM", "EXTERN", "FALSE",
  "FINAL", "FN", "FOR", "IF", "IMPL", "IN", "LET", "LOOP", "MACRO",
  "MATCH", "MOD", "MOVE", "MUT", "OFFSETOF", "OVERRIDE", "PRIV", "PUB",
  "PURE", "REF", "RETURN", "SIZEOF", "STRUCT", "SUPER", "UNION", "UNSIZED",
  "TRUE", "TRAIT", "TYPE", "UNSAFE", "VIRTUAL", "YIELD", "DEFAULT", "USE",
  "WHILE", "CONTINUE", "PROC", "BOX", "CONST", "WHERE", "TYPEOF",
  "INNER_DOC_COMMENT", "OUTER_DOC_COMMENT", "SHEBANG", "SHEBANG_LINE",
  "STATIC_LIFETIME", "LAMBDA", "SHIFTPLUS", "':'", "FORTYPE", "'?'", "'='",
  "'<'", "'>'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "'{'", "'['", "'('", "'.'", "RANGE", "']'", "'#'", "')'", "','",
  "';'", "'}'", "'@'", "'~'", "'$'", "$accept", "crate", "maybe_shebang",
  "maybe_inner_attrs", "inner_attrs", "inner_attr", "maybe_outer_attrs",
  "outer_attrs", "outer_attr", "meta_item", "meta_seq", "maybe_mod_items",
  "mod_items", "attrs_and_vis", "mod_item", "item", "stmt_item",
  "item_static", "item_const", "item_macro", "view_item", "extern_fn_item",
  "use_item", "view_path", "block_item", "maybe_ty_ascription",
  "maybe_init_expr", "item_struct", "struct_decl_args",
  "struct_tuple_args", "struct_decl_fields", "struct_decl_field",
  "struct_tuple_fields", "struct_tuple_field", "item_enum", "enum_defs",
  "enum_def", "enum_args", "item_union", "item_mod", "item_foreign_mod",
  "maybe_abi", "maybe_foreign_items", "foreign_items", "foreign_item",
  "item_foreign_static", "item_foreign_fn", "fn_decl_allow_variadic",
  "fn_params_allow_variadic", "visibility", "idents_or_self",
  "ident_or_self", "item_type", "for_sized", "item_trait",
  "maybe_trait_items", "trait_items", "trait_item", "trait_const",
  "maybe_const_default", "trait_type", "maybe_unsafe",
  "maybe_default_maybe_unsafe", "trait_method", "type_method", "method",
  "impl_method", "item_impl", "maybe_impl_items", "impl_items",
  "impl_item", "maybe_default", "impl_const", "impl_type", "item_fn",
  "item_unsafe_fn", "fn_decl", "fn_decl_with_self",
  "fn_decl_with_self_allow_anon_params", "fn_params", "fn_anon_params",
  "fn_params_with_self", "fn_anon_params_with_self", "maybe_params",
  "params", "param", "inferrable_params", "inferrable_param",
  "maybe_comma_params", "maybe_comma_anon_params", "maybe_anon_params",
  "anon_params", "anon_param", "anon_params_allow_variadic_tail",
  "named_arg", "ret_ty", "generic_params", "maybe_where_clause",
  "where_clause", "where_predicates", "where_predicate",
  "maybe_for_lifetimes", "ty_params", "path_no_types_allowed",
  "path_generic_args_without_colons", "generic_args", "generic_values",
  "maybe_ty_sums_and_or_bindings", "maybe_bindings", "pat", "pats_or",
  "binding_mode", "lit_or_path", "pat_field", "pat_fields", "pat_struct",
  "pat_tup", "pat_tup_elts", "pat_vec", "pat_vec_elts", "ty", "ty_prim",
  "ty_bare_fn", "ty_fn_decl", "ty_closure", "for_in_type",
  "for_in_type_suffix", "maybe_mut", "maybe_mut_or_const",
  "ty_qualified_path_and_generic_values", "ty_qualified_path",
  "maybe_ty_sums", "ty_sums", "ty_sum", "ty_sum_elt", "ty_prim_sum",
  "ty_prim_sum_elt", "maybe_ty_param_bounds", "ty_param_bounds",
  "boundseq", "polybound", "bindings", "binding", "ty_param",
  "maybe_bounds", "bounds", "bound", "maybe_ltbounds", "ltbounds",
  "maybe_ty_default", "maybe_lifetimes", "lifetimes",
  "lifetime_and_bounds", "lifetime", "trait_ref", "inner_attrs_and_block",
  "block", "maybe_stmts", "stmts", "stmt", "maybe_exprs", "maybe_expr",
  "exprs", "path_expr", "path_generic_args_with_colons", "macro_expr",
  "nonblock_expr", "expr", "expr_nostruct",
  "nonblock_prefix_expr_nostruct", "nonblock_prefix_expr",
  "expr_qualified_path", "maybe_qpath_params", "maybe_as_trait_ref",
  "lambda_expr", "lambda_expr_no_first_bar", "lambda_expr_nostruct",
  "lambda_expr_nostruct_no_first_bar", "vec_expr", "struct_expr_fields",
  "maybe_field_inits", "field_inits", "field_init", "default_field_init",
  "block_expr", "full_block_expr", "block_expr_dot", "expr_match",
  "match_clauses", "match_clause", "nonblock_match_clause",
  "block_match_clause", "maybe_guard", "expr_if", "expr_if_let",
  "block_or_if", "expr_while", "expr_while_let", "expr_loop", "expr_for",
  "maybe_label", "let", "lit", "str", "maybe_ident", "ident",
  "unpaired_token", "token_trees", "token_tree", "delimited_token_trees",
  "parens_delimited_token_trees", "braces_delimited_token_trees",
  "brackets_delimited_token_trees", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1336)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-793)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21, -1336,   177,   111, -1336, -1336, -1336,   182,   193,   111,
   -1336,   254,    26, -1336, -1336,    92,  2942, -1336,  1211,  1211,
   -1336, -1336, -1336, -1336, -1336, -1336,   856, -1336,   326,  1089,
   -1336,  1211,   990,  1211,  1211,  1211, -1336,  1211,  1211,   765,
     361,   630,   766, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,   354,
     413, -1336, -1336, -1336,   352,   456, -1336, -1336, -1336,   380,
      47,   431,   456,   856,  1211,   419,   465, -1336, -1336, -1336,
   -1336,  1211,   231, -1336,   465,   305,   465,   465,   465,   773,
    1211, -1336,   839, -1336, -1336, -1336,   446,   502,    94, -1336,
    1211,   537,   540,  1211,   465,  1211,   264, -1336,  2008,  1211,
   -1336,   456,   565,  8929,   960,   546,    59,   601,    30, -1336,
     551,    33, -1336,    24,   546,   546,   643,   465, -1336, -1336,
   -1336,   603, -1336, -1336, -1336,   237, -1336, -1336, -1336,   635,
    1211,   465,  1211,  8929,   465,  1701,   569, -1336,  8634, -1336,
    8634, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336,   220,  8929,  8634,  8250,   608,  1211, -1336,   694,
     773,   465,   620,   125,  8929,   612,  8634,  8811,  8314,    49,
    8929,  1822,   174,   634, -1336, -1336, -1336, -1336,   105,   685,
   -1336, -1336,    84, -1336,    89, -1336,   397,   734,   682, -1336,
    1211, -1336,    30,   444,   690,   288, -1336,  7986,   546,   800,
      33,   713,   494,   546,   457,   728,   743,  1211,   551, -1336,
     318,  1211,   703, -1336, -1336,   757, -1336, -1336,   551,   465,
     770,   829,  1211, -1336,   395, -1336,   574,  8929,   281, -1336,
      25, -1336, -1336,   849, -1336, -1336, -1336,   792, -1336,   809,
   -1336,   258,   821,    52, -1336, -1336,   286, -1336,   824,   787,
     830, -1336,   142, -1336,   392,   833,    58,  8929, -1336,   890,
     576,   800,   253,  1211,   902,   842, -1336,    83,   608,   773,
     465,  8811, -1336,  7142,    58,  8378,   858,  1211,  8442,   252,
   -1336,   901, -1336,   134,  8929, -1336,   890, -1336, -1336,  8929,
     918, -1336,   303,  1211,  1211,  7142,  8634, -1336,   255, -1336,
   -1336, -1336,   309, -1336, -1336,   360,  1107,  1211,   897,   903,
     885, -1336,  8634,   358,   895,   889,   890,  1211,   972, -1336,
   -1336, -1336,  8634,  7986, -1336, -1336,   962,  7986,  8634,  8049,
    2008,  7455,   599,   906,   909, -1336,   929,  1211,  1011,   542,
   -1336,   914,   930,   450, -1336,   922, -1336,  8634,   625, -1336,
     925,   469, -1336, -1336,   469,  8634,   465,   546,   788, -1336,
   -1336, -1336, -1336, -1336,   368,   546,   551,  7142,   697,   950,
     289,  1211,  1028,   999,   936,  2536,   944,  8506,  4582,  4759,
    5033, -1336, -1336, -1336, -1336, -1336, -1336,  8634, -1336,   574,
    8634, -1336, -1336, -1336, -1336,  8634,  1211,  8929, -1336, -1336,
    7142,   574,   955, -1336, -1336,  8929,   952, -1336, -1336, -1336,
   -1336,  1211,  1028,   465,  5458,   800,   957,   945,   800,  1018,
   -1336,   311,  8634,   890,   800,  6602,   326,  1211,  6926,  7250,
      79,  6818,   959,  6818,  1211,  7142,  8634,  7518,   890,  7142,
    7142,  7142,  4886,  5665,  5370,   977, -1336,   490, -1336,  4180,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336,   102, -1336,   974,   984,   136, -1336,   992,   148,   608,
    8811,  8929, -1336,  8929, -1336, -1336,  1071,  7142, -1336,  3193,
     126,   569,  2414,   985,   986,  1001, -1336, -1336, -1336, -1336,
   -1336, -1336,    98, -1336,  1004,  1610, -1336,  1003, -1336, -1336,
     950,  8634, -1336,    83,   409,  1013,  1024,  1211,   422, -1336,
   -1336, -1336, -1336,  1211,   465, -1336,    58, -1336, -1336, -1336,
      58,  7986, -1336, -1336,  1006, -1336,  1008,    74,  1007, -1336,
   -1336,  1016,    97, -1336,  7986,  8634,  1000,  3625,  1211,  1891,
    2170,  7986,   553, -1336, -1336, -1336, -1336,   787, -1336,   185,
   -1336,  1211,   555, -1336,   579,   394,   551,   930, -1336,   835,
   -1336,   930,   546,  2653,  1211,  1037,   546,  1028,  8570,   546,
   -1336,   553,  1026,   295, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336,  1019,  1021,  1042,
   -1336,   787,  1021, -1336,  1046, -1336,  3337, -1336,  1126, -1336,
     576,   569, -1336, -1336,  1032, -1336,  1615,    83, -1336,   465,
     608,    58,  7142,  7142,  6262, -1336,   890,  7250,  6710,   326,
    1211,  7986,    93,  6818,  6818,  1211,  7142,  7581,   890,  7250,
    7250,  7250,  5665,  5370, -1336,  1044, -1336,  5961, -1336, -1336,
   -1336, -1336, -1336,  6032, -1336,  6421, -1336,  6421, -1336,  6306,
      58,   800,   149, -1336,  1051,  7142,  1005,   645,   645,  6602,
     326,   255,  1972,  6818,   498,  6818,   255,  7142,  5665,  5370,
   -1336,    41,  5557, -1336,  1038,  5154, -1336,   755, -1336,  3523,
   -1336, -1336,  1050, -1336,  1052, -1336, -1336,   706,  6076,  1054,
    1053,  1041, -1336,  1211,   742,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  6602,  8929,  8929, -1336,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  5773,  5370,
    1130, -1336,  7986,   959,  7034,  1148,   800, -1336, -1336, -1336,
    7142,  5890, -1336,  8634, -1336, -1336, -1336,   800,  8634,   255,
   -1336, -1336,   351,    83,  1073, -1336,  1107,   897,   787,   317,
   -1336,  1107,   576,   834,   381, -1336,  1078,  1062,  1085,  1090,
   -1336,  7986, -1336,  1058,  7644,  7986, -1336,  1084,  7707, -1336,
     787,  7986, -1336, -1336,   569, -1336,  1096,   841,  1211, -1336,
    1087,  1083,  1101, -1336,  1093, -1336,  4886,   553, -1336, -1336,
    1112,   423, -1336,   619, -1336, -1336,   546, -1336, -1336, -1336,
     930, -1336, -1336, -1336,  1108,  1110,   295,  1111,   689,  1102,
    1113,  8634, -1336,  1211,  1206, -1336,  1211, -1336, -1336,  8693,
    1109, -1336, -1336, -1336, -1336, -1336,   800,  1147,  2001,  6076,
    7250,  6147,  6377, -1336,  1151, -1336,  6421,  6421, -1336,  6306,
     800,   155,  7250,  1160,   772,   772,  1138,  1139,  7250,  7250,
    7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,
    7250,  7250,  7250,  7250,  7250,  7250,  9137,  8929,  8929, -1336,
    7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,
    7250,  5773,  5370,  1213,  1214,   710,  1155,  7142,  7770,   800,
    7986,  8634, -1336,   978,  6262, -1336,  1211,  1181, -1336,  6421,
    6421, -1336,  6306,  1146,  1145,  7986, -1336, -1336,  1972, -1336,
     794,  4015, -1336, -1336,  3523,   742,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  6602,  8929,  8929, -1336,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  5773,
    5370,  1494, -1336,  1568,  1667,  5262,  7142, -1336, -1336,   569,
    1174,  1156,  1258,   121, -1336,  1182,   900,   900,  1260,   749,
     749,  1260,  2001,  1212,  6421,  6421,  6421,  6421,  6421,  6421,
    6421,  6421,  6421,  6421,  6262, -1336, -1336,  6421,  1260,  1260,
     467,   658,   978,  1005,  1005,   645,   645,   645,  1164,  6076,
    1163, -1336,   456,  1228, -1336,  7986,  5961,  1211, -1336,  5909,
   -1336,  1168, -1336, -1336, -1336, -1336,  1186,    83, -1336, -1336,
   -1336,    83, -1336,   952,  7142,   469,  8634, -1336, -1336, -1336,
    8929,  2826,   546,   800,  1268,  1270,  1173,  7986,  1175, -1336,
    1176,  7986,  1178, -1336, -1336, -1336,  7986,  1211, -1336,  1205,
    1912, -1336,  7986, -1336,  1183,  8634, -1336, -1336, -1336,   930,
   -1336,   715,  1184,  1195,   553,  1027, -1336,  1187, -1336,   723,
   -1336, -1336, -1336,   553,  1211,  1289, -1336,  1032, -1336, -1336,
    1287,  2633,  7250,  7250,  7833,  7250,  1076, -1336, -1336,   988,
     988,  1322,  1128,  1128,  1322,  2633,  2263,  6492,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  6492,  6492,  6377, -1336, -1336,
    6492,  1322,  1322,   582,  1572,  1076,  1160,  1160,   772,   772,
     772,  1193,  1218, -1336,   456,   238, -1336,  7986,   774, -1336,
     602,  1219,  1310,  6076,   800,   158, -1336,  7142, -1336,   787,
   -1336, -1336,  1051, -1336,  1211, -1336,  1220,   900,   900,  1260,
     749,   749,  1260,  2001,  1212,  6421,  6421,  6421,  6421,  6421,
    6421,  6421,  6421,  6421,  6421,  6262, -1336, -1336,  6421,  1260,
    1260,   467,   658,   978,  1005,  1005,   645,   645,   645,  1223,
    1224, -1336,   456, -1336,   284, -1336,   291,  6076,  6076, -1336,
   -1336, -1336,  7142, -1336,  7142, -1336,  1474,  7142, -1336, -1336,
    7250,  1244, -1336, -1336, -1336,   800,   576,  1245,  6076,   659,
    1227,  1229, -1336,   799,  1230, -1336,  1211,  1211,  7986,  1232,
    7986,  7986,  1234,  7986, -1336, -1336,  7986, -1336, -1336, -1336,
   -1336,   787, -1336,  1375,  1226,   803, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336,   553,   689,   260, -1336,   447, -1336, -1336,
     689,  1243,  1253, -1336,  1211,  5961,  6147,   800,   160, -1336,
    6147, -1336, -1336, -1336, -1336, -1336, -1336, -1336,    66, -1336,
   -1336,   726, -1336, -1336, -1336,  1211,  7142,  7770,   800,  6076,
    1256,   810, -1336, -1336, -1336,  5773,  5370,  5773,  5370,  6076,
    6076, -1336,  6076,  5961,  7250, -1336, -1336,   576,   813, -1336,
   -1336, -1336, -1336,  4297, -1336,  1289, -1336,  7986,  1237,  7986,
    1239, -1336,  1211, -1336,   636, -1336,   489, -1336, -1336,   689,
    1238,  1211,   636, -1336,   511,  1249,  1107,  1351,   269,  1330,
    7250,  7833,   800,  7250,  7986,  1353, -1336,  1357,  6076, -1336,
    7142,  7142,  1259,  1262,  1264,  1267,  1269, -1336,  5961, -1336,
   -1336,  1271, -1336,  1284,  7986,  7986,  1266,  1341,  1051,   773,
    1211,  1272, -1336,   465,  1342,   773,  1211, -1336, -1336,  1211,
    1289,  1293,   238,  6147, -1336,  7250,  6147, -1336,  7358,   166,
   -1336,  6076,  6076, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
    1376, -1336,  1211,  1298,  1348,   465, -1336,  1300,  1211,  1350,
     465, -1336,  1303,  1381, -1336,  6147, -1336,  6191,  1050,  1052,
   -1336,  1211,   465,  7142,  1286,  1211,  1296,  8634,   465,  1211,
    1299,  1391,  1211, -1336,  1296,  6076, -1336,   465,  8870,   546,
     800,   399,  1299,   465,  8112,   546,   800,  1211,   166,   546,
    1296,  1211,  8752,  1297,  1302,  1384,   482, -1336, -1336,   546,
    1299,  1387,  7896,  1305,  1397,   930, -1336,   166, -1336,   484,
     546,  9047,  1398,   890, -1336,  8811,  1051, -1336, -1336,   930,
     546,  8175,  1402,   890, -1336,  1051, -1336, -1336, -1336, -1336,
     487,  1051,  8988,  1319, -1336,   930,  1051,  1404,  1321, -1336,
   -1336,  1319,   272,  8811,  1325, -1336,  1321,  1051,  7986,  1331,
    1336,  1319,  1329, -1336,  1340,  1321,  1344, -1336, -1336,  1352,
    8811, -1336,  1359,  7986, -1336, -1336
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     4,     0,    13,     1,    11,    17,     0,     0,    13,
       8,   127,    12,    14,     3,    13,   151,    27,     0,     0,
       9,     2,   126,    29,    15,    28,     0,   790,     0,     0,
     791,     0,   111,     0,     0,     0,   494,   793,     0,   150,
     792,     0,     0,    30,    31,    33,    34,    32,    37,    45,
      44,    36,    68,    69,    70,    66,    67,    35,    71,     0,
       0,    72,    64,    65,     0,   490,   493,   793,   792,     0,
      18,     0,   491,     0,     0,     0,   254,   784,   785,   786,
     787,     0,     0,   110,   254,     0,   254,   254,   254,   111,
       0,   152,     0,   269,   271,    59,     0,     0,    50,   267,
       0,     0,     0,     0,   254,   788,     0,    10,     0,    22,
      16,   492,     0,     0,     0,   255,     0,     0,    13,    48,
       0,    13,   105,   255,   255,   255,     0,   254,   270,   272,
      58,     0,   268,   132,    60,     0,   128,   131,    49,     0,
       0,   254,     0,     0,   254,     0,     0,   789,     0,   496,
     294,   497,   495,   777,   778,   779,   780,   782,   781,    19,
     783,    23,     0,     0,     0,     0,   443,     0,   389,     0,
     111,   254,     0,     0,     0,     0,     0,     0,     0,   409,
       0,     0,   372,     0,   365,   390,   366,   391,   274,   449,
     460,   241,     0,   265,     0,   457,   428,   264,     0,   256,
       0,    46,    13,     0,     0,    13,   114,   206,   255,   240,
      13,     0,    13,   255,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    61,    57,     0,   273,    63,     0,   254,
       0,   136,     0,   461,     0,   462,     0,     0,   372,   425,
     255,   423,   426,     0,   908,   908,   908,     0,    42,     0,
     421,     0,   296,     0,   419,   422,     0,   288,   289,   417,
     292,   437,   274,    20,     0,     0,   699,     0,   381,   406,
       0,   240,   373,     0,     0,     0,   392,   456,   443,   111,
     254,     0,   377,   775,   699,     0,   389,     0,     0,     0,
     224,     0,   227,   274,     0,   379,   406,   407,   408,     0,
       0,   371,     0,     0,   788,   775,   416,   275,     0,   459,
     252,   250,     0,   244,   242,     0,   430,     0,   453,     0,
     257,   259,     0,    13,     0,     0,   406,     0,     0,   117,
     108,   115,     0,     0,   297,   320,   318,     0,     0,     0,
       0,   362,     0,     0,   204,   207,     0,     0,   304,   321,
     322,   493,     0,     0,   190,     0,   106,     0,     0,    88,
       0,    13,    79,    77,    13,     0,   254,   255,     0,    54,
     129,    62,   130,    51,     0,   255,     0,   775,     0,   428,
     373,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    43,   285,   286,   287,   284,     0,   410,     0,
       0,   281,   282,   283,   280,   290,   293,     0,    21,    24,
     775,     0,     0,   382,   405,     0,   442,   444,   446,   447,
     400,   788,   374,   254,     0,   240,     0,   454,   240,     0,
     393,     0,     0,   406,   240,   610,   560,   574,   775,   775,
       0,   572,     0,   576,   570,   775,     0,     0,   406,   775,
     775,   775,   775,   775,   775,     0,   616,   559,   561,     0,
     617,   614,   689,   615,   729,   730,   731,   732,   733,   734,
     735,     0,   558,     0,   389,   274,   237,   389,   274,   443,
       0,     0,   380,     0,   378,   385,     0,   775,   369,     0,
     277,     0,     0,     0,   414,   448,   450,   253,   251,   266,
     245,   243,     0,   458,     0,     0,   427,   429,   431,   434,
     428,     0,   440,     0,   264,     0,     0,     0,     0,    94,
      47,   109,   116,     0,   254,   118,   699,   300,   319,   313,
     699,     0,   298,   323,   361,   363,     0,   351,   348,   301,
     349,     0,   338,   193,   205,     0,   310,     0,   788,   337,
       0,     0,     7,   185,   238,   239,   107,    91,    82,    13,
      78,     0,     0,    84,     0,     0,     0,     0,    56,     0,
      53,     0,   255,     0,     0,     0,   255,   464,     0,   255,
     424,     7,     0,   255,   794,   795,   796,   797,   798,   799,
     800,   801,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   802,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   857,   858,   859,   860,
     861,   862,   863,   865,   864,   866,   870,   872,   867,   868,
     869,   871,   874,   876,   838,   873,   875,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   893,   896,   895,
     898,   899,   902,   906,   901,   903,   900,   904,   905,   907,
     897,   889,   891,   888,   887,   916,   890,   892,   894,   911,
     909,   910,   912,   913,   914,   917,   915,   296,   295,     0,
     420,   418,   291,   438,     0,   439,     0,   698,     0,   384,
       0,     0,   394,   195,   230,   396,     0,   455,   399,   254,
     443,   699,   775,   775,   609,   575,   406,   775,   669,   620,
     633,     0,     0,   631,   635,   629,   775,     0,   406,   775,
     775,   775,   775,   775,   675,   619,   621,     0,   676,   673,
     682,   674,   618,     0,   690,   573,   736,   577,   571,   613,
     699,   240,     0,   210,    74,   775,   684,   686,   685,   552,
     502,   516,   151,   514,   150,   518,   512,   775,   775,   775,
     482,     0,    12,   474,     0,   775,   471,   501,   503,   469,
     557,   556,   738,   478,   739,   500,   714,   483,   488,     0,
       0,   483,   774,   788,   719,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   607,     0,     0,   563,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
       0,   388,     0,     0,   775,     0,   240,   225,   226,   383,
     775,     0,   370,   416,   278,   375,    38,   240,   415,     0,
     248,   246,     0,   456,     0,   436,     0,   453,   452,     0,
     260,   430,     0,   102,    13,    92,     0,     0,     0,     0,
     299,     0,   303,   353,   352,     0,   302,   340,   339,   208,
     209,     0,   305,   321,     0,   336,     0,     0,     0,   331,
     333,     0,   324,   307,     0,   311,   775,     6,    83,    89,
       0,    13,    80,    13,   103,   133,   255,   187,    55,   186,
       0,    40,   134,   135,     0,     0,   255,     0,    13,     0,
       0,     0,   411,     0,     0,    39,     0,   445,   376,     0,
       0,   402,   404,   401,   403,   395,   240,     0,   688,   700,
     775,   707,   668,   634,     0,   683,   632,   636,   630,   672,
     240,     0,   775,   677,   679,   678,     0,     0,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   666,     0,     0,   622,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,     0,   763,    13,     0,   775,     0,   240,
       0,     0,   212,   687,   551,   517,     0,   153,   475,   515,
     519,   513,   555,     0,     0,     0,   479,   473,   151,   476,
     501,     0,   466,   472,   468,   719,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   549,     0,     0,   505,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,     0,   480,     0,     0,   775,   775,   569,   568,     0,
       0,     0,     0,   716,   723,   725,   600,   601,   595,   591,
     592,   596,   590,   589,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   608,   611,   612,   578,   593,   594,
     597,   598,   599,   602,   603,   604,   605,   606,     0,   486,
       0,   565,   564,     0,   772,     0,     0,     0,   398,     0,
     387,     0,   276,   451,   249,   247,     0,   456,   432,   441,
     263,     0,   262,   261,   775,    13,   416,    97,    93,    95,
       0,     0,   255,   240,     0,     0,   359,     0,   354,   364,
     346,     0,   341,   350,   312,   309,     0,     0,   326,   325,
     334,   306,     0,   308,     0,     0,    81,    85,   104,     0,
     188,    13,     0,     0,     7,   182,   177,     0,   173,    13,
     179,   180,   171,     7,     0,   699,   228,   230,   194,   397,
       0,   681,   775,   775,     0,   775,   680,   627,   628,   659,
     660,   654,   650,   651,   655,   649,   648,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   667,   670,   671,
     637,   652,   653,   656,   657,   658,   661,   662,   663,   664,
     665,     0,     0,   624,   623,     0,   748,     0,    13,   752,
       0,   755,     0,   701,   240,     0,   703,   775,   211,    73,
     510,   511,    74,   477,   788,   481,     0,   542,   543,   537,
     533,   534,   538,   532,   531,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   550,   553,   554,   520,   535,
     536,   539,   540,   541,   544,   545,   546,   547,   548,     0,
       0,   507,   506,   746,   740,   747,   741,   489,   715,   498,
     737,   499,   775,   562,   775,   718,   717,   775,   566,   567,
     775,     0,   770,   367,   386,   240,     0,     0,   101,     0,
       0,     0,   122,     0,     0,   121,     0,     0,   360,   355,
       0,   347,   342,     0,   330,   327,     0,   335,   332,   328,
     465,    87,   189,   151,     0,    13,   140,   142,   143,   144,
     156,   157,   172,     7,    13,   181,   178,   151,   167,   176,
      13,   412,     0,   229,     0,     0,   708,   240,     0,   710,
     709,   625,   626,   767,   768,   769,   764,   316,   762,   749,
     753,     0,   754,   751,   756,     0,   775,     0,   240,   702,
      76,     0,   504,   508,   509,   775,   775,   775,   775,   727,
     728,   724,   726,     0,   775,   279,   433,     0,    13,    98,
     100,   119,   123,     0,   120,   699,   314,   356,   357,   343,
     344,   329,     0,   150,   151,   145,     0,   137,   141,    13,
       0,     0,   151,   183,     0,     0,   430,     0,   699,   765,
     775,     0,   240,   775,     0,     0,   750,   697,   704,   706,
     775,   775,     0,     0,     0,     0,     0,   773,     0,   435,
      99,     0,   124,     0,   358,   345,     0,     0,    74,   111,
       0,     0,   168,   254,     0,   111,     0,   169,   413,     0,
     699,     0,     0,   711,   713,   775,   761,   317,   775,     0,
     691,   705,    75,   776,   742,   744,   743,   745,   771,   125,
       0,   149,     0,   148,     0,   254,   170,     0,     0,     0,
     254,   368,     0,     0,   766,   712,   759,   757,   760,   758,
     696,     0,   254,   775,     0,     0,     0,     0,   254,     0,
       0,     0,     0,   315,     0,   147,   146,   254,   223,   255,
     240,     0,     0,   254,   206,   255,   240,     0,   692,   255,
       0,   405,   406,     0,   221,     0,     0,   192,   184,   255,
       0,   320,   406,     0,     0,     0,   191,   693,   694,     0,
     255,   405,     0,   406,   203,   222,    74,   158,   161,     0,
     255,   405,     0,   406,   199,    74,   164,   695,   159,   162,
       0,    74,     0,   220,   165,     0,    74,     0,   216,   160,
     163,   220,    74,   217,     0,   166,   216,    74,   213,     0,
       0,   220,   218,   200,     0,   216,   214,   196,   201,     0,
     219,   197,     0,   215,   202,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1336, -1336, -1336,  -551,   106,    12,  -427,  -404,    20,    63,
   -1336,    78, -1336,    13,  1448, -1336,     7, -1336,    42, -1104,
   -1336, -1336, -1336, -1336, -1336, -1207, -1336, -1336, -1336, -1336,
    -335,  -869, -1336,   926, -1336, -1336,   607, -1336, -1336, -1336,
   -1336,   -84,  1285, -1336,  1291, -1336,  1166, -1336, -1336, -1336,
      43,  -158, -1336, -1336, -1336, -1336, -1336,   132, -1336, -1336,
   -1336, -1000, -1336, -1336, -1336, -1336, -1336, -1336,  -992,   299,
   -1336, -1336, -1336, -1336,  1417, -1336,  -148, -1086, -1254, -1336,
   -1336, -1336, -1336,   -63, -1108,  -529,  -429,   486, -1068, -1335,
   -1336,  -280,  -412,   297, -1336,  -261,   -37,   -27, -1336, -1336,
     994, -1336,  1197, -1336,  -126,  -103, -1336, -1336,   795,  -101,
   -1336,  -514,   963,   333, -1336, -1336,   964,  -834, -1336,  -836,
    -105,   -61,   790,  -223,   791, -1336, -1336,  -290, -1336, -1336,
   -1336,  -786,   -69,  -131,  1121, -1336,  1142,  -301,  -839, -1336,
     654,   -71,  -362,  -303,  -222,   652,  -259, -1336, -1336,   663,
    -797,   -51,  -289,  2885,  -108,  -547,  1086,   627, -1336,   741,
    -420,  -949,  -387,   -16,     1,  2945,  -749,  3027,  1143, -1336,
    -439,  3253, -1336,  -277,  1105,   144,   811,    95,  -647,   513,
   -1336, -1336,   233, -1336,  3527, -1336,    53, -1336, -1336,   302,
     304, -1336, -1336, -1172, -1170,    62, -1336, -1336, -1336, -1336,
   -1336, -1336,  2157,   -18,  -273,  1441, -1336,   695, -1336,  -432,
    -144,  -106,  -142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,   916,   917,    10,    11,    12,    13,    69,
     162,    14,    15,   561,    17,    43,   793,    45,    46,    47,
      48,    49,    50,    97,    51,  1022,  1472,    52,   363,   213,
     562,   563,   358,   359,    53,   518,   519,  1157,    54,    55,
      56,    82,   204,   205,   206,   522,   329,  1162,  1163,    23,
     135,   136,    57,   379,    58,  1364,  1365,  1366,  1367,  1544,
    1368,    59,    60,  1369,  1370,  1371,  1196,    61,  1197,  1198,
    1199,  1377,  1200,  1201,    62,    63,   208,  1565,  1559,   209,
     425,  1566,  1560,   343,   344,   345,  1265,   773,  1629,  1624,
    1573,   289,   290,   950,   291,   354,   275,   198,   199,   320,
     321,   322,   192,    98,   182,   307,   256,   257,   398,   346,
    1398,   347,   348,   909,   910,   911,   541,   542,   536,   537,
     250,   184,   185,   276,   186,   187,   953,   415,   299,   251,
     252,   493,   494,   259,   254,   240,   241,   318,   506,   507,
     508,   708,   261,   193,   271,   416,   509,   309,   495,   512,
     426,   427,   195,   455,   419,   553,   456,   794,   795,   796,
     806,  1128,   811,   457,    65,   458,   799,   808,   757,   758,
     460,   461,  1510,   412,   462,  1266,   760,  1389,   809,  1091,
    1092,  1093,  1094,  1325,   463,   803,   804,   464,  1258,  1259,
    1260,  1261,  1465,   465,   466,  1396,   467,   468,   469,   470,
     471,  1037,   472,   160,   146,    66,   699,   388,   700,   701,
     702,   703,   704
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   431,   247,   151,   249,   126,   483,   473,   183,   499,
     420,   417,   724,   800,    83,   899,    16,   253,   772,   238,
     927,    20,    16,    44,   929,   791,   503,    72,    16,   564,
     938,   491,    24,   266,   810,   908,   523,   243,   230,   115,
     248,   272,  1152,  1041,   713,   284,  1044,   120,   792,   123,
     124,   125,  1187,  1343,  1187,  1166,   428,   430,   265,   865,
     268,  1170,  1251,   194,   372,  1410,   807,   145,   857,   282,
     367,    83,   292,   295,   111,   300,  1146,  1141,   576,   260,
     375,   258,    71,  1394,   239,  1395,   274,    21,   310,   434,
     218,  1376,   -25,   313,   399,   893,   214,   215,   216,  1035,
     411,   200,   870,   737,   228,   976,   380,   231,   148,     9,
     382,   -26,   302,   297,   197,   197,     1,   139,   897,     6,
     189,  1463,     5,     6,     7,     5,     6,     7,   383,   148,
    1309,   203,   384,   385,    16,   278,   140,   148,   298,   148,
     212,  1033,  -720,   732,   382,   148,     8,   422,   721,   108,
       8,   148,    83,     8,  -113,   452,   852,   -26,   775,  1018,
     400,   853,   413,   109,   725,  1214,   400,   728,  1407,   148,
    1461,  1464,   161,   733,   220,   279,   292,     4,   280,   190,
     268,   352,   201,   295,   447,     6,   360,   854,   311,   482,
     382,   349,   376,   314,   484,   429,   894,   303,   747,   211,
     722,   526,   871,     5,     6,     7,   312,   530,   150,   877,
     372,   315,     8,   386,    20,   203,   -25,   515,   203,   898,
     872,   306,    20,    16,   202,   357,   557,   210,   572,   150,
     281,     8,   527,  -231,   565,  -235,   529,   150,   532,   150,
     535,   540,   863,  1326,   407,   150,   875,  -233,   555,   888,
     306,   150,   306,   889,  1019,   577,   583,   856,   306,  1445,
    1215,    83,   393,  1408,   306,  1462,   394,   148,   374,   150,
     395,  1020,   148,   382,   711,   904,   303,  1020,     6,   221,
    1020,  1523,  1020,  -792,    33,   382,  1630,   304,   355,   948,
     401,   709,   233,   438,   402,   273,  1639,    18,   403,    27,
    1569,   731,   715,   717,   303,     8,   918,   106,    19,    30,
     719,   411,   303,   497,   106,   770,  1590,   349,   971,   292,
     117,   349,    22,   349,   239,   349,   349,   409,   707,   566,
    1394,  1349,  1395,   977,   712,  -463,   517,  1352,   149,    67,
     567,   263,   264,  -464,    27,   118,   774,    68,   571,    73,
    1337,   235,   452,   800,    30,  1144,   800,   479,   711,   222,
     221,   223,   396,  1446,   500,   807,   421,   150,   791,  1034,
    1340,  1021,   150,  -792,   480,   292,   858,  1454,   859,   382,
     878,     6,  1450,  1190,    67,   197,    27,   864,  1455,  1613,
     404,   792,    68,  1177,   304,    27,    30,   189,  1618,  1415,
    1416,   807,   421,   400,  1621,    30,  1417,  1418,     8,  1626,
     221,   372,  -112,   498,   900,  1631,   730,  -153,   926,   121,
    1635,  1150,   755,   755,   488,   489,    67,    27,   122,  1130,
     890,   349,   103,   480,    68,    67,   797,    30,   503,  1151,
     368,    91,   369,    68,  1487,   279,   960,   936,   280,   540,
     915,     6,  1494,   164,   957,  1145,   190,  1491,   972,   165,
     166,   947,   879,   319,   501,   105,  1473,    67,  1475,   104,
     815,   816,  1175,   167,     6,    68,  1579,   800,     8,   106,
     -96,    27,   -96,   326,   133,    27,   168,   887,   169,   791,
     569,    30,   570,  1016,  1600,    30,   316,   327,   317,   107,
     170,     8,   400,   171,   172,  1158,   955,   400,   956,   834,
    1017,  -258,   792,   408,  1438,   349,     6,   925,   113,  1440,
    1636,    67,  1578,  -258,   328,    67,  1451,  1443,   349,    68,
     173,   903,  -258,    68,   349,   349,  1452,  1207,   174,  1489,
    1089,   175,  1490,     8,   884,   930,   885,  1186,    89,   934,
     110,    90,   937,   176,  -154,   177,   940,   178,  1634,  1187,
     179,  1495,     6,   554,  1496,   180,   181,  1642,   114,   499,
     134,   361,   357,   841,   842,   843,   844,   845,   846,   847,
     362,   713,   848,   849,   850,   978,   979,     6,  1257,     8,
     142,   -86,  1252,   -86,   382,  1138,   552,   381,   552,   381,
     382,   552,   332,   813,   814,  1597,  1142,  1608,   333,    27,
    1619,    27,   452,   233,     8,   -90,   -90,  1498,   954,    30,
     538,    30,    26,   417,   997,   138,   153,   154,   155,   156,
      77,    78,    79,    80,    27,   334,   197,    28,    27,   143,
     964,   133,  1362,  1374,    30,     5,   774,     7,    30,    67,
     157,    67,  1380,    92,   100,   548,   549,    68,   550,    68,
    1310,   815,   816,   335,   163,    27,   908,   207,    93,   336,
      27,    27,   235,    36,    67,    30,   158,   921,    67,   922,
      30,    30,    68,   244,   245,   246,    68,   337,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1209,   217,  1011,  1012,  1013,
     834,   923,   338,   924,    94,    67,   339,   270,   340,  1213,
      67,    67,     6,    68,   341,   342,  1443,   273,    68,    68,
     539,   755,   755,   277,  1402,   349,  1403,   219,   283,  1115,
    1116,   349,    27,   755,   755,   755,   305,   711,    27,     8,
      95,   133,    30,  1188,    96,   224,   558,   559,    30,   225,
     382,  1133,   815,   816,   817,   382,   382,   820,  1267,  1537,
     848,   849,   850,  -722,  1363,   842,   843,   844,   845,   846,
     847,  1090,    67,   848,   849,   850,  1040,    27,    67,   797,
      68,  1428,     6,  1429,   308,  1388,    68,    30,   319,  1028,
     535,   834,    27,  1169,   540,   133,   323,  1173,   574,  1039,
    1174,    27,    30,     6,    77,    78,    79,    80,     6,     8,
     711,    30,    24,  -174,   330,    89,     6,    67,    90,   100,
    1339,  -154,  1449,    27,   353,    68,   133,   371,  1085,  1086,
       8,  1257,    67,    30,  1256,     8,   349,   356,   755,  -139,
      68,    67,   364,     8,   292,   365,   101,  -175,  1402,    68,
    1466,  1132,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   503,    67,   848,   849,   850,     6,   813,  1045,
      27,    68,   377,   133,    27,   349,    27,   128,   349,   349,
      30,   373,   349,   378,    30,   349,    30,  1011,  1012,  1013,
    1269,    27,  1238,  1239,     8,   400,     6,   517,  1399,  1189,
     797,    30,  1345,   387,   899,   335,     6,  1274,  1045,  1193,
      67,   336,   568,   129,    67,   391,    67,   774,    68,   774,
    1432,  1433,    68,     8,    68,   245,   246,  -138,  1382,    20,
      36,    67,   392,     8,  1272,   410,  1154,  1480,  1363,    68,
     389,   390,   834,   397,   755,  1319,   405,  1321,  1155,   130,
    1156,  1195,   406,   131,   414,   423,   755,  -232,   424,   928,
    1296,  1297,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   815,   816,  1320,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,    27,  1474,   189,  1476,   511,
     481,  1411,   349,  1406,   349,    30,   513,   514,   843,   844,
     845,   846,   847,   521,  1254,   848,   849,   850,   520,   349,
     834,    77,    78,    79,    80,   327,   528,   543,   545,  1598,
     997,   544,  1388,   547,  1331,    67,    81,   485,  1606,   551,
     486,   487,  1609,    68,   552,  1273,   556,   834,   560,   316,
      26,   303,  1614,   578,  1361,  1341,   190,   579,   581,   718,
     720,   726,    27,  1620,   191,    28,   535,   727,  1625,   800,
     540,   729,    30,   452,  1425,  1354,   812,  1426,   855,   978,
     979,  1359,  1312,  -236,  1314,  1316,   843,   844,   845,   846,
     847,  -234,   860,   848,   849,   850,  1006,  1007,  1008,  1009,
    1010,    36,    67,  1011,  1012,  1013,   867,   873,   868,   869,
    1375,   876,   881,   774,   899,   845,   846,   847,   997,   349,
     848,   849,   850,   882,    27,   901,  1460,   892,   891,   895,
     381,   978,   979,   980,    30,  1344,   983,   896,   933,  1486,
     939,   941,    27,   943,   233,   349,   944,  1470,   407,   946,
    1021,   349,    30,    74,   949,   349,  1397,   813,  1483,  1131,
     349,   504,  1042,  1085,    67,    27,   349,  1083,  1479,  1084,
     997,  1137,    68,  1087,  1088,    30,  1147,  1160,  1161,    64,
    1167,  1501,    67,   857,  1006,  1007,  1008,  1009,  1010,  1164,
      68,  1011,  1012,  1013,  1165,  1176,   755,   755,   349,   755,
    1182,  1505,   997,   235,    36,    67,  1171,  1181,   505,  1180,
     382,  1185,  1195,    68,  1183,   815,   816,   817,   818,   819,
     820,   821,  1191,  1532,  1192,  1194,  1202,  1203,   857,  1204,
    1208,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,   349,  1253,  1011,  1012,  1013,    27,  1169,    27,   535,
    1173,  1210,   540,  1212,   834,  1441,    30,  1217,    30,  1262,
    1218,    91,  1255,   815,   816,  1270,  1271,  1319,  1575,  1321,
    1008,  1009,  1010,  1322,  1584,  1011,  1012,  1013,  1574,  1324,
    1323,  1327,  1592,  1328,  1329,  1330,    67,    36,    67,  1335,
    1336,  1346,  1602,  1347,    68,  1348,    68,  1350,  1351,  1577,
    1353,   382,   834,  1612,  1356,  1586,   774,  1360,  1372,  1373,
    1384,  1378,  1391,  1617,   755,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   978,   979,   848,   849,   850,
     382,   411,   349,  1405,   349,   349,  1169,   349,  1173,  1392,
     349,  1404,  1413,  1632,  1412,  1414,  1424,    64,  1430,  1427,
    1447,  1456,  1431,  1434,  1437,  1500,  1439,  1457,  1471,  1484,
     774,  1485,  1492,  1507,   997,   840,   841,   842,   843,   844,
     845,   846,   847,  1497,  1499,   848,   849,   850,  1502,  1508,
    1509,  1514,  1513,  1169,  1173,  1515,  1516,  1195,  1520,  1521,
    1517,   349,  1519,  1195,  1522,  1528,  1526,  1533,    26,  1541,
    1543,  1545,  1547,  1549,  1552,  1524,  1540,  1551,   755,  1556,
      27,  1529,  1558,    28,  1567,  1564,  1561,   349,  1594,  1453,
      30,   349,  1596,   349,  1595,  -405,  1604,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1605,  1611,  1011,  1012,  1013,
    1616,  1623,  1627,  1628,   755,   349,  1633,   755,   349,    36,
      67,  1640,  1637,   292,  1442,  1443,  1527,  1638,    68,    70,
      70,  1641,  1195,    25,  1444,  1588,  1643,   295,   349,   349,
      75,    83,    76,  1644,    84,    85,    86,    83,    87,    88,
    1645,   532,    99,   102,  1607,   919,   482,   325,  1546,   755,
     292,  1159,   797,  1550,   525,  -721,   331,  1448,  1379,   119,
     890,  1583,   942,  1090,  1383,  1554,  1268,   859,   880,    27,
     902,  1562,   502,  1358,   914,   112,   951,   952,   292,    30,
    1570,   710,   116,  1311,   754,   754,  1580,   580,   766,    27,
    1148,   127,  1576,   132,  1153,   292,  1043,   137,  1585,    30,
    1149,   141,  1589,  1184,   144,   764,   147,   152,   349,    67,
      70,  1469,  1599,   965,   188,   196,  1504,    68,  1276,  1421,
    1400,  1539,  1401,  1610,  1534,     0,   349,     0,    36,    67,
       0,     0,   137,  1615,     0,   978,   979,    68,     0,     0,
     226,   227,   763,   229,   188,   349,   188,     0,     0,   188,
       0,   262,     0,     0,     0,     0,     0,  1313,     0,     0,
       0,     0,     0,    27,   188,   188,   188,     0,   188,     0,
       0,     0,   349,    30,   997,   188,     0,   188,   293,   188,
       0,   188,   188,     0,     0,   166,     0,   349,     0,     0,
       0,     0,     0,   381,     0,     0,     0,     0,   381,     0,
       0,   324,    36,    67,     0,    27,     0,   233,   351,     0,
      27,    68,     0,     0,     0,    30,     0,     0,   366,     0,
      30,     0,   370,   137,   874,   170,   137,     0,   171,     0,
       0,     0,     0,   188,     0,     0,     0,   188,   188,  1005,
    1006,  1007,  1008,  1009,  1010,    67,     0,  1011,  1012,  1013,
      67,     0,     0,    68,     0,   173,  1315,     0,    68,     0,
       0,     0,    27,     0,     0,    70,   235,     0,   188,     0,
     165,   188,    30,     0,   188,     0,     0,     0,     0,     0,
     177,     0,   293,     0,   232,     0,   475,     0,   476,   478,
       0,     0,     0,     0,     0,   188,    27,   168,   233,   169,
     188,    36,    67,     0,   490,   147,    30,   188,     0,     0,
      68,   170,     0,   196,   171,   172,   196,   188,   510,     0,
       0,     0,     0,   188,     0,     0,     0,     0,   524,     0,
       0,     0,     0,   188,   351,     0,    67,     0,   351,   188,
     351,   234,   351,   351,    68,     0,     0,     0,   546,   174,
       0,     0,   175,     0,   188,     0,     0,   235,   188,     0,
       0,     0,     0,     0,     0,     0,   188,     0,   178,   137,
       0,   179,     0,     0,   236,     0,   180,   237,     0,   575,
       0,     0,   188,   754,   754,   164,   188,     0,   188,     0,
       0,   165,   166,     0,     0,   754,   754,   754,   262,     0,
     188,   188,     0,  1014,     0,   167,   262,   714,   188,     0,
       0,     0,   188,     0,     0,     0,   188,    27,   168,   233,
     169,     0,   147,     0,     0,   293,     0,    30,     0,     0,
     766,     0,   170,   188,     0,   171,   172,  1036,   735,     0,
     961,   962,     0,     0,     0,   768,     0,   188,   351,     0,
       0,     0,   973,   974,   975,     0,     0,    67,     0,     0,
       0,     0,   173,     0,     0,    68,     0,     0,     0,     0,
     174,     0,   905,   175,     0,     0,     0,     0,   235,     0,
     906,   293,   188,     0,   188,   176,    27,   177,     0,   178,
     188,     0,   179,  1357,     0,     0,    30,   180,   181,  1134,
     754,   906,     0,   301,     0,     0,   188,    27,     0,     0,
       0,     0,   188,     0,     0,   335,     0,    30,   883,     0,
       0,   336,     0,     0,   886,     0,    67,     0,     0,     0,
       0,     0,   351,     0,    68,     0,   335,     0,     0,   907,
       0,     0,   336,     0,     0,   351,   188,    67,     0,   147,
     912,   351,   351,     0,     0,    68,     0,  1136,     0,     0,
     907,     0,   920,     0,   815,   816,   817,   818,   819,   820,
     137,    29,     0,     0,     0,   932,     0,     0,     0,   188,
       0,    31,    32,     0,     0,    33,     0,     0,  -155,     0,
       0,     0,     0,     0,    34,   153,   154,   155,   156,    77,
      78,    79,    80,   834,     0,    35,   754,  1026,     0,     0,
       0,    38,    39,     0,     0,  1027,    41,     0,   754,   157,
       0,    42,     0,     0,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,     0,     0,   158,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,     0,     0,     0,
       0,     0,     0,  1211,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,     0,  1216,   848,   849,   850,     0,
       0,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
       0,     0,     0,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,     0,     0,     0,     0,     0,     0,
       0,   188,     0,     0,     0,     0,     0,   188,     0,     0,
       0,     0,     0,   332,     0,     0,     0,     0,     0,   333,
       0,   963,   351,     0,     0,     0,   968,     0,   351,     0,
       0,   538,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,   334,     0,    28,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,   157,  1332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,     0,     0,     0,     0,     0,
     336,     0,     0,     0,    36,    67,     0,   158,     0,     0,
       0,     0,     0,    68,   147,  1095,     0,     0,   337,     0,
       0,     0,     0,     0,     0,   159,   978,   979,   980,   981,
     982,   983,   984,   338,     0,   188,   188,   339,     0,   340,
       0,     0,     0,     0,     0,   341,   342,     0,     0,     0,
       0,   913,     0,   351,     0,     0,     0,     0,   754,   754,
       0,   754,     0,     0,   188,   997,     0,     0,     0,   188,
       0,     0,     0,   196,     0,     0,     0,   188,     0,     0,
       0,     0,   188,   188,     0,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,   351,   351,     0,     0,   351,
       0,  1393,   351,     0,     0,     0,     0,     0,  1178,  1179,
       0,     0,     0,     0,     0,  1385,  1386,     0,  1390,     0,
       0,     0,     0,     0,   350,     0,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,
    1013,     0,   262,     0,   714,     0,     0,  1205,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   754,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,     0,     0,   188,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   834,     0,     0,   351,
       0,   351,   188,     0,     0,     0,     0,    87,     0,     0,
       0,  1459,     0,  1423,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1095,     0,     0,     0,
     350,     0,     0,     0,   350,     0,   350,   533,   350,   350,
       0,     0,     0,     0,     0,     0,   188,   188,     0,  1477,
     754,     0,     0,   835,     0,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,     0,     0,   848,
     849,   850,     0,     0,     0,     0,     0,   866,     0,     0,
       0,     0,     0,     0,     0,   165,   754,     0,     0,   754,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,  1518,     0,     0,  1478,     0,     0,
       0,    27,   168,   233,   169,     0,   351,     0,  1333,     0,
       0,    30,     0,     0,     0,     0,   170,     0,  1393,   171,
     172,   754,     0,     0,  1536,   762,   762,   188,     0,     0,
       0,   188,   351,  1503,   350,     0,  1506,     0,   351,   805,
       0,    67,   351,     0,     0,     0,   234,   351,  1355,    68,
       0,   912,     0,   351,   174,     0,   188,   175,     0,     0,
       0,     0,   235,     0,     0,     0,   978,   979,   980,   981,
     982,   983,     0,   178,     0,  1381,   179,     0,  1535,     0,
       0,   180,     0,     0,     0,   351,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   997,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,   834,     0,     0,   351,     0,
       0,   350,     0,     0,   350,     0,     0,   350,   350,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,
    1013,     0,   835,     0,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,     0,  1095,   848,   849,
     850,     0,     0,     0,     0,     0,   931,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1435,  1436,   351,
       0,   351,   351,     0,   351,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1458,     0,     0,     0,   332,
       0,     0,     0,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1467,     0,   351,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,     0,    28,     0,     0,     0,   188,     0,
       0,    30,     0,     0,   351,     0,     0,   157,   351,     0,
     351,     0,     0,   196,     0,  1488,     0,     0,     0,     0,
     335,     0,  1493,   102,   762,   762,   336,   188,   350,     0,
      36,    67,   351,   158,   350,   351,   762,   762,   762,    68,
       0,     0,     0,     0,   337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,   351,     0,     0,   338,
       0,  1525,     0,   339,     0,   340,     0,  1530,     0,     0,
    1531,   341,   342,     0,     0,     0,     0,  1342,     0,   805,
       0,     0,   805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1542,     0,    26,     0,     0,     0,  1548,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,  1553,     0,     0,     0,  1557,    30,   188,     0,
    1563,    31,    32,  1568,     0,    33,     0,     0,  -155,   293,
       0,     0,     0,     0,    34,   351,     0,     0,  1587,   350,
       0,   762,   476,   478,     0,    35,    36,    37,     0,     0,
       0,    38,    39,   351,     0,    40,    41,     0,     0,     0,
     242,    42,   188,   255,     0,   255,   293,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,   350,   255,
     269,   350,   350,   188,     0,   350,     0,     0,   350,     0,
       0,   255,     0,   296,   293,     0,   255,     0,     0,   351,
       0,     0,     0,   805,     0,     0,     0,     0,     0,     0,
       0,   293,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,     0,     0,     0,     0,   762,   762,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   762,   762,   762,   762,
     762,   762,   762,   762,     0,   418,     0,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   762,   762,     0,     0,
     269,     0,     0,   296,     0,   350,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,   350,   496,     0,     0,   164,     0,     0,     0,
       0,   418,   165,   166,     0,     0,     0,   516,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   255,     0,     0,
       0,     0,     0,   255,     0,     0,     0,     0,    27,   168,
     233,   169,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,   255,   170,     0,     0,   171,   172,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
     242,     0,   255,   173,     0,     0,    68,     0,     0,     0,
       0,   174,   255,     0,   175,   255,     0,     0,     0,   235,
     255,     0,   350,     0,     0,     0,   176,     0,   177,     0,
     178,     0,     0,   179,     0,     0,     0,     0,   180,   181,
     459,     0,     0,     0,   862,     0,     0,   255,   350,     0,
       0,     0,     0,     0,   350,     0,     0,     0,   350,     0,
       0,   255,   492,   350,     0,     0,     0,     0,     0,   350,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   762,
     762,   350,   762,     0,   255,     0,     0,     0,     0,   834,
       0,     0,     0,   756,   756,     0,     0,     0,     0,     0,
     418,     0,     0,     0,     0,     0,   255,   798,     0,     0,
       0,     0,     0,     0,   573,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,     0,   835,   716,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
       0,     0,   848,   849,   850,     0,     0,     0,     0,     0,
     945,     0,   734,   255,     0,     0,     0,     0,   765,     0,
     767,     0,   769,     0,     0,     0,   776,   777,   778,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,   350,   350,     0,
     350,     0,     0,   350,   861,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,  1065,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,   350,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,   418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,   350,     0,
     762,   350,  1066,     0,  1067,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,     0,     0,  1079,  1080,
    1081,   350,   350,     0,     0,     0,  1082,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,     0,   762,    28,     0,   805,  1025,     0,     0,     0,
      30,  1031,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,   756,   756,     0,     0,     0,     0,     0,     0,
       0,   759,   759,     0,   756,   756,   756,     0,     0,    36,
      67,     0,   158,     0,     0,   801,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,     0,     0,   798,     0,   350,
     798,     0,     0,     0,     0,     0,     0,     0,   255,     0,
       0,     0,     0,   255,  1143,     0,     0,     0,   350,   958,
     959,   418,     0,     0,     0,     0,   418,   418,     0,     0,
     966,   967,     0,   969,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   756,
     350,     0,  1023,     0,     0,     0,  1024,     0,     0,     0,
    1029,     0,  1030,     0,  1032,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,   798,     0,     0,  1117,  1118,  1119,  1120,  1121,  1122,
    1123,  1124,  1125,  1126,  1127,  1129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   756,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,     0,     0,
       0,     0,     0,   756,   756,   756,   756,   756,   756,   756,
     756,   756,   756,   756,   756,   756,   756,   756,   756,   756,
     756,   756,     0,     0,     0,   756,   756,   756,   756,   756,
     756,   756,   756,   756,   756,   756,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   761,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   802,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     759,   759,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   759,   759,   759,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,     0,  1129,     0,
       0,   255,     0,     0,  1263,   801,     0,     0,   801,     0,
       0,     0,     0,     0,     0,     0,     0,  1065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,  1277,  1278,  1279,  1280,  1281,  1282,  1283,
    1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,  1292,  1293,
    1294,  1295,     0,     0,     0,  1298,  1299,  1300,  1301,  1302,
    1303,  1304,  1305,  1306,  1307,  1308,  1129,   759,     0,     0,
       0,     0,  1317,  1318,  1066,     0,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,     0,     0,
    1079,  1080,  1081,     0,     0,     0,     0,     0,  1275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,   756,     0,
     756,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1338,     0,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   759,     0,     0,     0,     0,     0,     0,
       0,   418,   834,     0,     0,   759,     0,     0,     0,     0,
       0,   759,   759,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   759,   759,   759,   759,   759,   759,
       0,     0,     0,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   761,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   756,   761,   761,   761,   835,
       0,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,     0,  1409,   848,   849,   850,     0,     0,
     332,   851,     0,     0,     0,     0,   333,     0,     0,     0,
       0,     0,   418,     0,     0,     0,     0,     0,     0,  1481,
      26,     0,   802,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,   334,     0,    28,     0,     0,     0,     0,
       0,   418,    30,     0,     0,     0,     0,     0,   157,  1419,
       0,  1420,     0,     0,  1422,     0,     0,     0,     0,     0,
       0,   335,     0,     0,     0,     0,     0,   336,     0,   756,
       0,    36,    67,     0,   158,     0,     0,     0,     0,     0,
      68,   761,     0,     0,     0,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,     0,     0,     0,   339,   756,   340,     0,   756,     0,
       0,     0,   341,   342,     0,     0,     0,     0,  1482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,  1468,     0,     0,     0,     0,     0,     0,
       0,     0,  1129,   802,  1129,     0,     0,     0,     0,     0,
     756,     0,     0,   798,     0,     0,     0,  1593,     0,     0,
       0,     0,     0,     0,     0,   759,   759,  1603,   759,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1511,  1512,   761,
       0,     0,     0,     0,     0,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,     0,     0,     0,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   759,     0,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   759,   676,     0,
       0,   677,     0,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   244,   245,   246,   691,
       0,     0,   692,     0,   693,   694,   695,   696,   697,   698,
       0,     0,     0,   759,     0,     0,   759,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   761,
     761,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   759,     0,
       0,   801,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,     0,   676,     0,   761,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   244,   245,   246,   691,     0,   705,   692,
       0,   693,   694,     0,   696,   697,   698,     0,     0,   432,
       0,     0,     0,     0,     0,   433,   434,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   779,     0,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,     0,   233,   780,    29,     0,     0,     0,     0,
     781,    30,     0,     0,     0,    31,    32,   157,     0,    33,
       0,   438,  -155,     0,   -13,     0,     0,   439,    34,   440,
       0,   761,     0,     0,   782,     0,     0,   783,     0,    35,
      36,    37,     0,   158,  -151,    38,   784,     0,   785,    40,
      41,     0,   786,     0,   787,    42,     0,     0,     0,     6,
       0,     0,   235,     0,     0,     0,     0,   761,     0,   446,
     761,   447,     0,   448,     0,   449,   450,     0,     0,   451,
     -13,   788,   789,     0,     0,     0,     8,     0,     0,   790,
    -470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   761,     0,     0,  1538,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,     0,   676,
       0,     0,   677,     0,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   244,   245,   246,
     691,     0,     0,   692,   706,   693,   694,   432,   696,   697,
     698,     0,     0,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   779,     0,    26,     0,     0,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
       0,   233,   780,    29,     0,     0,     0,     0,   781,    30,
       0,     0,     0,    31,    32,   157,     0,    33,     0,   438,
    -155,     0,   -13,     0,     0,   439,    34,   440,     0,     0,
       0,     0,   782,     0,     0,   783,     0,    35,    36,    37,
       0,   158,  -151,    38,   784,     0,   785,    40,    41,     0,
     786,     0,   787,    42,     0,     0,     0,     6,     0,     0,
     235,     0,     0,     0,     0,     0,     0,   446,     0,   447,
       0,   448,     0,   449,   450,   432,     0,   451,   -13,   788,
     789,   433,   434,     0,     8,     0,     0,   790,  -467,     0,
       0,     0,     0,   435,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,     0,   438,     0,     0,
       0,     0,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,     0,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   433,
     434,  -484,     0,  -484,     0,     0,     0,     0,     0,     0,
       0,   435,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   436,     0,
       0,     0,     0,     0,   437,    30,     0,     0,     0,     0,
       0,   157,     0,     0,     0,   438,     0,     0,     0,     0,
       0,   439,     0,   440,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   443,    68,     0,     0,   444,     0,   445,     0,
       0,   164,     0,     0,     0,     0,   235,   285,   166,     0,
       0,     0,     0,   446,     0,   447,     0,   448,     0,   449,
     450,   167,     0,   451,   452,   453,   454,     0,     0,     0,
       0,  -485,     0,    27,   286,     0,   169,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,   170,     0,
       0,   171,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,   173,     0,
       0,    68,     0,     0,     0,     0,   174,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     432,   176,     0,   177,     0,   288,   433,   434,   179,     0,
       0,     0,     0,   180,   181,     0,     0,     0,   779,   723,
      26,     0,     0,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,     0,     0,   780,    29,     0,     0,     0,
       0,   781,    30,     0,     0,     0,    31,    32,   157,     0,
      33,     0,     0,  -155,     0,     0,     0,     0,     0,    34,
     440,     0,     0,     0,     0,  1038,     0,     0,   783,     0,
      35,    36,    37,     0,   158,  -151,    38,    39,     0,   785,
      40,    41,     0,   786,     0,   787,    42,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,   447,     0,   448,     0,   449,   450,   432,     0,
     451,     0,   788,   789,   433,   434,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,     0,   233,   436,     0,     0,     0,     0,     0,   437,
      30,     0,     0,     0,     0,     0,   157,     0,     0,     0,
     438,     0,     0,     0,     0,     0,   439,     0,   440,     0,
       0,     0,     0,     0,     0,     0,   441,     0,     0,    36,
      67,     0,   158,     0,     0,   442,     0,   443,    68,     0,
       0,   444,     0,   445,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,     0,     0,     0,     0,   446,     0,
     447,     0,   448,     0,   449,   450,   432,     0,   451,   452,
     453,   454,   433,   434,  -485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,    26,     0,     0,     0,
     153,   154,   155,   156,    77,    78,    79,    80,    27,     0,
     233,   436,     0,     0,     0,     0,     0,   437,    30,     0,
       0,     0,     0,     0,   157,     0,     0,     0,   438,     0,
       0,     0,     0,     0,   439,     0,   440,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,    36,    67,     0,
     158,     0,     0,   442,     0,   443,    68,     0,     0,   444,
       0,   445,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,     0,     0,     0,     0,   446,     0,   447,     0,
     448,     0,   449,   450,     0,     0,   451,   452,   453,   454,
       0,     0,  -487,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,     0,   834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   834,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,     0,     0,     0,     0,   835,
       0,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   997,     0,   848,   849,   850,   835,  1140,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,     0,     0,   848,   849,   850,     0,  1334,     0,
       0,     0,     0,     0,     0,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,     0,     0,     0,     0,     0,     0,
     998,     0,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,   997,   452,  1011,  1012,  1013,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   998,     0,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,  1015,  1011,  1012,  1013,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,     0,     0,     0,     0,   835,     0,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   997,
       0,   848,   849,   850,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1065,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   998,     0,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
       0,     0,  1011,  1012,  1013,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,  -793,     0,     0,     0,     0,     0,     0,
    1066,     0,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,   834,     0,  1079,  1080,  1081,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,     0,     0,   848,   849,   850,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,  -793,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   997,
       0,   848,   849,   850,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   834,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
       0,     0,  1011,  1012,  1013,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   997,     0,   848,   849,   850,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,   432,     0,  1011,  1012,  1013,
       0,   433,   434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -793,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,  -775,   438,     0,     0,
       0,  -775,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,  -775,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   736,
     737,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -793,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   739,     0,
       0,     0,     0,     0,   740,    30,     0,     0,     0,     0,
       0,   157,     0,     0,  -775,   438,     0,     0,     0,  -775,
       0,   439,     0,   742,     0,     0,     0,     0,     0,     0,
       0,   743,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   744,    68,     0,  -775,   745,     0,   746,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   446,     0,   747,     0,   748,     0,   749,
     750,   432,     0,   751,   452,   752,   753,   433,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,     0,   233,   436,     0,     0,     0,
       0,     0,   437,    30,     0,     0,     0,     0,     0,   157,
       0,     0,  -775,   438,     0,     0,     0,  -775,     0,   439,
       0,   440,     0,     0,     0,     0,     0,     0,     0,   441,
       0,     0,    36,    67,     0,   158,     0,     0,   442,     0,
     443,    68,     0,  -775,   444,     0,   445,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   446,     0,   447,     0,   448,     0,   449,   450,   432,
       0,   451,   452,   453,   454,   736,   737,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   738,     0,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,     0,   233,   739,     0,     0,     0,     0,     0,
     740,    30,     0,     0,     0,     0,     0,   157,     0,     0,
       0,   438,     0,     0,   741,     0,     0,   439,     0,   742,
       0,     0,     0,     0,     0,     0,     0,   743,     0,     0,
      36,    67,     0,   158,     0,     0,   442,     0,   744,    68,
       0,     0,   745,     0,   746,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,   446,
       0,   747,     0,   748,     0,   749,   750,   432,     0,   751,
     452,   752,   753,   736,   737,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,    26,     0,     0,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
       0,   233,   739,     0,     0,     0,     0,     0,   740,    30,
       0,     0,     0,     0,     0,   157,     0,     0,     0,   438,
       0,     0,  1135,     0,     0,   439,     0,   742,     0,     0,
       0,     0,     0,     0,     0,   743,     0,     0,    36,    67,
       0,   158,     0,     0,   442,     0,   744,    68,     0,     0,
     745,     0,   746,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,   446,     0,   747,
       0,   748,     0,   749,   750,   432,     0,   751,   452,   752,
     753,   433,   434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   435,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,     0,   438,     0,     0,
       0,     0,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,     0,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   736,
     737,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   739,     0,
       0,     0,     0,     0,   740,    30,     0,     0,     0,     0,
       0,   157,     0,     0,     0,   438,     0,     0,     0,     0,
       0,   439,     0,   742,     0,     0,     0,     0,     0,     0,
       0,   743,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   744,    68,     0,     0,   745,     0,   746,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   446,     0,   747,     0,   748,     0,   749,
     750,   432,     0,   751,   452,   752,   753,   433,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   779,
       0,    26,     0,     0,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,     0,   233,   780,     0,     0,     0,
       0,     0,   781,    30,     0,     0,     0,     0,     0,   157,
       0,     0,     0,   438,     0,     0,     0,     0,     0,   439,
       0,   440,     0,     0,     0,     0,     0,     0,     0,   783,
       0,     0,    36,    67,     0,   158,     0,     0,   442,     0,
     785,    68,     0,     0,   786,     0,   787,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,   332,     0,
       0,   446,     0,   447,   333,   448,     0,   449,   450,     0,
       0,   451,   452,   788,   789,     0,   534,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,   334,     0,    28,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   332,     0,     0,     0,   336,     0,   333,     0,    36,
      67,     0,   158,     0,     0,     0,     0,     0,    68,     0,
       0,    26,     0,   337,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,   334,     0,    28,     0,   338,     0,
       0,     0,   339,    30,   340,     0,     0,     0,     0,   157,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     0,   332,     0,     0,     0,   336,     0,
     333,     0,    36,    67,     0,   158,     0,     0,     0,     0,
       0,    68,     0,     0,    26,     0,   337,     0,   153,   154,
     155,   156,    77,    78,    79,    80,    27,   334,     0,    28,
       0,   338,     0,   771,     0,   339,    30,   340,     0,     0,
       0,     0,   157,   341,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,     0,   332,     0,     0,
       0,   336,     0,   333,     0,    36,    67,     0,   158,     0,
       0,     0,     0,     0,    68,  1168,     0,    26,     0,   337,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
     334,     0,    28,     0,   338,     0,   970,     0,   339,    30,
     340,     0,     0,     0,     0,   157,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,     0,
     332,     0,     0,     0,   336,     0,   333,     0,    36,    67,
       0,   158,     0,     0,     0,     0,     0,    68,  1172,     0,
      26,     0,   337,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,   334,     0,    28,     0,   338,     0,     0,
       0,   339,    30,   340,     0,     0,     0,     0,   157,   341,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,     0,   332,     0,     0,     0,   336,     0,   333,
       0,    36,    67,     0,   158,     0,     0,     0,     0,     0,
      68,     0,     0,    26,     0,   337,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,   334,     0,    28,     0,
     338,     0,     0,     0,   339,    30,   340,     0,     0,     0,
       0,   157,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,     0,   332,     0,     0,     0,
     336,     0,   333,     0,    36,    67,     0,   158,     0,     0,
       0,     0,     0,    68,     0,     0,    26,     0,   337,     0,
     153,   154,   155,   156,    77,    78,    79,    80,    27,   334,
       0,    28,     0,   338,     0,  1264,     0,   339,    30,   340,
       0,     0,     0,     0,   157,   341,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,   332,
       0,     0,     0,   336,     0,   333,     0,    36,    67,     0,
     158,     0,     0,     0,     0,     0,    68,     0,     0,    26,
       0,   337,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,   233,     0,     0,   338,     0,  1387,     0,
     339,    30,   340,     0,     0,     0,     0,   157,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1601,     0,     0,     0,     0,     0,   336,     0,     0,     0,
      36,    67,     0,   158,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,   337,     0,     0,     0,     0,   332,
       0,     0,   235,     0,     0,   333,     0,     0,     0,   338,
       0,     0,     0,   339,     0,   340,     0,     0,     0,    26,
       0,   341,   342,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,     0,    28,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,   332,     0,     0,     0,   336,     0,   333,     0,
      36,    67,     0,   158,     0,     0,     0,     0,     0,    68,
       0,     0,    26,     0,   337,     0,   153,   154,   155,   156,
      77,    78,    79,    80,    27,   334,     0,    28,     0,   338,
       0,     0,     0,   339,    30,   340,     0,     0,     0,     0,
     157,   341,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   531,     0,   332,     0,     0,     0,   336,
       0,   333,     0,    36,    67,     0,   158,     0,     0,     0,
       0,     0,    68,     0,     0,    26,     0,   337,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,   334,     0,
    -406,     0,   338,     0,     0,     0,   339,    30,   340,     0,
       0,     0,     0,   157,   341,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1581,     0,   332,     0,
       0,     0,   336,     0,   333,     0,    36,    67,     0,   158,
       0,     0,     0,     0,     0,    68,     0,     0,    26,     0,
     337,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,   334,     0,     0,     0,   338,     0,     0,     0,  1582,
      30,   340,     0,     0,     0,     0,   157,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,     0,   336,     0,     0,     0,    36,
      67,     0,   158,   164,     0,     0,     0,     0,    68,   165,
     166,     0,     0,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   338,     0,
       0,     0,   339,     0,   340,    27,   168,   233,   169,     0,
     341,   342,     0,     0,     0,    30,     0,     0,     0,     0,
     170,     0,     0,   171,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   164,     0,     0,
       0,     0,     0,   165,   166,    67,     0,     0,     0,     0,
     173,     0,     0,    68,     0,     0,     0,   167,   174,     0,
       0,   175,     0,     0,     0,     0,   235,     0,     0,    27,
     168,   233,   169,   176,     0,   177,     0,   178,     0,    30,
     179,     0,     0,     0,   170,   180,   181,   171,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,   164,     0,     0,     0,     0,     0,   165,   166,    67,
       0,     0,     0,     0,   173,     0,     0,    68,     0,     0,
       0,   167,   174,     0,     0,   175,     0,     0,     0,     0,
     235,     0,     0,    27,   474,   233,   169,   176,     0,   177,
       0,   178,     0,    30,   179,     0,     0,     0,   170,   180,
     181,   171,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,     0,   164,     0,     0,     0,     0,
       0,   165,   166,    67,     0,     0,     0,     0,   173,     0,
       0,    68,     0,     0,     0,   167,   174,     0,     0,   175,
       0,     0,     0,     0,   235,     0,     0,    27,   477,   233,
     169,   176,     0,   177,     0,   178,     0,    30,   179,     0,
       0,     0,   170,   180,   181,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,   164,
       0,     0,     0,     0,     0,   165,   166,    67,     0,     0,
       0,     0,   173,     0,     0,    68,     0,   582,     0,   167,
     174,     0,     0,   175,     0,     0,     0,     0,   235,     0,
       0,    27,   168,   233,   169,   176,     0,   177,     0,   178,
       0,    30,   179,     0,     0,     0,   170,   180,   181,   171,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,   165,
     166,    67,     0,     0,     0,     0,   173,     0,     0,    68,
       0,   935,     0,   167,   174,     0,     0,   175,     0,     0,
       0,     0,   235,     0,     0,    27,   168,   233,   169,   176,
       0,   177,     0,   178,     0,    30,   179,     0,     0,     0,
     170,   180,   181,   171,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,     0,
       0,     0,     0,   165,   166,    67,     0,     0,     0,     0,
     173,     0,     0,    68,     0,     0,     0,   167,   174,     0,
       0,   175,     0,     0,     0,     0,   235,     0,     0,    27,
     168,   233,   169,   176,     0,   177,     0,   178,     0,    30,
     179,     0,     0,     0,   170,   180,   181,   171,   172,     0,
       0,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,   285,   166,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,   173,  1206,   167,    68,     0,     0,
       0,     0,   174,     0,     0,   175,     0,     0,    27,   286,
     235,   169,     0,     0,     0,     0,     0,   176,    30,   177,
       0,   178,     0,   170,   179,     0,   171,   172,     0,   180,
     181,     0,     0,     0,     0,   164,     0,   287,     0,     0,
       0,   165,   166,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,   173,     0,   167,    68,     0,     0,     0,
       0,   174,     0,     0,   175,     0,     0,    27,   477,   233,
       0,     0,     0,     0,     0,     0,   176,    30,   177,     0,
     288,     0,   170,   179,     0,   171,   172,     0,   180,   181,
       0,     0,     0,     0,   164,     0,  1591,     0,     0,     0,
     285,   166,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,   173,     0,   167,    68,     0,     0,     0,     0,
     174,     0,     0,   175,     0,     0,    27,   286,   235,   169,
       0,     0,     0,     0,     0,   176,    30,   177,     0,   178,
       0,   170,   179,     0,   171,   172,     0,   180,   181,     0,
       0,     0,     0,   164,     0,   287,     0,     0,     0,   285,
     166,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,   173,     0,   167,    68,     0,     0,     0,     0,   174,
       0,     0,   175,     0,     0,    27,   286,     0,  -406,     0,
       0,     0,     0,     0,   176,    30,   177,     0,   288,     0,
     170,   179,     0,   171,   172,     0,   180,   181,     0,     0,
       0,     0,   164,     0,  1571,     0,     0,     0,   165,   166,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
     173,     0,   167,    68,     0,     0,     0,     0,   174,     0,
       0,   175,     0,     0,    27,   168,     0,   169,     0,     0,
       0,     0,     0,   176,    30,   177,     0,  1572,     0,   170,
     179,     0,   171,   172,     0,   180,   181,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,   173,
       0,   167,    68,     0,     0,     0,     0,   174,     0,     0,
     175,     0,     0,    27,   168,     0,  1622,     0,     0,     0,
       0,     0,   176,    30,   177,     0,   178,     0,   170,   179,
       0,   171,   172,     0,   180,   181,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,   165,   166,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,   173,     0,
     167,    68,     0,     0,     0,     0,   174,     0,     0,   175,
       0,     0,    27,   168,     0,     0,     0,     0,     0,     0,
       0,   176,    30,   177,     0,   178,     0,   170,   179,     0,
     171,   172,     0,   180,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,   173,     0,     0,
      68,     0,     0,     0,     0,   174,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,   177,     0,   178,     0,     0,   179,     0,     0,
      26,     0,   180,   181,   153,   154,   155,   156,    77,    78,
      79,    80,    27,     0,   233,   739,     0,     0,     0,     0,
       0,   740,    30,     0,     0,     0,     0,     0,   157,     0,
       0,  -775,   438,     0,     0,     0,  -775,     0,   439,     0,
     742,     0,     0,     0,     0,     0,     0,     0,   743,     0,
       0,    36,    67,     0,   158,     0,     0,   442,     0,   744,
      68,     0,  -775,   745,     0,   746,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     751
};

static const yytype_int16 yycheck[] =
{
      16,   281,   146,   106,   146,    89,   296,   284,   113,   312,
     271,   270,   424,   452,    32,   544,     3,   148,   447,   145,
     567,     9,     9,    16,   571,   452,   315,    26,    15,   364,
     581,   304,    12,   164,   454,   549,   326,   145,   143,    76,
     146,   167,   881,   792,   406,   176,   795,    84,   452,    86,
      87,    88,   921,  1161,   923,   891,   278,   280,   163,   491,
     165,   895,  1011,   114,   222,  1272,   453,   104,   480,   174,
     218,    89,   177,   178,    73,   180,   873,   863,   379,   150,
     228,   150,    19,  1255,   145,  1255,   170,     9,     4,    10,
     127,  1195,     0,     4,    42,    21,   123,   124,   125,    58,
      42,    42,     4,    10,   141,   752,   232,   144,     3,     3,
     236,     0,   181,    64,    90,    90,    95,    23,    21,    93,
      37,    55,    92,    93,    94,    92,    93,    94,   236,     3,
    1079,   118,   237,   108,   121,    10,    42,     3,    89,     3,
     116,   788,    21,   433,   270,     3,   120,   273,   421,   102,
     120,     3,   170,   120,   124,   114,    54,   124,   448,    10,
     108,    59,   267,   116,   425,    10,   108,   428,    10,     3,
      10,   105,   109,   434,   131,    50,   281,     0,    53,    96,
     285,   208,   123,   288,   105,    93,   213,    85,   104,   294,
     316,   207,   229,   104,   299,   279,   122,    23,   105,   121,
     423,   332,   104,    92,    93,    94,   122,   338,   103,   510,
     368,   122,   120,   240,   202,   202,   124,   322,   205,   122,
     122,   116,   210,   210,   118,   212,   357,   121,   376,   103,
     105,   120,   333,    99,   365,    99,   337,   103,   339,   103,
     341,   342,   116,   122,   102,   103,   505,    99,   353,   526,
     116,   103,   116,   530,   105,   381,   387,   479,   116,  1363,
     105,   279,     4,   105,   116,   105,     8,     3,   225,   103,
      12,   122,     3,   399,   405,   548,    23,   122,    93,    42,
     122,  1488,   122,    23,    53,   411,  1621,   113,   210,   721,
       4,   399,    37,    55,     8,    23,  1631,   115,    12,    35,
    1554,   432,   407,   411,    23,   120,   121,    23,   115,    45,
     415,    42,    23,     4,    23,   446,  1570,   333,   747,   424,
      89,   337,    68,   339,   385,   341,   342,   264,   397,   366,
    1502,  1167,  1502,   753,   405,    54,   323,  1171,    74,    75,
     367,   121,   122,    54,    35,   114,   447,    83,   375,    23,
    1147,    96,   114,   792,    45,     4,   795,   105,   489,   122,
      42,   124,   104,  1363,     4,   752,   113,   103,   795,   789,
    1156,    99,   103,   113,   122,   480,   481,  1377,   483,   505,
     511,    93,  1374,   930,    75,    90,    35,   490,  1380,  1596,
     104,   795,    83,   907,   113,    35,    45,    37,  1605,   115,
     116,   788,   113,   108,  1611,    45,   115,   116,   120,  1616,
      42,   569,   124,   104,   545,  1622,   105,    56,   566,   114,
    1627,   104,   438,   439,   121,   122,    75,    35,   123,   849,
     531,   447,    78,   122,    83,    75,   452,    45,   727,   122,
     122,    80,   124,    83,  1444,    50,   736,   578,    53,   550,
     551,    93,  1452,     3,   731,   104,    96,  1449,   748,     9,
      10,   720,   513,    54,   104,   113,  1415,    75,  1417,    56,
       3,     4,   904,    23,    93,    83,  1562,   916,   120,    23,
     122,    35,   124,    39,    38,    35,    36,   524,    38,   916,
     122,    45,   124,   770,  1580,    45,    99,    53,   101,   119,
      50,   120,   108,    53,    54,   124,   729,   108,   730,    42,
     771,   102,   916,   121,  1350,   531,    93,   123,    99,  1353,
    1628,    75,   123,   114,    80,    75,    79,    80,   544,    83,
      80,   547,   123,    83,   550,   551,    89,   949,    88,    50,
     813,    91,    53,   120,   122,   572,   124,   124,    50,   576,
     119,    53,   579,   103,    56,   105,   583,   107,  1626,  1428,
     110,    50,    93,   113,    53,   115,   116,  1635,   103,   872,
     124,   114,   559,   106,   107,   108,   109,   110,   111,   112,
     123,   943,   115,   116,   117,     3,     4,    93,  1015,   120,
      53,   122,  1012,   124,   720,   856,   114,    23,   114,    23,
     726,   114,     3,   113,   114,   123,   867,   123,     9,    35,
     123,    35,   114,    37,   120,   121,   122,  1456,   726,    45,
      21,    45,    23,   882,    42,   123,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    90,    38,    35,    99,
     741,    38,  1189,  1194,    45,    92,   747,    94,    45,    75,
      51,    75,  1203,    23,    53,   113,   114,    83,   116,    83,
    1080,     3,     4,    64,    99,    35,  1180,   116,    38,    70,
      35,    35,    96,    74,    75,    45,    77,   122,    75,   124,
      45,    45,    83,   114,   115,   116,    83,    88,   106,   107,
     108,   109,   110,   111,   112,   956,    53,   115,   116,   117,
      42,   122,   103,   124,    74,    75,   107,    99,   109,   970,
      75,    75,    93,    83,   115,   116,    80,    23,    83,    83,
     121,   737,   738,   103,   122,   741,   124,   124,   116,   834,
     835,   747,    35,   749,   750,   751,   102,   868,    35,   120,
     110,    38,    45,   124,   114,   110,   121,   122,    45,   114,
     876,   852,     3,     4,     5,   881,   882,     8,  1019,  1508,
     115,   116,   117,    21,  1191,   107,   108,   109,   110,   111,
     112,    29,    75,   115,   116,   117,   792,    35,    75,   795,
      83,   122,    93,   124,    99,  1214,    83,    45,    54,   782,
     891,    42,    35,   894,   895,    38,   114,   898,   101,   792,
     901,    35,    45,    93,    31,    32,    33,    34,    93,   120,
     941,    45,   792,   124,   124,    50,    93,    75,    53,    53,
    1155,    56,  1373,    35,    24,    83,    38,   124,   122,   123,
     120,  1258,    75,    45,   124,   120,   852,   124,   854,   124,
      83,    75,   114,   120,   949,   102,    80,   124,   122,    83,
     124,   850,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,  1151,    75,   115,   116,   117,    93,   113,   114,
      35,    83,   102,    38,    35,   891,    35,    38,   894,   895,
      45,   124,   898,    54,    45,   901,    45,   115,   116,   117,
    1021,    35,   997,   998,   120,   108,    93,   884,   124,   926,
     916,    45,  1163,    54,  1433,    64,    93,   113,   114,   936,
      75,    70,   124,    74,    75,   123,    75,  1018,    83,  1020,
     121,   122,    83,   120,    83,   115,   116,   124,  1205,   917,
      74,    75,   123,   120,  1035,   102,   102,   124,  1365,    83,
     245,   246,    42,   122,   960,  1089,   122,  1089,   114,   110,
     116,   938,   122,   114,    64,    53,   972,    99,   116,   124,
    1065,  1066,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     3,     4,  1089,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,    35,  1416,    37,  1418,   102,
      99,  1274,  1018,  1264,  1020,    45,   103,   122,   108,   109,
     110,   111,   112,   124,  1013,   115,   116,   117,   123,  1035,
      42,    31,    32,    33,    34,    53,    64,   121,    99,  1576,
      42,   122,  1461,    22,  1135,    75,    46,   119,  1585,   125,
     122,   123,  1589,    83,   114,  1038,   124,    42,   123,    99,
      23,    23,  1599,    54,  1185,  1160,    96,   121,   114,   104,
     108,   104,    35,  1610,   104,    38,  1167,   122,  1615,  1508,
    1171,    53,    45,   114,  1335,  1176,    99,  1336,   104,     3,
       4,  1182,  1081,    99,  1083,  1084,   108,   109,   110,   111,
     112,    99,    21,   115,   116,   117,   108,   109,   110,   111,
     112,    74,    75,   115,   116,   117,   121,   103,   122,   108,
      83,   108,    99,  1214,  1643,   110,   111,   112,    42,  1135,
     115,   116,   117,    99,    35,   125,  1387,   119,   122,   122,
      23,     3,     4,     5,    45,  1162,     8,   121,   101,  1442,
     114,   122,    35,   122,    37,  1161,   104,  1408,   102,    23,
      99,  1167,    45,    64,   122,  1171,  1257,   113,  1435,    29,
    1176,    54,   124,   122,    75,    35,  1182,   117,  1427,   117,
      42,    23,    83,   119,   121,    45,   103,    99,   116,  1195,
     122,  1458,    75,  1595,   108,   109,   110,   111,   112,   104,
      83,   115,   116,   117,   104,    99,  1212,  1213,  1214,  1215,
      99,  1462,    42,    96,    74,    75,   122,   124,   101,   122,
    1336,    99,  1199,    83,   121,     3,     4,     5,     6,     7,
       8,     9,   114,  1500,   114,   114,   124,   114,  1640,    23,
     121,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,  1257,    29,   115,   116,   117,    35,  1348,    35,  1350,
    1351,   104,  1353,   102,    42,  1356,    45,   119,    45,   104,
     121,    80,    48,     3,     4,   119,   121,  1411,  1558,  1411,
     110,   111,   112,    99,  1564,   115,   116,   117,  1558,    21,
     124,    99,  1572,   119,   121,    57,    75,    74,    75,   121,
     104,    23,  1582,    23,    83,   122,    83,   122,   122,  1560,
     122,  1427,    42,  1593,    99,  1566,  1407,   124,   124,   114,
      23,   124,   119,  1603,  1330,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     3,     4,   115,   116,   117,
    1456,    42,  1348,    23,  1350,  1351,  1437,  1353,  1439,   121,
    1356,   122,   119,  1623,   124,   121,   102,  1363,   121,   104,
     124,   108,   123,   123,   122,  1458,   122,   104,   102,   122,
    1461,   122,   124,  1464,    42,   105,   106,   107,   108,   109,
     110,   111,   112,   124,    23,   115,   116,   117,    48,    26,
      23,   119,   123,  1484,  1485,   121,   119,  1374,   104,   123,
     121,  1407,   121,  1380,    53,    53,   124,   104,    23,    23,
     102,    53,   102,    53,    23,  1489,  1509,   104,  1424,   123,
      35,  1495,   116,    38,    23,   116,  1547,  1433,   121,  1377,
      45,  1437,    38,  1439,   122,    38,   121,   105,   106,   107,
     108,   109,   110,   111,   112,    38,    38,   115,   116,   117,
      38,   122,    38,   122,  1460,  1461,   121,  1463,  1464,    74,
      75,   122,   121,  1558,    79,    80,  1493,   121,    83,    18,
      19,   121,  1449,    15,    89,  1568,   122,  1572,  1484,  1485,
      29,  1489,    31,   121,    33,    34,    35,  1495,    37,    38,
     121,  1582,    41,    42,  1587,   559,  1591,   202,  1525,  1505,
    1595,   884,  1508,  1530,   328,    21,   205,  1365,  1199,    82,
    1601,  1564,   707,    29,  1207,  1542,  1020,  1612,   514,    35,
     547,  1548,   315,  1180,   550,    74,   726,   726,  1623,    45,
    1557,   400,    81,    29,   438,   439,  1563,   385,   442,    35,
     876,    90,  1559,    92,   882,  1640,   795,    96,  1565,    45,
     877,   100,  1569,   916,   103,   440,   105,   106,  1564,    75,
     109,  1407,  1579,   742,   113,   114,  1461,    83,  1045,  1326,
    1258,  1508,  1258,  1590,  1502,    -1,  1582,    -1,    74,    75,
      -1,    -1,   131,  1600,    -1,     3,     4,    83,    -1,    -1,
     139,   140,   439,   142,   143,  1601,   145,    -1,    -1,   148,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,   163,   164,   165,    -1,   167,    -1,
      -1,    -1,  1628,    45,    42,   174,    -1,   176,   177,   178,
      -1,   180,   181,    -1,    -1,    10,    -1,  1643,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    23,    -1,
      -1,   200,    74,    75,    -1,    35,    -1,    37,   207,    -1,
      35,    83,    -1,    -1,    -1,    45,    -1,    -1,   217,    -1,
      45,    -1,   221,   222,    54,    50,   225,    -1,    53,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,   236,   237,   107,
     108,   109,   110,   111,   112,    75,    -1,   115,   116,   117,
      75,    -1,    -1,    83,    -1,    80,    29,    -1,    83,    -1,
      -1,    -1,    35,    -1,    -1,   264,    96,    -1,   267,    -1,
       9,   270,    45,    -1,   273,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   281,    -1,    23,    -1,   285,    -1,   287,   288,
      -1,    -1,    -1,    -1,    -1,   294,    35,    36,    37,    38,
     299,    74,    75,    -1,   303,   304,    45,   306,    -1,    -1,
      83,    50,    -1,   312,    53,    54,   315,   316,   317,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,   332,   333,    -1,    75,    -1,   337,   338,
     339,    80,   341,   342,    83,    -1,    -1,    -1,   347,    88,
      -1,    -1,    91,    -1,   353,    -1,    -1,    96,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,   107,   368,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,   378,
      -1,    -1,   381,   737,   738,     3,   385,    -1,   387,    -1,
      -1,     9,    10,    -1,    -1,   749,   750,   751,   397,    -1,
     399,   400,    -1,   757,    -1,    23,   405,   406,   407,    -1,
      -1,    -1,   411,    -1,    -1,    -1,   415,    35,    36,    37,
      38,    -1,   421,    -1,    -1,   424,    -1,    45,    -1,    -1,
     784,    -1,    50,   432,    -1,    53,    54,   791,   437,    -1,
     737,   738,    -1,    -1,    -1,   444,    -1,   446,   447,    -1,
      -1,    -1,   749,   750,   751,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    -1,    21,    91,    -1,    -1,    -1,    -1,    96,    -1,
      29,   480,   481,    -1,   483,   103,    35,   105,    -1,   107,
     489,    -1,   110,    21,    -1,    -1,    45,   115,   116,   853,
     854,    29,    -1,   121,    -1,    -1,   505,    35,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    64,    -1,    45,   517,    -1,
      -1,    70,    -1,    -1,   523,    -1,    75,    -1,    -1,    -1,
      -1,    -1,   531,    -1,    83,    -1,    64,    -1,    -1,    88,
      -1,    -1,    70,    -1,    -1,   544,   545,    75,    -1,   548,
     549,   550,   551,    -1,    -1,    83,    -1,   854,    -1,    -1,
      88,    -1,   561,    -1,     3,     4,     5,     6,     7,     8,
     569,    39,    -1,    -1,    -1,   574,    -1,    -1,    -1,   578,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,    27,    28,    29,    30,    31,
      32,    33,    34,    42,    -1,    73,   960,    75,    -1,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    -1,   972,    51,
      -1,    89,    -1,    -1,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,    -1,    -1,    77,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,    -1,
      -1,    -1,    -1,   960,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,   972,   115,   116,   117,    -1,
      -1,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
      -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   720,    -1,    -1,    -1,    -1,    -1,   726,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,   740,   741,    -1,    -1,    -1,   745,    -1,   747,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,  1136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,   813,   814,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   108,     3,     4,     5,     6,
       7,     8,     9,   103,    -1,   834,   835,   107,    -1,   109,
      -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,   121,    -1,   852,    -1,    -1,    -1,    -1,  1212,  1213,
      -1,  1215,    -1,    -1,   863,    42,    -1,    -1,    -1,   868,
      -1,    -1,    -1,   872,    -1,    -1,    -1,   876,    -1,    -1,
      -1,    -1,   881,   882,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   891,    -1,    -1,   894,   895,    -1,    -1,   898,
      -1,  1255,   901,    -1,    -1,    -1,    -1,    -1,   907,   908,
      -1,    -1,    -1,    -1,    -1,  1212,  1213,    -1,  1215,    -1,
      -1,    -1,    -1,    -1,   207,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,    -1,   941,    -1,   943,    -1,    -1,   946,    -1,    -1,
     949,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1330,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,   997,   998,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,  1018,
      -1,  1020,  1021,    -1,    -1,    -1,    -1,  1026,    -1,    -1,
      -1,  1385,    -1,  1330,    -1,    -1,  1035,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1045,    -1,    -1,    -1,
     333,    -1,    -1,    -1,   337,    -1,   339,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,    -1,  1065,  1066,    -1,  1423,
    1424,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,  1460,    -1,    -1,  1463,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,  1478,    -1,    -1,  1424,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,  1135,    -1,  1137,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,  1502,    53,
      54,  1505,    -1,    -1,  1508,   438,   439,  1156,    -1,    -1,
      -1,  1160,  1161,  1460,   447,    -1,  1463,    -1,  1167,   452,
      -1,    75,  1171,    -1,    -1,    -1,    80,  1176,  1177,    83,
      -1,  1180,    -1,  1182,    88,    -1,  1185,    91,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,   107,    -1,  1204,   110,    -1,  1505,    -1,
      -1,   115,    -1,    -1,    -1,  1214,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,  1257,    -1,
      -1,   544,    -1,    -1,   547,    -1,    -1,   550,   551,    -1,
      -1,    -1,    -1,    -1,    -1,  1274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,  1326,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,  1336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1346,  1347,  1348,
      -1,  1350,  1351,    -1,  1353,    -1,    -1,  1356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1384,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1405,    -1,  1407,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,  1427,    -1,
      -1,    45,    -1,    -1,  1433,    -1,    -1,    51,  1437,    -1,
    1439,    -1,    -1,  1442,    -1,  1444,    -1,    -1,    -1,    -1,
      64,    -1,  1451,  1452,   737,   738,    70,  1456,   741,    -1,
      74,    75,  1461,    77,   747,  1464,   749,   750,   751,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1484,  1485,    -1,    -1,   103,
      -1,  1490,    -1,   107,    -1,   109,    -1,  1496,    -1,    -1,
    1499,   115,   116,    -1,    -1,    -1,    -1,   121,    -1,   792,
      -1,    -1,   795,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1522,    -1,    23,    -1,    -1,    -1,  1528,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      38,    39,  1541,    -1,    -1,    -1,  1545,    45,  1547,    -1,
    1549,    49,    50,  1552,    -1,    53,    -1,    -1,    56,  1558,
      -1,    -1,    -1,    -1,    62,  1564,    -1,    -1,  1567,   852,
      -1,   854,  1571,  1572,    -1,    73,    74,    75,    -1,    -1,
      -1,    79,    80,  1582,    -1,    83,    84,    -1,    -1,    -1,
     145,    89,  1591,   148,    -1,   150,  1595,    -1,    -1,    -1,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,   891,   164,
     165,   894,   895,  1612,    -1,   898,    -1,    -1,   901,    -1,
      -1,   176,    -1,   178,  1623,    -1,   181,    -1,    -1,  1628,
      -1,    -1,    -1,   916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1640,    -1,    -1,  1643,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   972,
      -1,    -1,    -1,    -1,    -1,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,    -1,   270,    -1,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,
     285,    -1,    -1,   288,    -1,  1018,    -1,  1020,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,  1035,   308,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   316,     9,    10,    -1,    -1,    -1,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,   332,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,   357,    50,    -1,    -1,    53,    54,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
     385,    -1,   387,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    88,   397,    -1,    91,   400,    -1,    -1,    -1,    96,
     405,    -1,  1135,    -1,    -1,    -1,   103,    -1,   105,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,
     283,    -1,    -1,    -1,   121,    -1,    -1,   432,  1161,    -1,
      -1,    -1,    -1,    -1,  1167,    -1,    -1,    -1,  1171,    -1,
      -1,   446,   305,  1176,    -1,    -1,    -1,    -1,    -1,  1182,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,
    1213,  1214,  1215,    -1,   489,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   438,   439,    -1,    -1,    -1,    -1,    -1,
     505,    -1,    -1,    -1,    -1,    -1,   511,   452,    -1,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     545,    -1,    -1,    -1,    -1,    -1,    99,   410,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   435,   578,    -1,    -1,    -1,    -1,   441,    -1,
     443,    -1,   445,    -1,    -1,    -1,   449,   450,   451,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1348,    -1,  1350,  1351,    -1,
    1353,    -1,    -1,  1356,   487,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1407,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1433,    -1,    -1,    -1,  1437,    -1,  1439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1460,  1461,    -1,
    1463,  1464,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,  1484,  1485,    -1,    -1,    -1,   123,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,  1505,    38,    -1,  1508,   781,    -1,    -1,    -1,
      45,   786,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,   737,   738,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   438,   439,    -1,   749,   750,   751,    -1,    -1,    74,
      75,    -1,    77,    -1,    -1,   452,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   792,    -1,  1582,
     795,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,    -1,
      -1,    -1,    -1,   868,   869,    -1,    -1,    -1,  1601,   732,
     733,   876,    -1,    -1,    -1,    -1,   881,   882,    -1,    -1,
     743,   744,    -1,   746,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1628,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,
    1643,    -1,   775,    -1,    -1,    -1,   779,    -1,    -1,    -1,
     783,    -1,   785,    -1,   787,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   941,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   916,    -1,    -1,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   860,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   960,  1021,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   972,    -1,    -1,
      -1,    -1,    -1,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,    -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   438,   439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     737,   738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   749,   750,   751,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,  1011,    -1,
      -1,  1156,    -1,    -1,  1017,   792,    -1,    -1,   795,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1185,    -1,    -1,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,
    1063,  1064,    -1,    -1,    -1,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1079,   854,    -1,    -1,
      -1,    -1,  1085,  1086,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,  1213,    -1,
    1215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   916,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1154,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   960,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1336,    42,    -1,    -1,   972,    -1,    -1,    -1,    -1,
      -1,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
      -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,   737,   738,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1330,   749,   750,   751,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,  1267,   115,   116,   117,    -1,    -1,
       3,   121,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,  1427,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,   795,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,  1456,    45,    -1,    -1,    -1,    -1,    -1,    51,  1322,
      -1,  1324,    -1,    -1,  1327,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,  1424,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,   854,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,  1460,   109,    -1,  1463,    -1,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1547,  1406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1415,   916,  1417,    -1,    -1,    -1,    -1,    -1,
    1505,    -1,    -1,  1508,    -1,    -1,    -1,  1572,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1212,  1213,  1582,  1215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,  1471,   972,
      -1,    -1,    -1,    -1,    -1,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,    -1,    -1,    -1,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1330,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,  1424,    96,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,  1460,    -1,    -1,  1463,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,
    1213,    -1,  1215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1505,    -1,
      -1,  1508,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    96,    -1,  1330,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,   120,
      -1,   122,   123,    -1,   125,   126,   127,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    50,    51,    -1,    53,
      -1,    55,    56,    -1,    58,    -1,    -1,    61,    62,    63,
      -1,  1424,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      74,    75,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,    -1,  1460,    -1,   103,
    1463,   105,    -1,   107,    -1,   109,   110,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1505,    -1,    -1,  1508,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,   120,   121,   122,   123,     3,   125,   126,
     127,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    50,    51,    -1,    53,    -1,    55,
      56,    -1,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    74,    75,
      -1,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,   110,     3,    -1,   113,   114,   115,
     116,     9,    10,    -1,   120,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,   119,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    -1,    88,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    96,     9,    10,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,    23,    -1,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   103,    -1,   105,    -1,   107,     9,    10,   110,    -1,
      -1,    -1,    -1,   115,   116,    -1,    -1,    -1,    21,   121,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    50,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    74,    75,    -1,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   105,    -1,   107,    -1,   109,   110,     3,    -1,
     113,    -1,   115,   116,     9,    10,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      75,    -1,    77,    -1,    -1,    80,    -1,    82,    83,    -1,
      -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,   110,     3,    -1,   113,   114,
     115,   116,     9,    10,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,
      77,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,
     107,    -1,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,    -1,   119,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    42,    -1,   115,   116,   117,    99,   119,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,   115,   116,   117,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,   114,   115,   116,   117,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,   114,   115,   116,   117,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    42,
      -1,   115,   116,   117,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,    -1,   115,   116,   117,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,   115,   116,   117,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    42,
      -1,   115,   116,   117,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     3,    -1,   115,   116,   117,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,     3,    -1,   113,   114,   115,   116,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,   105,    -1,   107,    -1,   109,   110,     3,
      -1,   113,   114,   115,   116,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    75,    -1,    77,    -1,    -1,    80,    -1,    82,    83,
      -1,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,   110,     3,    -1,   113,
     114,   115,   116,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,
      -1,    77,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      86,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,   110,     3,    -1,   113,   114,   115,
     116,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,     3,    -1,   113,   114,   115,   116,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,
      82,    83,    -1,    -1,    86,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,     3,    -1,
      -1,   103,    -1,   105,     9,   107,    -1,   109,   110,    -1,
      -1,   113,   114,   115,   116,    -1,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,     3,    -1,    -1,    -1,    70,    -1,     9,    -1,    74,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    23,    -1,    88,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,   103,    -1,
      -1,    -1,   107,    45,   109,    -1,    -1,    -1,    -1,    51,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,     3,    -1,    -1,    -1,    70,    -1,
       9,    -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    23,    -1,    88,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      -1,   103,    -1,   105,    -1,   107,    45,   109,    -1,    -1,
      -1,    -1,    51,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,     3,    -1,    -1,
      -1,    70,    -1,     9,    -1,    74,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    21,    -1,    23,    -1,    88,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,   103,    -1,   105,    -1,   107,    45,
     109,    -1,    -1,    -1,    -1,    51,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
       3,    -1,    -1,    -1,    70,    -1,     9,    -1,    74,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    21,    -1,
      23,    -1,    88,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,   103,    -1,    -1,
      -1,   107,    45,   109,    -1,    -1,    -1,    -1,    51,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,     3,    -1,    -1,    -1,    70,    -1,     9,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    23,    -1,    88,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
     103,    -1,    -1,    -1,   107,    45,   109,    -1,    -1,    -1,
      -1,    51,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,     3,    -1,    -1,    -1,
      70,    -1,     9,    -1,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    23,    -1,    88,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    -1,   103,    -1,   105,    -1,   107,    45,   109,
      -1,    -1,    -1,    -1,    51,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,     3,
      -1,    -1,    -1,    70,    -1,     9,    -1,    74,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    23,
      -1,    88,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   103,    -1,   105,    -1,
     107,    45,   109,    -1,    -1,    -1,    -1,    51,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    96,    -1,    -1,     9,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    23,
      -1,   115,   116,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,     3,    -1,    -1,    -1,    70,    -1,     9,    -1,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    23,    -1,    88,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,   103,
      -1,    -1,    -1,   107,    45,   109,    -1,    -1,    -1,    -1,
      51,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,     3,    -1,    -1,    -1,    70,
      -1,     9,    -1,    74,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    23,    -1,    88,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,   103,    -1,    -1,    -1,   107,    45,   109,    -1,
      -1,    -1,    -1,    51,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,     3,    -1,
      -1,    -1,    70,    -1,     9,    -1,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    23,    -1,
      88,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
      45,   109,    -1,    -1,    -1,    -1,    51,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,
      75,    -1,    77,     3,    -1,    -1,    -1,    -1,    83,     9,
      10,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,   109,    35,    36,    37,    38,    -1,
     115,   116,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    23,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    35,
      36,    37,    38,   103,    -1,   105,    -1,   107,    -1,    45,
     110,    -1,    -1,    -1,    50,   115,   116,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    23,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    35,    36,    37,    38,   103,    -1,   105,
      -1,   107,    -1,    45,   110,    -1,    -1,    -1,    50,   115,
     116,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    23,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    35,    36,    37,
      38,   103,    -1,   105,    -1,   107,    -1,    45,   110,    -1,
      -1,    -1,    50,   115,   116,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    21,    -1,    23,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    35,    36,    37,    38,   103,    -1,   105,    -1,   107,
      -1,    45,   110,    -1,    -1,    -1,    50,   115,   116,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      10,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    21,    -1,    23,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    35,    36,    37,    38,   103,
      -1,   105,    -1,   107,    -1,    45,   110,    -1,    -1,    -1,
      50,   115,   116,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    23,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    35,
      36,    37,    38,   103,    -1,   105,    -1,   107,    -1,    45,
     110,    -1,    -1,    -1,    50,   115,   116,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    22,    23,    83,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    35,    36,
      96,    38,    -1,    -1,    -1,    -1,    -1,   103,    45,   105,
      -1,   107,    -1,    50,   110,    -1,    53,    54,    -1,   115,
     116,    -1,    -1,    -1,    -1,     3,    -1,    64,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    23,    83,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    45,   105,    -1,
     107,    -1,    50,   110,    -1,    53,    54,    -1,   115,   116,
      -1,    -1,    -1,    -1,     3,    -1,    64,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    23,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    -1,    -1,    35,    36,    96,    38,
      -1,    -1,    -1,    -1,    -1,   103,    45,   105,    -1,   107,
      -1,    50,   110,    -1,    53,    54,    -1,   115,   116,    -1,
      -1,    -1,    -1,     3,    -1,    64,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    -1,    23,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    -1,    35,    36,    -1,    38,    -1,
      -1,    -1,    -1,    -1,   103,    45,   105,    -1,   107,    -1,
      50,   110,    -1,    53,    54,    -1,   115,   116,    -1,    -1,
      -1,    -1,     3,    -1,    64,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    23,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,
      -1,    -1,    -1,   103,    45,   105,    -1,   107,    -1,    50,
     110,    -1,    53,    54,    -1,   115,   116,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    23,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,   103,    45,   105,    -1,   107,    -1,    50,   110,
      -1,    53,    54,    -1,   115,   116,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      23,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    45,   105,    -1,   107,    -1,    50,   110,    -1,
      53,    54,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   105,    -1,   107,    -1,    -1,   110,    -1,    -1,
      23,    -1,   115,   116,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    95,   129,   130,     0,    92,    93,    94,   120,   132,
     133,   134,   135,   136,   139,   140,   141,   142,   115,   115,
     133,   139,    68,   177,   136,   142,    23,    35,    38,    39,
      45,    49,    50,    53,    62,    73,    74,    75,    79,    80,
      83,    84,    89,   143,   144,   145,   146,   147,   148,   149,
     150,   152,   155,   162,   166,   167,   168,   180,   182,   189,
     190,   195,   202,   203,   291,   292,   333,    75,    83,   137,
     333,   137,   292,    23,    64,   333,   333,    31,    32,    33,
      34,    46,   169,   331,   333,   333,   333,   333,   333,    50,
      53,    80,    23,    38,    74,   110,   114,   151,   231,   333,
      53,    80,   333,    78,    56,   113,    23,   119,   102,   116,
     119,   292,   333,    99,   103,   224,   333,    89,   114,   202,
     224,   114,   123,   224,   224,   224,   169,   333,    38,    74,
     110,   114,   333,    38,   124,   178,   179,   333,   123,    23,
      42,   333,    53,    99,   333,   224,   332,   333,     3,    74,
     103,   233,   333,    27,    28,    29,    30,    51,    77,   330,
     331,   137,   138,    99,     3,     9,    10,    23,    36,    38,
      50,    53,    54,    80,    88,    91,   103,   105,   107,   110,
     115,   116,   232,   248,   249,   250,   252,   253,   333,    37,
      96,   104,   230,   271,   279,   280,   333,    90,   225,   226,
      42,   123,   132,   141,   170,   171,   172,   116,   204,   207,
     132,   139,   116,   157,   225,   225,   225,    53,   224,   124,
     178,    42,   122,   124,   110,   114,   333,   333,   224,   333,
     248,   224,    23,    37,    80,    96,   113,   116,   232,   249,
     263,   264,   281,   282,   114,   115,   116,   338,   339,   340,
     248,   257,   258,   261,   262,   281,   234,   235,   260,   261,
     269,   270,   333,   121,   122,   248,   261,    64,   248,   281,
      99,   272,   232,    23,   169,   224,   251,   103,    10,    50,
      53,   105,   248,   116,   261,     9,    36,    64,   107,   219,
     220,   222,   248,   333,    64,   248,   281,    64,    89,   256,
     248,   121,   260,    23,   113,   102,   116,   233,    99,   275,
       4,   104,   122,     4,   104,   122,    99,   101,   265,    54,
     227,   228,   229,   114,   333,   170,    39,    53,    80,   174,
     124,   172,     3,     9,    36,    64,    70,    88,   103,   107,
     109,   115,   116,   211,   212,   213,   237,   239,   240,   291,
     330,   333,   225,    24,   223,   139,   124,   141,   160,   161,
     225,   114,   123,   156,   114,   102,   333,   204,   122,   124,
     333,   124,   179,   124,   178,   204,   224,   102,    54,   181,
     232,    23,   232,   282,   248,   108,   225,    54,   335,   335,
     335,   123,   123,     4,     8,    12,   104,   122,   236,    42,
     108,     4,     8,    12,   104,   122,   122,   102,   121,   137,
     102,    42,   301,   248,    64,   255,   273,   274,   281,   282,
     223,   113,   232,    53,   116,   208,   278,   279,   272,   169,
     251,   219,     3,     9,    10,    21,    38,    44,    55,    61,
      63,    71,    80,    82,    86,    88,   103,   105,   107,   109,
     110,   113,   114,   115,   116,   281,   284,   291,   293,   295,
     298,   299,   302,   312,   315,   321,   322,   324,   325,   326,
     327,   328,   330,   301,    36,   333,   333,    36,   333,   105,
     122,    99,   248,   255,   248,   119,   122,   123,   121,   122,
     333,   332,   295,   259,   260,   276,   281,     4,   104,   271,
       4,   104,   230,   280,    54,   101,   266,   267,   268,   274,
     333,   102,   277,   103,   122,   248,   281,   141,   163,   164,
     123,   124,   173,   255,   333,   174,   261,   237,    64,   237,
     261,    64,   237,   330,    21,   237,   246,   247,    21,   121,
     237,   244,   245,   121,   122,    99,   333,    22,   113,   114,
     116,   125,   114,   283,   113,   248,   124,   261,   121,   122,
     123,   141,   158,   159,   158,   261,   224,   225,   124,   122,
     124,   225,   204,   295,   101,   333,   265,   232,    54,   121,
     264,   114,    21,   261,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    96,    99,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   117,   120,   122,   123,   124,   125,   126,   127,   334,
     336,   337,   338,   339,   340,   119,   121,   260,   269,   282,
     262,   261,   269,   270,   333,   248,   295,   282,   104,   248,
     108,   332,   251,   121,   220,   223,   104,   122,   223,    53,
     105,   261,   255,   223,   295,   333,     9,    10,    21,    38,
      44,    58,    63,    71,    82,    86,    88,   105,   107,   109,
     110,   113,   115,   116,   284,   291,   293,   296,   297,   299,
     304,   312,   330,   296,   302,   295,   284,   295,   333,   295,
     261,   105,   214,   215,   237,   255,   295,   295,   295,    21,
      38,    44,    68,    71,    80,    82,    86,    88,   115,   116,
     123,   134,   135,   144,   285,   286,   287,   291,   293,   294,
     298,   299,   312,   313,   314,   330,   288,   290,   295,   306,
     288,   290,    99,   113,   114,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    42,    99,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   115,   116,
     117,   121,    54,    59,    85,   104,   272,   220,   248,   248,
      21,   295,   121,   116,   233,   337,   123,   121,   122,   108,
       4,   104,   122,   103,    54,   274,   108,   265,   261,   279,
     228,    99,    99,   333,   122,   124,   333,   224,   301,   301,
     237,   122,   119,    21,   122,   122,   121,    21,   122,   213,
     261,   125,   240,   291,   332,    21,    29,    88,   239,   241,
     242,   243,   333,   121,   244,   237,   131,   132,   121,   161,
     333,   122,   124,   122,   124,   123,   204,   283,   124,   283,
     225,   123,   333,   101,   225,    21,   261,   225,   131,   114,
     225,   122,   236,   122,   104,   123,    23,   274,   337,   122,
     221,   250,   252,   254,   282,   251,   272,   301,   295,   295,
     255,   296,   296,   333,   237,   304,   295,   295,   333,   295,
     105,   214,   255,   296,   296,   296,   306,   288,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    42,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   115,   116,   117,   284,   114,   301,   223,    10,   105,
     122,    99,   153,   295,   295,   281,    75,    83,   144,   295,
     295,   281,   295,   306,   288,    58,   284,   329,    68,   144,
     291,   294,   124,   287,   294,   114,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    42,    99,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   115,
     116,   117,   123,   117,   117,   122,   123,   119,   121,   332,
      29,   307,   308,   309,   310,   333,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   248,   248,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   289,   295,
     288,    29,   292,   237,   284,    58,   296,    23,   223,   295,
     119,   259,   223,   281,     4,   104,   278,   103,   268,   277,
     104,   122,   266,   273,   102,   114,   116,   165,   124,   164,
      99,   116,   175,   176,   104,   104,   247,   122,    21,   237,
     245,   122,    21,   237,   237,   337,    99,   239,   333,   333,
     122,   124,    99,   121,   285,    99,   124,   159,   124,   225,
     283,   114,   114,   225,   114,   141,   194,   196,   197,   198,
     200,   201,   124,   114,    23,   333,    22,   220,   121,   223,
     104,   296,   102,   223,    10,   105,   296,   119,   121,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   248,   248,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   289,   288,    29,   292,    48,   124,   134,   316,   317,
     318,   319,   104,   295,   105,   214,   303,   223,   215,   261,
     119,   121,   237,   144,   113,   123,   307,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   248,   248,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   289,
     288,    29,   292,    29,   292,    29,   292,   295,   295,   338,
     339,   340,    99,   124,    21,   311,   122,    99,   119,   121,
      57,   237,   284,   333,   119,   121,   104,   278,   295,   158,
     259,   248,   121,   212,   225,   223,    23,    23,   122,   247,
     122,   122,   245,   122,   237,   333,    99,    21,   241,   237,
     124,   261,   283,   134,   183,   184,   185,   186,   188,   191,
     192,   193,   124,   114,   131,    83,   147,   199,   124,   197,
     131,   333,   301,   221,    23,   296,   296,   105,   214,   305,
     296,   119,   121,   284,   321,   322,   323,   237,   238,   124,
     317,   318,   122,   124,   122,    23,   223,    10,   105,   295,
     153,   332,   124,   119,   121,   115,   116,   115,   116,   295,
     295,   310,   295,   296,   102,   223,   274,   104,   122,   124,
     121,   123,   121,   122,   123,   333,   333,   122,   247,   122,
     245,   237,    79,    80,    89,   147,   189,   124,   185,   131,
     196,    79,    89,   146,   189,   196,   108,   104,   333,   284,
     223,    10,   105,    55,   105,   320,   124,   333,   295,   303,
     223,   102,   154,   289,   288,   289,   288,   284,   296,   274,
     124,    22,   121,   301,   122,   122,   271,   189,   333,    50,
      53,   196,   124,   333,   189,    50,    53,   124,   266,    23,
     233,   301,    48,   296,   305,   223,   296,   237,    26,    23,
     300,   295,   295,   123,   119,   121,   119,   121,   284,   121,
     104,   123,    53,   153,   169,   333,   124,   224,    53,   169,
     333,   333,   301,   104,   323,   296,   284,   294,   312,   314,
     233,    23,   333,   102,   187,    53,   224,   102,   333,    53,
     224,   104,    23,   333,   224,   295,   123,   333,   116,   206,
     210,   261,   224,   333,   116,   205,   209,    23,   333,   206,
     224,    64,   107,   218,   219,   255,   225,   223,   123,   205,
     224,    64,   107,   211,   255,   225,   223,   333,   233,   225,
     206,    64,   255,   281,   121,   122,    38,   123,   283,   225,
     205,    64,   255,   281,   121,    38,   283,   233,   123,   283,
     225,    38,   255,   153,   283,   225,    38,   255,   153,   123,
     283,   153,    38,   122,   217,   283,   153,    38,   122,   216,
     217,   153,   219,   121,   216,   153,   212,   121,   121,   217,
     122,   121,   216,   122,   121,   121
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   141,
     142,   143,   143,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   147,   147,   148,   148,   148,   148,   149,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   159,   160,   160,
     160,   161,   162,   162,   163,   163,   163,   164,   165,   165,
     165,   165,   165,   166,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     174,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   181,   181,   181,   182,   183,   183,
     184,   184,   185,   185,   185,   185,   186,   187,   187,   188,
     189,   189,   190,   190,   190,   190,   191,   191,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   195,   195,   195,
     195,   195,   195,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   201,   202,   202,   203,   203,   203,
     204,   205,   206,   207,   208,   208,   209,   209,   209,   209,
     210,   210,   210,   210,   211,   211,   211,   212,   212,   213,
     214,   214,   215,   216,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     221,   222,   222,   222,   222,   222,   222,   222,   223,   223,
     223,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   235,
     235,   235,   235,   235,   235,   236,   236,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   238,   238,   239,   239,
     239,   240,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   243,   243,   243,   243,   243,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   250,   251,   252,   252,   252,
     252,   253,   254,   254,   254,   255,   255,   256,   256,   256,
     257,   257,   258,   258,   259,   259,   259,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   268,   268,   269,   269,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   284,   285,   285,   285,
     285,   286,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     291,   291,   291,   292,   292,   292,   292,   292,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   298,   298,   298,
     298,   299,   299,   299,   299,   299,   300,   300,   301,   301,
     302,   302,   302,   302,   303,   303,   303,   304,   304,   304,
     304,   305,   305,   305,   306,   306,   307,   307,   307,   307,
     308,   308,   308,   309,   309,   310,   310,   310,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     315,   315,   316,   316,   317,   317,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   323,   323,
     324,   325,   326,   327,   328,   328,   329,   330,   330,   330,
     330,   330,   330,   330,   331,   331,   331,   331,   332,   332,
     333,   333,   333,   333,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   335,   335,
     336,   336,   337,   337,   337,   338,   339,   340
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     0,     1,     0,     1,     2,
       4,     1,     1,     0,     1,     2,     4,     1,     1,     3,
       4,     5,     0,     1,     3,     1,     0,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     7,     8,
       7,     5,     4,     5,     1,     1,     4,     6,     3,     3,
       1,     4,     3,     5,     4,     6,     5,     3,     2,     1,
       2,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     0,     5,     6,     5,
       3,     4,     3,     4,     1,     3,     0,     4,     1,     3,
       0,     2,     7,     8,     1,     3,     0,     3,     3,     4,
       3,     2,     0,     7,     8,     3,     5,     6,     5,     6,
       1,     0,     1,     0,     1,     2,     3,     2,     3,     5,
       6,     2,     2,     3,     4,     5,     1,     0,     1,     3,
       3,     1,     1,     7,     3,     3,     0,    10,     1,     0,
       1,     2,     1,     1,     1,     2,     6,     2,     0,     4,
       1,     0,     2,     1,     1,     0,     1,     1,     8,     9,
      10,     8,     9,    10,     9,    10,    11,     9,    11,    11,
      12,     8,     9,     1,     0,     1,     2,     1,     2,     1,
       1,     1,     0,     3,     8,     6,     7,     7,     8,     9,
       2,     2,     2,     3,     4,     2,     6,     7,     8,     3,
       6,     7,     8,     3,     1,     2,     0,     1,     3,     3,
       1,     3,     2,     1,     2,     3,     0,     1,     2,     3,
       0,     1,     2,     0,     1,     3,     3,     1,     2,     3,
       0,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     3,     4,     3,     4,     5,     6,     5,     6,
       3,     4,     3,     4,     0,     0,     1,     2,     3,     1,
       3,     4,     4,     4,     0,     1,     3,     1,     2,     1,
       2,     1,     2,     3,     1,     2,     5,     3,     4,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     3,     1,     2,     0,     2,     0,     1,     2,     3,
       2,     2,     3,     3,     1,     3,     4,     3,     4,     4,
       2,     3,     4,     2,     6,    10,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     2,     2,     3,     3,     4,
       3,     1,     3,     1,     2,     3,     1,     0,     1,     2,
       2,     3,     4,     5,     5,     6,     3,     4,     1,     1,
       3,     1,     2,     2,     3,     4,     5,     5,     6,     3,
       4,     1,     0,     1,     3,     1,     1,     6,    10,     3,
       4,     2,     1,     2,     3,     4,     5,     2,     3,     2,
       3,     2,     3,     4,     4,     3,     6,     5,     4,     1,
       1,     1,     2,     3,     4,     5,     3,     6,     5,     4,
       3,     5,     1,     1,     1,     1,     0,     1,     1,     0,
       2,     4,     6,     8,     1,     2,     0,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     2,     0,     1,
       0,     1,     3,     5,     1,     6,     2,     1,     3,     3,
       3,     5,     2,     0,     1,     3,     1,     1,     2,     0,
       1,     3,     2,     0,     1,     2,     0,     1,     3,     2,
       1,     1,     1,     1,     2,     4,     3,     1,     2,     1,
       0,     1,     2,     2,     1,     2,     2,     3,     1,     2,
       2,     3,     1,     1,     2,     0,     1,     0,     1,     3,
       1,     2,     3,     1,     1,     3,     3,     3,     4,     4,
       1,     1,     1,     1,     4,     2,     3,     3,     4,     4,
       3,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     2,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     4,     2,     3,     3,     4,     4,     3,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     4,     4,     3,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     2,     1,
       3,     3,     2,     1,     1,     1,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     1,
       2,     7,    10,    11,    11,    12,     2,     0,     2,     0,
       3,     4,     5,     4,     3,     4,     3,     2,     4,     4,
       4,     3,     4,     3,     1,     3,     1,     2,     2,     0,
       1,     2,     0,     1,     3,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       3,     3,     6,     6,     6,     6,     3,     3,     4,     5,
       6,     5,     1,     2,     2,     1,     2,     5,     5,     5,
       5,     2,     0,     3,     5,     6,     8,     1,     1,     1,
       4,     7,     3,     6,     2,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* crate: maybe_shebang inner_attrs maybe_mod_items  */
#line 221 "rustgram.y"
                                                     {  }
#line 4149 "rustgram.tab.c"
    break;

  case 3: /* crate: maybe_shebang maybe_mod_items  */
#line 222 "rustgram.y"
                                         {  }
#line 4155 "rustgram.tab.c"
    break;

  case 7: /* maybe_inner_attrs: %empty  */
#line 230 "rustgram.y"
                                   { }
#line 4161 "rustgram.tab.c"
    break;

  case 8: /* inner_attrs: inner_attr  */
#line 233 "rustgram.y"
                                   {  }
#line 4167 "rustgram.tab.c"
    break;

  case 9: /* inner_attrs: inner_attrs inner_attr  */
#line 234 "rustgram.y"
                                   {  }
#line 4173 "rustgram.tab.c"
    break;

  case 10: /* inner_attr: SHEBANG '[' meta_item ']'  */
#line 237 "rustgram.y"
                                         {  }
#line 4179 "rustgram.tab.c"
    break;

  case 11: /* inner_attr: INNER_DOC_COMMENT  */
#line 238 "rustgram.y"
                                      {  }
#line 4185 "rustgram.tab.c"
    break;

  case 13: /* maybe_outer_attrs: %empty  */
#line 242 "rustgram.y"
                                   {  }
#line 4191 "rustgram.tab.c"
    break;

  case 14: /* outer_attrs: outer_attr  */
#line 245 "rustgram.y"
                                       {  }
#line 4197 "rustgram.tab.c"
    break;

  case 15: /* outer_attrs: outer_attrs outer_attr  */
#line 246 "rustgram.y"
                                   {  }
#line 4203 "rustgram.tab.c"
    break;

  case 16: /* outer_attr: '#' '[' meta_item ']'  */
#line 249 "rustgram.y"
                                      {  }
#line 4209 "rustgram.tab.c"
    break;

  case 17: /* outer_attr: OUTER_DOC_COMMENT  */
#line 250 "rustgram.y"
                                   {  }
#line 4215 "rustgram.tab.c"
    break;

  case 18: /* meta_item: ident  */
#line 253 "rustgram.y"
                                       {  }
#line 4221 "rustgram.tab.c"
    break;

  case 19: /* meta_item: ident '=' lit  */
#line 254 "rustgram.y"
                                     {  }
#line 4227 "rustgram.tab.c"
    break;

  case 20: /* meta_item: ident '(' meta_seq ')'  */
#line 255 "rustgram.y"
                                     {  }
#line 4233 "rustgram.tab.c"
    break;

  case 21: /* meta_item: ident '(' meta_seq ',' ')'  */
#line 256 "rustgram.y"
                                     {  }
#line 4239 "rustgram.tab.c"
    break;

  case 22: /* meta_seq: %empty  */
#line 259 "rustgram.y"
                                    {  }
#line 4245 "rustgram.tab.c"
    break;

  case 23: /* meta_seq: meta_item  */
#line 260 "rustgram.y"
                                   {  }
#line 4251 "rustgram.tab.c"
    break;

  case 24: /* meta_seq: meta_seq ',' meta_item  */
#line 261 "rustgram.y"
                                   {  }
#line 4257 "rustgram.tab.c"
    break;

  case 26: /* maybe_mod_items: %empty  */
#line 265 "rustgram.y"
                             {  }
#line 4263 "rustgram.tab.c"
    break;

  case 27: /* mod_items: mod_item  */
#line 268 "rustgram.y"
                                                   {  }
#line 4269 "rustgram.tab.c"
    break;

  case 28: /* mod_items: mod_items mod_item  */
#line 269 "rustgram.y"
                                                 {  }
#line 4275 "rustgram.tab.c"
    break;

  case 29: /* attrs_and_vis: maybe_outer_attrs visibility  */
#line 272 "rustgram.y"
                                                       {  }
#line 4281 "rustgram.tab.c"
    break;

  case 30: /* mod_item: attrs_and_vis item  */
#line 275 "rustgram.y"
                                 {  }
#line 4287 "rustgram.tab.c"
    break;

  case 38: /* item_static: STATIC ident ':' ty '=' expr ';'  */
#line 291 "rustgram.y"
                                                {  }
#line 4293 "rustgram.tab.c"
    break;

  case 39: /* item_static: STATIC MUT ident ':' ty '=' expr ';'  */
#line 292 "rustgram.y"
                                                {  }
#line 4299 "rustgram.tab.c"
    break;

  case 40: /* item_const: CONST ident ':' ty '=' expr ';'  */
#line 295 "rustgram.y"
                                                {  }
#line 4305 "rustgram.tab.c"
    break;

  case 41: /* item_macro: path_expr '!' maybe_ident parens_delimited_token_trees ';'  */
#line 298 "rustgram.y"
                                                                         {  }
#line 4311 "rustgram.tab.c"
    break;

  case 42: /* item_macro: path_expr '!' maybe_ident braces_delimited_token_trees  */
#line 299 "rustgram.y"
                                                                      {  }
#line 4317 "rustgram.tab.c"
    break;

  case 43: /* item_macro: path_expr '!' maybe_ident brackets_delimited_token_trees ';'  */
#line 300 "rustgram.y"
                                                                      {  }
#line 4323 "rustgram.tab.c"
    break;

  case 46: /* view_item: EXTERN CRATE ident ';'  */
#line 305 "rustgram.y"
                                                      {  }
#line 4329 "rustgram.tab.c"
    break;

  case 47: /* view_item: EXTERN CRATE ident AS ident ';'  */
#line 306 "rustgram.y"
                                                      {  }
#line 4335 "rustgram.tab.c"
    break;

  case 48: /* extern_fn_item: EXTERN maybe_abi item_fn  */
#line 309 "rustgram.y"
                                                      {  }
#line 4341 "rustgram.tab.c"
    break;

  case 49: /* use_item: USE view_path ';'  */
#line 312 "rustgram.y"
                                                      {  }
#line 4347 "rustgram.tab.c"
    break;

  case 50: /* view_path: path_no_types_allowed  */
#line 315 "rustgram.y"
                                                                     {  }
#line 4353 "rustgram.tab.c"
    break;

  case 51: /* view_path: path_no_types_allowed MOD_SEP '{' '}'  */
#line 316 "rustgram.y"
                                                                   {  }
#line 4359 "rustgram.tab.c"
    break;

  case 52: /* view_path: MOD_SEP '{' '}'  */
#line 317 "rustgram.y"
                                                                   {  }
#line 4365 "rustgram.tab.c"
    break;

  case 53: /* view_path: path_no_types_allowed MOD_SEP '{' idents_or_self '}'  */
#line 318 "rustgram.y"
                                                                   {  }
#line 4371 "rustgram.tab.c"
    break;

  case 54: /* view_path: MOD_SEP '{' idents_or_self '}'  */
#line 319 "rustgram.y"
                                                                   {  }
#line 4377 "rustgram.tab.c"
    break;

  case 55: /* view_path: path_no_types_allowed MOD_SEP '{' idents_or_self ',' '}'  */
#line 320 "rustgram.y"
                                                                   {  }
#line 4383 "rustgram.tab.c"
    break;

  case 56: /* view_path: MOD_SEP '{' idents_or_self ',' '}'  */
#line 321 "rustgram.y"
                                                                   {  }
#line 4389 "rustgram.tab.c"
    break;

  case 57: /* view_path: path_no_types_allowed MOD_SEP '*'  */
#line 322 "rustgram.y"
                                                                   {  }
#line 4395 "rustgram.tab.c"
    break;

  case 58: /* view_path: MOD_SEP '*'  */
#line 323 "rustgram.y"
                                                                   {  }
#line 4401 "rustgram.tab.c"
    break;

  case 59: /* view_path: '*'  */
#line 324 "rustgram.y"
                                                                   {  }
#line 4407 "rustgram.tab.c"
    break;

  case 60: /* view_path: '{' '}'  */
#line 325 "rustgram.y"
                                                                   {  }
#line 4413 "rustgram.tab.c"
    break;

  case 61: /* view_path: '{' idents_or_self '}'  */
#line 326 "rustgram.y"
                                                                   {  }
#line 4419 "rustgram.tab.c"
    break;

  case 62: /* view_path: '{' idents_or_self ',' '}'  */
#line 327 "rustgram.y"
                                                                   {  }
#line 4425 "rustgram.tab.c"
    break;

  case 63: /* view_path: path_no_types_allowed AS ident  */
#line 328 "rustgram.y"
                                                                   {  }
#line 4431 "rustgram.tab.c"
    break;

  case 67: /* block_item: item_foreign_mod  */
#line 334 "rustgram.y"
                                    {  }
#line 4437 "rustgram.tab.c"
    break;

  case 73: /* maybe_ty_ascription: ':' ty_sum  */
#line 342 "rustgram.y"
                                 {  }
#line 4443 "rustgram.tab.c"
    break;

  case 74: /* maybe_ty_ascription: %empty  */
#line 343 "rustgram.y"
                 {  }
#line 4449 "rustgram.tab.c"
    break;

  case 75: /* maybe_init_expr: '=' expr  */
#line 346 "rustgram.y"
                           {  }
#line 4455 "rustgram.tab.c"
    break;

  case 76: /* maybe_init_expr: %empty  */
#line 347 "rustgram.y"
                   {  }
#line 4461 "rustgram.tab.c"
    break;

  case 77: /* item_struct: STRUCT ident generic_params maybe_where_clause struct_decl_args  */
#line 351 "rustgram.y"
                                                                              {

          }
#line 4469 "rustgram.tab.c"
    break;

  case 78: /* item_struct: STRUCT ident generic_params struct_tuple_args maybe_where_clause ';'  */
#line 354 "rustgram.y"
                                                                              {

          }
#line 4477 "rustgram.tab.c"
    break;

  case 79: /* item_struct: STRUCT ident generic_params maybe_where_clause ';'  */
#line 357 "rustgram.y"
                                                             {

          }
#line 4485 "rustgram.tab.c"
    break;

  case 80: /* struct_decl_args: '{' struct_decl_fields '}'  */
#line 362 "rustgram.y"
                                                      {  }
#line 4491 "rustgram.tab.c"
    break;

  case 81: /* struct_decl_args: '{' struct_decl_fields ',' '}'  */
#line 363 "rustgram.y"
                                                      {  }
#line 4497 "rustgram.tab.c"
    break;

  case 82: /* struct_tuple_args: '(' struct_tuple_fields ')'  */
#line 366 "rustgram.y"
                                                      {  }
#line 4503 "rustgram.tab.c"
    break;

  case 83: /* struct_tuple_args: '(' struct_tuple_fields ',' ')'  */
#line 367 "rustgram.y"
                                                      {  }
#line 4509 "rustgram.tab.c"
    break;

  case 84: /* struct_decl_fields: struct_decl_field  */
#line 370 "rustgram.y"
                                                      {  }
#line 4515 "rustgram.tab.c"
    break;

  case 85: /* struct_decl_fields: struct_decl_fields ',' struct_decl_field  */
#line 371 "rustgram.y"
                                                      {  }
#line 4521 "rustgram.tab.c"
    break;

  case 86: /* struct_decl_fields: %empty  */
#line 372 "rustgram.y"
                                                      {  }
#line 4527 "rustgram.tab.c"
    break;

  case 87: /* struct_decl_field: attrs_and_vis ident ':' ty_sum  */
#line 375 "rustgram.y"
                                                      {  }
#line 4533 "rustgram.tab.c"
    break;

  case 88: /* struct_tuple_fields: struct_tuple_field  */
#line 378 "rustgram.y"
                                                      {  }
#line 4539 "rustgram.tab.c"
    break;

  case 89: /* struct_tuple_fields: struct_tuple_fields ',' struct_tuple_field  */
#line 379 "rustgram.y"
                                                      {  }
#line 4545 "rustgram.tab.c"
    break;

  case 90: /* struct_tuple_fields: %empty  */
#line 380 "rustgram.y"
                                                      {  }
#line 4551 "rustgram.tab.c"
    break;

  case 91: /* struct_tuple_field: attrs_and_vis ty_sum  */
#line 383 "rustgram.y"
                                                      {  }
#line 4557 "rustgram.tab.c"
    break;

  case 92: /* item_enum: ENUM ident generic_params maybe_where_clause '{' enum_defs '}'  */
#line 387 "rustgram.y"
                                                                           {
          }
#line 4564 "rustgram.tab.c"
    break;

  case 93: /* item_enum: ENUM ident generic_params maybe_where_clause '{' enum_defs ',' '}'  */
#line 389 "rustgram.y"
                                                                             {
          }
#line 4571 "rustgram.tab.c"
    break;

  case 94: /* enum_defs: enum_def  */
#line 393 "rustgram.y"
                                 {  }
#line 4577 "rustgram.tab.c"
    break;

  case 95: /* enum_defs: enum_defs ',' enum_def  */
#line 394 "rustgram.y"
                                 {  }
#line 4583 "rustgram.tab.c"
    break;

  case 96: /* enum_defs: %empty  */
#line 395 "rustgram.y"
                                 {  }
#line 4589 "rustgram.tab.c"
    break;

  case 97: /* enum_def: attrs_and_vis ident enum_args  */
#line 398 "rustgram.y"
                                         {  }
#line 4595 "rustgram.tab.c"
    break;

  case 98: /* enum_args: '{' struct_decl_fields '}'  */
#line 401 "rustgram.y"
                                           {  }
#line 4601 "rustgram.tab.c"
    break;

  case 99: /* enum_args: '{' struct_decl_fields ',' '}'  */
#line 402 "rustgram.y"
                                         {  }
#line 4607 "rustgram.tab.c"
    break;

  case 100: /* enum_args: '(' maybe_ty_sums ')'  */
#line 403 "rustgram.y"
                                         {  }
#line 4613 "rustgram.tab.c"
    break;

  case 101: /* enum_args: '=' expr  */
#line 404 "rustgram.y"
                                         {  }
#line 4619 "rustgram.tab.c"
    break;

  case 102: /* enum_args: %empty  */
#line 405 "rustgram.y"
                                         {  }
#line 4625 "rustgram.tab.c"
    break;

  case 103: /* item_union: UNION ident generic_params maybe_where_clause '{' struct_decl_fields '}'  */
#line 409 "rustgram.y"
                                                                                          {  }
#line 4631 "rustgram.tab.c"
    break;

  case 104: /* item_union: UNION ident generic_params maybe_where_clause '{' struct_decl_fields ',' '}'  */
#line 410 "rustgram.y"
                                                                                       {  }
#line 4637 "rustgram.tab.c"
    break;

  case 105: /* item_mod: MOD ident ';'  */
#line 413 "rustgram.y"
                                                        {  }
#line 4643 "rustgram.tab.c"
    break;

  case 106: /* item_mod: MOD ident '{' maybe_mod_items '}'  */
#line 414 "rustgram.y"
                                                        {  }
#line 4649 "rustgram.tab.c"
    break;

  case 107: /* item_mod: MOD ident '{' inner_attrs maybe_mod_items '}'  */
#line 415 "rustgram.y"
                                                        {  }
#line 4655 "rustgram.tab.c"
    break;

  case 108: /* item_foreign_mod: EXTERN maybe_abi '{' maybe_foreign_items '}'  */
#line 418 "rustgram.y"
                                                                {  }
#line 4661 "rustgram.tab.c"
    break;

  case 109: /* item_foreign_mod: EXTERN maybe_abi '{' inner_attrs maybe_foreign_items '}'  */
#line 419 "rustgram.y"
                                                                   {  }
#line 4667 "rustgram.tab.c"
    break;

  case 111: /* maybe_abi: %empty  */
#line 423 "rustgram.y"
                 {  }
#line 4673 "rustgram.tab.c"
    break;

  case 113: /* maybe_foreign_items: %empty  */
#line 427 "rustgram.y"
                 {  }
#line 4679 "rustgram.tab.c"
    break;

  case 114: /* foreign_items: foreign_item  */
#line 430 "rustgram.y"
                                           {  }
#line 4685 "rustgram.tab.c"
    break;

  case 115: /* foreign_items: foreign_items foreign_item  */
#line 431 "rustgram.y"
                                     {  }
#line 4691 "rustgram.tab.c"
    break;

  case 116: /* foreign_item: attrs_and_vis STATIC item_foreign_static  */
#line 434 "rustgram.y"
                                                        {  }
#line 4697 "rustgram.tab.c"
    break;

  case 117: /* foreign_item: attrs_and_vis item_foreign_fn  */
#line 435 "rustgram.y"
                                                   {  }
#line 4703 "rustgram.tab.c"
    break;

  case 118: /* foreign_item: attrs_and_vis UNSAFE item_foreign_fn  */
#line 436 "rustgram.y"
                                                   {  }
#line 4709 "rustgram.tab.c"
    break;

  case 119: /* item_foreign_static: maybe_mut ident ':' ty ';'  */
#line 440 "rustgram.y"
                                                   {  }
#line 4715 "rustgram.tab.c"
    break;

  case 120: /* item_foreign_fn: FN ident generic_params fn_decl_allow_variadic maybe_where_clause ';'  */
#line 445 "rustgram.y"
          {  }
#line 4721 "rustgram.tab.c"
    break;

  case 121: /* fn_decl_allow_variadic: fn_params_allow_variadic ret_ty  */
#line 448 "rustgram.y"
                                                         {  }
#line 4727 "rustgram.tab.c"
    break;

  case 122: /* fn_params_allow_variadic: '(' ')'  */
#line 451 "rustgram.y"
                                       {  }
#line 4733 "rustgram.tab.c"
    break;

  case 123: /* fn_params_allow_variadic: '(' params ')'  */
#line 452 "rustgram.y"
                                       {  }
#line 4739 "rustgram.tab.c"
    break;

  case 124: /* fn_params_allow_variadic: '(' params ',' ')'  */
#line 453 "rustgram.y"
                                       {  }
#line 4745 "rustgram.tab.c"
    break;

  case 125: /* fn_params_allow_variadic: '(' params ',' DOTDOTDOT ')'  */
#line 454 "rustgram.y"
                                       {  }
#line 4751 "rustgram.tab.c"
    break;

  case 126: /* visibility: PUB  */
#line 457 "rustgram.y"
                      {  }
#line 4757 "rustgram.tab.c"
    break;

  case 127: /* visibility: %empty  */
#line 458 "rustgram.y"
                   {  }
#line 4763 "rustgram.tab.c"
    break;

  case 128: /* idents_or_self: ident_or_self  */
#line 461 "rustgram.y"
                                                  {  }
#line 4769 "rustgram.tab.c"
    break;

  case 129: /* idents_or_self: idents_or_self AS ident  */
#line 462 "rustgram.y"
                                           {  }
#line 4775 "rustgram.tab.c"
    break;

  case 130: /* idents_or_self: idents_or_self ',' ident_or_self  */
#line 463 "rustgram.y"
                                           {  }
#line 4781 "rustgram.tab.c"
    break;

  case 132: /* ident_or_self: SELF  */
#line 467 "rustgram.y"
                {  }
#line 4787 "rustgram.tab.c"
    break;

  case 133: /* item_type: TYPE ident generic_params maybe_where_clause '=' ty_sum ';'  */
#line 470 "rustgram.y"
                                                                         {  }
#line 4793 "rustgram.tab.c"
    break;

  case 134: /* for_sized: FOR '?' ident  */
#line 473 "rustgram.y"
                          {  }
#line 4799 "rustgram.tab.c"
    break;

  case 135: /* for_sized: FOR ident '?'  */
#line 474 "rustgram.y"
                        {  }
#line 4805 "rustgram.tab.c"
    break;

  case 136: /* for_sized: %empty  */
#line 475 "rustgram.y"
                        {  }
#line 4811 "rustgram.tab.c"
    break;

  case 137: /* item_trait: maybe_unsafe TRAIT ident generic_params for_sized maybe_ty_param_bounds maybe_where_clause '{' maybe_trait_items '}'  */
#line 480 "rustgram.y"
          {

          }
#line 4819 "rustgram.tab.c"
    break;

  case 139: /* maybe_trait_items: %empty  */
#line 486 "rustgram.y"
                 {  }
#line 4825 "rustgram.tab.c"
    break;

  case 140: /* trait_items: trait_item  */
#line 489 "rustgram.y"
                                       {  }
#line 4831 "rustgram.tab.c"
    break;

  case 141: /* trait_items: trait_items trait_item  */
#line 490 "rustgram.y"
                                       {  }
#line 4837 "rustgram.tab.c"
    break;

  case 145: /* trait_item: maybe_outer_attrs item_macro  */
#line 496 "rustgram.y"
                                       {  }
#line 4843 "rustgram.tab.c"
    break;

  case 146: /* trait_const: maybe_outer_attrs CONST ident maybe_ty_ascription maybe_const_default ';'  */
#line 500 "rustgram.y"
                                      {  }
#line 4849 "rustgram.tab.c"
    break;

  case 147: /* maybe_const_default: '=' expr  */
#line 503 "rustgram.y"
                               {  }
#line 4855 "rustgram.tab.c"
    break;

  case 148: /* maybe_const_default: %empty  */
#line 504 "rustgram.y"
                   {  }
#line 4861 "rustgram.tab.c"
    break;

  case 149: /* trait_type: maybe_outer_attrs TYPE ty_param ';'  */
#line 507 "rustgram.y"
                                                 {  }
#line 4867 "rustgram.tab.c"
    break;

  case 150: /* maybe_unsafe: UNSAFE  */
#line 510 "rustgram.y"
                      {  }
#line 4873 "rustgram.tab.c"
    break;

  case 151: /* maybe_unsafe: %empty  */
#line 511 "rustgram.y"
                 {  }
#line 4879 "rustgram.tab.c"
    break;

  case 152: /* maybe_default_maybe_unsafe: DEFAULT UNSAFE  */
#line 514 "rustgram.y"
                                            {  }
#line 4885 "rustgram.tab.c"
    break;

  case 153: /* maybe_default_maybe_unsafe: DEFAULT  */
#line 515 "rustgram.y"
                         {  }
#line 4891 "rustgram.tab.c"
    break;

  case 154: /* maybe_default_maybe_unsafe: UNSAFE  */
#line 516 "rustgram.y"
                         {  }
#line 4897 "rustgram.tab.c"
    break;

  case 155: /* maybe_default_maybe_unsafe: %empty  */
#line 517 "rustgram.y"
                 {  }
#line 4903 "rustgram.tab.c"
    break;

  case 156: /* trait_method: type_method  */
#line 520 "rustgram.y"
                           {  }
#line 4909 "rustgram.tab.c"
    break;

  case 157: /* trait_method: method  */
#line 521 "rustgram.y"
                      {  }
#line 4915 "rustgram.tab.c"
    break;

  case 158: /* type_method: maybe_outer_attrs maybe_unsafe FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause ';'  */
#line 526 "rustgram.y"
          {

          }
#line 4923 "rustgram.tab.c"
    break;

  case 159: /* type_method: maybe_outer_attrs CONST maybe_unsafe FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause ';'  */
#line 530 "rustgram.y"
                                                                     {

          }
#line 4931 "rustgram.tab.c"
    break;

  case 160: /* type_method: maybe_outer_attrs maybe_unsafe EXTERN maybe_abi FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause ';'  */
#line 535 "rustgram.y"
                                  {

          }
#line 4939 "rustgram.tab.c"
    break;

  case 161: /* method: maybe_outer_attrs maybe_unsafe FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause inner_attrs_and_block  */
#line 542 "rustgram.y"
                                {

         }
#line 4947 "rustgram.tab.c"
    break;

  case 162: /* method: maybe_outer_attrs CONST maybe_unsafe FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause inner_attrs_and_block  */
#line 547 "rustgram.y"
                                {

          }
#line 4955 "rustgram.tab.c"
    break;

  case 163: /* method: maybe_outer_attrs maybe_unsafe EXTERN maybe_abi FN ident generic_params fn_decl_with_self_allow_anon_params maybe_where_clause inner_attrs_and_block  */
#line 552 "rustgram.y"
                                                   {

          }
#line 4963 "rustgram.tab.c"
    break;

  case 164: /* impl_method: attrs_and_vis maybe_default maybe_unsafe FN ident generic_params fn_decl_with_self maybe_where_clause inner_attrs_and_block  */
#line 558 "rustgram.y"
                                                                         {

          }
#line 4971 "rustgram.tab.c"
    break;

  case 165: /* impl_method: attrs_and_vis maybe_default CONST maybe_unsafe FN ident generic_params fn_decl_with_self maybe_where_clause inner_attrs_and_block  */
#line 563 "rustgram.y"
                                {

          }
#line 4979 "rustgram.tab.c"
    break;

  case 166: /* impl_method: attrs_and_vis maybe_default maybe_unsafe EXTERN maybe_abi FN ident generic_params fn_decl_with_self maybe_where_clause inner_attrs_and_block  */
#line 568 "rustgram.y"
                                {

          }
#line 4987 "rustgram.tab.c"
    break;

  case 167: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params ty_prim_sum maybe_where_clause '{' maybe_inner_attrs maybe_impl_items '}'  */
#line 589 "rustgram.y"
                                                                           {

          }
#line 4995 "rustgram.tab.c"
    break;

  case 168: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params '(' ty ')' maybe_where_clause '{' maybe_inner_attrs maybe_impl_items '}'  */
#line 593 "rustgram.y"
                                                                        {

          }
#line 5003 "rustgram.tab.c"
    break;

  case 169: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params trait_ref FOR ty_sum maybe_where_clause '{' maybe_inner_attrs maybe_impl_items '}'  */
#line 596 "rustgram.y"
                                                                                                                                            {

          }
#line 5011 "rustgram.tab.c"
    break;

  case 170: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params '!' trait_ref FOR ty_sum maybe_where_clause '{' maybe_inner_attrs maybe_impl_items '}'  */
#line 601 "rustgram.y"
          {

          }
#line 5019 "rustgram.tab.c"
    break;

  case 171: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params trait_ref FOR DOTDOT '{' '}'  */
#line 605 "rustgram.y"
                  {

          }
#line 5027 "rustgram.tab.c"
    break;

  case 172: /* item_impl: maybe_default_maybe_unsafe IMPL generic_params '!' trait_ref FOR DOTDOT '{' '}'  */
#line 609 "rustgram.y"
                         {

          }
#line 5035 "rustgram.tab.c"
    break;

  case 174: /* maybe_impl_items: %empty  */
#line 615 "rustgram.y"
                 {  }
#line 5041 "rustgram.tab.c"
    break;

  case 175: /* impl_items: impl_item  */
#line 618 "rustgram.y"
                                     {  }
#line 5047 "rustgram.tab.c"
    break;

  case 176: /* impl_items: impl_item impl_items  */
#line 619 "rustgram.y"
                                  {  }
#line 5053 "rustgram.tab.c"
    break;

  case 178: /* impl_item: attrs_and_vis item_macro  */
#line 623 "rustgram.y"
                                   {  }
#line 5059 "rustgram.tab.c"
    break;

  case 181: /* maybe_default: DEFAULT  */
#line 628 "rustgram.y"
                        {  }
#line 5065 "rustgram.tab.c"
    break;

  case 182: /* maybe_default: %empty  */
#line 629 "rustgram.y"
                 {  }
#line 5071 "rustgram.tab.c"
    break;

  case 183: /* impl_const: attrs_and_vis maybe_default item_const  */
#line 632 "rustgram.y"
                                                    {  }
#line 5077 "rustgram.tab.c"
    break;

  case 184: /* impl_type: attrs_and_vis maybe_default TYPE ident generic_params '=' ty_sum ';'  */
#line 636 "rustgram.y"
                            {  }
#line 5083 "rustgram.tab.c"
    break;

  case 185: /* item_fn: FN ident generic_params fn_decl maybe_where_clause inner_attrs_and_block  */
#line 640 "rustgram.y"
                                {

          }
#line 5091 "rustgram.tab.c"
    break;

  case 186: /* item_fn: CONST FN ident generic_params fn_decl maybe_where_clause inner_attrs_and_block  */
#line 644 "rustgram.y"
                                 {

          }
#line 5099 "rustgram.tab.c"
    break;

  case 187: /* item_unsafe_fn: UNSAFE FN ident generic_params fn_decl maybe_where_clause inner_attrs_and_block  */
#line 650 "rustgram.y"
                                       {

          }
#line 5107 "rustgram.tab.c"
    break;

  case 188: /* item_unsafe_fn: CONST UNSAFE FN ident generic_params fn_decl maybe_where_clause inner_attrs_and_block  */
#line 654 "rustgram.y"
                                {

          }
#line 5115 "rustgram.tab.c"
    break;

  case 189: /* item_unsafe_fn: UNSAFE EXTERN maybe_abi FN ident generic_params fn_decl maybe_where_clause inner_attrs_and_block  */
#line 658 "rustgram.y"
                                                    {

          }
#line 5123 "rustgram.tab.c"
    break;

  case 190: /* fn_decl: fn_params ret_ty  */
#line 663 "rustgram.y"
                             {  }
#line 5129 "rustgram.tab.c"
    break;

  case 191: /* fn_decl_with_self: fn_params_with_self ret_ty  */
#line 666 "rustgram.y"
                                                 {  }
#line 5135 "rustgram.tab.c"
    break;

  case 192: /* fn_decl_with_self_allow_anon_params: fn_anon_params_with_self ret_ty  */
#line 669 "rustgram.y"
                                                                        {  }
#line 5141 "rustgram.tab.c"
    break;

  case 193: /* fn_params: '(' maybe_params ')'  */
#line 672 "rustgram.y"
                                  {  }
#line 5147 "rustgram.tab.c"
    break;

  case 194: /* fn_anon_params: '(' anon_param anon_params_allow_variadic_tail ')'  */
#line 675 "rustgram.y"
                                                                    {  }
#line 5153 "rustgram.tab.c"
    break;

  case 195: /* fn_anon_params: '(' ')'  */
#line 676 "rustgram.y"
                                                             {  }
#line 5159 "rustgram.tab.c"
    break;

  case 196: /* fn_params_with_self: '(' maybe_mut SELF maybe_ty_ascription maybe_comma_params ')'  */
#line 680 "rustgram.y"
                                                           {  }
#line 5165 "rustgram.tab.c"
    break;

  case 197: /* fn_params_with_self: '(' '&' maybe_mut SELF maybe_ty_ascription maybe_comma_params ')'  */
#line 681 "rustgram.y"
                                                                            {
          }
#line 5172 "rustgram.tab.c"
    break;

  case 198: /* fn_params_with_self: '(' '&' lifetime maybe_mut SELF maybe_ty_ascription maybe_comma_params ')'  */
#line 684 "rustgram.y"
                                  {  }
#line 5178 "rustgram.tab.c"
    break;

  case 199: /* fn_params_with_self: '(' maybe_params ')'  */
#line 685 "rustgram.y"
                                  {  }
#line 5184 "rustgram.tab.c"
    break;

  case 200: /* fn_anon_params_with_self: '(' maybe_mut SELF maybe_ty_ascription maybe_comma_anon_params ')'  */
#line 689 "rustgram.y"
                                                 {  }
#line 5190 "rustgram.tab.c"
    break;

  case 201: /* fn_anon_params_with_self: '(' '&' maybe_mut SELF maybe_ty_ascription maybe_comma_anon_params ')'  */
#line 691 "rustgram.y"
                       {  }
#line 5196 "rustgram.tab.c"
    break;

  case 202: /* fn_anon_params_with_self: '(' '&' lifetime maybe_mut SELF maybe_ty_ascription maybe_comma_anon_params ')'  */
#line 693 "rustgram.y"
                                      {  }
#line 5202 "rustgram.tab.c"
    break;

  case 203: /* fn_anon_params_with_self: '(' maybe_anon_params ')'  */
#line 694 "rustgram.y"
                                      {  }
#line 5208 "rustgram.tab.c"
    break;

  case 206: /* maybe_params: %empty  */
#line 699 "rustgram.y"
                  {  }
#line 5214 "rustgram.tab.c"
    break;

  case 207: /* params: param  */
#line 702 "rustgram.y"
                               {  }
#line 5220 "rustgram.tab.c"
    break;

  case 208: /* params: params ',' param  */
#line 703 "rustgram.y"
                               {  }
#line 5226 "rustgram.tab.c"
    break;

  case 209: /* param: pat ':' ty_sum  */
#line 706 "rustgram.y"
                           {  }
#line 5232 "rustgram.tab.c"
    break;

  case 210: /* inferrable_params: inferrable_param  */
#line 709 "rustgram.y"
                                                           {  }
#line 5238 "rustgram.tab.c"
    break;

  case 211: /* inferrable_params: inferrable_params ',' inferrable_param  */
#line 710 "rustgram.y"
                                                 {  }
#line 5244 "rustgram.tab.c"
    break;

  case 212: /* inferrable_param: pat maybe_ty_ascription  */
#line 713 "rustgram.y"
                                           {  }
#line 5250 "rustgram.tab.c"
    break;

  case 213: /* maybe_comma_params: ','  */
#line 716 "rustgram.y"
                                    {  }
#line 5256 "rustgram.tab.c"
    break;

  case 214: /* maybe_comma_params: ',' params  */
#line 717 "rustgram.y"
                         {  }
#line 5262 "rustgram.tab.c"
    break;

  case 215: /* maybe_comma_params: ',' params ','  */
#line 718 "rustgram.y"
                         {  }
#line 5268 "rustgram.tab.c"
    break;

  case 216: /* maybe_comma_params: %empty  */
#line 719 "rustgram.y"
                         {  }
#line 5274 "rustgram.tab.c"
    break;

  case 217: /* maybe_comma_anon_params: ','  */
#line 722 "rustgram.y"
                                              {  }
#line 5280 "rustgram.tab.c"
    break;

  case 218: /* maybe_comma_anon_params: ',' anon_params  */
#line 723 "rustgram.y"
                              {  }
#line 5286 "rustgram.tab.c"
    break;

  case 219: /* maybe_comma_anon_params: ',' anon_params ','  */
#line 724 "rustgram.y"
                              {  }
#line 5292 "rustgram.tab.c"
    break;

  case 220: /* maybe_comma_anon_params: %empty  */
#line 725 "rustgram.y"
                              {  }
#line 5298 "rustgram.tab.c"
    break;

  case 223: /* maybe_anon_params: %empty  */
#line 730 "rustgram.y"
                      {  }
#line 5304 "rustgram.tab.c"
    break;

  case 224: /* anon_params: anon_param  */
#line 733 "rustgram.y"
                                         {  }
#line 5310 "rustgram.tab.c"
    break;

  case 225: /* anon_params: anon_params ',' anon_param  */
#line 734 "rustgram.y"
                                     {  }
#line 5316 "rustgram.tab.c"
    break;

  case 226: /* anon_param: named_arg ':' ty  */
#line 739 "rustgram.y"
                                {  }
#line 5322 "rustgram.tab.c"
    break;

  case 228: /* anon_params_allow_variadic_tail: ',' DOTDOTDOT  */
#line 743 "rustgram.y"
                                                         {  }
#line 5328 "rustgram.tab.c"
    break;

  case 229: /* anon_params_allow_variadic_tail: ',' anon_param anon_params_allow_variadic_tail  */
#line 744 "rustgram.y"
                                                         {  }
#line 5334 "rustgram.tab.c"
    break;

  case 230: /* anon_params_allow_variadic_tail: %empty  */
#line 745 "rustgram.y"
                                                         {  }
#line 5340 "rustgram.tab.c"
    break;

  case 232: /* named_arg: UNDERSCORE  */
#line 749 "rustgram.y"
                            {  }
#line 5346 "rustgram.tab.c"
    break;

  case 233: /* named_arg: '&' ident  */
#line 750 "rustgram.y"
                            {  }
#line 5352 "rustgram.tab.c"
    break;

  case 234: /* named_arg: '&' UNDERSCORE  */
#line 751 "rustgram.y"
                            {  }
#line 5358 "rustgram.tab.c"
    break;

  case 235: /* named_arg: ANDAND ident  */
#line 752 "rustgram.y"
                            {  }
#line 5364 "rustgram.tab.c"
    break;

  case 236: /* named_arg: ANDAND UNDERSCORE  */
#line 753 "rustgram.y"
                            {  }
#line 5370 "rustgram.tab.c"
    break;

  case 237: /* named_arg: MUT ident  */
#line 754 "rustgram.y"
                            {  }
#line 5376 "rustgram.tab.c"
    break;

  case 238: /* ret_ty: RARROW '!'  */
#line 757 "rustgram.y"
                            {  }
#line 5382 "rustgram.tab.c"
    break;

  case 239: /* ret_ty: RARROW ty  */
#line 758 "rustgram.y"
                             {  }
#line 5388 "rustgram.tab.c"
    break;

  case 240: /* ret_ty: %empty  */
#line 759 "rustgram.y"
                             {  }
#line 5394 "rustgram.tab.c"
    break;

  case 241: /* generic_params: '<' '>'  */
#line 762 "rustgram.y"
                                                     {  }
#line 5400 "rustgram.tab.c"
    break;

  case 242: /* generic_params: '<' lifetimes '>'  */
#line 763 "rustgram.y"
                                              {  }
#line 5406 "rustgram.tab.c"
    break;

  case 243: /* generic_params: '<' lifetimes ',' '>'  */
#line 764 "rustgram.y"
                                              {  }
#line 5412 "rustgram.tab.c"
    break;

  case 244: /* generic_params: '<' lifetimes SHR  */
#line 765 "rustgram.y"
                                              {  }
#line 5418 "rustgram.tab.c"
    break;

  case 245: /* generic_params: '<' lifetimes ',' SHR  */
#line 766 "rustgram.y"
                                              {  }
#line 5424 "rustgram.tab.c"
    break;

  case 246: /* generic_params: '<' lifetimes ',' ty_params '>'  */
#line 767 "rustgram.y"
                                              {  }
#line 5430 "rustgram.tab.c"
    break;

  case 247: /* generic_params: '<' lifetimes ',' ty_params ',' '>'  */
#line 768 "rustgram.y"
                                              {  }
#line 5436 "rustgram.tab.c"
    break;

  case 248: /* generic_params: '<' lifetimes ',' ty_params SHR  */
#line 769 "rustgram.y"
                                              {  }
#line 5442 "rustgram.tab.c"
    break;

  case 249: /* generic_params: '<' lifetimes ',' ty_params ',' SHR  */
#line 770 "rustgram.y"
                                              {  }
#line 5448 "rustgram.tab.c"
    break;

  case 250: /* generic_params: '<' ty_params '>'  */
#line 771 "rustgram.y"
                                              {  }
#line 5454 "rustgram.tab.c"
    break;

  case 251: /* generic_params: '<' ty_params ',' '>'  */
#line 772 "rustgram.y"
                                              {  }
#line 5460 "rustgram.tab.c"
    break;

  case 252: /* generic_params: '<' ty_params SHR  */
#line 773 "rustgram.y"
                                              {  }
#line 5466 "rustgram.tab.c"
    break;

  case 253: /* generic_params: '<' ty_params ',' SHR  */
#line 774 "rustgram.y"
                                              {  }
#line 5472 "rustgram.tab.c"
    break;

  case 254: /* generic_params: %empty  */
#line 775 "rustgram.y"
                                              {  }
#line 5478 "rustgram.tab.c"
    break;

  case 255: /* maybe_where_clause: %empty  */
#line 778 "rustgram.y"
                                                         {  }
#line 5484 "rustgram.tab.c"
    break;

  case 257: /* where_clause: WHERE where_predicates  */
#line 782 "rustgram.y"
                                                   {  }
#line 5490 "rustgram.tab.c"
    break;

  case 258: /* where_clause: WHERE where_predicates ','  */
#line 783 "rustgram.y"
                                              {  }
#line 5496 "rustgram.tab.c"
    break;

  case 259: /* where_predicates: where_predicate  */
#line 786 "rustgram.y"
                                                        {  }
#line 5502 "rustgram.tab.c"
    break;

  case 260: /* where_predicates: where_predicates ',' where_predicate  */
#line 787 "rustgram.y"
                                               {  }
#line 5508 "rustgram.tab.c"
    break;

  case 261: /* where_predicate: maybe_for_lifetimes lifetime ':' bounds  */
#line 790 "rustgram.y"
                                                             {  }
#line 5514 "rustgram.tab.c"
    break;

  case 262: /* where_predicate: maybe_for_lifetimes ty ':' ty_param_bounds  */
#line 791 "rustgram.y"
                                                     {  }
#line 5520 "rustgram.tab.c"
    break;

  case 263: /* maybe_for_lifetimes: FOR '<' lifetimes '>'  */
#line 794 "rustgram.y"
                                            {  }
#line 5526 "rustgram.tab.c"
    break;

  case 264: /* maybe_for_lifetimes: %empty  */
#line 795 "rustgram.y"
                                {  }
#line 5532 "rustgram.tab.c"
    break;

  case 265: /* ty_params: ty_param  */
#line 798 "rustgram.y"
                                   {  }
#line 5538 "rustgram.tab.c"
    break;

  case 266: /* ty_params: ty_params ',' ty_param  */
#line 799 "rustgram.y"
                                 {  }
#line 5544 "rustgram.tab.c"
    break;

  case 267: /* path_no_types_allowed: ident  */
#line 806 "rustgram.y"
                                                            {  }
#line 5550 "rustgram.tab.c"
    break;

  case 268: /* path_no_types_allowed: MOD_SEP ident  */
#line 807 "rustgram.y"
                                              {  }
#line 5556 "rustgram.tab.c"
    break;

  case 269: /* path_no_types_allowed: SELF  */
#line 808 "rustgram.y"
                                              {  }
#line 5562 "rustgram.tab.c"
    break;

  case 270: /* path_no_types_allowed: MOD_SEP SELF  */
#line 809 "rustgram.y"
                                              {  }
#line 5568 "rustgram.tab.c"
    break;

  case 271: /* path_no_types_allowed: SUPER  */
#line 810 "rustgram.y"
                                              {  }
#line 5574 "rustgram.tab.c"
    break;

  case 272: /* path_no_types_allowed: MOD_SEP SUPER  */
#line 811 "rustgram.y"
                                              {  }
#line 5580 "rustgram.tab.c"
    break;

  case 273: /* path_no_types_allowed: path_no_types_allowed MOD_SEP ident  */
#line 812 "rustgram.y"
                                              {  }
#line 5586 "rustgram.tab.c"
    break;

  case 274: /* path_generic_args_without_colons: ident  */
#line 826 "rustgram.y"
                                                     {
          }
#line 5593 "rustgram.tab.c"
    break;

  case 275: /* path_generic_args_without_colons: ident generic_args  */
#line 828 "rustgram.y"
                                          {
          }
#line 5600 "rustgram.tab.c"
    break;

  case 276: /* path_generic_args_without_colons: ident '(' maybe_ty_sums ')' ret_ty  */
#line 830 "rustgram.y"
                                                         {
          }
#line 5607 "rustgram.tab.c"
    break;

  case 277: /* path_generic_args_without_colons: path_generic_args_without_colons MOD_SEP ident  */
#line 832 "rustgram.y"
                                                                     {
          }
#line 5614 "rustgram.tab.c"
    break;

  case 278: /* path_generic_args_without_colons: path_generic_args_without_colons MOD_SEP ident generic_args  */
#line 835 "rustgram.y"
                                       {  }
#line 5620 "rustgram.tab.c"
    break;

  case 279: /* path_generic_args_without_colons: path_generic_args_without_colons MOD_SEP ident '(' maybe_ty_sums ')' ret_ty  */
#line 837 "rustgram.y"
                                       {  }
#line 5626 "rustgram.tab.c"
    break;

  case 280: /* generic_args: '<' generic_values '>'  */
#line 840 "rustgram.y"
                                        {  }
#line 5632 "rustgram.tab.c"
    break;

  case 281: /* generic_args: '<' generic_values SHR  */
#line 841 "rustgram.y"
                                   {  }
#line 5638 "rustgram.tab.c"
    break;

  case 282: /* generic_args: '<' generic_values GE  */
#line 842 "rustgram.y"
                                   {  }
#line 5644 "rustgram.tab.c"
    break;

  case 283: /* generic_args: '<' generic_values SHREQ  */
#line 843 "rustgram.y"
                                   {  }
#line 5650 "rustgram.tab.c"
    break;

  case 284: /* generic_args: SHL ty_qualified_path_and_generic_values '>'  */
#line 848 "rustgram.y"
                                                         {  }
#line 5656 "rustgram.tab.c"
    break;

  case 285: /* generic_args: SHL ty_qualified_path_and_generic_values SHR  */
#line 849 "rustgram.y"
                                                         {  }
#line 5662 "rustgram.tab.c"
    break;

  case 286: /* generic_args: SHL ty_qualified_path_and_generic_values GE  */
#line 850 "rustgram.y"
                                                         {  }
#line 5668 "rustgram.tab.c"
    break;

  case 287: /* generic_args: SHL ty_qualified_path_and_generic_values SHREQ  */
#line 851 "rustgram.y"
                                                         {  }
#line 5674 "rustgram.tab.c"
    break;

  case 288: /* generic_values: maybe_ty_sums_and_or_bindings  */
#line 854 "rustgram.y"
                                               {  }
#line 5680 "rustgram.tab.c"
    break;

  case 291: /* maybe_ty_sums_and_or_bindings: ty_sums ',' bindings  */
#line 859 "rustgram.y"
                               {  }
#line 5686 "rustgram.tab.c"
    break;

  case 294: /* maybe_ty_sums_and_or_bindings: %empty  */
#line 862 "rustgram.y"
                               {  }
#line 5692 "rustgram.tab.c"
    break;

  case 295: /* maybe_bindings: ',' bindings  */
#line 865 "rustgram.y"
                              {  }
#line 5698 "rustgram.tab.c"
    break;

  case 296: /* maybe_bindings: %empty  */
#line 866 "rustgram.y"
                       {  }
#line 5704 "rustgram.tab.c"
    break;

  case 297: /* pat: UNDERSCORE  */
#line 873 "rustgram.y"
                                                      {  }
#line 5710 "rustgram.tab.c"
    break;

  case 298: /* pat: '&' pat  */
#line 874 "rustgram.y"
                                                          {  }
#line 5716 "rustgram.tab.c"
    break;

  case 299: /* pat: '&' MUT pat  */
#line 875 "rustgram.y"
                                                          {  }
#line 5722 "rustgram.tab.c"
    break;

  case 300: /* pat: ANDAND pat  */
#line 876 "rustgram.y"
                                                          {  }
#line 5728 "rustgram.tab.c"
    break;

  case 301: /* pat: '(' ')'  */
#line 877 "rustgram.y"
                                                          {  }
#line 5734 "rustgram.tab.c"
    break;

  case 302: /* pat: '(' pat_tup ')'  */
#line 878 "rustgram.y"
                                                          {  }
#line 5740 "rustgram.tab.c"
    break;

  case 303: /* pat: '[' pat_vec ']'  */
#line 879 "rustgram.y"
                                                          {  }
#line 5746 "rustgram.tab.c"
    break;

  case 305: /* pat: lit_or_path DOTDOTDOT lit_or_path  */
#line 881 "rustgram.y"
                                                          {  }
#line 5752 "rustgram.tab.c"
    break;

  case 306: /* pat: path_expr '{' pat_struct '}'  */
#line 882 "rustgram.y"
                                                          {  }
#line 5758 "rustgram.tab.c"
    break;

  case 307: /* pat: path_expr '(' ')'  */
#line 883 "rustgram.y"
                                                          {  }
#line 5764 "rustgram.tab.c"
    break;

  case 308: /* pat: path_expr '(' pat_tup ')'  */
#line 884 "rustgram.y"
                                                          {  }
#line 5770 "rustgram.tab.c"
    break;

  case 309: /* pat: path_expr '!' maybe_ident delimited_token_trees  */
#line 885 "rustgram.y"
                                                          {  }
#line 5776 "rustgram.tab.c"
    break;

  case 310: /* pat: binding_mode ident  */
#line 886 "rustgram.y"
                                                          {  }
#line 5782 "rustgram.tab.c"
    break;

  case 311: /* pat: ident '@' pat  */
#line 887 "rustgram.y"
                                                          {  }
#line 5788 "rustgram.tab.c"
    break;

  case 312: /* pat: binding_mode ident '@' pat  */
#line 888 "rustgram.y"
                                                          {  }
#line 5794 "rustgram.tab.c"
    break;

  case 313: /* pat: BOX pat  */
#line 889 "rustgram.y"
                                                          {  }
#line 5800 "rustgram.tab.c"
    break;

  case 314: /* pat: '<' ty_sum maybe_as_trait_ref '>' MOD_SEP ident  */
#line 890 "rustgram.y"
                                                          {  }
#line 5806 "rustgram.tab.c"
    break;

  case 315: /* pat: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident maybe_as_trait_ref '>' MOD_SEP ident  */
#line 892 "rustgram.y"
                                                {

          }
#line 5814 "rustgram.tab.c"
    break;

  case 316: /* pats_or: pat  */
#line 897 "rustgram.y"
                           {  }
#line 5820 "rustgram.tab.c"
    break;

  case 317: /* pats_or: pats_or '|' pat  */
#line 898 "rustgram.y"
                           {  }
#line 5826 "rustgram.tab.c"
    break;

  case 318: /* binding_mode: REF  */
#line 901 "rustgram.y"
                           {  }
#line 5832 "rustgram.tab.c"
    break;

  case 319: /* binding_mode: REF MUT  */
#line 902 "rustgram.y"
                      {  }
#line 5838 "rustgram.tab.c"
    break;

  case 320: /* binding_mode: MUT  */
#line 903 "rustgram.y"
                      {  }
#line 5844 "rustgram.tab.c"
    break;

  case 321: /* lit_or_path: path_expr  */
#line 906 "rustgram.y"
                           {  }
#line 5850 "rustgram.tab.c"
    break;

  case 322: /* lit_or_path: lit  */
#line 907 "rustgram.y"
                       {  }
#line 5856 "rustgram.tab.c"
    break;

  case 323: /* lit_or_path: '-' lit  */
#line 908 "rustgram.y"
                       {  }
#line 5862 "rustgram.tab.c"
    break;

  case 324: /* pat_field: ident  */
#line 911 "rustgram.y"
                                          {  }
#line 5868 "rustgram.tab.c"
    break;

  case 325: /* pat_field: binding_mode ident  */
#line 912 "rustgram.y"
                                        {  }
#line 5874 "rustgram.tab.c"
    break;

  case 326: /* pat_field: BOX ident  */
#line 913 "rustgram.y"
                                        {  }
#line 5880 "rustgram.tab.c"
    break;

  case 327: /* pat_field: BOX binding_mode ident  */
#line 914 "rustgram.y"
                                        {  }
#line 5886 "rustgram.tab.c"
    break;

  case 328: /* pat_field: ident ':' pat  */
#line 915 "rustgram.y"
                                        {  }
#line 5892 "rustgram.tab.c"
    break;

  case 329: /* pat_field: binding_mode ident ':' pat  */
#line 916 "rustgram.y"
                                        {  }
#line 5898 "rustgram.tab.c"
    break;

  case 330: /* pat_field: LIT_INTEGER ':' pat  */
#line 917 "rustgram.y"
                                        {  }
#line 5904 "rustgram.tab.c"
    break;

  case 331: /* pat_fields: pat_field  */
#line 920 "rustgram.y"
                                        {  }
#line 5910 "rustgram.tab.c"
    break;

  case 332: /* pat_fields: pat_fields ',' pat_field  */
#line 921 "rustgram.y"
                                     {  }
#line 5916 "rustgram.tab.c"
    break;

  case 333: /* pat_struct: pat_fields  */
#line 924 "rustgram.y"
                                        {  }
#line 5922 "rustgram.tab.c"
    break;

  case 334: /* pat_struct: pat_fields ','  */
#line 925 "rustgram.y"
                                     {  }
#line 5928 "rustgram.tab.c"
    break;

  case 335: /* pat_struct: pat_fields ',' DOTDOT  */
#line 926 "rustgram.y"
                                     {  }
#line 5934 "rustgram.tab.c"
    break;

  case 336: /* pat_struct: DOTDOT  */
#line 927 "rustgram.y"
                                     {  }
#line 5940 "rustgram.tab.c"
    break;

  case 337: /* pat_struct: %empty  */
#line 928 "rustgram.y"
                                     {  }
#line 5946 "rustgram.tab.c"
    break;

  case 338: /* pat_tup: pat_tup_elts  */
#line 931 "rustgram.y"
                                                        {  }
#line 5952 "rustgram.tab.c"
    break;

  case 339: /* pat_tup: pat_tup_elts ','  */
#line 932 "rustgram.y"
                                                        {  }
#line 5958 "rustgram.tab.c"
    break;

  case 340: /* pat_tup: pat_tup_elts DOTDOT  */
#line 933 "rustgram.y"
                                                        {  }
#line 5964 "rustgram.tab.c"
    break;

  case 341: /* pat_tup: pat_tup_elts ',' DOTDOT  */
#line 934 "rustgram.y"
                                                        {  }
#line 5970 "rustgram.tab.c"
    break;

  case 342: /* pat_tup: pat_tup_elts DOTDOT ',' pat_tup_elts  */
#line 935 "rustgram.y"
                                                        {  }
#line 5976 "rustgram.tab.c"
    break;

  case 343: /* pat_tup: pat_tup_elts DOTDOT ',' pat_tup_elts ','  */
#line 936 "rustgram.y"
                                                        {  }
#line 5982 "rustgram.tab.c"
    break;

  case 344: /* pat_tup: pat_tup_elts ',' DOTDOT ',' pat_tup_elts  */
#line 937 "rustgram.y"
                                                        {  }
#line 5988 "rustgram.tab.c"
    break;

  case 345: /* pat_tup: pat_tup_elts ',' DOTDOT ',' pat_tup_elts ','  */
#line 938 "rustgram.y"
                                                        {  }
#line 5994 "rustgram.tab.c"
    break;

  case 346: /* pat_tup: DOTDOT ',' pat_tup_elts  */
#line 939 "rustgram.y"
                                                        {  }
#line 6000 "rustgram.tab.c"
    break;

  case 347: /* pat_tup: DOTDOT ',' pat_tup_elts ','  */
#line 940 "rustgram.y"
                                                        {  }
#line 6006 "rustgram.tab.c"
    break;

  case 348: /* pat_tup: DOTDOT  */
#line 941 "rustgram.y"
                                                        {  }
#line 6012 "rustgram.tab.c"
    break;

  case 349: /* pat_tup_elts: pat  */
#line 944 "rustgram.y"
                                      {  }
#line 6018 "rustgram.tab.c"
    break;

  case 350: /* pat_tup_elts: pat_tup_elts ',' pat  */
#line 945 "rustgram.y"
                                      {  }
#line 6024 "rustgram.tab.c"
    break;

  case 351: /* pat_vec: pat_vec_elts  */
#line 948 "rustgram.y"
                                                        {  }
#line 6030 "rustgram.tab.c"
    break;

  case 352: /* pat_vec: pat_vec_elts ','  */
#line 949 "rustgram.y"
                                                        {  }
#line 6036 "rustgram.tab.c"
    break;

  case 353: /* pat_vec: pat_vec_elts DOTDOT  */
#line 950 "rustgram.y"
                                                        {  }
#line 6042 "rustgram.tab.c"
    break;

  case 354: /* pat_vec: pat_vec_elts ',' DOTDOT  */
#line 951 "rustgram.y"
                                                        {  }
#line 6048 "rustgram.tab.c"
    break;

  case 355: /* pat_vec: pat_vec_elts DOTDOT ',' pat_vec_elts  */
#line 952 "rustgram.y"
                                                        {  }
#line 6054 "rustgram.tab.c"
    break;

  case 356: /* pat_vec: pat_vec_elts DOTDOT ',' pat_vec_elts ','  */
#line 953 "rustgram.y"
                                                        {  }
#line 6060 "rustgram.tab.c"
    break;

  case 357: /* pat_vec: pat_vec_elts ',' DOTDOT ',' pat_vec_elts  */
#line 954 "rustgram.y"
                                                        {  }
#line 6066 "rustgram.tab.c"
    break;

  case 358: /* pat_vec: pat_vec_elts ',' DOTDOT ',' pat_vec_elts ','  */
#line 955 "rustgram.y"
                                                        {  }
#line 6072 "rustgram.tab.c"
    break;

  case 359: /* pat_vec: DOTDOT ',' pat_vec_elts  */
#line 956 "rustgram.y"
                                                        {  }
#line 6078 "rustgram.tab.c"
    break;

  case 360: /* pat_vec: DOTDOT ',' pat_vec_elts ','  */
#line 957 "rustgram.y"
                                                        {  }
#line 6084 "rustgram.tab.c"
    break;

  case 361: /* pat_vec: DOTDOT  */
#line 958 "rustgram.y"
                                                        {  }
#line 6090 "rustgram.tab.c"
    break;

  case 362: /* pat_vec: %empty  */
#line 959 "rustgram.y"
                                                        {  }
#line 6096 "rustgram.tab.c"
    break;

  case 363: /* pat_vec_elts: pat  */
#line 962 "rustgram.y"
                                      {  }
#line 6102 "rustgram.tab.c"
    break;

  case 364: /* pat_vec_elts: pat_vec_elts ',' pat  */
#line 963 "rustgram.y"
                                 {  }
#line 6108 "rustgram.tab.c"
    break;

  case 367: /* ty: '<' ty_sum maybe_as_trait_ref '>' MOD_SEP ident  */
#line 972 "rustgram.y"
                                                          {  }
#line 6114 "rustgram.tab.c"
    break;

  case 368: /* ty: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident maybe_as_trait_ref '>' MOD_SEP ident  */
#line 974 "rustgram.y"
                                               {  }
#line 6120 "rustgram.tab.c"
    break;

  case 369: /* ty: '(' ty_sums ')'  */
#line 975 "rustgram.y"
                                                          {  }
#line 6126 "rustgram.tab.c"
    break;

  case 370: /* ty: '(' ty_sums ',' ')'  */
#line 976 "rustgram.y"
                                                          {  }
#line 6132 "rustgram.tab.c"
    break;

  case 371: /* ty: '(' ')'  */
#line 977 "rustgram.y"
                                                          {  }
#line 6138 "rustgram.tab.c"
    break;

  case 372: /* ty_prim: path_generic_args_without_colons  */
#line 980 "rustgram.y"
                                                          {  }
#line 6144 "rustgram.tab.c"
    break;

  case 373: /* ty_prim: MOD_SEP path_generic_args_without_colons  */
#line 981 "rustgram.y"
                                                               {  }
#line 6150 "rustgram.tab.c"
    break;

  case 374: /* ty_prim: SELF MOD_SEP path_generic_args_without_colons  */
#line 982 "rustgram.y"
                                                                    {  }
#line 6156 "rustgram.tab.c"
    break;

  case 375: /* ty_prim: path_generic_args_without_colons '!' maybe_ident delimited_token_trees  */
#line 984 "rustgram.y"
                                        {  }
#line 6162 "rustgram.tab.c"
    break;

  case 376: /* ty_prim: MOD_SEP path_generic_args_without_colons '!' maybe_ident delimited_token_trees  */
#line 986 "rustgram.y"
                                            {  }
#line 6168 "rustgram.tab.c"
    break;

  case 377: /* ty_prim: BOX ty  */
#line 987 "rustgram.y"
                                                                    {  }
#line 6174 "rustgram.tab.c"
    break;

  case 378: /* ty_prim: '*' maybe_mut_or_const ty  */
#line 988 "rustgram.y"
                                                                    {  }
#line 6180 "rustgram.tab.c"
    break;

  case 379: /* ty_prim: '&' ty  */
#line 989 "rustgram.y"
                                                                    {  }
#line 6186 "rustgram.tab.c"
    break;

  case 380: /* ty_prim: '&' MUT ty  */
#line 990 "rustgram.y"
                                                                    {  }
#line 6192 "rustgram.tab.c"
    break;

  case 381: /* ty_prim: ANDAND ty  */
#line 991 "rustgram.y"
                                                                    {  }
#line 6198 "rustgram.tab.c"
    break;

  case 382: /* ty_prim: ANDAND MUT ty  */
#line 992 "rustgram.y"
                                                                    {  }
#line 6204 "rustgram.tab.c"
    break;

  case 383: /* ty_prim: '&' lifetime maybe_mut ty  */
#line 993 "rustgram.y"
                                                                    {  }
#line 6210 "rustgram.tab.c"
    break;

  case 384: /* ty_prim: ANDAND lifetime maybe_mut ty  */
#line 994 "rustgram.y"
                                                                    {  }
#line 6216 "rustgram.tab.c"
    break;

  case 385: /* ty_prim: '[' ty ']'  */
#line 995 "rustgram.y"
                                                                    {  }
#line 6222 "rustgram.tab.c"
    break;

  case 386: /* ty_prim: '[' ty ',' DOTDOT expr ']'  */
#line 996 "rustgram.y"
                                                                    {  }
#line 6228 "rustgram.tab.c"
    break;

  case 387: /* ty_prim: '[' ty ';' expr ']'  */
#line 997 "rustgram.y"
                                                                    {  }
#line 6234 "rustgram.tab.c"
    break;

  case 388: /* ty_prim: TYPEOF '(' expr ')'  */
#line 998 "rustgram.y"
                                                                    {  }
#line 6240 "rustgram.tab.c"
    break;

  case 389: /* ty_prim: UNDERSCORE  */
#line 999 "rustgram.y"
                                                                    {  }
#line 6246 "rustgram.tab.c"
    break;

  case 392: /* ty_bare_fn: FN ty_fn_decl  */
#line 1004 "rustgram.y"
                                                {  }
#line 6252 "rustgram.tab.c"
    break;

  case 393: /* ty_bare_fn: UNSAFE FN ty_fn_decl  */
#line 1005 "rustgram.y"
                                                {  }
#line 6258 "rustgram.tab.c"
    break;

  case 394: /* ty_bare_fn: EXTERN maybe_abi FN ty_fn_decl  */
#line 1006 "rustgram.y"
                                                {  }
#line 6264 "rustgram.tab.c"
    break;

  case 395: /* ty_bare_fn: UNSAFE EXTERN maybe_abi FN ty_fn_decl  */
#line 1007 "rustgram.y"
                                                {  }
#line 6270 "rustgram.tab.c"
    break;

  case 396: /* ty_fn_decl: generic_params fn_anon_params ret_ty  */
#line 1010 "rustgram.y"
                                                  {  }
#line 6276 "rustgram.tab.c"
    break;

  case 397: /* ty_closure: UNSAFE '|' anon_params '|' maybe_bounds ret_ty  */
#line 1013 "rustgram.y"
                                                            {  }
#line 6282 "rustgram.tab.c"
    break;

  case 398: /* ty_closure: '|' anon_params '|' maybe_bounds ret_ty  */
#line 1014 "rustgram.y"
                                                            {  }
#line 6288 "rustgram.tab.c"
    break;

  case 399: /* ty_closure: UNSAFE OROR maybe_bounds ret_ty  */
#line 1015 "rustgram.y"
                                                            {  }
#line 6294 "rustgram.tab.c"
    break;

  case 400: /* ty_closure: OROR maybe_bounds ret_ty  */
#line 1016 "rustgram.y"
                                                            {  }
#line 6300 "rustgram.tab.c"
    break;

  case 401: /* for_in_type: FOR '<' maybe_lifetimes '>' for_in_type_suffix  */
#line 1019 "rustgram.y"
                                                             {  }
#line 6306 "rustgram.tab.c"
    break;

  case 405: /* maybe_mut: MUT  */
#line 1027 "rustgram.y"
                             {  }
#line 6312 "rustgram.tab.c"
    break;

  case 406: /* maybe_mut: %empty  */
#line 1028 "rustgram.y"
                           {  }
#line 6318 "rustgram.tab.c"
    break;

  case 407: /* maybe_mut_or_const: MUT  */
#line 1031 "rustgram.y"
                            {  }
#line 6324 "rustgram.tab.c"
    break;

  case 408: /* maybe_mut_or_const: CONST  */
#line 1032 "rustgram.y"
                 {  }
#line 6330 "rustgram.tab.c"
    break;

  case 409: /* maybe_mut_or_const: %empty  */
#line 1033 "rustgram.y"
                 {  }
#line 6336 "rustgram.tab.c"
    break;

  case 410: /* ty_qualified_path_and_generic_values: ty_qualified_path maybe_bindings  */
#line 1036 "rustgram.y"
                                                                        {
  
          }
#line 6344 "rustgram.tab.c"
    break;

  case 411: /* ty_qualified_path_and_generic_values: ty_qualified_path ',' ty_sums maybe_bindings  */
#line 1039 "rustgram.y"
                                                       {
  
          }
#line 6352 "rustgram.tab.c"
    break;

  case 412: /* ty_qualified_path: ty_sum AS trait_ref '>' MOD_SEP ident  */
#line 1044 "rustgram.y"
                                                                    {  }
#line 6358 "rustgram.tab.c"
    break;

  case 413: /* ty_qualified_path: ty_sum AS trait_ref '>' MOD_SEP ident '+' ty_param_bounds  */
#line 1045 "rustgram.y"
                                                                    {  }
#line 6364 "rustgram.tab.c"
    break;

  case 416: /* maybe_ty_sums: %empty  */
#line 1050 "rustgram.y"
                 {  }
#line 6370 "rustgram.tab.c"
    break;

  case 417: /* ty_sums: ty_sum  */
#line 1053 "rustgram.y"
                             {  }
#line 6376 "rustgram.tab.c"
    break;

  case 418: /* ty_sums: ty_sums ',' ty_sum  */
#line 1054 "rustgram.y"
                             {  }
#line 6382 "rustgram.tab.c"
    break;

  case 419: /* ty_sum: ty_sum_elt  */
#line 1057 "rustgram.y"
                               {  }
#line 6388 "rustgram.tab.c"
    break;

  case 420: /* ty_sum: ty_sum '+' ty_sum_elt  */
#line 1058 "rustgram.y"
                                {  }
#line 6394 "rustgram.tab.c"
    break;

  case 423: /* ty_prim_sum: ty_prim_sum_elt  */
#line 1065 "rustgram.y"
                                              {  }
#line 6400 "rustgram.tab.c"
    break;

  case 424: /* ty_prim_sum: ty_prim_sum '+' ty_prim_sum_elt  */
#line 1066 "rustgram.y"
                                          {  }
#line 6406 "rustgram.tab.c"
    break;

  case 427: /* maybe_ty_param_bounds: ':' ty_param_bounds  */
#line 1073 "rustgram.y"
                                            {  }
#line 6412 "rustgram.tab.c"
    break;

  case 428: /* maybe_ty_param_bounds: %empty  */
#line 1074 "rustgram.y"
                              {  }
#line 6418 "rustgram.tab.c"
    break;

  case 430: /* ty_param_bounds: %empty  */
#line 1078 "rustgram.y"
                 {  }
#line 6424 "rustgram.tab.c"
    break;

  case 432: /* boundseq: boundseq '+' polybound  */
#line 1082 "rustgram.y"
                                 {  }
#line 6430 "rustgram.tab.c"
    break;

  case 433: /* polybound: FOR '<' maybe_lifetimes '>' bound  */
#line 1085 "rustgram.y"
                                              {  }
#line 6436 "rustgram.tab.c"
    break;

  case 435: /* polybound: '?' FOR '<' maybe_lifetimes '>' bound  */
#line 1087 "rustgram.y"
                                                {  }
#line 6442 "rustgram.tab.c"
    break;

  case 436: /* polybound: '?' bound  */
#line 1088 "rustgram.y"
                    {  }
#line 6448 "rustgram.tab.c"
    break;

  case 437: /* bindings: binding  */
#line 1091 "rustgram.y"
                                {  }
#line 6454 "rustgram.tab.c"
    break;

  case 438: /* bindings: bindings ',' binding  */
#line 1092 "rustgram.y"
                               {  }
#line 6460 "rustgram.tab.c"
    break;

  case 439: /* binding: ident '=' ty  */
#line 1095 "rustgram.y"
                       {  }
#line 6466 "rustgram.tab.c"
    break;

  case 440: /* ty_param: ident maybe_ty_param_bounds maybe_ty_default  */
#line 1098 "rustgram.y"
                                                                  {  }
#line 6472 "rustgram.tab.c"
    break;

  case 441: /* ty_param: ident '?' ident maybe_ty_param_bounds maybe_ty_default  */
#line 1099 "rustgram.y"
                                                                 {  }
#line 6478 "rustgram.tab.c"
    break;

  case 442: /* maybe_bounds: ':' bounds  */
#line 1102 "rustgram.y"
                                                      {  }
#line 6484 "rustgram.tab.c"
    break;

  case 443: /* maybe_bounds: %empty  */
#line 1103 "rustgram.y"
                                 {  }
#line 6490 "rustgram.tab.c"
    break;

  case 444: /* bounds: bound  */
#line 1106 "rustgram.y"
                          {  }
#line 6496 "rustgram.tab.c"
    break;

  case 445: /* bounds: bounds '+' bound  */
#line 1107 "rustgram.y"
                           {  }
#line 6502 "rustgram.tab.c"
    break;

  case 448: /* maybe_ltbounds: ':' ltbounds  */
#line 1114 "rustgram.y"
                                                    {  }
#line 6508 "rustgram.tab.c"
    break;

  case 449: /* maybe_ltbounds: %empty  */
#line 1115 "rustgram.y"
                             {  }
#line 6514 "rustgram.tab.c"
    break;

  case 450: /* ltbounds: lifetime  */
#line 1118 "rustgram.y"
                                 {  }
#line 6520 "rustgram.tab.c"
    break;

  case 451: /* ltbounds: ltbounds '+' lifetime  */
#line 1119 "rustgram.y"
                                {  }
#line 6526 "rustgram.tab.c"
    break;

  case 452: /* maybe_ty_default: '=' ty_sum  */
#line 1122 "rustgram.y"
                              {  }
#line 6532 "rustgram.tab.c"
    break;

  case 453: /* maybe_ty_default: %empty  */
#line 1123 "rustgram.y"
                     {  }
#line 6538 "rustgram.tab.c"
    break;

  case 456: /* maybe_lifetimes: %empty  */
#line 1128 "rustgram.y"
                 {  }
#line 6544 "rustgram.tab.c"
    break;

  case 457: /* lifetimes: lifetime_and_bounds  */
#line 1131 "rustgram.y"
                                              {  }
#line 6550 "rustgram.tab.c"
    break;

  case 458: /* lifetimes: lifetimes ',' lifetime_and_bounds  */
#line 1132 "rustgram.y"
                                            {  }
#line 6556 "rustgram.tab.c"
    break;

  case 459: /* lifetime_and_bounds: LIFETIME maybe_ltbounds  */
#line 1135 "rustgram.y"
                                                      {  }
#line 6562 "rustgram.tab.c"
    break;

  case 460: /* lifetime_and_bounds: STATIC_LIFETIME  */
#line 1136 "rustgram.y"
                                          {  }
#line 6568 "rustgram.tab.c"
    break;

  case 461: /* lifetime: LIFETIME  */
#line 1139 "rustgram.y"
                            {  }
#line 6574 "rustgram.tab.c"
    break;

  case 462: /* lifetime: STATIC_LIFETIME  */
#line 1140 "rustgram.y"
                           {  }
#line 6580 "rustgram.tab.c"
    break;

  case 464: /* trait_ref: MOD_SEP path_generic_args_without_colons  */
#line 1144 "rustgram.y"
                                                               {  }
#line 6586 "rustgram.tab.c"
    break;

  case 465: /* inner_attrs_and_block: '{' maybe_inner_attrs maybe_stmts '}'  */
#line 1151 "rustgram.y"
                                                                     {  }
#line 6592 "rustgram.tab.c"
    break;

  case 466: /* block: '{' maybe_stmts '}'  */
#line 1154 "rustgram.y"
                                                     {  }
#line 6598 "rustgram.tab.c"
    break;

  case 468: /* maybe_stmts: stmts nonblock_expr  */
#line 1158 "rustgram.y"
                              {  }
#line 6604 "rustgram.tab.c"
    break;

  case 470: /* maybe_stmts: %empty  */
#line 1160 "rustgram.y"
                              {  }
#line 6610 "rustgram.tab.c"
    break;

  case 471: /* stmts: stmt  */
#line 1187 "rustgram.y"
                       {  }
#line 6616 "rustgram.tab.c"
    break;

  case 472: /* stmts: stmts stmt  */
#line 1188 "rustgram.y"
                         {  }
#line 6622 "rustgram.tab.c"
    break;

  case 473: /* stmt: maybe_outer_attrs let  */
#line 1191 "rustgram.y"
                                 {  }
#line 6628 "rustgram.tab.c"
    break;

  case 475: /* stmt: PUB stmt_item  */
#line 1193 "rustgram.y"
                                    {  }
#line 6634 "rustgram.tab.c"
    break;

  case 476: /* stmt: outer_attrs stmt_item  */
#line 1194 "rustgram.y"
                                    {  }
#line 6640 "rustgram.tab.c"
    break;

  case 477: /* stmt: outer_attrs PUB stmt_item  */
#line 1195 "rustgram.y"
                                    {  }
#line 6646 "rustgram.tab.c"
    break;

  case 479: /* stmt: maybe_outer_attrs block  */
#line 1197 "rustgram.y"
                                    {  }
#line 6652 "rustgram.tab.c"
    break;

  case 481: /* stmt: outer_attrs nonblock_expr ';'  */
#line 1199 "rustgram.y"
                                        {  }
#line 6658 "rustgram.tab.c"
    break;

  case 482: /* stmt: ';'  */
#line 1200 "rustgram.y"
                                {  }
#line 6664 "rustgram.tab.c"
    break;

  case 485: /* maybe_exprs: %empty  */
#line 1205 "rustgram.y"
                 {  }
#line 6670 "rustgram.tab.c"
    break;

  case 487: /* maybe_expr: %empty  */
#line 1209 "rustgram.y"
                 {  }
#line 6676 "rustgram.tab.c"
    break;

  case 488: /* exprs: expr  */
#line 1212 "rustgram.y"
                                                     {  }
#line 6682 "rustgram.tab.c"
    break;

  case 489: /* exprs: exprs ',' expr  */
#line 1213 "rustgram.y"
                                                     {  }
#line 6688 "rustgram.tab.c"
    break;

  case 491: /* path_expr: MOD_SEP path_generic_args_with_colons  */
#line 1217 "rustgram.y"
                                                     {  }
#line 6694 "rustgram.tab.c"
    break;

  case 492: /* path_expr: SELF MOD_SEP path_generic_args_with_colons  */
#line 1218 "rustgram.y"
                                                     {  }
#line 6700 "rustgram.tab.c"
    break;

  case 493: /* path_generic_args_with_colons: ident  */
#line 1226 "rustgram.y"
                                                             {  }
#line 6706 "rustgram.tab.c"
    break;

  case 494: /* path_generic_args_with_colons: SUPER  */
#line 1227 "rustgram.y"
                                                             {  }
#line 6712 "rustgram.tab.c"
    break;

  case 495: /* path_generic_args_with_colons: path_generic_args_with_colons MOD_SEP ident  */
#line 1228 "rustgram.y"
                                                             {  }
#line 6718 "rustgram.tab.c"
    break;

  case 496: /* path_generic_args_with_colons: path_generic_args_with_colons MOD_SEP SUPER  */
#line 1229 "rustgram.y"
                                                             {  }
#line 6724 "rustgram.tab.c"
    break;

  case 497: /* path_generic_args_with_colons: path_generic_args_with_colons MOD_SEP generic_args  */
#line 1230 "rustgram.y"
                                                             {  }
#line 6730 "rustgram.tab.c"
    break;

  case 498: /* macro_expr: path_expr '!' maybe_ident parens_delimited_token_trees  */
#line 1234 "rustgram.y"
                                                                      {  }
#line 6736 "rustgram.tab.c"
    break;

  case 499: /* macro_expr: path_expr '!' maybe_ident brackets_delimited_token_trees  */
#line 1235 "rustgram.y"
                                                                   {  }
#line 6742 "rustgram.tab.c"
    break;

  case 500: /* nonblock_expr: lit  */
#line 1238 "rustgram.y"
                                                                        {  }
#line 6748 "rustgram.tab.c"
    break;

  case 501: /* nonblock_expr: path_expr  */
#line 1239 "rustgram.y"
                                                                        {  }
#line 6754 "rustgram.tab.c"
    break;

  case 502: /* nonblock_expr: SELF  */
#line 1240 "rustgram.y"
                                                                        {  }
#line 6760 "rustgram.tab.c"
    break;

  case 503: /* nonblock_expr: macro_expr  */
#line 1241 "rustgram.y"
                                                                        {  }
#line 6766 "rustgram.tab.c"
    break;

  case 504: /* nonblock_expr: path_expr '{' struct_expr_fields '}'  */
#line 1242 "rustgram.y"
                                                                        {  }
#line 6772 "rustgram.tab.c"
    break;

  case 505: /* nonblock_expr: nonblock_expr '?'  */
#line 1243 "rustgram.y"
                                                                        {  }
#line 6778 "rustgram.tab.c"
    break;

  case 506: /* nonblock_expr: nonblock_expr '.' path_generic_args_with_colons  */
#line 1244 "rustgram.y"
                                                                        {  }
#line 6784 "rustgram.tab.c"
    break;

  case 507: /* nonblock_expr: nonblock_expr '.' LIT_INTEGER  */
#line 1245 "rustgram.y"
                                                                        {  }
#line 6790 "rustgram.tab.c"
    break;

  case 508: /* nonblock_expr: nonblock_expr '[' maybe_expr ']'  */
#line 1246 "rustgram.y"
                                                                        {  }
#line 6796 "rustgram.tab.c"
    break;

  case 509: /* nonblock_expr: nonblock_expr '(' maybe_exprs ')'  */
#line 1247 "rustgram.y"
                                                                        {  }
#line 6802 "rustgram.tab.c"
    break;

  case 510: /* nonblock_expr: '[' vec_expr ']'  */
#line 1248 "rustgram.y"
                                                                        {  }
#line 6808 "rustgram.tab.c"
    break;

  case 511: /* nonblock_expr: '(' maybe_exprs ')'  */
#line 1249 "rustgram.y"
                                                                        {  }
#line 6814 "rustgram.tab.c"
    break;

  case 512: /* nonblock_expr: CONTINUE  */
#line 1250 "rustgram.y"
                                                                        {  }
#line 6820 "rustgram.tab.c"
    break;

  case 513: /* nonblock_expr: CONTINUE lifetime  */
#line 1251 "rustgram.y"
                                                                        {  }
#line 6826 "rustgram.tab.c"
    break;

  case 514: /* nonblock_expr: RETURN  */
#line 1252 "rustgram.y"
                                                                        {  }
#line 6832 "rustgram.tab.c"
    break;

  case 515: /* nonblock_expr: RETURN expr  */
#line 1253 "rustgram.y"
                                                                        {  }
#line 6838 "rustgram.tab.c"
    break;

  case 516: /* nonblock_expr: BREAK  */
#line 1254 "rustgram.y"
                                                                        {  }
#line 6844 "rustgram.tab.c"
    break;

  case 517: /* nonblock_expr: BREAK lifetime  */
#line 1255 "rustgram.y"
                                                                        {  }
#line 6850 "rustgram.tab.c"
    break;

  case 518: /* nonblock_expr: YIELD  */
#line 1256 "rustgram.y"
                                                                        {  }
#line 6856 "rustgram.tab.c"
    break;

  case 519: /* nonblock_expr: YIELD expr  */
#line 1257 "rustgram.y"
                                                                        {  }
#line 6862 "rustgram.tab.c"
    break;

  case 520: /* nonblock_expr: nonblock_expr '=' expr  */
#line 1258 "rustgram.y"
                                                                        {  }
#line 6868 "rustgram.tab.c"
    break;

  case 521: /* nonblock_expr: nonblock_expr SHLEQ expr  */
#line 1259 "rustgram.y"
                                                                        {  }
#line 6874 "rustgram.tab.c"
    break;

  case 522: /* nonblock_expr: nonblock_expr SHREQ expr  */
#line 1260 "rustgram.y"
                                                                        {  }
#line 6880 "rustgram.tab.c"
    break;

  case 523: /* nonblock_expr: nonblock_expr MINUSEQ expr  */
#line 1261 "rustgram.y"
                                                                        {  }
#line 6886 "rustgram.tab.c"
    break;

  case 524: /* nonblock_expr: nonblock_expr ANDEQ expr  */
#line 1262 "rustgram.y"
                                                                        {  }
#line 6892 "rustgram.tab.c"
    break;

  case 525: /* nonblock_expr: nonblock_expr OREQ expr  */
#line 1263 "rustgram.y"
                                                                        {  }
#line 6898 "rustgram.tab.c"
    break;

  case 526: /* nonblock_expr: nonblock_expr PLUSEQ expr  */
#line 1264 "rustgram.y"
                                                                        {  }
#line 6904 "rustgram.tab.c"
    break;

  case 527: /* nonblock_expr: nonblock_expr STAREQ expr  */
#line 1265 "rustgram.y"
                                                                        {  }
#line 6910 "rustgram.tab.c"
    break;

  case 528: /* nonblock_expr: nonblock_expr SLASHEQ expr  */
#line 1266 "rustgram.y"
                                                                        {  }
#line 6916 "rustgram.tab.c"
    break;

  case 529: /* nonblock_expr: nonblock_expr CARETEQ expr  */
#line 1267 "rustgram.y"
                                                                        {  }
#line 6922 "rustgram.tab.c"
    break;

  case 530: /* nonblock_expr: nonblock_expr PERCENTEQ expr  */
#line 1268 "rustgram.y"
                                                                        {  }
#line 6928 "rustgram.tab.c"
    break;

  case 531: /* nonblock_expr: nonblock_expr OROR expr  */
#line 1269 "rustgram.y"
                                                                        {  }
#line 6934 "rustgram.tab.c"
    break;

  case 532: /* nonblock_expr: nonblock_expr ANDAND expr  */
#line 1270 "rustgram.y"
                                                                        {  }
#line 6940 "rustgram.tab.c"
    break;

  case 533: /* nonblock_expr: nonblock_expr EQEQ expr  */
#line 1271 "rustgram.y"
                                                                        {  }
#line 6946 "rustgram.tab.c"
    break;

  case 534: /* nonblock_expr: nonblock_expr NE expr  */
#line 1272 "rustgram.y"
                                                                        {  }
#line 6952 "rustgram.tab.c"
    break;

  case 535: /* nonblock_expr: nonblock_expr '<' expr  */
#line 1273 "rustgram.y"
                                                                        {  }
#line 6958 "rustgram.tab.c"
    break;

  case 536: /* nonblock_expr: nonblock_expr '>' expr  */
#line 1274 "rustgram.y"
                                                                        {  }
#line 6964 "rustgram.tab.c"
    break;

  case 537: /* nonblock_expr: nonblock_expr LE expr  */
#line 1275 "rustgram.y"
                                                                        {  }
#line 6970 "rustgram.tab.c"
    break;

  case 538: /* nonblock_expr: nonblock_expr GE expr  */
#line 1276 "rustgram.y"
                                                                        {  }
#line 6976 "rustgram.tab.c"
    break;

  case 539: /* nonblock_expr: nonblock_expr '|' expr  */
#line 1277 "rustgram.y"
                                                                        {  }
#line 6982 "rustgram.tab.c"
    break;

  case 540: /* nonblock_expr: nonblock_expr '^' expr  */
#line 1278 "rustgram.y"
                                                                        {  }
#line 6988 "rustgram.tab.c"
    break;

  case 541: /* nonblock_expr: nonblock_expr '&' expr  */
#line 1279 "rustgram.y"
                                                                        {  }
#line 6994 "rustgram.tab.c"
    break;

  case 542: /* nonblock_expr: nonblock_expr SHL expr  */
#line 1280 "rustgram.y"
                                                                        {  }
#line 7000 "rustgram.tab.c"
    break;

  case 543: /* nonblock_expr: nonblock_expr SHR expr  */
#line 1281 "rustgram.y"
                                                                        {  }
#line 7006 "rustgram.tab.c"
    break;

  case 544: /* nonblock_expr: nonblock_expr '+' expr  */
#line 1282 "rustgram.y"
                                                                        {  }
#line 7012 "rustgram.tab.c"
    break;

  case 545: /* nonblock_expr: nonblock_expr '-' expr  */
#line 1283 "rustgram.y"
                                                                        {  }
#line 7018 "rustgram.tab.c"
    break;

  case 546: /* nonblock_expr: nonblock_expr '*' expr  */
#line 1284 "rustgram.y"
                                                                        {  }
#line 7024 "rustgram.tab.c"
    break;

  case 547: /* nonblock_expr: nonblock_expr '/' expr  */
#line 1285 "rustgram.y"
                                                                        {  }
#line 7030 "rustgram.tab.c"
    break;

  case 548: /* nonblock_expr: nonblock_expr '%' expr  */
#line 1286 "rustgram.y"
                                                                        {  }
#line 7036 "rustgram.tab.c"
    break;

  case 549: /* nonblock_expr: nonblock_expr DOTDOT  */
#line 1287 "rustgram.y"
                                                                        {  }
#line 7042 "rustgram.tab.c"
    break;

  case 550: /* nonblock_expr: nonblock_expr DOTDOT expr  */
#line 1288 "rustgram.y"
                                                                        {  }
#line 7048 "rustgram.tab.c"
    break;

  case 551: /* nonblock_expr: DOTDOT expr  */
#line 1289 "rustgram.y"
                                                                        {  }
#line 7054 "rustgram.tab.c"
    break;

  case 552: /* nonblock_expr: DOTDOT  */
#line 1290 "rustgram.y"
                                                                        {  }
#line 7060 "rustgram.tab.c"
    break;

  case 553: /* nonblock_expr: nonblock_expr AS ty  */
#line 1291 "rustgram.y"
                                                                        {  }
#line 7066 "rustgram.tab.c"
    break;

  case 554: /* nonblock_expr: nonblock_expr ':' ty  */
#line 1292 "rustgram.y"
                                                                        {  }
#line 7072 "rustgram.tab.c"
    break;

  case 555: /* nonblock_expr: BOX expr  */
#line 1293 "rustgram.y"
                                                                        {  }
#line 7078 "rustgram.tab.c"
    break;

  case 558: /* expr: lit  */
#line 1298 "rustgram.y"
                                                           {  }
#line 7084 "rustgram.tab.c"
    break;

  case 559: /* expr: path_expr  */
#line 1299 "rustgram.y"
                                                           {  }
#line 7090 "rustgram.tab.c"
    break;

  case 560: /* expr: SELF  */
#line 1300 "rustgram.y"
                                                           {  }
#line 7096 "rustgram.tab.c"
    break;

  case 561: /* expr: macro_expr  */
#line 1301 "rustgram.y"
                                                           {  }
#line 7102 "rustgram.tab.c"
    break;

  case 562: /* expr: path_expr '{' struct_expr_fields '}'  */
#line 1302 "rustgram.y"
                                                           {  }
#line 7108 "rustgram.tab.c"
    break;

  case 563: /* expr: expr '?'  */
#line 1303 "rustgram.y"
                                                           {  }
#line 7114 "rustgram.tab.c"
    break;

  case 564: /* expr: expr '.' path_generic_args_with_colons  */
#line 1304 "rustgram.y"
                                                           {  }
#line 7120 "rustgram.tab.c"
    break;

  case 565: /* expr: expr '.' LIT_INTEGER  */
#line 1305 "rustgram.y"
                                                           {  }
#line 7126 "rustgram.tab.c"
    break;

  case 566: /* expr: expr '[' maybe_expr ']'  */
#line 1306 "rustgram.y"
                                                           {  }
#line 7132 "rustgram.tab.c"
    break;

  case 567: /* expr: expr '(' maybe_exprs ')'  */
#line 1307 "rustgram.y"
                                                           {  }
#line 7138 "rustgram.tab.c"
    break;

  case 568: /* expr: '(' maybe_exprs ')'  */
#line 1308 "rustgram.y"
                                                           {  }
#line 7144 "rustgram.tab.c"
    break;

  case 569: /* expr: '[' vec_expr ']'  */
#line 1309 "rustgram.y"
                                                           {  }
#line 7150 "rustgram.tab.c"
    break;

  case 570: /* expr: CONTINUE  */
#line 1310 "rustgram.y"
                                                           {  }
#line 7156 "rustgram.tab.c"
    break;

  case 571: /* expr: CONTINUE ident  */
#line 1311 "rustgram.y"
                                                           {  }
#line 7162 "rustgram.tab.c"
    break;

  case 572: /* expr: RETURN  */
#line 1312 "rustgram.y"
                                                           {  }
#line 7168 "rustgram.tab.c"
    break;

  case 573: /* expr: RETURN expr  */
#line 1313 "rustgram.y"
                                                           {  }
#line 7174 "rustgram.tab.c"
    break;

  case 574: /* expr: BREAK  */
#line 1314 "rustgram.y"
                                                           {  }
#line 7180 "rustgram.tab.c"
    break;

  case 575: /* expr: BREAK ident  */
#line 1315 "rustgram.y"
                                                           {  }
#line 7186 "rustgram.tab.c"
    break;

  case 576: /* expr: YIELD  */
#line 1316 "rustgram.y"
                                                           {  }
#line 7192 "rustgram.tab.c"
    break;

  case 577: /* expr: YIELD expr  */
#line 1317 "rustgram.y"
                                                           {  }
#line 7198 "rustgram.tab.c"
    break;

  case 578: /* expr: expr '=' expr  */
#line 1318 "rustgram.y"
                                                           {  }
#line 7204 "rustgram.tab.c"
    break;

  case 579: /* expr: expr SHLEQ expr  */
#line 1319 "rustgram.y"
                                                           {  }
#line 7210 "rustgram.tab.c"
    break;

  case 580: /* expr: expr SHREQ expr  */
#line 1320 "rustgram.y"
                                                           {  }
#line 7216 "rustgram.tab.c"
    break;

  case 581: /* expr: expr MINUSEQ expr  */
#line 1321 "rustgram.y"
                                                           {  }
#line 7222 "rustgram.tab.c"
    break;

  case 582: /* expr: expr ANDEQ expr  */
#line 1322 "rustgram.y"
                                                           {  }
#line 7228 "rustgram.tab.c"
    break;

  case 583: /* expr: expr OREQ expr  */
#line 1323 "rustgram.y"
                                                           {  }
#line 7234 "rustgram.tab.c"
    break;

  case 584: /* expr: expr PLUSEQ expr  */
#line 1324 "rustgram.y"
                                                           {  }
#line 7240 "rustgram.tab.c"
    break;

  case 585: /* expr: expr STAREQ expr  */
#line 1325 "rustgram.y"
                                                           {  }
#line 7246 "rustgram.tab.c"
    break;

  case 586: /* expr: expr SLASHEQ expr  */
#line 1326 "rustgram.y"
                                                           {  }
#line 7252 "rustgram.tab.c"
    break;

  case 587: /* expr: expr CARETEQ expr  */
#line 1327 "rustgram.y"
                                                           {  }
#line 7258 "rustgram.tab.c"
    break;

  case 588: /* expr: expr PERCENTEQ expr  */
#line 1328 "rustgram.y"
                                                           {  }
#line 7264 "rustgram.tab.c"
    break;

  case 589: /* expr: expr OROR expr  */
#line 1329 "rustgram.y"
                                                           {  }
#line 7270 "rustgram.tab.c"
    break;

  case 590: /* expr: expr ANDAND expr  */
#line 1330 "rustgram.y"
                                                           {  }
#line 7276 "rustgram.tab.c"
    break;

  case 591: /* expr: expr EQEQ expr  */
#line 1331 "rustgram.y"
                                                           {  }
#line 7282 "rustgram.tab.c"
    break;

  case 592: /* expr: expr NE expr  */
#line 1332 "rustgram.y"
                                                           {  }
#line 7288 "rustgram.tab.c"
    break;

  case 593: /* expr: expr '<' expr  */
#line 1333 "rustgram.y"
                                                           {  }
#line 7294 "rustgram.tab.c"
    break;

  case 594: /* expr: expr '>' expr  */
#line 1334 "rustgram.y"
                                                           {  }
#line 7300 "rustgram.tab.c"
    break;

  case 595: /* expr: expr LE expr  */
#line 1335 "rustgram.y"
                                                           {  }
#line 7306 "rustgram.tab.c"
    break;

  case 596: /* expr: expr GE expr  */
#line 1336 "rustgram.y"
                                                           {  }
#line 7312 "rustgram.tab.c"
    break;

  case 597: /* expr: expr '|' expr  */
#line 1337 "rustgram.y"
                                                           {  }
#line 7318 "rustgram.tab.c"
    break;

  case 598: /* expr: expr '^' expr  */
#line 1338 "rustgram.y"
                                                           {  }
#line 7324 "rustgram.tab.c"
    break;

  case 599: /* expr: expr '&' expr  */
#line 1339 "rustgram.y"
                                                           {  }
#line 7330 "rustgram.tab.c"
    break;

  case 600: /* expr: expr SHL expr  */
#line 1340 "rustgram.y"
                                                           {  }
#line 7336 "rustgram.tab.c"
    break;

  case 601: /* expr: expr SHR expr  */
#line 1341 "rustgram.y"
                                                           {  }
#line 7342 "rustgram.tab.c"
    break;

  case 602: /* expr: expr '+' expr  */
#line 1342 "rustgram.y"
                                                           {  }
#line 7348 "rustgram.tab.c"
    break;

  case 603: /* expr: expr '-' expr  */
#line 1343 "rustgram.y"
                                                           {  }
#line 7354 "rustgram.tab.c"
    break;

  case 604: /* expr: expr '*' expr  */
#line 1344 "rustgram.y"
                                                           {  }
#line 7360 "rustgram.tab.c"
    break;

  case 605: /* expr: expr '/' expr  */
#line 1345 "rustgram.y"
                                                           {  }
#line 7366 "rustgram.tab.c"
    break;

  case 606: /* expr: expr '%' expr  */
#line 1346 "rustgram.y"
                                                           {  }
#line 7372 "rustgram.tab.c"
    break;

  case 607: /* expr: expr DOTDOT  */
#line 1347 "rustgram.y"
                                                           {  }
#line 7378 "rustgram.tab.c"
    break;

  case 608: /* expr: expr DOTDOT expr  */
#line 1348 "rustgram.y"
                                                           {  }
#line 7384 "rustgram.tab.c"
    break;

  case 609: /* expr: DOTDOT expr  */
#line 1349 "rustgram.y"
                                                           {  }
#line 7390 "rustgram.tab.c"
    break;

  case 610: /* expr: DOTDOT  */
#line 1350 "rustgram.y"
                                                           {  }
#line 7396 "rustgram.tab.c"
    break;

  case 611: /* expr: expr AS ty  */
#line 1351 "rustgram.y"
                                                           {  }
#line 7402 "rustgram.tab.c"
    break;

  case 612: /* expr: expr ':' ty  */
#line 1352 "rustgram.y"
                                                           {  }
#line 7408 "rustgram.tab.c"
    break;

  case 613: /* expr: BOX expr  */
#line 1353 "rustgram.y"
                                                           {  }
#line 7414 "rustgram.tab.c"
    break;

  case 618: /* expr_nostruct: lit  */
#line 1360 "rustgram.y"
                                                                    {  }
#line 7420 "rustgram.tab.c"
    break;

  case 619: /* expr_nostruct: path_expr  */
#line 1361 "rustgram.y"
                                                                    {  }
#line 7426 "rustgram.tab.c"
    break;

  case 620: /* expr_nostruct: SELF  */
#line 1362 "rustgram.y"
                                                              {  }
#line 7432 "rustgram.tab.c"
    break;

  case 621: /* expr_nostruct: macro_expr  */
#line 1363 "rustgram.y"
                                                              {  }
#line 7438 "rustgram.tab.c"
    break;

  case 622: /* expr_nostruct: expr_nostruct '?'  */
#line 1364 "rustgram.y"
                                                              {  }
#line 7444 "rustgram.tab.c"
    break;

  case 623: /* expr_nostruct: expr_nostruct '.' path_generic_args_with_colons  */
#line 1365 "rustgram.y"
                                                              {  }
#line 7450 "rustgram.tab.c"
    break;

  case 624: /* expr_nostruct: expr_nostruct '.' LIT_INTEGER  */
#line 1366 "rustgram.y"
                                                              {  }
#line 7456 "rustgram.tab.c"
    break;

  case 625: /* expr_nostruct: expr_nostruct '[' maybe_expr ']'  */
#line 1367 "rustgram.y"
                                                              {  }
#line 7462 "rustgram.tab.c"
    break;

  case 626: /* expr_nostruct: expr_nostruct '(' maybe_exprs ')'  */
#line 1368 "rustgram.y"
                                                              {  }
#line 7468 "rustgram.tab.c"
    break;

  case 627: /* expr_nostruct: '[' vec_expr ']'  */
#line 1369 "rustgram.y"
                                                              {  }
#line 7474 "rustgram.tab.c"
    break;

  case 628: /* expr_nostruct: '(' maybe_exprs ')'  */
#line 1370 "rustgram.y"
                                                              {  }
#line 7480 "rustgram.tab.c"
    break;

  case 629: /* expr_nostruct: CONTINUE  */
#line 1371 "rustgram.y"
                                                              {  }
#line 7486 "rustgram.tab.c"
    break;

  case 630: /* expr_nostruct: CONTINUE ident  */
#line 1372 "rustgram.y"
                                                              {  }
#line 7492 "rustgram.tab.c"
    break;

  case 631: /* expr_nostruct: RETURN  */
#line 1373 "rustgram.y"
                                                              {  }
#line 7498 "rustgram.tab.c"
    break;

  case 632: /* expr_nostruct: RETURN expr  */
#line 1374 "rustgram.y"
                                                              {  }
#line 7504 "rustgram.tab.c"
    break;

  case 633: /* expr_nostruct: BREAK  */
#line 1375 "rustgram.y"
                                                              {  }
#line 7510 "rustgram.tab.c"
    break;

  case 634: /* expr_nostruct: BREAK ident  */
#line 1376 "rustgram.y"
                                                              {  }
#line 7516 "rustgram.tab.c"
    break;

  case 635: /* expr_nostruct: YIELD  */
#line 1377 "rustgram.y"
                                                              {  }
#line 7522 "rustgram.tab.c"
    break;

  case 636: /* expr_nostruct: YIELD expr  */
#line 1378 "rustgram.y"
                                                              {  }
#line 7528 "rustgram.tab.c"
    break;

  case 637: /* expr_nostruct: expr_nostruct '=' expr_nostruct  */
#line 1379 "rustgram.y"
                                                              {  }
#line 7534 "rustgram.tab.c"
    break;

  case 638: /* expr_nostruct: expr_nostruct SHLEQ expr_nostruct  */
#line 1380 "rustgram.y"
                                                              {  }
#line 7540 "rustgram.tab.c"
    break;

  case 639: /* expr_nostruct: expr_nostruct SHREQ expr_nostruct  */
#line 1381 "rustgram.y"
                                                              {  }
#line 7546 "rustgram.tab.c"
    break;

  case 640: /* expr_nostruct: expr_nostruct MINUSEQ expr_nostruct  */
#line 1382 "rustgram.y"
                                                              {  }
#line 7552 "rustgram.tab.c"
    break;

  case 641: /* expr_nostruct: expr_nostruct ANDEQ expr_nostruct  */
#line 1383 "rustgram.y"
                                                              {  }
#line 7558 "rustgram.tab.c"
    break;

  case 642: /* expr_nostruct: expr_nostruct OREQ expr_nostruct  */
#line 1384 "rustgram.y"
                                                              {  }
#line 7564 "rustgram.tab.c"
    break;

  case 643: /* expr_nostruct: expr_nostruct PLUSEQ expr_nostruct  */
#line 1385 "rustgram.y"
                                                              {  }
#line 7570 "rustgram.tab.c"
    break;

  case 644: /* expr_nostruct: expr_nostruct STAREQ expr_nostruct  */
#line 1386 "rustgram.y"
                                                              {  }
#line 7576 "rustgram.tab.c"
    break;

  case 645: /* expr_nostruct: expr_nostruct SLASHEQ expr_nostruct  */
#line 1387 "rustgram.y"
                                                              {  }
#line 7582 "rustgram.tab.c"
    break;

  case 646: /* expr_nostruct: expr_nostruct CARETEQ expr_nostruct  */
#line 1388 "rustgram.y"
                                                              {  }
#line 7588 "rustgram.tab.c"
    break;

  case 647: /* expr_nostruct: expr_nostruct PERCENTEQ expr_nostruct  */
#line 1389 "rustgram.y"
                                                              {  }
#line 7594 "rustgram.tab.c"
    break;

  case 648: /* expr_nostruct: expr_nostruct OROR expr_nostruct  */
#line 1390 "rustgram.y"
                                                              {  }
#line 7600 "rustgram.tab.c"
    break;

  case 649: /* expr_nostruct: expr_nostruct ANDAND expr_nostruct  */
#line 1391 "rustgram.y"
                                                              {  }
#line 7606 "rustgram.tab.c"
    break;

  case 650: /* expr_nostruct: expr_nostruct EQEQ expr_nostruct  */
#line 1392 "rustgram.y"
                                                              {  }
#line 7612 "rustgram.tab.c"
    break;

  case 651: /* expr_nostruct: expr_nostruct NE expr_nostruct  */
#line 1393 "rustgram.y"
                                                              {  }
#line 7618 "rustgram.tab.c"
    break;

  case 652: /* expr_nostruct: expr_nostruct '<' expr_nostruct  */
#line 1394 "rustgram.y"
                                                              {  }
#line 7624 "rustgram.tab.c"
    break;

  case 653: /* expr_nostruct: expr_nostruct '>' expr_nostruct  */
#line 1395 "rustgram.y"
                                                              {  }
#line 7630 "rustgram.tab.c"
    break;

  case 654: /* expr_nostruct: expr_nostruct LE expr_nostruct  */
#line 1396 "rustgram.y"
                                                              {  }
#line 7636 "rustgram.tab.c"
    break;

  case 655: /* expr_nostruct: expr_nostruct GE expr_nostruct  */
#line 1397 "rustgram.y"
                                                              {  }
#line 7642 "rustgram.tab.c"
    break;

  case 656: /* expr_nostruct: expr_nostruct '|' expr_nostruct  */
#line 1398 "rustgram.y"
                                                              {  }
#line 7648 "rustgram.tab.c"
    break;

  case 657: /* expr_nostruct: expr_nostruct '^' expr_nostruct  */
#line 1399 "rustgram.y"
                                                              {  }
#line 7654 "rustgram.tab.c"
    break;

  case 658: /* expr_nostruct: expr_nostruct '&' expr_nostruct  */
#line 1400 "rustgram.y"
                                                              {  }
#line 7660 "rustgram.tab.c"
    break;

  case 659: /* expr_nostruct: expr_nostruct SHL expr_nostruct  */
#line 1401 "rustgram.y"
                                                              {  }
#line 7666 "rustgram.tab.c"
    break;

  case 660: /* expr_nostruct: expr_nostruct SHR expr_nostruct  */
#line 1402 "rustgram.y"
                                                              {  }
#line 7672 "rustgram.tab.c"
    break;

  case 661: /* expr_nostruct: expr_nostruct '+' expr_nostruct  */
#line 1403 "rustgram.y"
                                                              {  }
#line 7678 "rustgram.tab.c"
    break;

  case 662: /* expr_nostruct: expr_nostruct '-' expr_nostruct  */
#line 1404 "rustgram.y"
                                                              {  }
#line 7684 "rustgram.tab.c"
    break;

  case 663: /* expr_nostruct: expr_nostruct '*' expr_nostruct  */
#line 1405 "rustgram.y"
                                                              {  }
#line 7690 "rustgram.tab.c"
    break;

  case 664: /* expr_nostruct: expr_nostruct '/' expr_nostruct  */
#line 1406 "rustgram.y"
                                                              {  }
#line 7696 "rustgram.tab.c"
    break;

  case 665: /* expr_nostruct: expr_nostruct '%' expr_nostruct  */
#line 1407 "rustgram.y"
                                                              {  }
#line 7702 "rustgram.tab.c"
    break;

  case 666: /* expr_nostruct: expr_nostruct DOTDOT  */
#line 1408 "rustgram.y"
                                                              {  }
#line 7708 "rustgram.tab.c"
    break;

  case 667: /* expr_nostruct: expr_nostruct DOTDOT expr_nostruct  */
#line 1409 "rustgram.y"
                                                              {  }
#line 7714 "rustgram.tab.c"
    break;

  case 668: /* expr_nostruct: DOTDOT expr_nostruct  */
#line 1410 "rustgram.y"
                                                              {  }
#line 7720 "rustgram.tab.c"
    break;

  case 669: /* expr_nostruct: DOTDOT  */
#line 1411 "rustgram.y"
                                                              {  }
#line 7726 "rustgram.tab.c"
    break;

  case 670: /* expr_nostruct: expr_nostruct AS ty  */
#line 1412 "rustgram.y"
                                                              {  }
#line 7732 "rustgram.tab.c"
    break;

  case 671: /* expr_nostruct: expr_nostruct ':' ty  */
#line 1413 "rustgram.y"
                                                              {  }
#line 7738 "rustgram.tab.c"
    break;

  case 672: /* expr_nostruct: BOX expr  */
#line 1414 "rustgram.y"
                                                              {  }
#line 7744 "rustgram.tab.c"
    break;

  case 677: /* nonblock_prefix_expr_nostruct: '-' expr_nostruct  */
#line 1421 "rustgram.y"
                                                                          {  }
#line 7750 "rustgram.tab.c"
    break;

  case 678: /* nonblock_prefix_expr_nostruct: '!' expr_nostruct  */
#line 1422 "rustgram.y"
                                                    {  }
#line 7756 "rustgram.tab.c"
    break;

  case 679: /* nonblock_prefix_expr_nostruct: '*' expr_nostruct  */
#line 1423 "rustgram.y"
                                                    {  }
#line 7762 "rustgram.tab.c"
    break;

  case 680: /* nonblock_prefix_expr_nostruct: '&' maybe_mut expr_nostruct  */
#line 1424 "rustgram.y"
                                                    {  }
#line 7768 "rustgram.tab.c"
    break;

  case 681: /* nonblock_prefix_expr_nostruct: ANDAND maybe_mut expr_nostruct  */
#line 1425 "rustgram.y"
                                                    {  }
#line 7774 "rustgram.tab.c"
    break;

  case 683: /* nonblock_prefix_expr_nostruct: MOVE lambda_expr_nostruct  */
#line 1427 "rustgram.y"
                                                    {  }
#line 7780 "rustgram.tab.c"
    break;

  case 684: /* nonblock_prefix_expr: '-' expr  */
#line 1430 "rustgram.y"
                                                        {  }
#line 7786 "rustgram.tab.c"
    break;

  case 685: /* nonblock_prefix_expr: '!' expr  */
#line 1431 "rustgram.y"
                                           {  }
#line 7792 "rustgram.tab.c"
    break;

  case 686: /* nonblock_prefix_expr: '*' expr  */
#line 1432 "rustgram.y"
                                           {  }
#line 7798 "rustgram.tab.c"
    break;

  case 687: /* nonblock_prefix_expr: '&' maybe_mut expr  */
#line 1433 "rustgram.y"
                                           {  }
#line 7804 "rustgram.tab.c"
    break;

  case 688: /* nonblock_prefix_expr: ANDAND maybe_mut expr  */
#line 1434 "rustgram.y"
                                           {  }
#line 7810 "rustgram.tab.c"
    break;

  case 690: /* nonblock_prefix_expr: MOVE lambda_expr  */
#line 1436 "rustgram.y"
                                           {  }
#line 7816 "rustgram.tab.c"
    break;

  case 691: /* expr_qualified_path: '<' ty_sum maybe_as_trait_ref '>' MOD_SEP ident maybe_qpath_params  */
#line 1440 "rustgram.y"
                                          {
  
          }
#line 7824 "rustgram.tab.c"
    break;

  case 692: /* expr_qualified_path: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident maybe_as_trait_ref '>' MOD_SEP ident  */
#line 1444 "rustgram.y"
                                               {

          }
#line 7832 "rustgram.tab.c"
    break;

  case 693: /* expr_qualified_path: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident generic_args maybe_as_trait_ref '>' MOD_SEP ident  */
#line 1448 "rustgram.y"
                                                            {
  
          }
#line 7840 "rustgram.tab.c"
    break;

  case 694: /* expr_qualified_path: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident maybe_as_trait_ref '>' MOD_SEP ident generic_args  */
#line 1452 "rustgram.y"
                                                            {

          }
#line 7848 "rustgram.tab.c"
    break;

  case 695: /* expr_qualified_path: SHL ty_sum maybe_as_trait_ref '>' MOD_SEP ident generic_args maybe_as_trait_ref '>' MOD_SEP ident generic_args  */
#line 1456 "rustgram.y"
                                                                         {
  
          }
#line 7856 "rustgram.tab.c"
    break;

  case 696: /* maybe_qpath_params: MOD_SEP generic_args  */
#line 1461 "rustgram.y"
                                          {  }
#line 7862 "rustgram.tab.c"
    break;

  case 697: /* maybe_qpath_params: %empty  */
#line 1462 "rustgram.y"
                               {  }
#line 7868 "rustgram.tab.c"
    break;

  case 698: /* maybe_as_trait_ref: AS trait_ref  */
#line 1465 "rustgram.y"
                                  {  }
#line 7874 "rustgram.tab.c"
    break;

  case 699: /* maybe_as_trait_ref: %empty  */
#line 1466 "rustgram.y"
                       {  }
#line 7880 "rustgram.tab.c"
    break;

  case 700: /* lambda_expr: OROR ret_ty expr  */
#line 1469 "rustgram.y"
                                                                     {  }
#line 7886 "rustgram.tab.c"
    break;

  case 701: /* lambda_expr: '|' '|' ret_ty expr  */
#line 1470 "rustgram.y"
                                                                     {  }
#line 7892 "rustgram.tab.c"
    break;

  case 702: /* lambda_expr: '|' inferrable_params '|' ret_ty expr  */
#line 1471 "rustgram.y"
                                                                     {  }
#line 7898 "rustgram.tab.c"
    break;

  case 703: /* lambda_expr: '|' inferrable_params OROR lambda_expr_no_first_bar  */
#line 1472 "rustgram.y"
                                                                           {  }
#line 7904 "rustgram.tab.c"
    break;

  case 704: /* lambda_expr_no_first_bar: '|' ret_ty expr  */
#line 1475 "rustgram.y"
                                                                       {  }
#line 7910 "rustgram.tab.c"
    break;

  case 705: /* lambda_expr_no_first_bar: inferrable_params '|' ret_ty expr  */
#line 1476 "rustgram.y"
                                                                       {  }
#line 7916 "rustgram.tab.c"
    break;

  case 706: /* lambda_expr_no_first_bar: inferrable_params OROR lambda_expr_no_first_bar  */
#line 1477 "rustgram.y"
                                                                       {  }
#line 7922 "rustgram.tab.c"
    break;

  case 707: /* lambda_expr_nostruct: OROR expr_nostruct  */
#line 1480 "rustgram.y"
                                                                       {  }
#line 7928 "rustgram.tab.c"
    break;

  case 708: /* lambda_expr_nostruct: '|' '|' ret_ty expr_nostruct  */
#line 1481 "rustgram.y"
                                                                       {  }
#line 7934 "rustgram.tab.c"
    break;

  case 709: /* lambda_expr_nostruct: '|' inferrable_params '|' expr_nostruct  */
#line 1482 "rustgram.y"
                                                                       {  }
#line 7940 "rustgram.tab.c"
    break;

  case 710: /* lambda_expr_nostruct: '|' inferrable_params OROR lambda_expr_nostruct_no_first_bar  */
#line 1484 "rustgram.y"
                                            {  }
#line 7946 "rustgram.tab.c"
    break;

  case 711: /* lambda_expr_nostruct_no_first_bar: '|' ret_ty expr_nostruct  */
#line 1487 "rustgram.y"
                                                                          {  }
#line 7952 "rustgram.tab.c"
    break;

  case 712: /* lambda_expr_nostruct_no_first_bar: inferrable_params '|' ret_ty expr_nostruct  */
#line 1488 "rustgram.y"
                                                                          {  }
#line 7958 "rustgram.tab.c"
    break;

  case 713: /* lambda_expr_nostruct_no_first_bar: inferrable_params OROR lambda_expr_nostruct_no_first_bar  */
#line 1490 "rustgram.y"
                                            {  }
#line 7964 "rustgram.tab.c"
    break;

  case 715: /* vec_expr: exprs ';' expr  */
#line 1494 "rustgram.y"
                         {  }
#line 7970 "rustgram.tab.c"
    break;

  case 718: /* struct_expr_fields: maybe_field_inits default_field_init  */
#line 1499 "rustgram.y"
                                               {  }
#line 7976 "rustgram.tab.c"
    break;

  case 719: /* struct_expr_fields: %empty  */
#line 1500 "rustgram.y"
                                               {  }
#line 7982 "rustgram.tab.c"
    break;

  case 722: /* maybe_field_inits: %empty  */
#line 1505 "rustgram.y"
                 {  }
#line 7988 "rustgram.tab.c"
    break;

  case 723: /* field_inits: field_init  */
#line 1508 "rustgram.y"
                                         {  }
#line 7994 "rustgram.tab.c"
    break;

  case 724: /* field_inits: field_inits ',' field_init  */
#line 1509 "rustgram.y"
                                     {  }
#line 8000 "rustgram.tab.c"
    break;

  case 725: /* field_init: ident  */
#line 1512 "rustgram.y"
                                  {  }
#line 8006 "rustgram.tab.c"
    break;

  case 726: /* field_init: ident ':' expr  */
#line 1513 "rustgram.y"
                               {  }
#line 8012 "rustgram.tab.c"
    break;

  case 727: /* field_init: LIT_INTEGER ':' expr  */
#line 1514 "rustgram.y"
                               {  }
#line 8018 "rustgram.tab.c"
    break;

  case 728: /* default_field_init: DOTDOT expr  */
#line 1517 "rustgram.y"
                                   {  }
#line 8024 "rustgram.tab.c"
    break;

  case 736: /* block_expr: UNSAFE block  */
#line 1527 "rustgram.y"
                                                                 {  }
#line 8030 "rustgram.tab.c"
    break;

  case 737: /* block_expr: path_expr '!' maybe_ident braces_delimited_token_trees  */
#line 1528 "rustgram.y"
                                                                 {  }
#line 8036 "rustgram.tab.c"
    break;

  case 740: /* block_expr_dot: block_expr '.' path_generic_args_with_colons  */
#line 1535 "rustgram.y"
                                                                          {  }
#line 8042 "rustgram.tab.c"
    break;

  case 741: /* block_expr_dot: block_expr_dot '.' path_generic_args_with_colons  */
#line 1536 "rustgram.y"
                                                                          {  }
#line 8048 "rustgram.tab.c"
    break;

  case 742: /* block_expr_dot: block_expr '.' path_generic_args_with_colons '[' maybe_expr ']'  */
#line 1537 "rustgram.y"
                                                                              {
          }
#line 8055 "rustgram.tab.c"
    break;

  case 743: /* block_expr_dot: block_expr_dot '.' path_generic_args_with_colons '[' maybe_expr ']'  */
#line 1539 "rustgram.y"
                                                                              {
          }
#line 8062 "rustgram.tab.c"
    break;

  case 744: /* block_expr_dot: block_expr '.' path_generic_args_with_colons '(' maybe_exprs ')'  */
#line 1541 "rustgram.y"
                                                                              {
          }
#line 8069 "rustgram.tab.c"
    break;

  case 745: /* block_expr_dot: block_expr_dot '.' path_generic_args_with_colons '(' maybe_exprs ')'  */
#line 1543 "rustgram.y"
                                                                               {  }
#line 8075 "rustgram.tab.c"
    break;

  case 746: /* block_expr_dot: block_expr '.' LIT_INTEGER  */
#line 1544 "rustgram.y"
                                                                          {  }
#line 8081 "rustgram.tab.c"
    break;

  case 747: /* block_expr_dot: block_expr_dot '.' LIT_INTEGER  */
#line 1545 "rustgram.y"
                                                                          {  }
#line 8087 "rustgram.tab.c"
    break;

  case 748: /* expr_match: MATCH expr_nostruct '{' '}'  */
#line 1548 "rustgram.y"
                                                                          {  }
#line 8093 "rustgram.tab.c"
    break;

  case 749: /* expr_match: MATCH expr_nostruct '{' match_clauses '}'  */
#line 1549 "rustgram.y"
                                                                          {  }
#line 8099 "rustgram.tab.c"
    break;

  case 750: /* expr_match: MATCH expr_nostruct '{' match_clauses nonblock_match_clause '}'  */
#line 1550 "rustgram.y"
                                                                          {  }
#line 8105 "rustgram.tab.c"
    break;

  case 751: /* expr_match: MATCH expr_nostruct '{' nonblock_match_clause '}'  */
#line 1551 "rustgram.y"
                                                                          {  }
#line 8111 "rustgram.tab.c"
    break;

  case 752: /* match_clauses: match_clause  */
#line 1554 "rustgram.y"
                                           {  }
#line 8117 "rustgram.tab.c"
    break;

  case 753: /* match_clauses: match_clauses match_clause  */
#line 1555 "rustgram.y"
                                     {  }
#line 8123 "rustgram.tab.c"
    break;

  case 757: /* nonblock_match_clause: maybe_outer_attrs pats_or maybe_guard FAT_ARROW nonblock_expr  */
#line 1564 "rustgram.y"
                                       {  }
#line 8129 "rustgram.tab.c"
    break;

  case 758: /* nonblock_match_clause: maybe_outer_attrs pats_or maybe_guard FAT_ARROW block_expr_dot  */
#line 1565 "rustgram.y"
                                                                         {  }
#line 8135 "rustgram.tab.c"
    break;

  case 759: /* block_match_clause: maybe_outer_attrs pats_or maybe_guard FAT_ARROW block  */
#line 1568 "rustgram.y"
                                                                           {  }
#line 8141 "rustgram.tab.c"
    break;

  case 760: /* block_match_clause: maybe_outer_attrs pats_or maybe_guard FAT_ARROW block_expr  */
#line 1569 "rustgram.y"
                                                                     {  }
#line 8147 "rustgram.tab.c"
    break;

  case 761: /* maybe_guard: IF expr_nostruct  */
#line 1572 "rustgram.y"
                                         {  }
#line 8153 "rustgram.tab.c"
    break;

  case 762: /* maybe_guard: %empty  */
#line 1573 "rustgram.y"
                                     {  }
#line 8159 "rustgram.tab.c"
    break;

  case 763: /* expr_if: IF expr_nostruct block  */
#line 1576 "rustgram.y"
                                                              {  }
#line 8165 "rustgram.tab.c"
    break;

  case 764: /* expr_if: IF expr_nostruct block ELSE block_or_if  */
#line 1577 "rustgram.y"
                                                              {  }
#line 8171 "rustgram.tab.c"
    break;

  case 765: /* expr_if_let: IF LET pat '=' expr_nostruct block  */
#line 1580 "rustgram.y"
                                                                  {  }
#line 8177 "rustgram.tab.c"
    break;

  case 766: /* expr_if_let: IF LET pat '=' expr_nostruct block ELSE block_or_if  */
#line 1581 "rustgram.y"
                                                              {  }
#line 8183 "rustgram.tab.c"
    break;

  case 770: /* expr_while: maybe_label WHILE expr_nostruct block  */
#line 1589 "rustgram.y"
                                                                 {  }
#line 8189 "rustgram.tab.c"
    break;

  case 771: /* expr_while_let: maybe_label WHILE LET pat '=' expr_nostruct block  */
#line 1592 "rustgram.y"
                                                                     {  }
#line 8195 "rustgram.tab.c"
    break;

  case 772: /* expr_loop: maybe_label LOOP block  */
#line 1595 "rustgram.y"
                                                                {  }
#line 8201 "rustgram.tab.c"
    break;

  case 773: /* expr_for: maybe_label FOR pat IN expr_nostruct block  */
#line 1598 "rustgram.y"
                                                               {  }
#line 8207 "rustgram.tab.c"
    break;

  case 775: /* maybe_label: %empty  */
#line 1602 "rustgram.y"
                 {  }
#line 8213 "rustgram.tab.c"
    break;

  case 776: /* let: LET pat maybe_ty_ascription maybe_init_expr ';'  */
#line 1605 "rustgram.y"
                                                      {  }
#line 8219 "rustgram.tab.c"
    break;

  case 777: /* lit: LIT_BYTE  */
#line 1612 "rustgram.y"
                                 {  }
#line 8225 "rustgram.tab.c"
    break;

  case 778: /* lit: LIT_CHAR  */
#line 1613 "rustgram.y"
                                 {  }
#line 8231 "rustgram.tab.c"
    break;

  case 779: /* lit: LIT_INTEGER  */
#line 1614 "rustgram.y"
                                 {  }
#line 8237 "rustgram.tab.c"
    break;

  case 780: /* lit: LIT_FLOAT  */
#line 1615 "rustgram.y"
                                 {  }
#line 8243 "rustgram.tab.c"
    break;

  case 781: /* lit: TRUE  */
#line 1616 "rustgram.y"
                                 {  }
#line 8249 "rustgram.tab.c"
    break;

  case 782: /* lit: FALSE  */
#line 1617 "rustgram.y"
                                 {  }
#line 8255 "rustgram.tab.c"
    break;

  case 784: /* str: LIT_STR  */
#line 1621 "rustgram.y"
                                 {  }
#line 8261 "rustgram.tab.c"
    break;

  case 785: /* str: LIT_STR_RAW  */
#line 1622 "rustgram.y"
                                 {  }
#line 8267 "rustgram.tab.c"
    break;

  case 786: /* str: LIT_BYTE_STR  */
#line 1623 "rustgram.y"
                                 {  }
#line 8273 "rustgram.tab.c"
    break;

  case 787: /* str: LIT_BYTE_STR_RAW  */
#line 1624 "rustgram.y"
                                 {  }
#line 8279 "rustgram.tab.c"
    break;

  case 788: /* maybe_ident: %empty  */
#line 1627 "rustgram.y"
                     {  }
#line 8285 "rustgram.tab.c"
    break;

  case 790: /* ident: IDENT  */
#line 1631 "rustgram.y"
                                   {  }
#line 8291 "rustgram.tab.c"
    break;

  case 791: /* ident: CATCH  */
#line 1633 "rustgram.y"
                                     {  }
#line 8297 "rustgram.tab.c"
    break;

  case 792: /* ident: DEFAULT  */
#line 1634 "rustgram.y"
                                     {  }
#line 8303 "rustgram.tab.c"
    break;

  case 793: /* ident: UNION  */
#line 1635 "rustgram.y"
                                     {  }
#line 8309 "rustgram.tab.c"
    break;

  case 794: /* unpaired_token: SHL  */
#line 1638 "rustgram.y"
                                            {  }
#line 8315 "rustgram.tab.c"
    break;

  case 795: /* unpaired_token: SHR  */
#line 1639 "rustgram.y"
                                     {  }
#line 8321 "rustgram.tab.c"
    break;

  case 796: /* unpaired_token: LE  */
#line 1640 "rustgram.y"
                                     {  }
#line 8327 "rustgram.tab.c"
    break;

  case 797: /* unpaired_token: EQEQ  */
#line 1641 "rustgram.y"
                                     {  }
#line 8333 "rustgram.tab.c"
    break;

  case 798: /* unpaired_token: NE  */
#line 1642 "rustgram.y"
                                     {  }
#line 8339 "rustgram.tab.c"
    break;

  case 799: /* unpaired_token: GE  */
#line 1643 "rustgram.y"
                                     {  }
#line 8345 "rustgram.tab.c"
    break;

  case 800: /* unpaired_token: ANDAND  */
#line 1644 "rustgram.y"
                                     {  }
#line 8351 "rustgram.tab.c"
    break;

  case 801: /* unpaired_token: OROR  */
#line 1645 "rustgram.y"
                                     {  }
#line 8357 "rustgram.tab.c"
    break;

  case 802: /* unpaired_token: LARROW  */
#line 1646 "rustgram.y"
                                     {  }
#line 8363 "rustgram.tab.c"
    break;

  case 803: /* unpaired_token: SHLEQ  */
#line 1647 "rustgram.y"
                                     {  }
#line 8369 "rustgram.tab.c"
    break;

  case 804: /* unpaired_token: SHREQ  */
#line 1648 "rustgram.y"
                                     {  }
#line 8375 "rustgram.tab.c"
    break;

  case 805: /* unpaired_token: MINUSEQ  */
#line 1649 "rustgram.y"
                                     {  }
#line 8381 "rustgram.tab.c"
    break;

  case 806: /* unpaired_token: ANDEQ  */
#line 1650 "rustgram.y"
                                     {  }
#line 8387 "rustgram.tab.c"
    break;

  case 807: /* unpaired_token: OREQ  */
#line 1651 "rustgram.y"
                                     {  }
#line 8393 "rustgram.tab.c"
    break;

  case 808: /* unpaired_token: PLUSEQ  */
#line 1652 "rustgram.y"
                                     {  }
#line 8399 "rustgram.tab.c"
    break;

  case 809: /* unpaired_token: STAREQ  */
#line 1653 "rustgram.y"
                                     {  }
#line 8405 "rustgram.tab.c"
    break;

  case 810: /* unpaired_token: SLASHEQ  */
#line 1654 "rustgram.y"
                                     {  }
#line 8411 "rustgram.tab.c"
    break;

  case 811: /* unpaired_token: CARETEQ  */
#line 1655 "rustgram.y"
                                     {  }
#line 8417 "rustgram.tab.c"
    break;

  case 812: /* unpaired_token: PERCENTEQ  */
#line 1656 "rustgram.y"
                                     {  }
#line 8423 "rustgram.tab.c"
    break;

  case 813: /* unpaired_token: DOTDOT  */
#line 1657 "rustgram.y"
                                     {  }
#line 8429 "rustgram.tab.c"
    break;

  case 814: /* unpaired_token: DOTDOTDOT  */
#line 1658 "rustgram.y"
                                     {  }
#line 8435 "rustgram.tab.c"
    break;

  case 815: /* unpaired_token: MOD_SEP  */
#line 1659 "rustgram.y"
                                     {  }
#line 8441 "rustgram.tab.c"
    break;

  case 816: /* unpaired_token: RARROW  */
#line 1660 "rustgram.y"
                                     {  }
#line 8447 "rustgram.tab.c"
    break;

  case 817: /* unpaired_token: FAT_ARROW  */
#line 1661 "rustgram.y"
                                     {  }
#line 8453 "rustgram.tab.c"
    break;

  case 818: /* unpaired_token: LIT_BYTE  */
#line 1662 "rustgram.y"
                                     {  }
#line 8459 "rustgram.tab.c"
    break;

  case 819: /* unpaired_token: LIT_CHAR  */
#line 1663 "rustgram.y"
                                     {  }
#line 8465 "rustgram.tab.c"
    break;

  case 820: /* unpaired_token: LIT_INTEGER  */
#line 1664 "rustgram.y"
                                     {  }
#line 8471 "rustgram.tab.c"
    break;

  case 821: /* unpaired_token: LIT_FLOAT  */
#line 1665 "rustgram.y"
                                     {  }
#line 8477 "rustgram.tab.c"
    break;

  case 822: /* unpaired_token: LIT_STR  */
#line 1666 "rustgram.y"
                                     {  }
#line 8483 "rustgram.tab.c"
    break;

  case 823: /* unpaired_token: LIT_STR_RAW  */
#line 1667 "rustgram.y"
                                     {  }
#line 8489 "rustgram.tab.c"
    break;

  case 824: /* unpaired_token: LIT_BYTE_STR  */
#line 1668 "rustgram.y"
                                     {  }
#line 8495 "rustgram.tab.c"
    break;

  case 825: /* unpaired_token: LIT_BYTE_STR_RAW  */
#line 1669 "rustgram.y"
                                     {  }
#line 8501 "rustgram.tab.c"
    break;

  case 826: /* unpaired_token: IDENT  */
#line 1670 "rustgram.y"
                                     {  }
#line 8507 "rustgram.tab.c"
    break;

  case 827: /* unpaired_token: UNDERSCORE  */
#line 1671 "rustgram.y"
                                     {  }
#line 8513 "rustgram.tab.c"
    break;

  case 828: /* unpaired_token: LIFETIME  */
#line 1672 "rustgram.y"
                                     {  }
#line 8519 "rustgram.tab.c"
    break;

  case 829: /* unpaired_token: SELF  */
#line 1673 "rustgram.y"
                                     {  }
#line 8525 "rustgram.tab.c"
    break;

  case 830: /* unpaired_token: STATIC  */
#line 1674 "rustgram.y"
                                     {  }
#line 8531 "rustgram.tab.c"
    break;

  case 831: /* unpaired_token: ABSTRACT  */
#line 1675 "rustgram.y"
                                     {  }
#line 8537 "rustgram.tab.c"
    break;

  case 832: /* unpaired_token: ALIGNOF  */
#line 1676 "rustgram.y"
                                     {  }
#line 8543 "rustgram.tab.c"
    break;

  case 833: /* unpaired_token: AS  */
#line 1677 "rustgram.y"
                                     {  }
#line 8549 "rustgram.tab.c"
    break;

  case 834: /* unpaired_token: BECOME  */
#line 1678 "rustgram.y"
                                     {  }
#line 8555 "rustgram.tab.c"
    break;

  case 835: /* unpaired_token: BREAK  */
#line 1679 "rustgram.y"
                                     {  }
#line 8561 "rustgram.tab.c"
    break;

  case 836: /* unpaired_token: CATCH  */
#line 1680 "rustgram.y"
                                     {  }
#line 8567 "rustgram.tab.c"
    break;

  case 837: /* unpaired_token: CRATE  */
#line 1681 "rustgram.y"
                                     {  }
#line 8573 "rustgram.tab.c"
    break;

  case 838: /* unpaired_token: DEFAULT  */
#line 1682 "rustgram.y"
                                     {  }
#line 8579 "rustgram.tab.c"
    break;

  case 839: /* unpaired_token: DO  */
#line 1683 "rustgram.y"
                                     {  }
#line 8585 "rustgram.tab.c"
    break;

  case 840: /* unpaired_token: ELSE  */
#line 1684 "rustgram.y"
                                     {  }
#line 8591 "rustgram.tab.c"
    break;

  case 841: /* unpaired_token: ENUM  */
#line 1685 "rustgram.y"
                                     {  }
#line 8597 "rustgram.tab.c"
    break;

  case 842: /* unpaired_token: EXTERN  */
#line 1686 "rustgram.y"
                                     {  }
#line 8603 "rustgram.tab.c"
    break;

  case 843: /* unpaired_token: FALSE  */
#line 1687 "rustgram.y"
                                     {  }
#line 8609 "rustgram.tab.c"
    break;

  case 844: /* unpaired_token: FINAL  */
#line 1688 "rustgram.y"
                                     {  }
#line 8615 "rustgram.tab.c"
    break;

  case 845: /* unpaired_token: FN  */
#line 1689 "rustgram.y"
                                     {  }
#line 8621 "rustgram.tab.c"
    break;

  case 846: /* unpaired_token: FOR  */
#line 1690 "rustgram.y"
                                     {  }
#line 8627 "rustgram.tab.c"
    break;

  case 847: /* unpaired_token: IF  */
#line 1691 "rustgram.y"
                                     {  }
#line 8633 "rustgram.tab.c"
    break;

  case 848: /* unpaired_token: IMPL  */
#line 1692 "rustgram.y"
                                     {  }
#line 8639 "rustgram.tab.c"
    break;

  case 849: /* unpaired_token: IN  */
#line 1693 "rustgram.y"
                                     {  }
#line 8645 "rustgram.tab.c"
    break;

  case 850: /* unpaired_token: LET  */
#line 1694 "rustgram.y"
                                     {  }
#line 8651 "rustgram.tab.c"
    break;

  case 851: /* unpaired_token: LOOP  */
#line 1695 "rustgram.y"
                                     {  }
#line 8657 "rustgram.tab.c"
    break;

  case 852: /* unpaired_token: MACRO  */
#line 1696 "rustgram.y"
                                     {  }
#line 8663 "rustgram.tab.c"
    break;

  case 853: /* unpaired_token: MATCH  */
#line 1697 "rustgram.y"
                                     {  }
#line 8669 "rustgram.tab.c"
    break;

  case 854: /* unpaired_token: MOD  */
#line 1698 "rustgram.y"
                                     {  }
#line 8675 "rustgram.tab.c"
    break;

  case 855: /* unpaired_token: MOVE  */
#line 1699 "rustgram.y"
                                     {  }
#line 8681 "rustgram.tab.c"
    break;

  case 856: /* unpaired_token: MUT  */
#line 1700 "rustgram.y"
                                     {  }
#line 8687 "rustgram.tab.c"
    break;

  case 857: /* unpaired_token: OFFSETOF  */
#line 1701 "rustgram.y"
                                     {  }
#line 8693 "rustgram.tab.c"
    break;

  case 858: /* unpaired_token: OVERRIDE  */
#line 1702 "rustgram.y"
                                     {  }
#line 8699 "rustgram.tab.c"
    break;

  case 859: /* unpaired_token: PRIV  */
#line 1703 "rustgram.y"
                                     {  }
#line 8705 "rustgram.tab.c"
    break;

  case 860: /* unpaired_token: PUB  */
#line 1704 "rustgram.y"
                                     {  }
#line 8711 "rustgram.tab.c"
    break;

  case 861: /* unpaired_token: PURE  */
#line 1705 "rustgram.y"
                                     {  }
#line 8717 "rustgram.tab.c"
    break;

  case 862: /* unpaired_token: REF  */
#line 1706 "rustgram.y"
                                     {  }
#line 8723 "rustgram.tab.c"
    break;

  case 863: /* unpaired_token: RETURN  */
#line 1707 "rustgram.y"
                                     {  }
#line 8729 "rustgram.tab.c"
    break;

  case 864: /* unpaired_token: STRUCT  */
#line 1708 "rustgram.y"
                                     {  }
#line 8735 "rustgram.tab.c"
    break;

  case 865: /* unpaired_token: SIZEOF  */
#line 1709 "rustgram.y"
                                     {  }
#line 8741 "rustgram.tab.c"
    break;

  case 866: /* unpaired_token: SUPER  */
#line 1710 "rustgram.y"
                                     {  }
#line 8747 "rustgram.tab.c"
    break;

  case 867: /* unpaired_token: TRUE  */
#line 1711 "rustgram.y"
                                     {  }
#line 8753 "rustgram.tab.c"
    break;

  case 868: /* unpaired_token: TRAIT  */
#line 1712 "rustgram.y"
                                     {  }
#line 8759 "rustgram.tab.c"
    break;

  case 869: /* unpaired_token: TYPE  */
#line 1713 "rustgram.y"
                                     {  }
#line 8765 "rustgram.tab.c"
    break;

  case 870: /* unpaired_token: UNION  */
#line 1714 "rustgram.y"
                                     {  }
#line 8771 "rustgram.tab.c"
    break;

  case 871: /* unpaired_token: UNSAFE  */
#line 1715 "rustgram.y"
                                     {  }
#line 8777 "rustgram.tab.c"
    break;

  case 872: /* unpaired_token: UNSIZED  */
#line 1716 "rustgram.y"
                                     {  }
#line 8783 "rustgram.tab.c"
    break;

  case 873: /* unpaired_token: USE  */
#line 1717 "rustgram.y"
                                     {  }
#line 8789 "rustgram.tab.c"
    break;

  case 874: /* unpaired_token: VIRTUAL  */
#line 1718 "rustgram.y"
                                     {  }
#line 8795 "rustgram.tab.c"
    break;

  case 875: /* unpaired_token: WHILE  */
#line 1719 "rustgram.y"
                                     {  }
#line 8801 "rustgram.tab.c"
    break;

  case 876: /* unpaired_token: YIELD  */
#line 1720 "rustgram.y"
                                     {  }
#line 8807 "rustgram.tab.c"
    break;

  case 877: /* unpaired_token: CONTINUE  */
#line 1721 "rustgram.y"
                                     {  }
#line 8813 "rustgram.tab.c"
    break;

  case 878: /* unpaired_token: PROC  */
#line 1722 "rustgram.y"
                                     {  }
#line 8819 "rustgram.tab.c"
    break;

  case 879: /* unpaired_token: BOX  */
#line 1723 "rustgram.y"
                                     {  }
#line 8825 "rustgram.tab.c"
    break;

  case 880: /* unpaired_token: CONST  */
#line 1724 "rustgram.y"
                                     {  }
#line 8831 "rustgram.tab.c"
    break;

  case 881: /* unpaired_token: WHERE  */
#line 1725 "rustgram.y"
                                     {  }
#line 8837 "rustgram.tab.c"
    break;

  case 882: /* unpaired_token: TYPEOF  */
#line 1726 "rustgram.y"
                                     {  }
#line 8843 "rustgram.tab.c"
    break;

  case 883: /* unpaired_token: INNER_DOC_COMMENT  */
#line 1727 "rustgram.y"
                                     {  }
#line 8849 "rustgram.tab.c"
    break;

  case 884: /* unpaired_token: OUTER_DOC_COMMENT  */
#line 1728 "rustgram.y"
                                     {  }
#line 8855 "rustgram.tab.c"
    break;

  case 885: /* unpaired_token: SHEBANG  */
#line 1729 "rustgram.y"
                                     {  }
#line 8861 "rustgram.tab.c"
    break;

  case 886: /* unpaired_token: STATIC_LIFETIME  */
#line 1730 "rustgram.y"
                                     {  }
#line 8867 "rustgram.tab.c"
    break;

  case 887: /* unpaired_token: ';'  */
#line 1731 "rustgram.y"
                                     {  }
#line 8873 "rustgram.tab.c"
    break;

  case 888: /* unpaired_token: ','  */
#line 1732 "rustgram.y"
                                     {  }
#line 8879 "rustgram.tab.c"
    break;

  case 889: /* unpaired_token: '.'  */
#line 1733 "rustgram.y"
                                     {  }
#line 8885 "rustgram.tab.c"
    break;

  case 890: /* unpaired_token: '@'  */
#line 1734 "rustgram.y"
                                     {  }
#line 8891 "rustgram.tab.c"
    break;

  case 891: /* unpaired_token: '#'  */
#line 1735 "rustgram.y"
                                     {  }
#line 8897 "rustgram.tab.c"
    break;

  case 892: /* unpaired_token: '~'  */
#line 1736 "rustgram.y"
                                     {  }
#line 8903 "rustgram.tab.c"
    break;

  case 893: /* unpaired_token: ':'  */
#line 1737 "rustgram.y"
                                     {  }
#line 8909 "rustgram.tab.c"
    break;

  case 894: /* unpaired_token: '$'  */
#line 1738 "rustgram.y"
                                     {  }
#line 8915 "rustgram.tab.c"
    break;

  case 895: /* unpaired_token: '='  */
#line 1739 "rustgram.y"
                                     {  }
#line 8921 "rustgram.tab.c"
    break;

  case 896: /* unpaired_token: '?'  */
#line 1740 "rustgram.y"
                                     {  }
#line 8927 "rustgram.tab.c"
    break;

  case 897: /* unpaired_token: '!'  */
#line 1741 "rustgram.y"
                                     {  }
#line 8933 "rustgram.tab.c"
    break;

  case 898: /* unpaired_token: '<'  */
#line 1742 "rustgram.y"
                                     {  }
#line 8939 "rustgram.tab.c"
    break;

  case 899: /* unpaired_token: '>'  */
#line 1743 "rustgram.y"
                                     {  }
#line 8945 "rustgram.tab.c"
    break;

  case 900: /* unpaired_token: '-'  */
#line 1744 "rustgram.y"
                                     {  }
#line 8951 "rustgram.tab.c"
    break;

  case 901: /* unpaired_token: '&'  */
#line 1745 "rustgram.y"
                                     {  }
#line 8957 "rustgram.tab.c"
    break;

  case 902: /* unpaired_token: '|'  */
#line 1746 "rustgram.y"
                                     {  }
#line 8963 "rustgram.tab.c"
    break;

  case 903: /* unpaired_token: '+'  */
#line 1747 "rustgram.y"
                                     {  }
#line 8969 "rustgram.tab.c"
    break;

  case 904: /* unpaired_token: '*'  */
#line 1748 "rustgram.y"
                                     {  }
#line 8975 "rustgram.tab.c"
    break;

  case 905: /* unpaired_token: '/'  */
#line 1749 "rustgram.y"
                                     {  }
#line 8981 "rustgram.tab.c"
    break;

  case 906: /* unpaired_token: '^'  */
#line 1750 "rustgram.y"
                                     {  }
#line 8987 "rustgram.tab.c"
    break;

  case 907: /* unpaired_token: '%'  */
#line 1751 "rustgram.y"
                                     {  }
#line 8993 "rustgram.tab.c"
    break;

  case 908: /* token_trees: %empty  */
#line 1754 "rustgram.y"
                                         {  }
#line 8999 "rustgram.tab.c"
    break;

  case 909: /* token_trees: token_trees token_tree  */
#line 1755 "rustgram.y"
                                     {  }
#line 9005 "rustgram.tab.c"
    break;

  case 911: /* token_tree: unpaired_token  */
#line 1759 "rustgram.y"
                                 {  }
#line 9011 "rustgram.tab.c"
    break;

  case 915: /* parens_delimited_token_trees: '(' token_trees ')'  */
#line 1767 "rustgram.y"
                                                   {
  
        }
#line 9019 "rustgram.tab.c"
    break;

  case 916: /* braces_delimited_token_trees: '{' token_trees '}'  */
#line 1772 "rustgram.y"
                                                   {
  
        }
#line 9027 "rustgram.tab.c"
    break;

  case 917: /* brackets_delimited_token_trees: '[' token_trees ']'  */
#line 1777 "rustgram.y"
                                                     {

        }
#line 9035 "rustgram.tab.c"
    break;


#line 9039 "rustgram.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}


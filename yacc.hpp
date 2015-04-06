/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDMARKER = 258,
     IMPORT = 259,
     CLASS = 260,
     END = 261,
     PRIMARY = 262,
     OR = 263,
     AND = 264,
     NOT = 265,
     NOT_EQUAL = 266,
     FINAL = 267,
     STATIC = 268,
     SELF = 269,
     DEF = 270,
     ELSE = 271,
     IF = 272,
     ELIF = 273,
     WHILE = 274,
     FOR = 275,
     IN = 276,
     TRY = 277,
     FINALLY = 278,
     ARROW = 279,
     PASS = 280,
     NONLOCAL = 281,
     PLUS_EQUAL = 282,
     MINUS_EQUAL = 283,
     DIV_EQUAL = 284,
     MOD_EQUAL = 285,
     AND_EQUAL = 286,
     OR_EQUAL = 287,
     SHAPOO_EQUAL = 288,
     LESS_THAN_2_EQUAL = 289,
     MORE_THAN_2_EQUAL = 290,
     STAR_2_EQUAL = 291,
     DIV_2_EQUAL = 292,
     MORE_LESS = 293,
     FALSE = 294,
     TRUE = 295,
     STAR_2 = 296,
     NUMBER_INT = 297,
     NUMBER_LONG = 298,
     NUMBER_FLOAT = 299,
     NAME = 300,
     DOT_3 = 301,
     EXPECT = 302,
     WITH = 303,
     AS = 304,
     ASSERT = 305,
     EQUAL = 306,
     DEL = 307,
     RETURN = 308,
     PRINT = 309,
     GLOBAL = 310,
     STAR_EQUAL = 311,
     LESS_THAN_2 = 312,
     RAISE = 313,
     PRIVATE = 314,
     PUBLIC = 315,
     PROTECTED = 316,
     YIELD = 317,
     MORE_THAN_2 = 318,
     STRING = 319,
     NONE = 320,
     IS = 321,
     DIV_2 = 322,
     LESS_OR_EQUAL = 323,
     MORE_OR_EQUAL = 324,
     EXCEPT = 325,
     CHAR_VALUE = 326,
     BREAK = 327,
     CONTINUE = 328,
     stmt_14 = 329,
     stmt_13 = 330,
     stmt_12 = 331,
     stmt_11 = 332,
     stmt_10 = 333,
     stmt_9 = 334,
     stmt_8 = 335,
     stmt_7 = 336,
     stmt_6 = 337,
     stmt_5 = 338,
     stmt_4 = 339,
     stmt_3 = 340,
     stmt_2 = 341,
     stmt_1 = 342
   };
#endif
/* Tokens.  */
#define ENDMARKER 258
#define IMPORT 259
#define CLASS 260
#define END 261
#define PRIMARY 262
#define OR 263
#define AND 264
#define NOT 265
#define NOT_EQUAL 266
#define FINAL 267
#define STATIC 268
#define SELF 269
#define DEF 270
#define ELSE 271
#define IF 272
#define ELIF 273
#define WHILE 274
#define FOR 275
#define IN 276
#define TRY 277
#define FINALLY 278
#define ARROW 279
#define PASS 280
#define NONLOCAL 281
#define PLUS_EQUAL 282
#define MINUS_EQUAL 283
#define DIV_EQUAL 284
#define MOD_EQUAL 285
#define AND_EQUAL 286
#define OR_EQUAL 287
#define SHAPOO_EQUAL 288
#define LESS_THAN_2_EQUAL 289
#define MORE_THAN_2_EQUAL 290
#define STAR_2_EQUAL 291
#define DIV_2_EQUAL 292
#define MORE_LESS 293
#define FALSE 294
#define TRUE 295
#define STAR_2 296
#define NUMBER_INT 297
#define NUMBER_LONG 298
#define NUMBER_FLOAT 299
#define NAME 300
#define DOT_3 301
#define EXPECT 302
#define WITH 303
#define AS 304
#define ASSERT 305
#define EQUAL 306
#define DEL 307
#define RETURN 308
#define PRINT 309
#define GLOBAL 310
#define STAR_EQUAL 311
#define LESS_THAN_2 312
#define RAISE 313
#define PRIVATE 314
#define PUBLIC 315
#define PROTECTED 316
#define YIELD 317
#define MORE_THAN_2 318
#define STRING 319
#define NONE 320
#define IS 321
#define DIV_2 322
#define LESS_OR_EQUAL 323
#define MORE_OR_EQUAL 324
#define EXCEPT 325
#define CHAR_VALUE 326
#define BREAK 327
#define CONTINUE 328
#define stmt_14 329
#define stmt_13 330
#define stmt_12 331
#define stmt_11 332
#define stmt_10 333
#define stmt_9 334
#define stmt_8 335
#define stmt_7 336
#define stmt_6 337
#define stmt_5 338
#define stmt_4 339
#define stmt_3 340
#define stmt_2 341
#define stmt_1 342




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 69 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
		class YaccSimpleType * yaccSimpleType;
		class Variable * var;
		class Function * function;
		class Type * type;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 227 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;




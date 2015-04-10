/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for GLR parsing with Bison,
   Copyright (C) 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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
     NONLOCAL = 280,
     PLUS_EQUAL = 281,
     MINUS_EQUAL = 282,
     DIV_EQUAL = 283,
     MOD_EQUAL = 284,
     AND_EQUAL = 285,
     OR_EQUAL = 286,
     SHAPOO_EQUAL = 287,
     LESS_THAN_2_EQUAL = 288,
     MORE_THAN_2_EQUAL = 289,
     STAR_2_EQUAL = 290,
     DIV_2_EQUAL = 291,
     MORE_LESS = 292,
     FALSE = 293,
     TRUE = 294,
     STAR_2 = 295,
     NUMBER_INT = 296,
     NUMBER_LONG = 297,
     NUMBER_FLOAT = 298,
     NAME = 299,
     DOT_3 = 300,
     EXPECT = 301,
     WITH = 302,
     AS = 303,
     ASSERT = 304,
     EQUAL = 305,
     DEL = 306,
     RETURN = 307,
     PRINT = 308,
     GLOBAL = 309,
     STAR_EQUAL = 310,
     LESS_THAN_2 = 311,
     RAISE = 312,
     PRIVATE = 313,
     PUBLIC = 314,
     PROTECTED = 315,
     YIELD = 316,
     MORE_THAN_2 = 317,
     STRING = 318,
     NONE = 319,
     IS = 320,
     DIV_2 = 321,
     LESS_OR_EQUAL = 322,
     MORE_OR_EQUAL = 323,
     EXCEPT = 324,
     PASS = 325,
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
#define NONLOCAL 280
#define PLUS_EQUAL 281
#define MINUS_EQUAL 282
#define DIV_EQUAL 283
#define MOD_EQUAL 284
#define AND_EQUAL 285
#define OR_EQUAL 286
#define SHAPOO_EQUAL 287
#define LESS_THAN_2_EQUAL 288
#define MORE_THAN_2_EQUAL 289
#define STAR_2_EQUAL 290
#define DIV_2_EQUAL 291
#define MORE_LESS 292
#define FALSE 293
#define TRUE 294
#define STAR_2 295
#define NUMBER_INT 296
#define NUMBER_LONG 297
#define NUMBER_FLOAT 298
#define NAME 299
#define DOT_3 300
#define EXPECT 301
#define WITH 302
#define AS 303
#define ASSERT 304
#define EQUAL 305
#define DEL 306
#define RETURN 307
#define PRINT 308
#define GLOBAL 309
#define STAR_EQUAL 310
#define LESS_THAN_2 311
#define RAISE 312
#define PRIVATE 313
#define PUBLIC 314
#define PROTECTED 315
#define YIELD 316
#define MORE_THAN_2 317
#define STRING 318
#define NONE 319
#define IS 320
#define DIV_2 321
#define LESS_OR_EQUAL 322
#define MORE_OR_EQUAL 323
#define EXCEPT 324
#define PASS 325
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
#line 73 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		long longVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
		class YaccSimpleType * yaccSimpleType;
		class Variable * var;
		class Function * function;
		class Type * type;
		class Node * tn;
} YYSTYPE;
/* Line 2359 of glr.c.  */
#line 224 "yacc.hpp"
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined (YYLTYPE) && ! defined (YYLTYPE_IS_DECLARED)
typedef struct YYLTYPE
{

  char yydummy;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




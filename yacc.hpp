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
     WITH = 301,
     AS = 302,
     ASSERT = 303,
     EQUAL = 304,
     DEL = 305,
     RETURN = 306,
     PRINT = 307,
     GLOBAL = 308,
     STAR_EQUAL = 309,
     LESS_THAN_2 = 310,
     RAISE = 311,
     PRIVATE = 312,
     PUBLIC = 313,
     PROTECTED = 314,
     YIELD = 315,
     MORE_THAN_2 = 316,
     STRING = 317,
     NONE = 318,
     IS = 319,
     DIV_2 = 320,
     LESS_OR_EQUAL = 321,
     MORE_OR_EQUAL = 322,
     EXCEPT = 323,
     PASS = 324,
     CHAR_VALUE = 325,
     BREAK = 326,
     CONTINUE = 327,
     stmt_14 = 328,
     stmt_13 = 329,
     stmt_12 = 330,
     stmt_11 = 331,
     stmt_10 = 332,
     stmt_9 = 333,
     stmt_8 = 334,
     stmt_7 = 335,
     stmt_6 = 336,
     stmt_5 = 337,
     stmt_4 = 338,
     stmt_3 = 339,
     stmt_2 = 340,
     stmt_1 = 341
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
#define WITH 301
#define AS 302
#define ASSERT 303
#define EQUAL 304
#define DEL 305
#define RETURN 306
#define PRINT 307
#define GLOBAL 308
#define STAR_EQUAL 309
#define LESS_THAN_2 310
#define RAISE 311
#define PRIVATE 312
#define PUBLIC 313
#define PROTECTED 314
#define YIELD 315
#define MORE_THAN_2 316
#define STRING 317
#define NONE 318
#define IS 319
#define DIV_2 320
#define LESS_OR_EQUAL 321
#define MORE_OR_EQUAL 322
#define EXCEPT 323
#define PASS 324
#define CHAR_VALUE 325
#define BREAK 326
#define CONTINUE 327
#define stmt_14 328
#define stmt_13 329
#define stmt_12 330
#define stmt_11 331
#define stmt_10 332
#define stmt_9 333
#define stmt_8 334
#define stmt_7 335
#define stmt_6 336
#define stmt_5 337
#define stmt_4 338
#define stmt_3 339
#define stmt_2 340
#define stmt_1 341




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 102 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yaccFinal.y"
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
		enum operand operands;
		
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




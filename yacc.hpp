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
     IMPORT = 258,
     CLASS = 259,
     ID = 260,
     COLON = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     END = 265,
     OPEN_C = 266,
     CLOSE_C = 267,
     DEF = 268,
     ASSIGN = 269,
     STAR = 270,
     ELSE = 271,
     IF = 272,
     ELIF = 273,
     WHILE = 274,
     FOR = 275,
     IN = 276,
     TRY = 277,
     FINALLY = 278,
     MULTI = 279,
     EXPECT = 280,
     WITH = 281,
     AS = 282,
     ASSERT = 283,
     EQUAL = 284,
     DEL = 285,
     RETURN = 286,
     PRINT = 287,
     GLOBAL = 288,
     RAISE = 289,
     PRIVATE = 290,
     PUBLIC = 291,
     PROTECTED = 292,
     OPEN_D = 293,
     CLOSE_D = 294,
     RE_COT = 295,
     YIELD = 296,
     PRIMARY = 297,
     OR = 298,
     AND = 299,
     NOT = 300,
     PLUS = 301,
     MINUS = 302,
     DIV = 303,
     MOD = 304,
     NOT_EQUAL = 305,
     FINAL = 306,
     STATIC = 307,
     LESS_THAN = 308,
     LESS_OR_EQUAL = 309,
     MORE_THAN = 310,
     MORE_OR_EQUAL = 311,
     TRUE = 312,
     FALSE = 313,
     EXCEPT = 314,
     SEMICOLON = 315,
     NEW_LINE = 316,
     PASS = 317,
     CHAR_VALUE = 318,
     OPEN_S = 319,
     STRING_VALUE = 320,
     INTEGER_VALUE = 321,
     BREAK = 322,
     CONTINUE = 323,
     LONG_VALUE = 324,
     FLOAT_VALUE = 325,
     stmt_1_2 = 326,
     stmt_11 = 327,
     stmt_10 = 328,
     stmt_9 = 329,
     stmt_7 = 330,
     stmt_6 = 331,
     stmt_5 = 332,
     stmt_4 = 333,
     stmt_3 = 334,
     stmt_2 = 335,
     stmt_1 = 336,
     stmt_8 = 337
   };
#endif
/* Tokens.  */
#define IMPORT 258
#define CLASS 259
#define ID 260
#define COLON 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define END 265
#define OPEN_C 266
#define CLOSE_C 267
#define DEF 268
#define ASSIGN 269
#define STAR 270
#define ELSE 271
#define IF 272
#define ELIF 273
#define WHILE 274
#define FOR 275
#define IN 276
#define TRY 277
#define FINALLY 278
#define MULTI 279
#define EXPECT 280
#define WITH 281
#define AS 282
#define ASSERT 283
#define EQUAL 284
#define DEL 285
#define RETURN 286
#define PRINT 287
#define GLOBAL 288
#define RAISE 289
#define PRIVATE 290
#define PUBLIC 291
#define PROTECTED 292
#define OPEN_D 293
#define CLOSE_D 294
#define RE_COT 295
#define YIELD 296
#define PRIMARY 297
#define OR 298
#define AND 299
#define NOT 300
#define PLUS 301
#define MINUS 302
#define DIV 303
#define MOD 304
#define NOT_EQUAL 305
#define FINAL 306
#define STATIC 307
#define LESS_THAN 308
#define LESS_OR_EQUAL 309
#define MORE_THAN 310
#define MORE_OR_EQUAL 311
#define TRUE 312
#define FALSE 313
#define EXCEPT 314
#define SEMICOLON 315
#define NEW_LINE 316
#define PASS 317
#define CHAR_VALUE 318
#define OPEN_S 319
#define STRING_VALUE 320
#define INTEGER_VALUE 321
#define BREAK 322
#define CONTINUE 323
#define LONG_VALUE 324
#define FLOAT_VALUE 325
#define stmt_1_2 326
#define stmt_11 327
#define stmt_10 328
#define stmt_9 329
#define stmt_7 330
#define stmt_6 331
#define stmt_5 332
#define stmt_4 333
#define stmt_3 334
#define stmt_2 335
#define stmt_1 336
#define stmt_8 337




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 60 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 217 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;




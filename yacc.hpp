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
     SEMI_COLUMN = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     _BEGIN = 265,
     END = 266,
     DEF = 267,
     ASSIGN = 268,
     STAR = 269,
     ELSE = 270,
     IF = 271,
     ELIF = 272,
     WHILE = 273,
     FOR = 274,
     IN = 275,
     TRY = 276,
     FINALLY = 277,
     MULTI = 278,
     EXPECT = 279,
     WITH = 280,
     AS = 281,
     ASSERT = 282,
     EQUAL = 283,
     DEL = 284,
     RETURN = 285,
     PRINT = 286,
     GLOBAL = 287,
     RAISE = 288,
     PRIVATE = 289,
     PUBLIC = 290,
     PROTECTED = 291,
     OPEN_D = 292,
     CLOSE_D = 293,
     RE_COT = 294,
     YIELD = 295,
     PRIMARY = 296,
     OR = 297,
     AND = 298,
     NOT = 299,
     PLUS = 300,
     MINUS = 301,
     DIV = 302,
     MOD = 303,
     NOT_EQUAL = 304,
     LESS_THAN = 305,
     LESS_OR_EQUAL = 306,
     MORE_THAN = 307,
     MORE_OR_EQUAL = 308,
     TRUE = 309,
     FALSE = 310,
     XOR = 311,
     XNOT = 312,
     EXCEPT = 313,
     NEW_LINE = 314,
     PASS = 315,
     CHAR_VALUE = 316,
     OPEN_S = 317,
     STRING_VALUE = 318,
     INTEGER_VALUE = 319,
     BREAK = 320,
     CONTINUE = 321,
     LONG_VALUE = 322,
     FLOAT_VALUE = 323,
     FLOOR = 324,
     stmt_1_2 = 325,
     stmt_8 = 326,
     stmt_7 = 327,
     stmt_6 = 328,
     stmt_5 = 329,
     stmt_4 = 330,
     stmt_3 = 331,
     stmt_2 = 332,
     stmt_1 = 333
   };
#endif
/* Tokens.  */
#define IMPORT 258
#define CLASS 259
#define ID 260
#define SEMI_COLUMN 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define _BEGIN 265
#define END 266
#define DEF 267
#define ASSIGN 268
#define STAR 269
#define ELSE 270
#define IF 271
#define ELIF 272
#define WHILE 273
#define FOR 274
#define IN 275
#define TRY 276
#define FINALLY 277
#define MULTI 278
#define EXPECT 279
#define WITH 280
#define AS 281
#define ASSERT 282
#define EQUAL 283
#define DEL 284
#define RETURN 285
#define PRINT 286
#define GLOBAL 287
#define RAISE 288
#define PRIVATE 289
#define PUBLIC 290
#define PROTECTED 291
#define OPEN_D 292
#define CLOSE_D 293
#define RE_COT 294
#define YIELD 295
#define PRIMARY 296
#define OR 297
#define AND 298
#define NOT 299
#define PLUS 300
#define MINUS 301
#define DIV 302
#define MOD 303
#define NOT_EQUAL 304
#define LESS_THAN 305
#define LESS_OR_EQUAL 306
#define MORE_THAN 307
#define MORE_OR_EQUAL 308
#define TRUE 309
#define FALSE 310
#define XOR 311
#define XNOT 312
#define EXCEPT 313
#define NEW_LINE 314
#define PASS 315
#define CHAR_VALUE 316
#define OPEN_S 317
#define STRING_VALUE 318
#define INTEGER_VALUE 319
#define BREAK 320
#define CONTINUE 321
#define LONG_VALUE 322
#define FLOAT_VALUE 323
#define FLOOR 324
#define stmt_1_2 325
#define stmt_8 326
#define stmt_7 327
#define stmt_6 328
#define stmt_5 329
#define stmt_4 330
#define stmt_3 331
#define stmt_2 332
#define stmt_1 333




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 25 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 205 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;




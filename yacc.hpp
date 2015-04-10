/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton interface for Bison GLR parsers in C
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_YACC_HPP_INCLUDED
# define YY_YY_YACC_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2579 of glr.c  */
#line 72 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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


/* Line 2579 of glr.c  */
#line 161 "yacc.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
     DEF = 269,
     ELSE = 270,
     IF = 271,
     ELIF = 272,
     WHILE = 273,
     FOR = 274,
     IN = 275,
     TRY = 276,
     FINALLY = 277,
     ARROW = 278,
     NONLOCAL = 279,
     PLUS_EQUAL = 280,
     MINUS_EQUAL = 281,
     DIV_EQUAL = 282,
     MOD_EQUAL = 283,
     AND_EQUAL = 284,
     OR_EQUAL = 285,
     SHAPOO_EQUAL = 286,
     LESS_THAN_2_EQUAL = 287,
     MORE_THAN_2_EQUAL = 288,
     STAR_2_EQUAL = 289,
     DIV_2_EQUAL = 290,
     MORE_LESS = 291,
     FALSE = 292,
     TRUE = 293,
     STAR_2 = 294,
     NUMBER_INT = 295,
     NUMBER_LONG = 296,
     NUMBER_FLOAT = 297,
     NAME = 298,
     DOT_3 = 299,
     EXPECT = 300,
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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 69 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccTemp.y"

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


/* Line 2058 of yacc.c  */
#line 159 "yacc.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

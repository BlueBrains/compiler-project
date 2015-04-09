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

/* This is the parser code for GLR (Generalized LR) parser. */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 4 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "Program.h"
	#include "SyntaxError.h"
	#include <fstream>
	#include "Streams.h"
	#include "ErrorRevovery.h"
	#include "compilerProject/AST.h"
	#include <set>
	#include "compilerProject/MyParser.h"
	using namespace std;
	class ColonStack
	{
		public:
		ColonStack(int line, int col){colNum = col; lineNum = line;}
		int colNum,lineNum;
	};
	stack<ColonStack*>colonStack;
	int yylex(void);
	int yyparse();
	int strlength(char *);
	void yyerror(const char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	extern string sourceFile="";
	string dir_path="";
	string temp_id="";
	stack<string> temp_id1;
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pro= false;
	bool pp=true;
	bool is_list=false;
	bool is_dic=false;
	int linefunc=0;
	int colmfunc=0;
	operand op;
	bool v_static,v_final;
	vector<char *>inhertance_list;


	vector<char *>ID_list;
	Variable* v;
	Type* t;
	class Function * testfunction;
	vector<char *> parameters;
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	MyParser * p = new MyParser();
	AST * ast = new AST();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 72 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
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
/* Line 186 of glr.c.  */
#line 330 "yacc.cpp"
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined (YYLTYPE) && ! defined (YYLTYPE_IS_DECLARED)
typedef struct YYLTYPE
{

  char yydummy;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct. */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 217 of glr.c.  */
#line 357 "yacc.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (!defined (__GNUC__) || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif


#ifdef __cplusplus
# define YYOPTIONAL_LOC(Name) /* empty */
#else
# define YYOPTIONAL_LOC(Name) Name __attribute__ ((__unused__))
#endif

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1365

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  100
/* YYNRULES -- Number of rules. */
#define YYNRULES  407
/* YYNRULES -- Number of states. */
#define YYNSTATES  764
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule. */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule. */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)						\
  ((YYX <= 0) ? YYEOF :							\
   (unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    97,   105,     2,
      89,   100,    95,    93,    88,    94,   102,    96,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    98,
      91,   101,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,   107,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,   103,   109,   106,     2,     2,     2,
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
      85,    86,    87
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    15,    17,    20,    27,
      35,    40,    46,    54,    62,    68,    74,    83,    92,    99,
     106,   115,   124,   131,   138,   148,   158,   166,   174,   183,
     192,   199,   206,   216,   226,   234,   242,   252,   262,   270,
     278,   282,   285,   287,   289,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   312,   314,   317,   321,   324,   326,
     329,   331,   334,   336,   340,   343,   346,   349,   352,   354,
     356,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   387,   390,   392,   394,   396,
     398,   400,   402,   405,   407,   409,   412,   415,   419,   421,
     424,   426,   430,   432,   435,   438,   442,   445,   449,   452,
     456,   459,   463,   465,   467,   469,   471,   473,   475,   478,
     483,   489,   494,   500,   508,   517,   522,   530,   537,   547,
     552,   560,   568,   575,   579,   584,   587,   591,   596,   602,
     604,   608,   610,   613,   618,   620,   623,   626,   628,   630,
     636,   639,   643,   645,   648,   651,   655,   657,   660,   663,
     665,   668,   672,   674,   677,   679,   681,   683,   685,   687,
     689,   691,   693,   696,   698,   701,   704,   707,   711,   713,
     716,   719,   723,   725,   728,   731,   735,   737,   740,   743,
     746,   750,   754,   756,   759,   762,   765,   769,   773,   775,
     778,   781,   784,   787,   790,   794,   798,   802,   806,   808,
     811,   814,   817,   820,   822,   824,   827,   829,   832,   837,
     841,   843,   846,   849,   853,   856,   859,   863,   867,   869,
     872,   876,   880,   884,   889,   894,   899,   904,   910,   916,
     921,   926,   932,   938,   944,   950,   952,   954,   956,   958,
     960,   962,   964,   966,   968,   971,   974,   978,   982,   985,
     987,   990,   993,   997,  1000,  1002,  1005,  1008,  1012,  1015,
    1019,  1023,  1026,  1029,  1033,  1035,  1038,  1041,  1045,  1047,
    1049,  1052,  1056,  1060,  1065,  1068,  1071,  1075,  1077,  1080,
    1083,  1086,  1090,  1094,  1096,  1099,  1101,  1104,  1107,  1111,
    1114,  1118,  1121,  1125,  1127,  1130,  1133,  1137,  1142,  1148,
    1151,  1155,  1160,  1164,  1169,  1174,  1180,  1183,  1185,  1188,
    1191,  1195,  1198,  1202,  1207,  1212,  1217,  1223,  1229,  1235,
    1241,  1248,  1255,  1261,  1267,  1274,  1281,  1288,  1295,  1301,
    1308,  1315,  1322,  1330,  1338,  1346,  1354,  1363,  1372,  1380,
    1388,  1397,  1406,  1415,  1424,  1431,  1439,  1447,  1455,  1464,
    1473,  1482,  1491,  1501,  1511,  1520,  1529,  1539,  1549,  1559,
    1569,  1572,  1576,  1579,  1583,  1585,  1587,  1590,  1593,  1599,
    1603,  1607,  1612,  1619,  1622,  1625,  1628,  1632,  1636,  1640,
    1647,  1652,  1657,  1663,  1671,  1675,  1678,  1682,  1685,  1689,
    1693,  1695,  1698,  1700,  1702,  1707,  1713,  1716
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     111,     0,    -1,   112,     3,    -1,   134,    98,   113,    -1,
     113,    -1,   198,   113,    -1,   198,    -1,   115,   156,    -1,
      15,    44,   116,    24,   157,    99,    -1,    15,   126,    44,
     116,    24,   157,    99,    -1,    15,    44,   116,    99,    -1,
      15,   126,    44,   116,    99,    -1,    15,    13,    44,   116,
      24,   157,    99,    -1,    15,    12,    44,   116,    24,   157,
      99,    -1,    15,    13,    44,   116,    99,    -1,    15,    12,
      44,   116,    99,    -1,    15,    13,    12,    44,   116,    24,
     157,    99,    -1,    15,    12,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,    12,    44,   116,    99,    -1,    15,
      12,    13,    44,   116,    99,    -1,    15,    12,   126,    44,
     116,    24,   157,    99,    -1,    15,    13,   126,    44,   116,
      24,   157,    99,    -1,    15,    13,   126,    44,   116,    99,
      -1,    15,    12,   126,    44,   116,    99,    -1,    15,    13,
      12,   126,    44,   116,    24,   157,    99,    -1,    15,    12,
      13,   126,    44,   116,    24,   157,    99,    -1,    15,    13,
      12,   126,    44,   116,    99,    -1,    15,    12,    13,   126,
      44,   116,    99,    -1,    15,   126,    13,    44,   116,    24,
     157,    99,    -1,    15,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,   126,    13,    44,   116,    99,    -1,    15,
     126,    12,    44,   116,    99,    -1,    15,   126,    13,    12,
      44,   116,    24,   157,    99,    -1,    15,   126,    12,    13,
      44,   116,    24,   157,    99,    -1,    15,   126,    13,    12,
      44,   116,    99,    -1,    15,   126,    12,    13,    44,   116,
      99,    -1,    15,    13,   126,    12,    44,   116,    24,   157,
      99,    -1,    15,    12,   126,    13,    44,   116,    24,   157,
      99,    -1,    15,    13,   126,    12,    44,   116,    99,    -1,
      15,    12,   126,    13,    44,   116,    99,    -1,    89,   202,
     100,    -1,    89,   100,    -1,   118,    -1,   144,    -1,   119,
      98,    -1,   120,    -1,   128,    -1,   129,    -1,   130,    -1,
     134,    -1,   142,    -1,   143,    -1,   127,    -1,   122,   125,
     194,    -1,   122,    -1,   122,   121,    -1,   101,   122,   121,
      -1,   101,   122,    -1,   124,    -1,   124,    88,    -1,    88,
      -1,   157,   124,    -1,   157,    -1,   166,   124,    88,    -1,
     166,    88,    -1,    88,   157,    -1,    88,   166,    -1,   124,
     123,    -1,   123,    -1,    26,    -1,    27,    -1,    55,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    58,    -1,
      59,    -1,    60,    -1,    53,   192,    -1,    51,   192,    -1,
      70,    -1,   131,    -1,   132,    -1,   133,    -1,    72,    -1,
      73,    -1,    52,   194,    -1,    52,    -1,   135,    -1,     4,
     137,    -1,    88,   138,    -1,   136,    88,   138,    -1,   138,
      -1,   138,   136,    -1,   139,    -1,   139,    48,    44,    -1,
      44,    -1,    44,   140,    -1,   102,    44,    -1,   140,   102,
      44,    -1,    88,    44,    -1,   141,    88,    44,    -1,    54,
      44,    -1,    54,    44,   141,    -1,    25,    44,    -1,    25,
      44,   141,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   152,    -1,   114,    -1,    15,   198,    -1,    18,   157,
      99,   156,    -1,   145,    18,   157,    99,   156,    -1,    17,
     157,    99,   156,    -1,    17,   157,    99,   156,   145,    -1,
      17,   157,    99,   156,    16,    99,   156,    -1,    17,   157,
      99,   156,   145,    16,    99,   156,    -1,    19,   157,    99,
     156,    -1,    19,   157,    99,   156,    16,    99,   156,    -1,
      20,   192,    21,   194,    99,   156,    -1,    20,   192,    21,
     194,    99,   156,    16,    99,   156,    -1,    22,    99,   156,
     150,    -1,    22,    99,   156,   150,    16,    99,   156,    -1,
      22,    99,   156,   150,    23,    99,   156,    -1,    22,    99,
     156,    23,    99,   156,    -1,   154,    99,   156,    -1,   150,
     154,    99,   156,    -1,    88,   153,    -1,   151,    88,   153,
      -1,    47,   153,    99,   156,    -1,    47,   153,   151,    99,
     156,    -1,   157,    -1,   157,    48,   168,    -1,    69,    -1,
      69,   157,    -1,    69,   157,    48,    44,    -1,   117,    -1,
     117,   155,    -1,   155,     6,    -1,     6,    -1,   159,    -1,
     159,    17,   159,    16,   157,    -1,     8,   161,    -1,   158,
       8,   161,    -1,   161,    -1,   161,   158,    -1,     9,   162,
      -1,   160,     9,   162,    -1,   162,    -1,   162,   160,    -1,
      10,   162,    -1,   164,    -1,   165,   168,    -1,   163,   165,
     168,    -1,   168,    -1,   168,   163,    -1,    91,    -1,    92,
      -1,    50,    -1,    68,    -1,    67,    -1,    37,    -1,    11,
      -1,    21,    -1,    10,    21,    -1,    65,    -1,    65,    10,
      -1,    95,   168,    -1,   103,   170,    -1,   167,   103,   170,
      -1,   170,    -1,   170,   167,    -1,   104,   172,    -1,   169,
     104,   172,    -1,   172,    -1,   172,   169,    -1,   105,   174,
      -1,   171,   105,   174,    -1,   174,    -1,   174,   171,    -1,
      56,   176,    -1,    62,   176,    -1,   173,    56,   176,    -1,
     173,    62,   176,    -1,   176,    -1,   176,   173,    -1,    93,
     178,    -1,    94,   178,    -1,   175,    93,   178,    -1,   175,
      94,   178,    -1,   178,    -1,   178,   175,    -1,    95,   179,
      -1,    96,   179,    -1,    97,   179,    -1,    66,   179,    -1,
     177,    95,   179,    -1,   177,    96,   179,    -1,   177,    97,
     179,    -1,   177,    66,   179,    -1,   179,    -1,   179,   177,
      -1,    93,   179,    -1,    94,   179,    -1,   106,   179,    -1,
     181,    -1,   186,    -1,   180,   186,    -1,   183,    -1,   183,
     180,    -1,   183,   180,    40,   179,    -1,   183,    40,   179,
      -1,    63,    -1,   182,    63,    -1,    89,   100,    -1,    89,
     185,   100,    -1,    90,   107,    -1,   108,   109,    -1,    90,
     185,   107,    -1,   108,   197,   109,    -1,    44,    -1,    15,
      44,    -1,    15,   126,    44,    -1,    15,    13,    44,    -1,
      15,    12,    44,    -1,    15,    13,    12,    44,    -1,    15,
      12,    13,    44,    -1,    15,    13,   126,    44,    -1,    15,
      12,   126,    44,    -1,    15,    13,    12,   126,    44,    -1,
      15,    12,    13,   126,    44,    -1,    15,   126,    13,    44,
      -1,    15,   126,    12,    44,    -1,    15,   126,    13,    12,
      44,    -1,    15,   126,    12,    13,    44,    -1,    15,    13,
     126,    12,    44,    -1,    15,    12,   126,    13,    44,    -1,
      41,    -1,    43,    -1,    42,    -1,    71,    -1,   182,    -1,
      45,    -1,    64,    -1,    39,    -1,    38,    -1,    88,   157,
      -1,    88,   166,    -1,   184,    88,   157,    -1,   184,    88,
     166,    -1,   157,   208,    -1,   157,    -1,   157,   184,    -1,
     157,    88,    -1,   157,   184,    88,    -1,   166,   208,    -1,
     166,    -1,   166,   184,    -1,   166,    88,    -1,   166,   184,
      88,    -1,    89,   100,    -1,    89,   202,   100,    -1,    90,
     188,   107,    -1,   102,    44,    -1,    88,   189,    -1,   187,
      88,   189,    -1,   189,    -1,   189,   187,    -1,   189,    88,
      -1,   189,   187,    88,    -1,   157,    -1,    99,    -1,   157,
      99,    -1,   157,    99,   157,    -1,   157,    99,   190,    -1,
     157,    99,   157,   190,    -1,    99,   157,    -1,    99,   190,
      -1,    99,   157,   190,    -1,    99,    -1,    99,   157,    -1,
      88,   168,    -1,    88,   166,    -1,   191,    88,   168,    -1,
     191,    88,   166,    -1,   168,    -1,   168,   191,    -1,   166,
      -1,   166,   191,    -1,   168,    88,    -1,   168,   191,    88,
      -1,   166,    88,    -1,   166,   191,    88,    -1,    88,   157,
      -1,    88,   157,   193,    -1,   157,    -1,   157,   193,    -1,
     157,    88,    -1,   157,   193,    88,    -1,    88,   157,    99,
     157,    -1,   195,    88,   157,    99,   157,    -1,    88,   157,
      -1,   196,    88,   157,    -1,   157,    99,   157,   208,    -1,
     157,    99,   157,    -1,   157,    99,   157,    88,    -1,   157,
      99,   157,   195,    -1,   157,    99,   157,   195,    88,    -1,
     157,   208,    -1,   157,    -1,   157,    88,    -1,   157,   196,
      -1,   157,   196,    88,    -1,   199,   156,    -1,     5,    44,
      99,    -1,   126,     5,    44,    99,    -1,    13,     5,    44,
      99,    -1,    12,     5,    44,    99,    -1,    13,    12,     5,
      44,    99,    -1,    12,    13,     5,    44,    99,    -1,    12,
     126,     5,    44,    99,    -1,    13,   126,     5,    44,    99,
      -1,    13,    12,   126,     5,    44,    99,    -1,    12,    13,
     126,     5,    44,    99,    -1,   126,    13,     5,    44,    99,
      -1,   126,    12,     5,    44,    99,    -1,   126,    13,    12,
       5,    44,    99,    -1,   126,    12,    13,     5,    44,    99,
      -1,    13,   126,    12,     5,    44,    99,    -1,    12,   126,
      13,     5,    44,    99,    -1,     5,    44,    89,   100,    99,
      -1,   126,     5,    44,    89,   100,    99,    -1,    13,     5,
      44,    89,   100,    99,    -1,    12,     5,    44,    89,   100,
      99,    -1,    13,    12,     5,    44,    89,   100,    99,    -1,
      12,    13,     5,    44,    89,   100,    99,    -1,    13,   126,
       5,    44,    89,   100,    99,    -1,    12,   126,     5,    44,
      89,   100,    99,    -1,    13,    12,   126,     5,    44,    89,
     100,    99,    -1,    12,    13,   126,     5,    44,    89,   100,
      99,    -1,   126,    13,     5,    44,    89,   100,    99,    -1,
     126,    12,     5,    44,    89,   100,    99,    -1,   126,    13,
      12,     5,    44,    89,   100,    99,    -1,   126,    12,    13,
       5,    44,    89,   100,    99,    -1,    13,   126,    12,     5,
      44,    89,   100,    99,    -1,    12,   126,    13,     5,    44,
      89,   100,    99,    -1,     5,    44,    89,   137,   100,    99,
      -1,   126,     5,    44,    89,   137,   100,    99,    -1,    13,
       5,    44,    89,   137,   100,    99,    -1,    12,     5,    44,
      89,   137,   100,    99,    -1,    13,    12,     5,    44,    89,
     137,   100,    99,    -1,    12,    13,     5,    44,    89,   137,
     100,    99,    -1,    13,   126,     5,    44,    89,   137,   100,
      99,    -1,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    13,    12,   126,     5,    44,    89,   137,   100,    99,
      -1,    12,    13,   126,     5,    44,    89,   137,   100,    99,
      -1,   126,    13,     5,    44,    89,   137,   100,    99,    -1,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      13,    12,     5,    44,    89,   137,   100,    99,    -1,   126,
      12,    13,     5,    44,    89,   137,   100,    99,    -1,    13,
     126,    12,     5,    44,    89,   137,   100,    99,    -1,    12,
     126,    13,     5,    44,    89,   137,   100,    99,    -1,   206,
      88,    -1,   200,   206,    88,    -1,    88,   206,    -1,   201,
      88,   206,    -1,   206,    -1,   205,    -1,   206,    88,    -1,
      95,   157,    -1,    95,   157,    88,    40,   157,    -1,    95,
     157,   201,    -1,    95,   157,   203,    -1,    95,   157,   201,
     203,    -1,    95,   157,   201,    88,    40,   157,    -1,    40,
     157,    -1,   200,   206,    -1,   200,   205,    -1,   200,   204,
     205,    -1,   200,   206,    88,    -1,   200,    95,   157,    -1,
     200,    95,   157,    88,    40,   157,    -1,   200,    95,   157,
     201,    -1,   200,    95,   157,   203,    -1,   200,    95,   157,
     201,   203,    -1,   200,    95,   157,   201,    88,    40,   157,
      -1,   200,    40,   157,    -1,    88,   205,    -1,   203,    88,
     205,    -1,   205,    88,    -1,   204,   205,    88,    -1,   157,
     101,   157,    -1,   157,    -1,   157,   208,    -1,   208,    -1,
     209,    -1,    20,   192,    21,   159,    -1,    20,   192,    21,
     159,   207,    -1,    17,   159,    -1,    17,   159,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   114,   114,   124,   125,   129,   133,   150,   158,   159,
     160,   169,   177,   178,   179,   187,   195,   196,   197,   205,
     213,   221,   222,   229,   237,   238,   239,   247,   254,   255,
     256,   264,   272,   273,   274,   282,   289,   290,   291,   298,
     307,   308,   311,   312,   314,   316,   317,   318,   319,   320,
     321,   322,   323,   326,   327,   328,   331,   332,   335,   336,
     337,   338,   339,   340,   341,   344,   345,   348,   349,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   365,   366,   367,   369,   370,   373,   376,   377,   378,
     381,   384,   387,   388,   392,   395,   398,   399,   401,   408,
     418,   419,   422,   423,   426,   430,   436,   437,   440,   441,
     444,   445,   448,   449,   450,   451,   452,   453,   456,   461,
     462,   465,   466,   467,   468,   471,   472,   475,   476,   479,
     480,   481,   482,   485,   486,   489,   490,   493,   494,   497,
     498,   501,   502,   503,   506,   507,   513,   517,   520,   521,
     524,   525,   528,   529,   532,   533,   536,   537,   540,   541,
     544,   545,   548,   549,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   565,   568,   569,   571,   572,
     575,   576,   579,   580,   583,   584,   587,   588,   591,   592,
     593,   594,   597,   598,   601,   605,   609,   612,   617,   618,
     625,   629,   633,   637,   638,   642,   646,   650,   653,   654,
     659,   660,   661,   662,   665,   666,   669,   670,   671,   672,
     675,   676,   679,   680,   681,   682,   683,   684,   685,   686,
     691,   698,   704,   710,   716,   722,   728,   734,   740,   746,
     752,   758,   764,   770,   776,   782,   785,   788,   791,   792,
     795,   796,   797,   800,   805,   806,   807,   808,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   823,   824,
     825,   826,   829,   830,   833,   834,   835,   836,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   850,   851,   854,
     855,   856,   857,   860,   861,   862,   863,   864,   865,   866,
     867,   870,   871,   874,   875,   876,   877,   880,   881,   883,
     884,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   898,   904,   912,   919,   926,   933,   940,   947,   954,
     961,   968,   975,   982,   989,   996,  1003,  1010,  1017,  1025,
    1032,  1039,  1046,  1053,  1060,  1067,  1074,  1081,  1088,  1095,
    1102,  1109,  1116,  1123,  1130,  1137,  1144,  1151,  1158,  1165,
    1172,  1179,  1186,  1193,  1200,  1201,  1202,  1209,  1216,  1223,
    1233,  1234,  1237,  1238,  1241,  1242,  1244,  1246,  1254,  1267,
    1276,  1285,  1293,  1305,  1312,  1313,  1314,  1315,  1317,  1325,
    1338,  1346,  1354,  1362,  1375,  1385,  1386,  1389,  1390,  1393,
    1395,  1396,  1400,  1401,  1404,  1405,  1408,  1409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "IMPORT", "CLASS", "END",
  "PRIMARY", "OR", "AND", "NOT", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "DEF", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "ARROW", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "EXPECT", "WITH", "AS", "ASSERT",
  "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2",
  "STRING", "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL",
  "EXCEPT", "PASS", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14",
  "stmt_13", "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7",
  "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('",
  "'['", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'",
  "')'", "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'",
  "$accept", "file_input", "program", "temp2", "funcdef", "funcheader",
  "parameters", "stmt", "simple_stmt", "small_stmt", "expr_stmt",
  "right_testlist", "testlist_star_expr", "comma_test_star",
  "comma_test_star_seqJ", "augassign", "access", "print_stmt", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "import_stmt", "import_name", "comma_dotted_as_name_seq",
  "dotted_as_names", "dotted_as_name", "dotted_name", "dotted_name_seq",
  "comma_name_seq", "global_stmt", "nonlocal_stmt", "compound_stmt",
  "elif_seq", "if_stmt", "while_stmt", "for_stmt", "try_stmt",
  "try_except_cla_seq", "with_seq", "with_stmt", "with_item",
  "except_clause", "list_stmt", "suite", "test", "or_seq", "or_test",
  "and_seq", "and_test", "not_test", "comp_op_seq", "comparison",
  "comp_op", "star_expr", "or_xor_expr_seq", "expr", "sha_and_expr_seq",
  "xor_expr", "and_shift_expr_seq", "and_expr", "arith_seq", "shift_expr",
  "term_seq", "arith_expr", "factor_seq", "term", "factor", "trailer_seq",
  "power", "str_seq", "atom", "comma_test_star_seq", "testlist_comp",
  "trailer", "comma_subscript_seq", "subscriptlist", "subscript",
  "sliceop", "comma_expr_star_seq", "exprlist", "comma_test", "testlist",
  "comma_test_colon_test_seq", "comma_test_seq", "dictorsetmaker",
  "classdef", "classheader", "arg_comma_seq", "comma_arg_seq", "arglist",
  "comma_default_arg_seq", "default_arg_comma_seq", "default_arg",
  "argument", "comp_iter", "comp_for", "comp_if", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   110,   111,   112,   112,   113,   113,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   126,   127,   128,   129,   130,   130,   130,
     131,   132,   133,   133,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   181,   181,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   203,   203,   204,   204,   205,
     206,   206,   207,   207,   208,   208,   209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     6,     7,
       4,     5,     7,     7,     5,     5,     8,     8,     6,     6,
       8,     8,     6,     6,     9,     9,     7,     7,     8,     8,
       6,     6,     9,     9,     7,     7,     9,     9,     7,     7,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     2,     1,     2,
       1,     2,     1,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     2,     2,     3,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     4,
       5,     4,     5,     7,     8,     4,     7,     6,     9,     4,
       7,     7,     6,     3,     4,     2,     3,     4,     5,     1,
       3,     1,     2,     4,     1,     2,     2,     1,     1,     5,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     1,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     2,     4,     3,
       1,     2,     2,     3,     2,     2,     3,     3,     1,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     2,     1,
       2,     2,     3,     2,     1,     2,     2,     3,     2,     3,
       3,     2,     2,     3,     1,     2,     2,     3,     1,     1,
       2,     3,     3,     4,     2,     2,     3,     1,     2,     2,
       2,     3,     3,     1,     2,     1,     2,     2,     3,     2,
       3,     2,     3,     1,     2,     2,     3,     4,     5,     2,
       3,     4,     3,     4,     4,     5,     2,     1,     2,     2,
       3,     2,     3,     4,     4,     4,     5,     5,     5,     5,
       6,     6,     5,     5,     6,     6,     6,     6,     5,     6,
       6,     6,     7,     7,     7,     7,     8,     8,     7,     7,
       8,     8,     8,     8,     6,     7,     7,     7,     8,     8,
       8,     8,     9,     9,     8,     8,     9,     9,     9,     9,
       2,     3,     2,     3,     1,     1,     2,     2,     5,     3,
       3,     4,     6,     2,     2,     2,     3,     3,     3,     6,
       4,     4,     5,     7,     3,     2,     3,     2,     3,     3,
       1,     2,     1,     1,     4,     5,     2,     3
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none). */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM. */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    81,    82,    83,     0,     0,
       4,     0,     0,    94,     6,     0,   102,    95,    98,   100,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     5,   147,     0,     0,     0,     0,     0,
       0,     0,   253,   252,   245,   247,   246,   228,   250,     0,
       0,    93,     0,     0,   220,   251,    86,   248,    90,    91,
      60,     0,     0,     0,     0,     0,     0,     0,   117,     0,
     144,    42,     0,    45,    54,    68,    58,    52,    46,    47,
      48,    87,    88,    89,    49,    50,    51,    43,   112,   113,
     114,   115,   116,     0,   321,    62,   148,   152,   156,   159,
       0,   162,   178,   182,   186,   192,   198,   208,   213,   249,
     216,     0,   103,     0,    99,     0,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,   158,     0,     0,   229,     0,
     118,     0,     0,   295,   293,     0,     0,   110,     0,   139,
      85,   303,    92,    84,   108,    65,    66,   222,   259,   264,
       0,   224,     0,   210,   211,   175,   212,   225,   317,     0,
       7,   145,    44,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    71,     0,    55,     0,    59,    67,
     146,     0,    61,     0,     0,   153,     0,   157,    64,     0,
       0,   170,   171,   169,   166,   173,   168,   167,   164,   165,
     163,     0,     0,   179,     0,   183,     0,   187,     0,     0,
     193,     0,     0,   199,     0,     0,     0,     0,   209,   221,
       0,     0,     0,     0,   217,   214,   104,     0,    96,     0,
     101,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     324,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   232,     0,     0,   231,
       0,     0,     0,     0,     0,   230,     0,     0,   299,   296,
     297,   294,     0,     0,     0,   111,     0,     0,     0,     0,
     305,   304,   109,     0,   261,   260,   258,   266,   265,   263,
     223,   226,   318,     0,   319,   316,   227,    57,    53,     0,
     150,     0,   154,     0,    63,   172,   174,     0,   160,   176,
       0,   180,     0,   184,     0,   188,   189,     0,     0,   194,
     195,     0,     0,   203,   200,   201,   202,     0,     0,     0,
       0,   219,     0,     0,   268,   400,     0,     0,   375,   374,
     279,   278,     0,   274,   271,     0,   215,   105,    97,   338,
       0,     0,     0,     0,   327,     0,     0,   328,     0,     0,
       0,     0,   326,     0,     0,   329,     0,     0,     0,     0,
     333,     0,     0,   332,     0,     0,   232,     0,     0,   231,
       0,     0,     0,   230,   234,     0,     0,     0,   236,   233,
       0,     0,     0,   235,    41,     0,     0,    10,     0,   240,
       0,   239,     0,   121,   125,   290,   289,   300,   298,     0,
       0,   141,   129,     0,   106,     0,   135,   137,     0,     0,
     140,   301,   306,     0,   254,   255,   262,   267,   309,   312,
     320,    56,     0,   151,   155,   161,   177,   181,   185,   190,
     191,   196,   197,   207,   204,   205,   206,   383,   377,     0,
     401,     0,     0,     0,   385,   384,   269,   370,   287,   284,
     285,   280,   270,   276,   275,   218,   354,   341,     0,     0,
       0,     0,   331,     0,     0,     0,   337,   340,     0,     0,
       0,     0,   330,     0,     0,     0,   336,   339,     0,     0,
       0,     0,   335,     0,     0,     0,   334,   234,     0,     0,
     236,   233,     0,     0,   235,     0,   240,     0,   239,     0,
     238,     0,    15,   244,     0,     0,   237,     0,    14,   243,
       0,    40,     0,   242,     0,   241,     0,     0,    11,     0,
       0,   122,     0,   292,   291,     0,     0,   142,     0,     0,
       0,     0,   107,   136,   138,     0,   302,     0,   256,   257,
     313,   314,   311,   310,   149,     0,   379,   380,   399,   394,
     388,     0,   386,   397,   371,   288,   286,   281,   282,   272,
     277,   357,   343,     0,     0,     0,   345,     0,     0,     0,
     356,   342,     0,     0,     0,   344,     0,     0,     0,   355,
     349,     0,     0,     0,   348,     0,     0,     0,   238,   244,
     237,   243,   242,   241,     0,    19,     0,     0,     0,     0,
      23,     0,    18,     0,     0,     0,     0,    22,     8,     0,
       0,    31,     0,     0,    30,     0,     0,     0,     0,     0,
       0,   127,   132,     0,     0,     0,     0,   133,   404,     0,
     315,     0,   395,   372,     0,   381,     0,     0,   390,   391,
     398,   283,   273,   359,   347,     0,   361,   353,     0,   358,
     346,     0,   360,   352,     0,   365,   351,     0,   364,   350,
       0,     0,     0,    27,    13,     0,    39,     0,     0,     0,
      26,    12,     0,    38,     0,     0,    35,     0,     0,    34,
       0,     9,   123,     0,     0,     0,   126,     0,   143,   130,
     131,   134,     0,   405,   402,   403,     0,     0,   378,     0,
     373,   396,     0,     0,   392,   363,   369,   362,   368,   367,
     366,    17,     0,     0,    20,    16,     0,     0,    21,     0,
      29,     0,    28,   119,   124,     0,     0,   406,   307,     0,
     382,   389,     0,    25,    37,    24,    36,    33,    32,   120,
     128,   407,   308,   393
};

/* YYPDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    68,    69,   272,    70,    71,    72,
      73,   186,    74,    75,    76,   187,    11,    77,    78,    79,
      80,    81,    82,    83,    84,    13,   114,    17,    18,    19,
     112,   285,    85,    86,    87,   541,    88,    89,    90,    91,
     422,   288,    92,   148,   423,    93,    94,    95,   195,    96,
     197,    97,    98,   210,    99,   211,   100,   213,   101,   215,
     102,   217,   103,   220,   104,   223,   105,   228,   106,   107,
     234,   108,   109,   110,   295,   160,   235,   474,   352,   353,
     470,   279,   145,   291,   152,   561,   304,   169,    14,    15,
     346,   566,   347,   567,   463,   652,   349,   713,   714,   715
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -521
static const short int yypact[] =
{
     180,    16,    97,   357,   292,  -521,  -521,  -521,    79,    55,
    -521,   553,   -23,  -521,   287,   650,    -4,  -521,    68,   128,
     204,   154,   216,   427,   176,   318,    60,  -521,  -521,   179,
     452,    88,   287,  -521,  -521,  1221,   313,  1221,  1221,   403,
     145,   214,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  1221,
     403,  1221,   403,   245,  -521,  -521,  -521,  -521,  -521,  -521,
     960,   807,   847,  1257,  1257,  1257,  1257,   690,  -521,   650,
     497,  -521,   222,  -521,   595,  -521,   277,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,   105,  -521,   286,   316,   377,   429,  -521,
     298,    34,   294,   352,   386,   407,   261,   355,  -521,   397,
      14,   451,   406,    16,   414,   469,    12,  -521,   209,   476,
     528,   515,   567,   290,   530,   573,   539,   583,   365,   550,
     593,   555,   596,  -521,    50,  -521,   323,   351,   511,   266,
    -521,   505,   507,   519,   520,   588,   650,   522,   125,   563,
    -521,   524,  -521,  -521,   522,  -521,  -521,  -521,    31,    33,
     518,  -521,   508,  -521,  -521,  -521,  -521,  -521,    32,   523,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,   888,  -521,  1221,   960,  -521,
    -521,   960,   286,  1221,  1221,   608,  1221,   624,   960,   546,
     614,  -521,  -521,  -521,  -521,   626,  -521,  -521,  -521,  -521,
      34,  1257,  1257,   534,  1257,   536,  1257,   537,  1257,  1257,
     432,  1257,  1257,   308,  1257,  1257,  1257,  1257,   409,  -521,
    1257,   726,   996,   597,    99,  -521,  -521,   599,  -521,    16,
    -521,   545,   547,    13,  -521,   372,   602,   379,   605,    17,
    -521,   383,   607,   388,   609,    42,  -521,   400,   613,   438,
     615,   224,   348,  -521,   170,   236,   511,   324,   257,   511,
     415,   766,    23,   391,   418,   511,   650,   650,   403,   574,
     403,   575,  1221,    45,   620,   578,  1221,   650,   203,  1257,
    1221,   580,   578,   403,   960,   585,  -521,   960,   586,  -521,
    -521,  -521,  1221,  1221,   589,  -521,  -521,   570,  -521,   660,
    -521,  1221,  -521,  1221,   960,  -521,  -521,  1257,  -521,  -521,
    1257,  -521,  1257,  -521,  1257,  -521,  -521,  1257,  1257,  -521,
    -521,  1257,  1257,  -521,  -521,  -521,  -521,  1257,  1257,  1257,
    1257,  -521,  1221,  1221,  -521,    29,   924,   584,  -521,   590,
    1036,   591,   576,   610,  -521,  1257,  -521,  -521,  -521,  -521,
     600,   611,   587,   102,  -521,   456,   115,  -521,   457,   612,
     606,   126,  -521,   458,   131,  -521,   463,   617,   618,   136,
    -521,   464,   142,  -521,   465,   466,  -521,   156,   471,  -521,
     165,   166,   295,  -521,   511,    71,    24,   173,   511,   511,
     242,    35,   370,   511,  -521,   619,  1221,  -521,   375,   511,
     393,   511,    46,   516,   691,  -521,  -521,   403,   403,   625,
     627,  1221,   265,   628,  -521,   664,  -521,  -521,  1221,   650,
    -521,   621,  -521,   696,  -521,  -521,   960,   960,  -521,    85,
    1221,  -521,  1221,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,   637,  1221,
    -521,  1221,  1221,  1221,   642,   649,  -521,   646,  1221,   643,
    -521,  1036,  -521,   996,   659,  -521,  -521,  -521,   651,   652,
     648,   143,  -521,   653,   655,   146,  -521,  -521,   658,   661,
     662,   152,  -521,   673,   663,   155,  -521,  -521,   674,   675,
     677,   161,  -521,   676,   678,   164,  -521,  -521,   705,   715,
    -521,  -521,   738,   741,  -521,   742,  -521,   743,  -521,    53,
     511,  1221,  -521,   511,    54,    56,   511,  1221,  -521,   511,
      58,  -521,   689,   511,    59,   511,    61,  1221,  -521,   692,
    1221,   579,   693,  -521,  -521,   650,   650,   745,   695,   701,
     702,   650,  -521,  -521,  -521,  1221,  -521,  1221,  -521,  -521,
    1221,   707,  -521,  -521,  -521,  1077,   714,   724,  -521,  -521,
     725,   713,   730,  -521,   703,  -521,  -521,   643,  -521,  -521,
     996,  -521,  -521,   728,   729,   723,  -521,   732,   734,   735,
    -521,  -521,   737,   739,   740,  -521,   744,   748,   753,  -521,
    -521,   755,   759,   763,  -521,   765,   768,   769,  -521,  -521,
    -521,  -521,  -521,  -521,  1221,  -521,    63,   774,    64,  1221,
    -521,  1221,  -521,    66,   776,    67,  1221,  -521,  -521,    72,
    1221,  -521,    73,  1221,  -521,   777,   650,   778,   780,  1221,
     650,   808,  -521,   781,   650,   650,   650,  -521,   556,   782,
    1221,  1221,  -521,  -521,  1113,   724,  1221,  1149,   751,   724,
    -521,  -521,  -521,  -521,  -521,   783,  -521,  -521,   784,  -521,
    -521,   785,  -521,  -521,   788,  -521,  -521,   794,  -521,  -521,
     795,   796,  1221,  -521,  -521,  1221,  -521,   800,   805,  1221,
    -521,  -521,  1221,  -521,   806,  1221,  -521,   809,  1221,  -521,
     810,  -521,  -521,   650,   650,   813,  -521,   815,  -521,  -521,
    -521,  -521,  1221,  -521,  -521,  -521,  1221,   817,  -521,  1221,
    -521,  -521,  1221,  1185,   724,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,   818,   820,  -521,  -521,   821,   822,  -521,   823,
    -521,   824,  -521,  -521,  -521,   650,   650,   556,  -521,  1221,
    -521,  -521,  1221,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -521
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -521,  -521,  -521,    75,  -521,  -521,   -50,  -521,  -521,  -521,
    -521,   535,   656,   -59,   172,  -521,    70,  -521,  -521,  -521,
    -521,  -521,  -521,  -521,   844,  -521,  -521,   -52,  -107,  -521,
    -521,   711,  -521,  -521,  -521,  -521,  -521,  -521,  -521,  -521,
    -521,  -521,  -521,  -281,   446,   836,   -65,   -37,  -521,  -191,
    -521,  -183,   -28,  -521,  -521,   670,   -24,  -521,   -30,  -521,
    -193,  -521,  -187,  -521,  -195,  -521,  -179,  -521,  -188,     3,
    -521,  -521,  -521,  -521,   779,   862,   694,  -521,  -521,  -444,
    -453,   791,   -42,   494,  -145,  -521,  -521,  -521,   907,  -521,
    -521,   374,   679,  -520,  -521,  -228,  -333,   198,  -127,  -521
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -388
static const short int yytable[] =
{
     141,   142,   309,   348,   170,   426,   238,   135,   150,   144,
     153,   310,   149,   465,   151,   143,   576,   189,   578,   319,
     144,   323,   144,   155,   158,   158,   143,   321,   143,   579,
     168,   296,   299,   329,   330,   165,   156,   159,   159,   325,
     326,   305,   308,   348,   200,   201,   655,   406,   521,   293,
     659,   293,   293,   293,   230,   202,    16,    16,    28,   527,
      16,    16,   261,   262,   242,   126,   163,   164,   420,   166,
     537,   203,   127,    23,    26,    32,   246,   614,   619,    27,
     621,   283,   626,   630,   204,   633,    16,   682,   685,    33,
     689,   692,   120,   131,   263,   125,   695,   698,   111,   205,
     132,   206,   207,   231,   232,   293,   139,   133,     5,     6,
       7,   190,   241,   361,   421,   520,   233,   369,   464,   294,
     302,   297,   407,   522,   661,   208,   209,   446,   443,   448,
     459,   303,   358,   189,   528,   447,   662,   419,   724,   355,
     189,    20,   377,   451,   452,   538,    16,   553,   449,   450,
     151,   155,   615,   620,   155,   622,   113,   627,   631,    16,
     634,   155,   683,   686,   156,   690,   693,   156,   312,   509,
      16,   696,   699,   560,   156,    16,   115,   513,   248,   515,
      16,   318,   391,   392,     1,     2,    16,    16,   231,   232,
      16,   362,     3,     4,   345,   351,    16,   370,   118,    16,
     510,   233,   479,   378,   264,    16,   267,   270,    16,   514,
     516,   413,   414,   286,   393,   483,   396,   523,   460,   401,
     123,   119,   427,   128,   287,   412,   489,   333,   334,   335,
     336,   493,   653,   341,   345,   572,   499,   385,     5,     6,
       7,   119,   503,   584,   146,   151,   588,   252,   416,   149,
     416,   433,   593,   431,   415,   597,   415,   434,   147,   430,
     434,   602,   124,   144,   606,   438,   439,   192,   386,   143,
     435,    29,   199,   435,     5,     6,     7,   155,   273,   274,
     394,   548,     5,     6,     7,   444,   526,   445,   549,   154,
     156,   428,     2,   116,     5,     6,     7,    24,   243,     3,
       4,   399,   429,   117,    25,   457,   458,   517,   244,   345,
     275,   480,   562,   469,   484,     5,     6,     7,     2,   490,
     172,   720,   494,   124,   653,   136,   137,   500,    21,   121,
     504,   387,   390,   193,   421,   395,   265,   397,   400,   518,
     453,   454,   455,   456,   519,     5,     6,     7,   524,   525,
       5,     6,     7,   530,   221,   222,    24,   138,   475,   534,
     388,   536,    21,   268,   554,   188,   648,   266,   398,   532,
      22,     5,     6,     7,   191,   254,     5,     6,     7,   249,
     258,     5,     6,     7,   547,   194,   198,   544,   544,   250,
     720,   149,   389,   543,   543,   269,   129,   212,   260,   558,
     558,   331,   332,   563,   408,   564,     5,     6,     7,     5,
       6,     7,   559,   559,   529,     5,     6,     7,   134,   533,
     126,   224,   568,   131,   569,   570,   571,   402,   721,   585,
     410,   575,   121,   589,   577,   409,   351,   535,   196,   594,
     122,    42,    43,   598,    44,    45,    46,    47,    48,   603,
     225,   226,   227,   607,   255,   508,   214,   129,   512,   403,
     229,   363,   411,   218,   256,   130,    54,    55,   366,   219,
     616,   364,   371,   618,    57,   337,   623,   374,   367,   625,
     641,   642,   372,   629,   617,   632,   647,   375,   327,   379,
     624,   216,    61,    62,   328,   236,    63,    64,    65,   380,
     635,     1,   239,   637,   338,   339,   340,    35,   237,    66,
     507,    67,    36,   240,    37,   511,    38,    39,   431,    40,
     245,   747,    41,   649,     5,     6,     7,   382,   345,     5,
       6,     7,   539,   246,   540,    42,    43,   383,    44,    45,
      46,    47,    48,   351,    49,   481,   485,   491,    50,    51,
      52,    53,   495,   501,   505,   482,   486,   492,    29,   247,
      54,    55,   496,   502,   506,    30,    31,    56,    57,    58,
      59,   702,   248,   712,   251,   706,   293,   681,   252,   709,
     710,   711,   687,   253,   688,    60,    61,    62,   254,   694,
      63,    64,    65,   697,   257,   638,   700,   639,   258,   259,
     271,   260,   705,    66,   276,    67,   277,   278,   280,   282,
     284,   289,   290,   717,   718,   301,   311,   345,   300,   571,
     345,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   306,   313,   314,   315,   316,   320,   743,   744,
     322,   354,   324,   357,   359,   732,   365,   360,   733,   368,
     184,   373,   736,   376,     1,   737,    34,   381,   739,   384,
      35,   741,   417,   418,   424,    36,   425,    37,   432,    38,
      39,   185,    40,   436,   437,    41,   442,   440,   467,   748,
     759,   760,   750,   472,   466,   751,   345,   478,    42,    43,
     471,    44,    45,    46,    47,    48,   185,    49,   473,   476,
      35,    50,    51,    52,    53,   134,   488,   542,   552,  -388,
     477,   487,   762,    54,    55,   763,   497,   557,   498,   531,
      56,    57,    58,    59,   545,   565,   546,   551,    42,    43,
     573,    44,    45,    46,    47,    48,    35,   574,    60,    61,
      62,   134,   468,    63,    64,    65,  -376,   580,   583,   608,
     581,   582,   586,    54,    55,   587,    66,   590,    67,   609,
     591,    57,   592,   596,    42,    43,   342,    44,    45,    46,
      47,    48,   595,   599,   600,   604,    35,   601,   605,    61,
      62,   134,   610,    63,    64,   611,   612,   613,   628,    54,
      55,   636,   640,   643,   644,   650,    66,    57,    67,   167,
     645,   646,   654,  -387,    42,    43,   342,    44,    45,    46,
      47,    48,   656,   657,   459,    61,    62,    35,   660,    63,
      64,   343,   134,   665,   707,   708,   344,   663,   664,    54,
      55,   666,    66,   667,    67,   668,   669,    57,   670,   723,
     671,   307,   441,   672,    12,    42,    43,   673,    44,    45,
      46,    47,    48,   674,   675,    61,    62,    35,   676,    63,
      64,   343,   134,   677,   678,   292,   404,   679,   550,   680,
      54,    55,    66,   684,    67,   691,   701,   703,    57,   704,
     317,   716,   725,   726,   727,    42,    43,   728,    44,    45,
      46,    47,    48,   729,   730,   731,    61,    62,    35,   734,
      63,    64,    65,   134,   735,   738,   171,   157,   740,   742,
      54,    55,   745,    66,   746,    67,   749,   753,    57,   754,
     755,   756,   757,   758,   162,   556,    42,    43,   356,    44,
      45,    46,    47,    48,    35,   281,    61,    62,   298,   134,
      63,    64,    65,   140,   658,   761,     0,     0,     0,     0,
     405,    54,    55,    66,   161,    67,     0,     0,     0,    57,
       0,     0,    42,    43,   461,    44,    45,    46,    47,    48,
      35,     0,     0,     0,     0,   134,    60,    61,    62,     0,
       0,    63,    64,    65,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,    66,    57,    67,     0,    42,    43,
       0,    44,    45,    46,    47,    48,    35,     0,     0,     0,
       0,   134,     0,    61,    62,     0,     0,    63,    64,   462,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
      66,    57,    67,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,     0,    35,     0,     0,    61,
      62,   134,     0,    63,    64,    65,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    66,    57,    67,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,    61,    62,    35,     0,    63,
      64,     0,   134,     0,     0,   350,     0,     0,     0,    54,
      55,     0,    66,     0,    67,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,    42,    43,   651,    44,    45,
      46,    47,    48,    35,     0,    61,    62,     0,   134,    63,
      64,     0,     0,     0,     0,   468,     0,     0,     0,     0,
      54,    55,    66,     0,    67,     0,     0,     0,    57,     0,
       0,    42,    43,   719,    44,    45,    46,    47,    48,    35,
       0,     0,     0,     0,   134,     0,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,    54,    55,     0,     0,
       0,     0,     0,    66,    57,    67,     0,    42,    43,   722,
      44,    45,    46,    47,    48,    35,     0,     0,     0,     0,
     134,     0,    61,    62,     0,     0,    63,    64,     0,     0,
       0,     0,    54,    55,     0,     0,     0,     0,     0,    66,
      57,    67,     0,    42,    43,   752,    44,    45,    46,    47,
      48,    35,     0,     0,     0,     0,   134,     0,    61,    62,
       0,     0,    63,    64,     0,     0,     0,     0,    54,    55,
       0,     0,     0,     0,     0,    66,    57,    67,     0,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,     0,   134,     0,    61,    62,     0,     0,    63,    64,
       0,     0,     0,     0,    54,    55,     0,     0,     0,     0,
       0,    66,    57,    67,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,    63,    64,     0,     0,     0,     0,
      54,    55,     0,     0,     0,     0,     0,    66,    57,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,    67
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      37,    38,   193,   231,    69,   286,   113,    35,    50,    39,
      52,   194,    49,   346,    51,    39,   469,    76,   471,   212,
      50,   216,    52,    60,    61,    62,    50,   214,    52,   473,
      67,   158,   159,   221,   222,    65,    60,    61,    62,   218,
     219,   168,   187,   271,    10,    11,   566,    24,    24,    20,
     570,    20,    20,    20,    40,    21,    44,    44,     3,    24,
      44,    44,    12,    13,   116,     5,    63,    64,    23,    66,
      24,    37,    12,     3,     4,    98,     5,    24,    24,     0,
      24,   146,    24,    24,    50,    24,    44,    24,    24,    14,
      24,    24,    22,     5,    44,    25,    24,    24,   102,    65,
      12,    67,    68,    89,    90,    20,    36,    32,    58,    59,
      60,     6,   100,   100,    69,    44,   102,   100,   346,    88,
      88,    88,    99,    99,   577,    91,    92,   320,   311,   324,
     101,    99,   239,   192,    99,   322,   580,   282,   658,    40,
     199,    44,   100,   331,   332,    99,    44,   428,   327,   328,
     187,   188,    99,    99,   191,    99,    88,    99,    99,    44,
      99,   198,    99,    99,   188,    99,    99,   191,   196,    13,
      44,    99,    99,    88,   198,    44,    48,    12,     5,    13,
      44,   211,    12,    13,     4,     5,    44,    44,    89,    90,
      44,   243,    12,    13,   231,   232,    44,   249,    44,    44,
      44,   102,   100,   255,   134,    44,   136,   137,    44,    44,
      44,   276,   277,    88,    44,   100,   266,    44,   345,   269,
      44,     5,   287,    44,    99,   275,   100,   224,   225,   226,
     227,   100,   565,   230,   271,   463,   100,    13,    58,    59,
      60,     5,   100,   100,    99,   282,   100,     5,   278,   286,
     280,   293,   100,   290,   278,   100,   280,   294,    44,   289,
     297,   100,     5,   293,   100,   302,   303,    95,    44,   293,
     294,     5,   100,   297,    58,    59,    60,   314,    12,    13,
      44,    16,    58,    59,    60,   313,    44,   317,    23,    44,
     314,    88,     5,    89,    58,    59,    60,     5,    89,    12,
      13,    44,    99,    99,    12,   342,   343,    12,    99,   346,
      44,   363,   439,   350,   366,    58,    59,    60,     5,   371,
      98,   654,   374,     5,   657,    12,    13,   379,     5,     5,
     382,   261,   262,    17,    69,   265,    13,    13,   268,    44,
     337,   338,   339,   340,   394,    58,    59,    60,   398,   399,
      58,    59,    60,   403,    93,    94,     5,    44,   355,   409,
      12,   411,     5,    12,   429,    88,   557,    44,    44,   406,
      13,    58,    59,    60,    88,     5,    58,    59,    60,    89,
       5,    58,    59,    60,   421,     8,    88,   417,   418,    99,
     723,   428,    44,   417,   418,    44,     5,   103,     5,   436,
     437,    93,    94,   440,    13,   442,    58,    59,    60,    58,
      59,    60,   436,   437,    44,    58,    59,    60,    15,    44,
       5,    66,   459,     5,   461,   462,   463,    12,   656,   481,
      12,   468,     5,   485,   471,    44,   473,    44,     9,   491,
      13,    38,    39,   495,    41,    42,    43,    44,    45,   501,
      95,    96,    97,   505,    89,   385,   104,     5,   388,    44,
      63,    89,    44,    56,    99,    13,    63,    64,    89,    62,
     520,    99,    89,   523,    71,    66,   526,    89,    99,   529,
     545,   546,    99,   533,   521,   535,   551,    99,    56,    89,
     527,   105,    89,    90,    62,    44,    93,    94,    95,    99,
     537,     4,    88,   540,    95,    96,    97,    10,   102,   106,
      44,   108,    15,    44,    17,    44,    19,    20,   555,    22,
      44,   712,    25,   560,    58,    59,    60,    89,   565,    58,
      59,    60,    16,     5,    18,    38,    39,    99,    41,    42,
      43,    44,    45,   580,    47,    89,    89,    89,    51,    52,
      53,    54,    89,    89,    89,    99,    99,    99,     5,    44,
      63,    64,    99,    99,    99,    12,    13,    70,    71,    72,
      73,   636,     5,    17,    44,   640,    20,   614,     5,   644,
     645,   646,   619,    44,   621,    88,    89,    90,     5,   626,
      93,    94,    95,   630,    44,    16,   633,    18,     5,    44,
      89,     5,   639,   106,    99,   108,    99,    88,    88,    21,
      88,    48,    88,   650,   651,   107,     8,   654,   100,   656,
     657,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   109,     9,    88,    21,    10,   103,   703,   704,
     104,    44,   105,    44,    99,   682,    44,   100,   685,    44,
      55,    44,   689,    44,     4,   692,     6,    44,   695,    44,
      10,   698,    88,    88,    44,    15,    88,    17,    88,    19,
      20,   101,    22,    88,    88,    25,    16,    88,    88,   716,
     745,   746,   719,   107,   100,   722,   723,   100,    38,    39,
      99,    41,    42,    43,    44,    45,   101,    47,    88,    99,
      10,    51,    52,    53,    54,    15,   100,    16,    44,    88,
      99,    99,   749,    63,    64,   752,    99,    21,   100,   100,
      70,    71,    72,    73,    99,    88,    99,    99,    38,    39,
      88,    41,    42,    43,    44,    45,    10,    88,    88,    89,
      90,    15,    99,    93,    94,    95,   100,    88,   100,    44,
      99,    99,    99,    63,    64,   100,   106,    99,   108,    44,
      99,    71,   100,   100,    38,    39,    40,    41,    42,    43,
      44,    45,    99,    99,    99,    99,    10,   100,   100,    89,
      90,    15,    44,    93,    94,    44,    44,    44,    99,    63,
      64,    99,    99,    48,    99,    88,   106,    71,   108,   109,
      99,    99,    88,   100,    38,    39,    40,    41,    42,    43,
      44,    45,    88,    88,   101,    89,    90,    10,    88,    93,
      94,    95,    15,   100,    16,    44,   100,    99,    99,    63,
      64,    99,   106,    99,   108,   100,    99,    71,    99,    88,
     100,   185,   307,    99,     0,    38,    39,    99,    41,    42,
      43,    44,    45,   100,    99,    89,    90,    10,    99,    93,
      94,    95,    15,   100,    99,   154,   100,    99,   422,   100,
      63,    64,   106,    99,   108,    99,    99,    99,    71,    99,
     210,    99,    99,    99,    99,    38,    39,    99,    41,    42,
      43,    44,    45,    99,    99,    99,    89,    90,    10,    99,
      93,    94,    95,    15,    99,    99,    70,   100,    99,    99,
      63,    64,    99,   106,    99,   108,    99,    99,    71,    99,
      99,    99,    99,    99,    62,   431,    38,    39,   234,    41,
      42,    43,    44,    45,    10,   144,    89,    90,   159,    15,
      93,    94,    95,    36,   570,   747,    -1,    -1,    -1,    -1,
     271,    63,    64,   106,   107,   108,    -1,    -1,    -1,    71,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    15,    88,    89,    90,    -1,
      -1,    93,    94,    95,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    15,    -1,    89,    90,    -1,    -1,    93,    94,    95,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
     106,    71,   108,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    10,    -1,    -1,    89,
      90,    15,    -1,    93,    94,    95,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    89,    90,    10,    -1,    93,
      94,    -1,    15,    -1,    -1,    99,    -1,    -1,    -1,    63,
      64,    -1,   106,    -1,   108,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    10,    -1,    89,    90,    -1,    15,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      63,    64,   106,    -1,   108,    -1,    -1,    -1,    71,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    10,
      -1,    -1,    -1,    -1,    15,    -1,    89,    90,    -1,    -1,
      93,    94,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,   106,    71,   108,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    10,    -1,    -1,    -1,    -1,
      15,    -1,    89,    90,    -1,    -1,    93,    94,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   106,
      71,   108,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    10,    -1,    -1,    -1,    -1,    15,    -1,    89,    90,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,   106,    71,   108,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    89,    90,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,   106,    71,   108,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,   106,    71,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    58,    59,    60,   111,   112,
     113,   126,   134,   135,   198,   199,    44,   137,   138,   139,
      44,     5,    13,   126,     5,    12,   126,     0,     3,     5,
      12,    13,    98,   113,     6,    10,    15,    17,    19,    20,
      22,    25,    38,    39,    41,    42,    43,    44,    45,    47,
      51,    52,    53,    54,    63,    64,    70,    71,    72,    73,
      88,    89,    90,    93,    94,    95,   106,   108,   114,   115,
     117,   118,   119,   120,   122,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   142,   143,   144,   146,   147,
     148,   149,   152,   155,   156,   157,   159,   161,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   179,   181,   182,
     183,   102,   140,    88,   136,    48,    89,    99,    44,     5,
     126,     5,    13,    44,     5,   126,     5,    12,    44,     5,
      13,     5,    12,   113,    15,   162,    12,    13,    44,   126,
     198,   157,   157,   166,   168,   192,    99,    44,   153,   157,
     192,   157,   194,   192,    44,   157,   166,   100,   157,   166,
     185,   107,   185,   179,   179,   168,   179,   109,   157,   197,
     156,   155,    98,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    55,   101,   121,   125,    88,   123,
       6,    88,   124,    17,     8,   158,     9,   160,    88,   124,
      10,    11,    21,    37,    50,    65,    67,    68,    91,    92,
     163,   165,   103,   167,   104,   169,   105,   171,    56,    62,
     173,    93,    94,   175,    66,    95,    96,    97,   177,    63,
      40,    89,    90,   102,   180,   186,    44,   102,   138,    88,
      44,   100,   137,    89,    99,    44,     5,    44,     5,    89,
      99,    44,     5,    44,     5,    89,    99,    44,     5,    44,
       5,    12,    13,    44,   126,    13,    44,   126,    12,    44,
     126,    89,   116,    12,    13,    44,    99,    99,    88,   191,
      88,   191,    21,   156,    88,   141,    88,    99,   151,    48,
      88,   193,   141,    20,    88,   184,   208,    88,   184,   208,
     100,   107,    88,    99,   196,   208,   109,   122,   194,   159,
     161,     8,   162,     9,    88,    21,    10,   165,   168,   170,
     103,   172,   104,   174,   105,   176,   176,    56,    62,   178,
     178,    93,    94,   179,   179,   179,   179,    66,    95,    96,
      97,   179,    40,    95,   100,   157,   200,   202,   205,   206,
      99,   157,   188,   189,    44,    40,   186,    44,   138,    99,
     100,   100,   137,    89,    99,    44,    89,    99,    44,   100,
     137,    89,    99,    44,    89,    99,    44,   100,   137,    89,
      99,    44,    89,    99,    44,    13,    44,   126,    12,    44,
     126,    12,    13,    44,    44,   126,   116,    13,    44,    44,
     126,   116,    12,    44,   100,   202,    24,    99,    13,    44,
      12,    44,   116,   156,   156,   166,   168,    88,    88,   194,
      23,    69,   150,   154,    44,    88,   153,   156,    88,    99,
     168,   157,    88,   192,   157,   166,    88,    88,   157,   157,
      88,   121,    16,   161,   162,   168,   170,   172,   174,   176,
     176,   178,   178,   179,   179,   179,   179,   157,   157,   101,
     208,    40,    95,   204,   205,   206,   100,    88,    99,   157,
     190,    99,   107,    88,   187,   179,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    99,   100,   100,
     137,    89,    99,   100,   137,    89,    99,    44,   126,    13,
      44,    44,   126,    12,    44,    13,    44,    12,    44,   116,
      44,    24,    99,    44,   116,   116,    44,    24,    99,    44,
     116,   100,   157,    44,   116,    44,   116,    24,    99,    16,
      18,   145,    16,   166,   168,    99,    99,   157,    16,    23,
     154,    99,    44,   153,   156,    88,   193,    21,   157,   166,
      88,   195,   208,   157,   157,    88,   201,   203,   157,   157,
     157,   157,   205,    88,    88,   157,   190,   157,   190,   189,
      88,    99,    99,   100,   100,   137,    99,   100,   100,   137,
      99,    99,   100,   100,   137,    99,   100,   100,   137,    99,
      99,   100,   100,   137,    99,   100,   100,   137,    44,    44,
      44,    44,    44,    44,    24,    99,   116,   157,   116,    24,
      99,    24,    99,   116,   157,   116,    24,    99,    99,   116,
      24,    99,   116,    24,    99,   157,    99,   157,    16,    18,
      99,   156,   156,    48,    99,    99,    99,   156,   159,   157,
      88,    40,   205,   206,    88,   203,    88,    88,   201,   203,
      88,   190,   189,    99,    99,   100,    99,    99,   100,    99,
      99,   100,    99,    99,   100,    99,    99,   100,    99,    99,
     100,   157,    24,    99,    99,    24,    99,   157,   157,    24,
      99,    99,    24,    99,   157,    24,    99,   157,    24,    99,
     157,    99,   156,    99,    99,   157,   156,    16,    44,   156,
     156,   156,    17,   207,   208,   209,    99,   157,   157,    40,
     206,   205,    40,    88,   203,    99,    99,    99,    99,    99,
      99,    99,   157,   157,    99,    99,   157,   157,    99,   157,
      99,   157,    99,   156,   156,    99,    99,   159,   157,    99,
     157,   157,    40,    99,    99,    99,    99,    99,    99,   156,
     156,   207,   157,   157
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) 0)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (0)

#if YYDEBUG

#if ! defined (YYFPRINTF)
#  define YYFPRINTF fprintf
#endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data. */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined (__cplusplus) \
      || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;
typedef struct yyGLRStateSet yyGLRStateSet;

struct yyGLRState {
  /** Type tag: always true. */
  yybool yyisState;
  /** Type tag for yysemantics. If true, yysval applies, otherwise
   *  yyfirstVal applies. */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state. */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext. */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state. */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state. */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false. */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced. */
  yyGLRState* yystate;
  /** Next sibling in chain of options. To facilitate merging,
   *  options are chained in decreasing order by address. */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack. The yyisState field
 *  indicates which item of the union is valid. */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  yySymbol* yytokenp;
  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

static void yyexpandGLRStack (yyGLRStack* yystack);

static void yyFail (yyGLRStack* yystack, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystack, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystack->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystack)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystack)
{
  YYLONGJMP (yystack->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain. Assumes
 *  YYLOW1 < YYLOW0.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
   YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
   For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$). Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT. */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystack
              )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystack->yysplitPoint == NULL);
  int yylow;

# undef yyerrok
# define yyerrok (yystack->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING (yystack->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = *(yystack->yytokenp) = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT (*yylocp, yyvsp - yyrhslen, yyrhslen);

  switch (yyn)
    {
        case 2:
#line 114 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn), 0);
						Streams::verbose().flush();	
								;}
    break;

  case 3:
#line 124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";;}
    break;

  case 4:
#line 125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";;}
    break;

  case 5:
#line 129 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
						;}
    break;

  case 6:
#line 133 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					;}
    break;

  case 7:
#line 150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							((*yyvalp).tn)=ast->createFunctionNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  ;}
    break;

  case 8:
#line 158 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";;}
    break;

  case 9:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";;}
    break;

  case 10:
#line 160 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   ;}
    break;

  case 11:
#line 169 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  ;}
    break;

  case 12:
#line 177 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";;}
    break;

  case 13:
#line 178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 14:
#line 179 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 ;}
    break;

  case 15:
#line 187 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 ;}
    break;

  case 16:
#line 195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 17:
#line 196 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 18:
#line 197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    ;}
    break;

  case 19:
#line 205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													;}
    break;

  case 20:
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  ;}
    break;

  case 21:
#line 221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 22:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													;}
    break;

  case 23:
#line 229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													;}
    break;

  case 24:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";;}
    break;

  case 25:
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 26:
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  ;}
    break;

  case 27:
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  ;}
    break;

  case 28:
#line 254 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 29:
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 30:
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													;}
    break;

  case 31:
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													;}
    break;

  case 32:
#line 272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 33:
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 34:
#line 274 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  ;}
    break;

  case 35:
#line 282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  ;}
    break;

  case 36:
#line 289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 37:
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 38:
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  ;}
    break;

  case 39:
#line 298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  ;}
    break;

  case 40:
#line 307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";;}
    break;

  case 41:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";;}
    break;

  case 42:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";;}
    break;

  case 43:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt: compound_stmt\n";;}
    break;

  case 44:
#line 314 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";;}
    break;

  case 45:
#line 316 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";;}
    break;

  case 46:
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";;}
    break;

  case 47:
#line 318 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";;}
    break;

  case 48:
#line 319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";;}
    break;

  case 49:
#line 320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";;}
    break;

  case 50:
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";;}
    break;

  case 51:
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";;}
    break;

  case 52:
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";;}
    break;

  case 53:
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";;}
    break;

  case 54:
#line 327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";;}
    break;

  case 55:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";;}
    break;

  case 56:
#line 331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";;}
    break;

  case 57:
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";;}
    break;

  case 58:
#line 335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";;}
    break;

  case 59:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";;}
    break;

  case 60:
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";;}
    break;

  case 61:
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";;}
    break;

  case 62:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test \n";;}
    break;

  case 63:
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";;}
    break;

  case 64:
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";;}
    break;

  case 65:
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";;}
    break;

  case 66:
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";;}
    break;

  case 67:
#line 348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";;}
    break;

  case 68:
#line 349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";;}
    break;

  case 69:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";;}
    break;

  case 70:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";;}
    break;

  case 71:
#line 353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";;}
    break;

  case 72:
#line 354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";;}
    break;

  case 73:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";;}
    break;

  case 74:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";;}
    break;

  case 75:
#line 357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";;}
    break;

  case 76:
#line 358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";;}
    break;

  case 77:
#line 359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";;}
    break;

  case 78:
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";;}
    break;

  case 79:
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";;}
    break;

  case 80:
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";;}
    break;

  case 81:
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 82:
#line 366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;;}
    break;

  case 83:
#line 367 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 84:
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";;}
    break;

  case 85:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";;}
    break;

  case 86:
#line 373 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";;}
    break;

  case 87:
#line 376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";;}
    break;

  case 88:
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";;}
    break;

  case 89:
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";;}
    break;

  case 90:
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";;}
    break;

  case 91:
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";;}
    break;

  case 92:
#line 387 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";;}
    break;

  case 93:
#line 388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";;}
    break;

  case 94:
#line 392 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";;}
    break;

  case 95:
#line 395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";;}
    break;

  case 96:
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";;}
    break;

  case 97:
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";;}
    break;

  case 98:
#line 401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
					;}
    break;

  case 99:
#line 408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
						t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
				 ;}
    break;

  case 100:
#line 418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";;}
    break;

  case 101:
#line 419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";;}
    break;

  case 102:
#line 422 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal);;}
    break;

  case 103:
#line 423 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";;}
    break;

  case 104:
#line 426 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal);
						;}
    break;

  case 105:
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal);
				 ;}
    break;

  case 106:
#line 436 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";;}
    break;

  case 107:
#line 437 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";;}
    break;

  case 108:
#line 440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";;}
    break;

  case 109:
#line 441 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";;}
    break;

  case 110:
#line 444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";;}
    break;

  case 111:
#line 445 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";;}
    break;

  case 112:
#line 448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";;}
    break;

  case 113:
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";;}
    break;

  case 114:
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";;}
    break;

  case 115:
#line 451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";;}
    break;

  case 116:
#line 452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";;}
    break;

  case 117:
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
							;}
    break;

  case 118:
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
								;}
    break;

  case 119:
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";;}
    break;

  case 120:
#line 462 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";;}
    break;

  case 121:
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";;}
    break;

  case 122:
#line 466 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";;}
    break;

  case 123:
#line 467 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";;}
    break;

  case 124:
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";;}
    break;

  case 125:
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";;}
    break;

  case 126:
#line 472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";;}
    break;

  case 127:
#line 475 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";;}
    break;

  case 128:
#line 476 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";;}
    break;

  case 129:
#line 479 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";;}
    break;

  case 130:
#line 480 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";;}
    break;

  case 131:
#line 481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";;}
    break;

  case 132:
#line 482 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";;}
    break;

  case 133:
#line 485 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";;}
    break;

  case 134:
#line 486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";;}
    break;

  case 135:
#line 489 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";;}
    break;

  case 136:
#line 490 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";;}
    break;

  case 137:
#line 493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";;}
    break;

  case 138:
#line 494 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";;}
    break;

  case 139:
#line 497 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";;}
    break;

  case 140:
#line 498 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";;}
    break;

  case 141:
#line 501 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";;}
    break;

  case 142:
#line 502 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";;}
    break;

  case 143:
#line 503 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";;}
    break;

  case 144:
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";;}
    break;

  case 145:
#line 507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
						ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn));
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn);	
			;}
    break;

  case 146:
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn);	
						;}
    break;

  case 147:
#line 517 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;;}
    break;

  case 148:
#line 520 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";;}
    break;

  case 149:
#line 521 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";;}
    break;

  case 150:
#line 524 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";;}
    break;

  case 151:
#line 525 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";;}
    break;

  case 152:
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";;}
    break;

  case 153:
#line 529 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";;}
    break;

  case 154:
#line 532 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";;}
    break;

  case 155:
#line 533 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";;}
    break;

  case 156:
#line 536 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";;}
    break;

  case 157:
#line 537 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";;}
    break;

  case 158:
#line 540 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";;}
    break;

  case 159:
#line 541 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";;}
    break;

  case 160:
#line 544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";;}
    break;

  case 161:
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";;}
    break;

  case 162:
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";;}
    break;

  case 163:
#line 549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";;}
    break;

  case 164:
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";;}
    break;

  case 165:
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";;}
    break;

  case 166:
#line 554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";;}
    break;

  case 167:
#line 555 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";;}
    break;

  case 168:
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";;}
    break;

  case 169:
#line 557 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";;}
    break;

  case 170:
#line 558 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";;}
    break;

  case 171:
#line 559 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";;}
    break;

  case 172:
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";;}
    break;

  case 173:
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";;}
    break;

  case 174:
#line 562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";;}
    break;

  case 175:
#line 565 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";;}
    break;

  case 176:
#line 568 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";;}
    break;

  case 177:
#line 569 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";;}
    break;

  case 178:
#line 571 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr\n";;}
    break;

  case 179:
#line 572 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";;}
    break;

  case 180:
#line 575 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";;}
    break;

  case 181:
#line 576 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";;}
    break;

  case 182:
#line 579 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";;}
    break;

  case 183:
#line 580 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";;}
    break;

  case 184:
#line 583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";;}
    break;

  case 185:
#line 584 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";;}
    break;

  case 186:
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";;}
    break;

  case 187:
#line 588 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";;}
    break;

  case 188:
#line 591 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";;}
    break;

  case 189:
#line 592 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";;}
    break;

  case 190:
#line 593 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";;}
    break;

  case 191:
#line 594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";;}
    break;

  case 192:
#line 597 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr\n";;}
    break;

  case 193:
#line 598 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";;}
    break;

  case 194:
#line 601 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
						;}
    break;

  case 195:
#line 605 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
							op=MINUS;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
						;}
    break;

  case 196:
#line 609 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";op=PLUS;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
								;}
    break;

  case 197:
#line 612 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";op=MINUS;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
								;}
    break;

  case 198:
#line 617 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";;}
    break;

  case 199:
#line 618 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
										;}
    break;

  case 200:
#line 625 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							op=MULT;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
						;}
    break;

  case 201:
#line 629 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								op=DIV;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
							;}
    break;

  case 202:
#line 633 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								op=MOD;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn);
							;}
    break;

  case 203:
#line 637 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";;}
    break;

  case 204:
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
									;}
    break;

  case 205:
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
									;}
    break;

  case 206:
#line 646 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
									;}
    break;

  case 207:
#line 650 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";;}
    break;

  case 208:
#line 653 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";}
    break;

  case 209:
#line 654 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL,NULL,op);
							;}
    break;

  case 210:
#line 659 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";;}
    break;

  case 211:
#line 660 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";;}
    break;

  case 212:
#line 661 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";;}
    break;

  case 213:
#line 662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"factor: power\n";;}
    break;

  case 214:
#line 665 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";;}
    break;

  case 215:
#line 666 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";;}
    break;

  case 216:
#line 669 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";;}
    break;

  case 217:
#line 670 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";;}
    break;

  case 218:
#line 671 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";;}
    break;

  case 219:
#line 672 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";;}
    break;

  case 220:
#line 675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";;}
    break;

  case 221:
#line 676 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";;}
    break;

  case 222:
#line 679 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";;}
    break;

  case 223:
#line 680 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";;}
    break;

  case 224:
#line 681 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";;}
    break;

  case 225:
#line 682 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 226:
#line 683 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 227:
#line 684 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";;}
    break;

  case 228:
#line 685 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";((*yyvalp).tn) = ast->createIDNode();;}
    break;

  case 229:
#line 686 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
										v=((*yyvalp).var);
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
									;}
    break;

  case 230:
#line 691 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									acc_mod="";
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
											;}
    break;

  case 231:
#line 698 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											((*yyvalp).tn) = ast->createIDNode(v,0,0);
										;}
    break;

  case 232:
#line 704 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
										;}
    break;

  case 233:
#line 710 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												;}
    break;

  case 234:
#line 716 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												;}
    break;

  case 235:
#line 722 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												;}
    break;

  case 236:
#line 728 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												;}
    break;

  case 237:
#line 734 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														;}
    break;

  case 238:
#line 740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														;}
    break;

  case 239:
#line 746 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												;}
    break;

  case 240:
#line 752 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
											;}
    break;

  case 241:
#line 758 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													;}
    break;

  case 242:
#line 764 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													;}
    break;

  case 243:
#line 770 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														;}
    break;

  case 244:
#line 776 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													;}
    break;

  case 245:
#line 782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";
						((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.intVal),0,0,INT);
						;}
    break;

  case 246:
#line 785 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.floatVal),0,0,FLOAT);
						;}
    break;

  case 247:
#line 788 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.longVal),0,0,LONG);
						;}
    break;

  case 248:
#line 791 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 249:
#line 792 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),0,0,STRINGS);
								;}
    break;

  case 250:
#line 795 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 251:
#line 796 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";;}
    break;

  case 252:
#line 797 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),0,0,TRUEVAL);
				;}
    break;

  case 253:
#line 800 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal),0,0,FALSEVAL);
				;}
    break;

  case 254:
#line 805 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";;}
    break;

  case 255:
#line 806 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";;}
    break;

  case 256:
#line 807 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";;}
    break;

  case 257:
#line 808 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 258:
#line 811 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";;}
    break;

  case 259:
#line 812 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";;}
    break;

  case 260:
#line 813 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";;}
    break;

  case 261:
#line 814 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 262:
#line 815 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 263:
#line 816 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 264:
#line 817 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 265:
#line 818 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 266:
#line 819 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 267:
#line 820 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";;}
    break;

  case 268:
#line 823 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";;}
    break;

  case 269:
#line 824 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";;}
    break;

  case 270:
#line 825 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";;}
    break;

  case 271:
#line 826 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";;}
    break;

  case 272:
#line 829 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";;}
    break;

  case 273:
#line 830 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";;}
    break;

  case 274:
#line 833 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";;}
    break;

  case 275:
#line 834 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";;}
    break;

  case 276:
#line 835 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";;}
    break;

  case 277:
#line 836 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";;}
    break;

  case 278:
#line 839 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";;}
    break;

  case 279:
#line 840 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";;}
    break;

  case 280:
#line 841 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";;}
    break;

  case 281:
#line 842 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";;}
    break;

  case 282:
#line 843 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";;}
    break;

  case 283:
#line 844 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";;}
    break;

  case 284:
#line 845 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";;}
    break;

  case 285:
#line 846 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";;}
    break;

  case 286:
#line 847 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";;}
    break;

  case 287:
#line 850 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";;}
    break;

  case 288:
#line 851 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";;}
    break;

  case 289:
#line 854 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";;}
    break;

  case 290:
#line 855 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";;}
    break;

  case 291:
#line 856 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";;}
    break;

  case 292:
#line 857 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";;}
    break;

  case 293:
#line 860 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";;}
    break;

  case 294:
#line 861 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";;}
    break;

  case 295:
#line 862 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";;}
    break;

  case 296:
#line 863 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";;}
    break;

  case 297:
#line 864 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";;}
    break;

  case 298:
#line 865 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";;}
    break;

  case 299:
#line 866 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";;}
    break;

  case 300:
#line 867 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";;}
    break;

  case 301:
#line 870 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";;}
    break;

  case 302:
#line 871 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";;}
    break;

  case 303:
#line 874 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";;}
    break;

  case 304:
#line 875 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";;}
    break;

  case 305:
#line 876 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";;}
    break;

  case 306:
#line 877 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";;}
    break;

  case 307:
#line 880 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";;}
    break;

  case 308:
#line 881 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";;}
    break;

  case 309:
#line 883 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";;}
    break;

  case 310:
#line 884 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";;}
    break;

  case 311:
#line 887 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";;}
    break;

  case 312:
#line 888 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";;}
    break;

  case 313:
#line 889 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";;}
    break;

  case 314:
#line 890 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";;}
    break;

  case 315:
#line 891 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";;}
    break;

  case 316:
#line 892 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";;}
    break;

  case 317:
#line 893 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";;}
    break;

  case 318:
#line 894 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 319:
#line 895 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 320:
#line 896 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";;}
    break;

  case 321:
#line 898 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.tn),NULL);
							;}
    break;

  case 322:
#line 904 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					;}
    break;

  case 323:
#line 912 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 324:
#line 919 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 325:
#line 926 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 326:
#line 933 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 327:
#line 940 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 328:
#line 947 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 329:
#line 954 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 330:
#line 961 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 331:
#line 968 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 332:
#line 975 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 333:
#line 982 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 334:
#line 989 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 335:
#line 996 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 336:
#line 1003 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 337:
#line 1010 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 338:
#line 1017 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								;}
    break;

  case 339:
#line 1025 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 340:
#line 1032 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 341:
#line 1039 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 342:
#line 1046 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 343:
#line 1053 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 344:
#line 1060 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 345:
#line 1067 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 346:
#line 1074 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 347:
#line 1081 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 348:
#line 1088 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 349:
#line 1095 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 350:
#line 1102 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 351:
#line 1109 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 352:
#line 1116 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 353:
#line 1123 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 354:
#line 1130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 355:
#line 1137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 356:
#line 1144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 357:
#line 1151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 358:
#line 1158 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 359:
#line 1165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 360:
#line 1172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 361:
#line 1179 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 362:
#line 1186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 363:
#line 1193 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 364:
#line 1200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";;}
    break;

  case 365:
#line 1201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";;}
    break;

  case 366:
#line 1202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 367:
#line 1209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 368:
#line 1216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 369:
#line 1223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 370:
#line 1233 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";;}
    break;

  case 371:
#line 1234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";;}
    break;

  case 372:
#line 1237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";;}
    break;

  case 373:
#line 1238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";;}
    break;

  case 374:
#line 1241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";;}
    break;

  case 375:
#line 1242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";;}
    break;

  case 376:
#line 1244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";;}
    break;

  case 377:
#line 1246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   ;}
    break;

  case 378:
#line 1254 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									;}
    break;

  case 379:
#line 1267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
		 					   		    std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 ;}
    break;

  case 380:
#line 1276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 ;}
    break;

  case 381:
#line 1285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   ;}
    break;

  case 382:
#line 1293 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  ;}
    break;

  case 383:
#line 1305 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  ;}
    break;

  case 384:
#line 1312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";;}
    break;

  case 385:
#line 1313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";;}
    break;

  case 386:
#line 1314 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";;}
    break;

  case 387:
#line 1315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";;}
    break;

  case 388:
#line 1317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  ;}
    break;

  case 389:
#line 1325 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
											std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 ;}
    break;

  case 390:
#line 1338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   ;}
    break;

  case 391:
#line 1346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   ;}
    break;

  case 392:
#line 1354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 ;}
    break;

  case 393:
#line 1362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {
																std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   ;}
    break;

  case 394:
#line 1375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    ;}
    break;

  case 395:
#line 1385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";;}
    break;

  case 396:
#line 1386 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";;}
    break;

  case 397:
#line 1389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";;}
    break;

  case 398:
#line 1390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";;}
    break;

  case 399:
#line 1393 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";;}
    break;

  case 400:
#line 1395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";;}
    break;

  case 401:
#line 1396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";;}
    break;

  case 402:
#line 1400 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";;}
    break;

  case 403:
#line 1401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";;}
    break;

  case 404:
#line 1404 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";;}
    break;

  case 405:
#line 1405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";;}
    break;

  case 406:
#line 1408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";;}
    break;

  case 407:
#line 1409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";;}
    break;


      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
/* Line 872 of glr.c.  */
#line 4831 "yacc.cpp"
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  /* `Use' the arguments.  */
  (void) yy0;
  (void) yy1;

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  yysymprint (stderr, yystos[yys->yylrState],
		      &yys->yysemantics.yysval);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #RULE. */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token). */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one. */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  ((yytable_value) == YYTABLE_NINF)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
	        int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

static void
yyaddDeferredAction (yyGLRStack* yystack, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewItem;
  yynewItem = &yystack->yynextFree->yyoption;
  yystack->yyspaceLeft -= 1;
  yystack->yynextFree += 1;
  yynewItem->yyisState = yyfalse;
  yynewItem->yystate = rhs;
  yynewItem->yyrule = yyrule;
  yynewItem->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewItem;
  if (yystack->yyspaceLeft < YYHEADROOM)
    yyexpandGLRStack (yystack);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack. */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE. */
static yybool
yyinitGLRStack (yyGLRStack* yystack, size_t yysize)
{
  yystack->yyerrState = 0;
  yynerrs = 0;
  yystack->yyspaceLeft = yysize;
  yystack->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystack->yynextFree[0]);
  if (!yystack->yyitems)
    return yyfalse;
  yystack->yynextFree = yystack->yyitems;
  yystack->yysplitPoint = NULL;
  yystack->yylastDeleted = NULL;
  return yyinitStateSet (&yystack->yytops);
}

#define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation. */
static void
yyexpandGLRStack (yyGLRStack* yystack)
{
#if YYSTACKEXPANDABLE
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystack->yynextFree - yystack->yyitems;
  if (YYMAXDEPTH <= yysize)
    yyMemoryExhausted (yystack);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystack);
  for (yyp0 = yystack->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystack->yysplitPoint != NULL)
    yystack->yysplitPoint = YYRELOC (yystack->yyitems, yynewItems,
				 yystack->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystack->yytops.yysize; yyn += 1)
    if (yystack->yytops.yystates[yyn] != NULL)
      yystack->yytops.yystates[yyn] =
	YYRELOC (yystack->yyitems, yynewItems,
		 yystack->yytops.yystates[yyn], yystate);
  YYFREE (yystack->yyitems);
  yystack->yyitems = yynewItems;
  yystack->yynextFree = yynewItems + yysize;
  yystack->yyspaceLeft = yynewSize - yysize;

#else
  yyMemoryExhausted (yystack);
#endif
}

static void
yyfreeGLRStack (yyGLRStack* yystack)
{
  YYFREE (yystack->yyitems);
  yyfreeStateSet (&yystack->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S. */
static inline void
yyupdateSplit (yyGLRStack* yystack, yyGLRState* yys)
{
  if (yystack->yysplitPoint != NULL && yystack->yysplitPoint > yys)
    yystack->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK. */
static inline void
yymarkStackDeleted (yyGLRStack* yystack, size_t yyk)
{
  if (yystack->yytops.yystates[yyk] != NULL)
    yystack->yylastDeleted = yystack->yytops.yystates[yyk];
  yystack->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted. */
static void
yyundeleteLastStack (yyGLRStack* yystack)
{
  if (yystack->yylastDeleted == NULL || yystack->yytops.yysize != 0)
    return;
  yystack->yytops.yystates[0] = yystack->yylastDeleted;
  yystack->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystack->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystack)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystack->yytops.yysize)
    {
      if (yystack->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystack->yytops.yysize -= 1;
	}
      else
	{
	  yystack->yytops.yystates[yyj] = yystack->yytops.yystates[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL. */
static inline void
yyglrShift (yyGLRStack* yystack, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE yysval, YYLTYPE* yylocp)
{
  yyGLRStackItem* yynewItem;

  yynewItem = yystack->yynextFree;
  yystack->yynextFree += 1;
  yystack->yyspaceLeft -= 1;
  yynewItem->yystate.yyisState = yytrue;
  yynewItem->yystate.yylrState = yylrState;
  yynewItem->yystate.yyposn = yyposn;
  yynewItem->yystate.yyresolved = yytrue;
  yynewItem->yystate.yypred = yystack->yytops.yystates[yyk];
  yystack->yytops.yystates[yyk] = &yynewItem->yystate;
  yynewItem->yystate.yysemantics.yysval = yysval;
  yynewItem->yystate.yyloc = *yylocp;
  if (yystack->yyspaceLeft < YYHEADROOM)
    yyexpandGLRStack (yystack);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE. */
static inline void
yyglrShiftDefer (yyGLRStack* yystack, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRStackItem* yynewItem;

  yynewItem = yystack->yynextFree;
  yynewItem->yystate.yyisState = yytrue;
  yynewItem->yystate.yylrState = yylrState;
  yynewItem->yystate.yyposn = yyposn;
  yynewItem->yystate.yyresolved = yyfalse;
  yynewItem->yystate.yypred = yystack->yytops.yystates[yyk];
  yynewItem->yystate.yysemantics.yyfirstVal = NULL;
  yystack->yytops.yystates[yyk] = &yynewItem->yystate;
  yystack->yynextFree += 1;
  yystack->yyspaceLeft -= 1;
  yyaddDeferredAction (yystack, &yynewItem->yystate, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved. Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction. */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystack, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystack->yysplitPoint == NULL)
    {
      /* Standard special case: single stack. */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystack->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystack->yynextFree -= yynrhs;
      yystack->yyspaceLeft += yynrhs;
      yystack->yytops.yystates[0] = & yystack->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystack);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystack->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystack, yys);
      yystack->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystack);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(K, Rule)
#else
# define YY_REDUCE_PRINT(K, Rule)	\
do {					\
  if (yydebug)				\
    yy_reduce_print (K, Rule);		\
} while (0)

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

static inline void
yy_reduce_print (size_t yyk, yyRuleNum yyrule)
{
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu), ",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytokenName (yyrhs[yyi]));
  YYFPRINTF (stderr, "-> %s\n", yytokenName (yyr1[yyrule]));
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK. In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystack, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystack->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystack->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT (yyk, yyrule);
      YYCHK (yydoAction (yystack, yyk, yyrule, &yysval, &yyloc));
      yyglrShift (yystack, yyk,
		  yyLRgotoState (yystack->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystack->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystack->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystack, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred. Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystack->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystack->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystack->yysplitPoint;
	    yyp = yystack->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystack, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystack, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystack->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystack, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystack, size_t yyk)
{
  if (yystack->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystack->yysplitPoint = yystack->yytops.yystates[yyk];
    }
  if (yystack->yytops.yysize >= yystack->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      if (! ((yystack->yytops.yycapacity
	      <= (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	     && (yynewStates =
		 (yyGLRState**) YYREALLOC (yystack->yytops.yystates,
					   ((yystack->yytops.yycapacity *= 2)
					    * sizeof yynewStates[0])))))
	yyMemoryExhausted (yystack);
      yystack->yytops.yystates = yynewStates;
    }
  yystack->yytops.yystates[yystack->yytops.yysize]
    = yystack->yytops.yystates[yyk];
  yystack->yytops.yysize += 1;
  return yystack->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols. */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0. */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (yytrue)
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred. */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yySemanticOption* yyoptionList,
				   yyGLRStack* yystack, YYSTYPE* yyvalp,
				   YYLTYPE* yylocp);

static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn, yyGLRStack* yystack)
{
  YYRESULTTAG yyflag;
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      yyflag = yyresolveStates (yys->yypred, yyn-1, yystack);
      if (yyflag != yyok)
	return yyflag;
      if (! yys->yyresolved)
	{
	  yyflag = yyresolveValue (yys->yysemantics.yyfirstVal, yystack,
				   &yys->yysemantics.yysval, &yys->yyloc
				  );
	  if (yyflag != yyok)
	    return yyflag;
	  yys->yyresolved = yytrue;
	}
    }
  return yyok;
}

static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystack,
	         YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;

  yynrhs = yyrhsLength (yyopt->yyrule);
  YYCHK (yyresolveStates (yyopt->yystate, yynrhs, yystack));
  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  return yyuserAction (yyopt->yyrule, yynrhs,
		       yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
		       yyvalp, yylocp, yystack);
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static void yyreportAmbiguity (yySemanticOption* yyx0, yySemanticOption* yyx1,
			       yyGLRStack* yystack)
  __attribute__ ((__noreturn__));
static void
yyreportAmbiguity (yySemanticOption* yyx0, yySemanticOption* yyx1,
		   yyGLRStack* yystack)
{
  /* `Unused' warnings.  */
  (void) yyx0;
  (void) yyx1;

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif
  yyFail (yystack, YY_("syntax is ambiguous"));
}


/** Resolve the ambiguity represented by OPTIONLIST, perform the indicated
 *  actions, and return the result. */
static YYRESULTTAG
yyresolveValue (yySemanticOption* yyoptionList, yyGLRStack* yystack,
		YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyreportAmbiguity (yybest, yyp, yystack);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
	         but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      YYCHK (yyresolveAction (yybest, yystack, yyvalp, yylocp));
      for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	{
	  if (yyprec == yydprec[yyp->yyrule])
	    {
	      YYSTYPE yyval1;
	      YYLTYPE yydummy;
	      YYCHK (yyresolveAction (yyp, yystack, &yyval1, &yydummy));
	      yyuserMerge (yymerger[yyp->yyrule], yyvalp, &yyval1);
	    }
	}
      return yyok;
    }
  else
    return yyresolveAction (yybest, yystack, yyvalp, yylocp);
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystack)
{
  if (yystack->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystack->yytops.yystates[0];
	   yys != yystack->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystack->yytops.yystates[0], yyn, yystack
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystack)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystack->yytops.yysize != 1 || yystack->yysplitPoint == NULL)
    return;

  for (yyp = yystack->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystack->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystack->yyspaceLeft += yystack->yynextFree - yystack->yyitems;
  yystack->yynextFree = ((yyGLRStackItem*) yystack->yysplitPoint) + 1;
  yystack->yyspaceLeft -= yystack->yynextFree - yystack->yyitems;
  yystack->yysplitPoint = NULL;
  yystack->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystack->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystack->yynextFree->yystate.yypred = & yystack->yynextFree[-1].yystate;
      yystack->yytops.yystates[0] = &yystack->yynextFree->yystate;
      yystack->yynextFree += 1;
      yystack->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystack, size_t yyk,
	           size_t yyposn, YYSTYPE* yylvalp, YYLTYPE* yyllocp
		  )
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;
  yySymbol* const yytokenp = yystack->yytokenp;

  while (yystack->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystack->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystack, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystack, yyk, yyrule, yyfalse));
	}
      else
	{
	  if (*yytokenp == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	      *yytokenp = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", *yytokenp, yylvalp, yyllocp);
	    }
	  yygetLRActions (yystate, *yytokenp, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystack, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystack, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystack, yynewStack, yyposn,
					yylvalp, yyllocp));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yyk));
	      YY_SYMBOL_PRINT ("shifting", *yytokenp, yylvalp, yyllocp);
	      yyglrShift (yystack, yyk, yyaction, yyposn+1,
			  *yylvalp, yyllocp);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yyk,
			  yystack->yytops.yystates[yyk]->yylrState));
	      break;
	    }
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystack, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystack, yyk, -yyaction, yyfalse));
	}
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystack,
		     YYSTYPE* yylvalp, YYLTYPE* yyllocp)
{
  /* `Unused' warnings. */
  (void) yylvalp;
  (void) yyllocp;

  if (yystack->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      yySymbol* const yytokenp = yystack->yytokenp;
      int yyn;
      yyn = yypact[yystack->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  size_t yysize0 = yytnamerr (NULL, yytokenName (*yytokenp));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytokenName (*yytokenp);
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystack);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on YYSTACK, assuming that YYTOKENP,
   YYLVALP, and YYLLOCP point to the syntactic category, semantic
   value, and location of the look-ahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystack,
		      YYSTYPE* yylvalp,
		      YYLTYPE* YYOPTIONAL_LOC (yyllocp)
		      )
{
  yySymbol* const yytokenp = yystack->yytokenp;
  size_t yyk;
  int yyj;

  if (yystack->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
	if (*yytokenp == YYEOF)
	  yyFail (yystack, NULL);
	if (*yytokenp != YYEMPTY)
	  {
	    yydestruct ("Error: discarding",
			*yytokenp, yylvalp);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	*yytokenp = YYTRANSLATE (yychar);
	YY_SYMBOL_PRINT ("Next token is", *yytokenp, yylvalp, yyllocp);
	yyj = yypact[yystack->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += *yytokenp;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != *yytokenp)
	  {
	    if (yydefact[yystack->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystack->yytops.yysize; yyk += 1)
    if (yystack->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystack->yytops.yysize)
    yyFail (yystack, NULL);
  for (yyk += 1; yyk < yystack->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystack, yyk);
  yyremoveDeletes (yystack);
  yycompressStack (yystack);

  /* Now pop stack until we find a state that shifts the error token. */
  yystack->yyerrState = 3;
  while (yystack->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystack->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       yylvalp, &yyerrloc);
	      yyglrShift (yystack, 0, yytable[yyj],
			  yys->yyposn, *yylvalp, &yyerrloc);
	      yys = yystack->yytops.yystates[0];
	      break;
	    }
	}

      yydestroyGLRState ("Error: popping", yys);
      yystack->yytops.yystates[0] = yys->yypred;
      yystack->yynextFree -= 1;
      yystack->yyspaceLeft += 1;
    }
  if (yystack->yytops.yystates[0] == NULL)
    yyFail (yystack, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (0)


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yySymbol yytoken;
  yyGLRStack yystack;
  size_t yyposn;


  YYSTYPE* const yylvalp = &yylval;
  YYLTYPE* const yyllocp = &yylloc;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yytoken = YYEMPTY;
  yylval = yyval_default;


  if (! yyinitGLRStack (&yystack, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yystack.yytokenp = &yytoken;
  yyglrShift (&yystack, 0, 0, 0, yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{

		  yyreportSyntaxError (&yystack, yylvalp, yyllocp);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      if (yytoken == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, yylvalp, yyllocp);
		}
	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, yylvalp, yyllocp);
		  if (yytoken != YYEOF)
		    yytoken = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, yylval, yyllocp);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{

		  yyreportSyntaxError (&yystack, yylvalp, yyllocp);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (yytrue)
	{
	  size_t yys;
	  size_t yyn = yystack.yytops.yysize;
	  for (yys = 0; yys < yyn; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn,
				       yylvalp, yyllocp));
	  yytoken = YYEMPTY;
	  yyposn += 1;
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

	      yyreportSyntaxError (&yystack, yylvalp, yyllocp);
	      goto yyuser_error;
	    }
	  else if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, yylvalp, yyllocp);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  /* Fall through.  */

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */

 yyreturn:
  if (yytoken != YYEOF && yytoken != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                yytoken, yylvalp);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	while (yystates[0])
	  {
	    yyGLRState *yys = yystates[0];
	    yydestroyGLRState ("Cleanup: popping", yys);
	    yystates[0] = yys->yypred;
	    yystack.yynextFree -= 1;
	    yystack.yyspaceLeft += 1;
	  }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#ifdef YYDEBUG
static void yypstack (yyGLRStack* yystack, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystack) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      fprintf (stderr, " -> ");
    }
  fprintf (stderr, "%d@%lu", yys->yylrState, (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    fprintf (stderr, "<null>");
  else
    yy_yypstack (yyst);
  fprintf (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystack, size_t yyk)
{
  yypstates (yystack->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystack->yyitems)


static void
yypdumpstack (yyGLRStack* yystack)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystack->yyitems; yyp < yystack->yynextFree; yyp += 1)
    {
      fprintf (stderr, "%3lu. ", (unsigned long int) (yyp - yystack->yyitems));
      if (*(yybool *) yyp)
	{
	  fprintf (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		   yyp->yystate.yyresolved, yyp->yystate.yylrState,
		   (unsigned long int) yyp->yystate.yyposn,
		   (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    fprintf (stderr, ", firstVal: %ld",
		     (long int) YYINDEX (yyp->yystate.yysemantics.yyfirstVal));
	}
      else
	{
	  fprintf (stderr, "Option. rule: %d, state: %ld, next: %ld",
		   yyp->yyoption.yyrule,
		   (long int) YYINDEX (yyp->yyoption.yystate),
		   (long int) YYINDEX (yyp->yyoption.yynext));
	}
      fprintf (stderr, "\n");
    }
  fprintf (stderr, "Tops:");
  for (yyi = 0; yyi < yystack->yytops.yysize; yyi += 1)
    fprintf (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	     (long int) YYINDEX (yystack->yytops.yystates[yyi]));
  fprintf (stderr, "\n");
}
#endif


#line 1412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yaccFinal.y"

void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
	fprintf(stderr, "Error:%s\n", s);
	//cout<<s;
}

int strlength(char * str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	string input = "code.txt";
	dir_path="";
	//addFile(input);
	sourceFile=input;
	ifstream inf(input);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	//Program::printErrors();
	err->printErrQueue();
	system("pause");
}

/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison GLR parsers in C
   
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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* Copy the first part of user declarations.  */
/* Line 207 of glr.c  */
#line 4 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
	Node* k;
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

/* Line 207 of glr.c  */
#line 124 "yacc.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "yacc.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

/* Line 230 of glr.c  */
#line 153 "yacc.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1523

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  407
/* YYNRULES -- Number of states.  */
#define YYNSTATES  762
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    96,   104,     2,
      88,    99,    94,    92,    87,    93,   101,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,    97,
      90,   100,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,   106,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,   102,   108,   105,     2,     2,     2,
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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    19,    26,
      34,    39,    45,    53,    61,    67,    73,    82,    91,    98,
     105,   114,   123,   130,   137,   147,   157,   165,   173,   182,
     191,   198,   205,   215,   225,   233,   241,   251,   261,   269,
     277,   281,   284,   286,   288,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   311,   313,   316,   320,   323,   325,
     328,   330,   333,   335,   339,   342,   345,   348,   351,   353,
     355,   357,   359,   361,   363,   365,   367,   369,   371,   373,
     375,   377,   379,   381,   383,   386,   389,   391,   393,   395,
     397,   399,   401,   404,   406,   408,   411,   414,   418,   420,
     423,   425,   429,   431,   434,   437,   441,   444,   448,   451,
     455,   458,   462,   464,   466,   468,   470,   472,   474,   477,
     482,   488,   493,   499,   507,   516,   521,   529,   536,   546,
     551,   559,   567,   574,   578,   583,   586,   590,   595,   601,
     603,   607,   609,   612,   617,   619,   622,   625,   627,   629,
     635,   638,   642,   644,   647,   650,   654,   656,   659,   662,
     664,   667,   671,   673,   676,   678,   680,   682,   684,   686,
     688,   690,   692,   695,   697,   700,   703,   706,   710,   712,
     715,   718,   722,   724,   727,   730,   734,   736,   739,   742,
     745,   749,   753,   755,   758,   761,   764,   768,   772,   774,
     777,   780,   783,   786,   789,   793,   797,   801,   805,   807,
     810,   813,   816,   819,   821,   823,   826,   828,   831,   836,
     840,   842,   845,   848,   852,   855,   858,   862,   866,   868,
     871,   875,   879,   883,   888,   893,   898,   903,   909,   915,
     920,   925,   931,   937,   943,   949,   951,   953,   955,   957,
     959,   961,   963,   965,   967,   970,   973,   977,   981,   984,
     986,   989,   992,   996,   999,  1001,  1004,  1007,  1011,  1014,
    1018,  1022,  1025,  1028,  1032,  1034,  1037,  1040,  1044,  1046,
    1048,  1051,  1055,  1059,  1064,  1067,  1070,  1074,  1076,  1079,
    1082,  1085,  1089,  1093,  1095,  1098,  1100,  1103,  1106,  1110,
    1113,  1117,  1120,  1124,  1126,  1129,  1132,  1136,  1141,  1147,
    1150,  1154,  1159,  1163,  1168,  1173,  1179,  1182,  1184,  1187,
    1190,  1194,  1197,  1201,  1206,  1211,  1216,  1222,  1228,  1234,
    1240,  1247,  1254,  1260,  1266,  1273,  1280,  1287,  1294,  1300,
    1307,  1314,  1321,  1329,  1337,  1345,  1353,  1362,  1371,  1379,
    1387,  1396,  1405,  1414,  1423,  1430,  1438,  1446,  1454,  1463,
    1472,  1481,  1490,  1500,  1510,  1519,  1528,  1538,  1548,  1558,
    1568,  1571,  1575,  1578,  1582,  1584,  1586,  1589,  1592,  1598,
    1602,  1606,  1611,  1618,  1621,  1624,  1627,  1631,  1635,  1639,
    1646,  1651,  1656,  1662,  1670,  1674,  1677,  1681,  1684,  1688,
    1692,  1694,  1697,  1699,  1701,  1706,  1712,  1715
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     110,     0,    -1,   111,    -1,   133,    97,   112,    -1,   112,
      -1,   197,   112,    -1,   197,    -1,   114,   155,    -1,    15,
      44,   115,    24,   156,    98,    -1,    15,   125,    44,   115,
      24,   156,    98,    -1,    15,    44,   115,    98,    -1,    15,
     125,    44,   115,    98,    -1,    15,    13,    44,   115,    24,
     156,    98,    -1,    15,    12,    44,   115,    24,   156,    98,
      -1,    15,    13,    44,   115,    98,    -1,    15,    12,    44,
     115,    98,    -1,    15,    13,    12,    44,   115,    24,   156,
      98,    -1,    15,    12,    13,    44,   115,    24,   156,    98,
      -1,    15,    13,    12,    44,   115,    98,    -1,    15,    12,
      13,    44,   115,    98,    -1,    15,    12,   125,    44,   115,
      24,   156,    98,    -1,    15,    13,   125,    44,   115,    24,
     156,    98,    -1,    15,    13,   125,    44,   115,    98,    -1,
      15,    12,   125,    44,   115,    98,    -1,    15,    13,    12,
     125,    44,   115,    24,   156,    98,    -1,    15,    12,    13,
     125,    44,   115,    24,   156,    98,    -1,    15,    13,    12,
     125,    44,   115,    98,    -1,    15,    12,    13,   125,    44,
     115,    98,    -1,    15,   125,    13,    44,   115,    24,   156,
      98,    -1,    15,   125,    12,    44,   115,    24,   156,    98,
      -1,    15,   125,    13,    44,   115,    98,    -1,    15,   125,
      12,    44,   115,    98,    -1,    15,   125,    13,    12,    44,
     115,    24,   156,    98,    -1,    15,   125,    12,    13,    44,
     115,    24,   156,    98,    -1,    15,   125,    13,    12,    44,
     115,    98,    -1,    15,   125,    12,    13,    44,   115,    98,
      -1,    15,    13,   125,    12,    44,   115,    24,   156,    98,
      -1,    15,    12,   125,    13,    44,   115,    24,   156,    98,
      -1,    15,    13,   125,    12,    44,   115,    98,    -1,    15,
      12,   125,    13,    44,   115,    98,    -1,    88,   201,    99,
      -1,    88,    99,    -1,   117,    -1,   143,    -1,   118,    97,
      -1,   119,    -1,   127,    -1,   128,    -1,   129,    -1,   133,
      -1,   141,    -1,   142,    -1,   126,    -1,   121,   124,   193,
      -1,   121,    -1,   121,   120,    -1,   100,   121,   120,    -1,
     100,   121,    -1,   123,    -1,   123,    87,    -1,    87,    -1,
     156,   123,    -1,   156,    -1,   165,   123,    87,    -1,   165,
      87,    -1,    87,   156,    -1,    87,   165,    -1,   123,   122,
      -1,   122,    -1,    26,    -1,    27,    -1,    54,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    57,    -1,    58,
      -1,    59,    -1,    52,   191,    -1,    50,   191,    -1,    69,
      -1,   130,    -1,   131,    -1,   132,    -1,    71,    -1,    72,
      -1,    51,   193,    -1,    51,    -1,   134,    -1,     4,   136,
      -1,    87,   137,    -1,   135,    87,   137,    -1,   137,    -1,
     137,   135,    -1,   138,    -1,   138,    47,    44,    -1,    44,
      -1,    44,   139,    -1,   101,    44,    -1,   139,   101,    44,
      -1,    87,    44,    -1,   140,    87,    44,    -1,    53,    44,
      -1,    53,    44,   140,    -1,    25,    44,    -1,    25,    44,
     140,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     151,    -1,   113,    -1,    15,   197,    -1,    18,   156,    98,
     155,    -1,   144,    18,   156,    98,   155,    -1,    17,   156,
      98,   155,    -1,    17,   156,    98,   155,   144,    -1,    17,
     156,    98,   155,    16,    98,   155,    -1,    17,   156,    98,
     155,   144,    16,    98,   155,    -1,    19,   156,    98,   155,
      -1,    19,   156,    98,   155,    16,    98,   155,    -1,    20,
     191,    21,   193,    98,   155,    -1,    20,   191,    21,   193,
      98,   155,    16,    98,   155,    -1,    22,    98,   155,   149,
      -1,    22,    98,   155,   149,    16,    98,   155,    -1,    22,
      98,   155,   149,    23,    98,   155,    -1,    22,    98,   155,
      23,    98,   155,    -1,   153,    98,   155,    -1,   149,   153,
      98,   155,    -1,    87,   152,    -1,   150,    87,   152,    -1,
      46,   152,    98,   155,    -1,    46,   152,   150,    98,   155,
      -1,   156,    -1,   156,    47,   167,    -1,    68,    -1,    68,
     156,    -1,    68,   156,    47,    44,    -1,   116,    -1,   154,
     116,    -1,   154,     6,    -1,     6,    -1,   158,    -1,   158,
      17,   158,    16,   156,    -1,     8,   160,    -1,   157,     8,
     160,    -1,   160,    -1,   160,   157,    -1,     9,   161,    -1,
     159,     9,   161,    -1,   161,    -1,   161,   159,    -1,    10,
     161,    -1,   163,    -1,   164,   167,    -1,   162,   164,   167,
      -1,   167,    -1,   167,   162,    -1,    90,    -1,    91,    -1,
      49,    -1,    67,    -1,    66,    -1,    37,    -1,    11,    -1,
      21,    -1,    10,    21,    -1,    64,    -1,    64,    10,    -1,
      94,   167,    -1,   102,   169,    -1,   166,   102,   169,    -1,
     169,    -1,   169,   166,    -1,   103,   171,    -1,   168,   103,
     171,    -1,   171,    -1,   171,   168,    -1,   104,   173,    -1,
     170,   104,   173,    -1,   173,    -1,   173,   170,    -1,    55,
     175,    -1,    61,   175,    -1,   172,    55,   175,    -1,   172,
      61,   175,    -1,   175,    -1,   175,   172,    -1,    92,   177,
      -1,    93,   177,    -1,   174,    92,   177,    -1,   174,    93,
     177,    -1,   177,    -1,   177,   174,    -1,    94,   178,    -1,
      95,   178,    -1,    96,   178,    -1,    65,   178,    -1,   176,
      94,   178,    -1,   176,    95,   178,    -1,   176,    96,   178,
      -1,   176,    65,   178,    -1,   178,    -1,   178,   176,    -1,
      92,   178,    -1,    93,   178,    -1,   105,   178,    -1,   180,
      -1,   185,    -1,   179,   185,    -1,   182,    -1,   182,   179,
      -1,   182,   179,    40,   178,    -1,   182,    40,   178,    -1,
      62,    -1,   181,    62,    -1,    88,    99,    -1,    88,   184,
      99,    -1,    89,   106,    -1,   107,   108,    -1,    89,   184,
     106,    -1,   107,   196,   108,    -1,    44,    -1,    15,    44,
      -1,    15,   125,    44,    -1,    15,    13,    44,    -1,    15,
      12,    44,    -1,    15,    13,    12,    44,    -1,    15,    12,
      13,    44,    -1,    15,    13,   125,    44,    -1,    15,    12,
     125,    44,    -1,    15,    13,    12,   125,    44,    -1,    15,
      12,    13,   125,    44,    -1,    15,   125,    13,    44,    -1,
      15,   125,    12,    44,    -1,    15,   125,    13,    12,    44,
      -1,    15,   125,    12,    13,    44,    -1,    15,    13,   125,
      12,    44,    -1,    15,    12,   125,    13,    44,    -1,    41,
      -1,    43,    -1,    42,    -1,    70,    -1,   181,    -1,    45,
      -1,    63,    -1,    39,    -1,    38,    -1,    87,   156,    -1,
      87,   165,    -1,   183,    87,   156,    -1,   183,    87,   165,
      -1,   156,   207,    -1,   156,    -1,   156,   183,    -1,   156,
      87,    -1,   156,   183,    87,    -1,   165,   207,    -1,   165,
      -1,   165,   183,    -1,   165,    87,    -1,   165,   183,    87,
      -1,    88,    99,    -1,    88,   201,    99,    -1,    89,   187,
     106,    -1,   101,    44,    -1,    87,   188,    -1,   186,    87,
     188,    -1,   188,    -1,   188,   186,    -1,   188,    87,    -1,
     188,   186,    87,    -1,   156,    -1,    98,    -1,   156,    98,
      -1,   156,    98,   156,    -1,   156,    98,   189,    -1,   156,
      98,   156,   189,    -1,    98,   156,    -1,    98,   189,    -1,
      98,   156,   189,    -1,    98,    -1,    98,   156,    -1,    87,
     167,    -1,    87,   165,    -1,   190,    87,   167,    -1,   190,
      87,   165,    -1,   167,    -1,   167,   190,    -1,   165,    -1,
     165,   190,    -1,   167,    87,    -1,   167,   190,    87,    -1,
     165,    87,    -1,   165,   190,    87,    -1,    87,   156,    -1,
      87,   156,   192,    -1,   156,    -1,   156,   192,    -1,   156,
      87,    -1,   156,   192,    87,    -1,    87,   156,    98,   156,
      -1,   194,    87,   156,    98,   156,    -1,    87,   156,    -1,
     195,    87,   156,    -1,   156,    98,   156,   207,    -1,   156,
      98,   156,    -1,   156,    98,   156,    87,    -1,   156,    98,
     156,   194,    -1,   156,    98,   156,   194,    87,    -1,   156,
     207,    -1,   156,    -1,   156,    87,    -1,   156,   195,    -1,
     156,   195,    87,    -1,   198,   155,    -1,     5,    44,    98,
      -1,   125,     5,    44,    98,    -1,    13,     5,    44,    98,
      -1,    12,     5,    44,    98,    -1,    13,    12,     5,    44,
      98,    -1,    12,    13,     5,    44,    98,    -1,    12,   125,
       5,    44,    98,    -1,    13,   125,     5,    44,    98,    -1,
      13,    12,   125,     5,    44,    98,    -1,    12,    13,   125,
       5,    44,    98,    -1,   125,    13,     5,    44,    98,    -1,
     125,    12,     5,    44,    98,    -1,   125,    13,    12,     5,
      44,    98,    -1,   125,    12,    13,     5,    44,    98,    -1,
      13,   125,    12,     5,    44,    98,    -1,    12,   125,    13,
       5,    44,    98,    -1,     5,    44,    88,    99,    98,    -1,
     125,     5,    44,    88,    99,    98,    -1,    13,     5,    44,
      88,    99,    98,    -1,    12,     5,    44,    88,    99,    98,
      -1,    13,    12,     5,    44,    88,    99,    98,    -1,    12,
      13,     5,    44,    88,    99,    98,    -1,    13,   125,     5,
      44,    88,    99,    98,    -1,    12,   125,     5,    44,    88,
      99,    98,    -1,    13,    12,   125,     5,    44,    88,    99,
      98,    -1,    12,    13,   125,     5,    44,    88,    99,    98,
      -1,   125,    13,     5,    44,    88,    99,    98,    -1,   125,
      12,     5,    44,    88,    99,    98,    -1,   125,    13,    12,
       5,    44,    88,    99,    98,    -1,   125,    12,    13,     5,
      44,    88,    99,    98,    -1,    13,   125,    12,     5,    44,
      88,    99,    98,    -1,    12,   125,    13,     5,    44,    88,
      99,    98,    -1,     5,    44,    88,   136,    99,    98,    -1,
     125,     5,    44,    88,   136,    99,    98,    -1,    13,     5,
      44,    88,   136,    99,    98,    -1,    12,     5,    44,    88,
     136,    99,    98,    -1,    13,    12,     5,    44,    88,   136,
      99,    98,    -1,    12,    13,     5,    44,    88,   136,    99,
      98,    -1,    13,   125,     5,    44,    88,   136,    99,    98,
      -1,    12,   125,     5,    44,    88,   136,    99,    98,    -1,
      13,    12,   125,     5,    44,    88,   136,    99,    98,    -1,
      12,    13,   125,     5,    44,    88,   136,    99,    98,    -1,
     125,    13,     5,    44,    88,   136,    99,    98,    -1,   125,
      12,     5,    44,    88,   136,    99,    98,    -1,   125,    13,
      12,     5,    44,    88,   136,    99,    98,    -1,   125,    12,
      13,     5,    44,    88,   136,    99,    98,    -1,    13,   125,
      12,     5,    44,    88,   136,    99,    98,    -1,    12,   125,
      13,     5,    44,    88,   136,    99,    98,    -1,   205,    87,
      -1,   199,   205,    87,    -1,    87,   205,    -1,   200,    87,
     205,    -1,   205,    -1,   204,    -1,   205,    87,    -1,    94,
     156,    -1,    94,   156,    87,    40,   156,    -1,    94,   156,
     200,    -1,    94,   156,   202,    -1,    94,   156,   200,   202,
      -1,    94,   156,   200,    87,    40,   156,    -1,    40,   156,
      -1,   199,   205,    -1,   199,   204,    -1,   199,   203,   204,
      -1,   199,   205,    87,    -1,   199,    94,   156,    -1,   199,
      94,   156,    87,    40,   156,    -1,   199,    94,   156,   200,
      -1,   199,    94,   156,   202,    -1,   199,    94,   156,   200,
     202,    -1,   199,    94,   156,   200,    87,    40,   156,    -1,
     199,    40,   156,    -1,    87,   204,    -1,   202,    87,   204,
      -1,   204,    87,    -1,   203,   204,    87,    -1,   156,   100,
     156,    -1,   156,    -1,   156,   207,    -1,   207,    -1,   208,
      -1,    20,   191,    21,   158,    -1,    20,   191,    21,   158,
     206,    -1,    17,   158,    -1,    17,   158,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   115,   115,   125,   126,   130,   134,   151,   159,   160,
     161,   170,   178,   179,   180,   188,   196,   197,   198,   206,
     214,   222,   223,   230,   238,   239,   240,   248,   255,   256,
     257,   265,   273,   274,   275,   283,   290,   291,   292,   299,
     308,   309,   312,   313,   315,   317,   320,   321,   322,   323,
     324,   325,   326,   329,   330,   331,   337,   338,   341,   342,
     343,   344,   345,   349,   350,   353,   354,   357,   358,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   374,   375,   376,   378,   379,   382,   385,   386,   387,
     390,   393,   396,   397,   401,   404,   407,   408,   410,   417,
     427,   428,   431,   432,   435,   439,   445,   446,   449,   450,
     453,   454,   457,   461,   462,   466,   470,   471,   475,   481,
     485,   493,   497,   501,   506,   515,   519,   527,   531,   539,
     543,   551,   559,   566,   572,   584,   585,   588,   589,   592,
     593,   596,   600,   604,   607,   610,   623,   627,   630,   631,
     634,   635,   638,   639,   642,   643,   646,   647,   650,   651,
     654,   655,   658,   659,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   675,   678,   679,   681,   685,
     688,   689,   692,   693,   696,   697,   700,   701,   704,   705,
     706,   707,   710,   714,   717,   721,   725,   731,   737,   738,
     748,   752,   756,   760,   761,   765,   769,   773,   776,   777,
     782,   783,   784,   785,   791,   792,   795,   796,   797,   798,
     801,   802,   805,   806,   807,   808,   809,   810,   811,   814,
     819,   826,   832,   838,   844,   850,   856,   862,   868,   874,
     880,   886,   892,   898,   904,   910,   915,   919,   923,   924,
     927,   928,   929,   932,   937,   938,   939,   940,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   955,   956,
     957,   958,   961,   962,   965,   966,   967,   968,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   982,   983,   986,
     987,   988,   989,   992,   993,   994,   995,   996,   997,   998,
     999,  1002,  1003,  1006,  1007,  1008,  1009,  1012,  1013,  1015,
    1016,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1030,  1036,  1044,  1051,  1058,  1065,  1072,  1079,  1086,
    1093,  1100,  1107,  1114,  1121,  1128,  1135,  1142,  1149,  1157,
    1164,  1171,  1178,  1185,  1192,  1199,  1206,  1213,  1220,  1227,
    1234,  1241,  1248,  1255,  1262,  1269,  1276,  1283,  1290,  1297,
    1304,  1311,  1318,  1325,  1332,  1333,  1334,  1341,  1348,  1355,
    1365,  1366,  1369,  1370,  1373,  1374,  1376,  1378,  1386,  1399,
    1408,  1417,  1425,  1437,  1444,  1445,  1446,  1447,  1449,  1457,
    1470,  1478,  1486,  1494,  1507,  1517,  1518,  1521,  1522,  1525,
    1527,  1528,  1532,  1533,  1536,  1537,  1540,  1541
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "IMPORT", "CLASS", "END",
  "PRIMARY", "OR", "AND", "NOT", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "DEF", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "ARROW", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "WITH", "AS", "ASSERT", "EQUAL", "DEL",
  "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2", "RAISE",
  "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2", "STRING",
  "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "EXCEPT",
  "PASS", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14", "stmt_13",
  "stmt_12", "stmt_11", "stmt_10", "stmt_9", "stmt_8", "stmt_7", "stmt_6",
  "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "','", "'('", "'['",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "':'", "')'",
  "'='", "'.'", "'|'", "'^'", "'&'", "'~'", "']'", "'{'", "'}'", "$accept",
  "file_input", "program", "temp2", "funcdef", "funcheader", "parameters",
  "stmt", "simple_stmt", "small_stmt", "expr_stmt", "right_testlist",
  "testlist_star_expr", "comma_test_star", "comma_test_star_seqJ",
  "augassign", "access", "print_stmt", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "import_stmt",
  "import_name", "comma_dotted_as_name_seq", "dotted_as_names",
  "dotted_as_name", "dotted_name", "dotted_name_seq", "comma_name_seq",
  "global_stmt", "nonlocal_stmt", "compound_stmt", "elif_seq", "if_stmt",
  "while_stmt", "for_stmt", "try_stmt", "try_except_cla_seq", "with_seq",
  "with_stmt", "with_item", "except_clause", "list_stmt", "suite", "test",
  "or_seq", "or_test", "and_seq", "and_test", "not_test", "comp_op_seq",
  "comparison", "comp_op", "star_expr", "or_xor_expr_seq", "expr",
  "sha_and_expr_seq", "xor_expr", "and_shift_expr_seq", "and_expr",
  "arith_seq", "shift_expr", "term_seq", "arith_expr", "factor_seq",
  "term", "factor", "trailer_seq", "power", "str_seq", "atom",
  "comma_test_star_seq", "testlist_comp", "trailer", "comma_subscript_seq",
  "subscriptlist", "subscript", "sliceop", "comma_expr_star_seq",
  "exprlist", "comma_test", "testlist", "comma_test_colon_test_seq",
  "comma_test_seq", "dictorsetmaker", "classdef", "classheader",
  "arg_comma_seq", "comma_arg_seq", "arglist", "comma_default_arg_seq",
  "default_arg_comma_seq", "default_arg", "argument", "comp_iter",
  "comp_for", "comp_if", YY_NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   127,   128,   129,   129,   129,
     130,   131,   132,   132,   133,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   177,   177,
     178,   178,   178,   178,   179,   179,   180,   180,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     185,   185,   186,   186,   187,   187,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   190,
     190,   190,   190,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   202,   202,   203,   203,   204,
     205,   205,   206,   206,   207,   207,   208,   208
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     2,     6,     7,
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

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
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

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
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

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,    81,    82,    83,     0,     2,
       4,     0,     0,    94,     6,     0,   102,    95,    98,   100,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     5,   147,     0,     0,     0,     0,     0,     0,
       0,   253,   252,   245,   247,   246,   228,   250,     0,     0,
      93,     0,     0,   220,   251,    86,   248,    90,    91,    60,
       0,     0,     0,     0,     0,     0,     0,   117,     0,   144,
      42,     0,    45,    54,    68,    58,    52,    46,    47,    48,
      87,    88,    89,    49,    50,    51,    43,   112,   113,   114,
     115,   116,     0,   321,    62,   148,   152,   156,   159,     0,
     162,   178,   182,   186,   192,   198,   208,   213,   249,   216,
       0,   103,     0,    99,     0,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,   158,     0,     0,   229,     0,   118,
       0,     0,   295,   293,     0,     0,   110,     0,   139,    85,
     303,    92,    84,   108,    65,    66,   222,   259,   264,     0,
     224,     0,   210,   211,   175,   212,   225,   317,     0,     7,
      44,    69,    70,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    71,     0,    55,     0,    59,    67,   146,   145,
       0,    61,     0,     0,   153,     0,   157,    64,     0,     0,
     170,   171,   169,   166,   173,   168,   167,   164,   165,   163,
       0,     0,   179,     0,   183,     0,   187,     0,     0,   193,
       0,     0,   199,     0,     0,     0,     0,   209,   221,     0,
       0,     0,     0,   217,   214,   104,     0,    96,     0,   101,
       0,     0,     0,   325,     0,     0,     0,     0,     0,   324,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,     0,   229,     0,     0,   232,     0,     0,   231,     0,
       0,     0,     0,     0,   230,     0,     0,   299,   296,   297,
     294,     0,     0,     0,   111,     0,     0,     0,     0,   305,
     304,   109,     0,   261,   260,   258,   266,   265,   263,   223,
     226,   318,     0,   319,   316,   227,    57,    53,     0,   150,
       0,   154,     0,    63,   172,   174,     0,   160,   176,     0,
     180,     0,   184,     0,   188,   189,     0,     0,   194,   195,
       0,     0,   203,   200,   201,   202,     0,     0,     0,     0,
     219,     0,     0,   268,   400,     0,     0,   375,   374,   279,
     278,     0,   274,   271,     0,   215,   105,    97,   338,     0,
       0,     0,     0,   327,     0,     0,   328,     0,     0,     0,
       0,   326,     0,     0,   329,     0,     0,     0,     0,   333,
       0,     0,   332,     0,     0,   232,     0,     0,   231,     0,
       0,     0,   230,   234,     0,     0,     0,   236,   233,     0,
       0,     0,   235,    41,     0,     0,    10,     0,   240,     0,
     239,     0,   121,   125,   290,   289,   300,   298,     0,     0,
     141,   129,     0,   106,     0,   135,   137,     0,     0,   140,
     301,   306,     0,   254,   255,   262,   267,   309,   312,   320,
      56,     0,   151,   155,   161,   177,   181,   185,   190,   191,
     196,   197,   207,   204,   205,   206,   383,   377,     0,   401,
       0,     0,     0,   385,   384,   269,   370,   287,   284,   285,
     280,   270,   276,   275,   218,   354,   341,     0,     0,     0,
       0,   331,     0,     0,     0,   337,   340,     0,     0,     0,
       0,   330,     0,     0,     0,   336,   339,     0,     0,     0,
       0,   335,     0,     0,     0,   334,   234,     0,     0,   236,
     233,     0,     0,   235,     0,   240,     0,   239,     0,   238,
       0,    15,   244,     0,     0,   237,     0,    14,   243,     0,
      40,     0,   242,     0,   241,     0,     0,    11,     0,     0,
     122,     0,   292,   291,     0,     0,   142,     0,     0,     0,
       0,   107,   136,   138,   302,     0,   256,   257,   313,   314,
     311,   310,   149,     0,   379,   380,   399,   394,   388,     0,
     386,   397,   371,   288,   286,   281,   282,   272,   277,   357,
     343,     0,     0,     0,   345,     0,     0,     0,   356,   342,
       0,     0,     0,   344,     0,     0,     0,   355,   349,     0,
       0,     0,   348,     0,     0,     0,   238,   244,   237,   243,
     242,   241,     0,    19,     0,     0,     0,     0,    23,     0,
      18,     0,     0,     0,     0,    22,     8,     0,     0,    31,
       0,     0,    30,     0,     0,     0,     0,     0,     0,   127,
     132,     0,     0,     0,     0,   133,   404,     0,   315,     0,
     395,   372,     0,   381,     0,     0,   390,   391,   398,   283,
     273,   359,   347,     0,   361,   353,     0,   358,   346,     0,
     360,   352,     0,   365,   351,     0,   364,   350,     0,     0,
       0,    27,    13,     0,    39,     0,     0,     0,    26,    12,
       0,    38,     0,     0,    35,     0,     0,    34,     0,     9,
     123,     0,     0,     0,   126,     0,   143,   130,   131,   134,
       0,   405,   402,   403,     0,     0,   378,     0,   373,   396,
       0,     0,   392,   363,   369,   362,   368,   367,   366,    17,
       0,     0,    20,    16,     0,     0,    21,     0,    29,     0,
      28,   119,   124,     0,     0,   406,   307,     0,   382,   389,
       0,    25,    37,    24,    36,    33,    32,   120,   128,   407,
     308,   393
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    67,    68,   271,    69,    70,    71,
      72,   184,    73,    74,    75,   185,    11,    76,    77,    78,
      79,    80,    81,    82,    83,    13,   113,    17,    18,    19,
     111,   284,    84,    85,    86,   540,    87,    88,    89,    90,
     421,   287,    91,   147,   422,    92,    93,    94,   194,    95,
     196,    96,    97,   209,    98,   210,    99,   212,   100,   214,
     101,   216,   102,   219,   103,   222,   104,   227,   105,   106,
     233,   107,   108,   109,   294,   159,   234,   473,   351,   352,
     469,   278,   144,   290,   151,   559,   303,   168,    14,    15,
     345,   564,   346,   565,   462,   650,   348,   711,   712,   713
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -514
static const short int yypact[] =
{
     234,     9,    38,   349,   405,  -514,  -514,  -514,   184,  -514,
    -514,    92,     6,  -514,   276,   682,    95,  -514,   137,   211,
     -15,   232,   225,   185,   260,   409,   262,  -514,   287,   353,
     290,   276,  -514,  -514,  1346,   266,  1346,  1346,  1380,   157,
     308,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  1346,  1380,
    1346,  1380,   319,  -514,  -514,  -514,  -514,  -514,  -514,  1083,
     928,   967,  1416,  1416,  1416,  1416,   812,  -514,   682,  -514,
    -514,   270,  -514,   344,  -514,   317,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,   773,  -514,   328,   399,   382,   428,  -514,   355,
      49,   358,   348,   365,   265,   326,   363,  -514,   410,    98,
     455,   376,     9,   423,   473,    80,  -514,   257,   474,   521,
     488,   532,   323,   495,   536,   499,   539,   342,   501,   542,
     504,   544,  -514,    62,  -514,   338,   397,   462,    82,  -514,
     453,   456,   465,   466,   534,   682,   469,   -18,   510,  -514,
     471,  -514,  -514,   469,  -514,  -514,  -514,    21,    22,   460,
    -514,   458,  -514,  -514,  -514,  -514,  -514,    13,   452,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  1008,  -514,  1346,  1083,  -514,  -514,  -514,
    1083,   328,  1346,  1346,   553,  1346,   554,  1083,   475,   545,
    -514,  -514,  -514,  -514,   555,  -514,  -514,  -514,  -514,    49,
    1416,  1416,   467,  1416,   464,  1416,   468,  1416,  1416,   331,
    1416,  1416,   401,  1416,  1416,  1416,  1416,   413,  -514,  1416,
     848,  1119,   524,   104,  -514,  -514,   527,  -514,     9,  -514,
     477,   478,    81,  -514,   350,   529,   373,   538,   101,  -514,
     377,   540,   404,   541,   103,  -514,   431,   543,   433,   546,
     388,   438,  -514,   208,   430,   462,   294,   447,   462,   316,
     887,    24,   303,   324,   462,   682,   682,  1380,   502,  1380,
     506,  1346,    39,   547,   507,  1346,   682,    -9,  1416,  1346,
     509,   507,  1380,  1083,   511,  -514,  1083,   512,  -514,  -514,
    -514,  1346,  1346,   513,  -514,  -514,   486,  -514,   581,  -514,
    1346,  -514,  1346,  1083,  -514,  -514,  1416,  -514,  -514,  1416,
    -514,  1416,  -514,  1416,  -514,  -514,  1416,  1416,  -514,  -514,
    1416,  1416,  -514,  -514,  -514,  -514,  1416,  1416,  1416,  1416,
    -514,  1346,  1346,  -514,    14,  1047,   503,  -514,   516,  1158,
     508,   498,   518,  -514,  1416,  -514,  -514,  -514,  -514,   517,
     519,   515,   116,  -514,   435,   132,  -514,   436,   522,   523,
     134,  -514,   437,   138,  -514,   440,   525,   526,   141,  -514,
     442,   144,  -514,   448,   454,  -514,   164,   457,  -514,   198,
     170,   274,  -514,   462,    58,    25,    88,   462,   462,   231,
      30,   236,   462,  -514,   528,  1346,  -514,   312,   462,   345,
     462,    32,    94,   591,  -514,  -514,  1380,  1380,   530,   531,
    1346,   278,   533,  -514,   564,  -514,  -514,  1346,   682,  -514,
     537,  -514,   588,  -514,  -514,  1083,  1083,  -514,    47,  1346,
    -514,  1346,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,   548,  1346,  -514,
    1346,  1346,  1346,   549,   552,  -514,   535,  1346,   550,  -514,
    1158,  -514,  1119,   556,  -514,  -514,  -514,   551,   557,   559,
     145,  -514,   558,   560,   162,  -514,  -514,   563,   565,   566,
     163,  -514,   568,   569,   165,  -514,  -514,   571,   572,   573,
     169,  -514,   575,   576,   173,  -514,  -514,   567,   577,  -514,
    -514,   582,   586,  -514,   589,  -514,   596,  -514,    33,   462,
    1346,  -514,   462,    48,    53,   462,  1346,  -514,   462,    60,
    -514,   578,   462,    61,   462,    64,  1346,  -514,   579,  1346,
     367,   584,  -514,  -514,   682,   682,   585,   592,   593,   595,
     682,  -514,  -514,  -514,  -514,  1346,  -514,  -514,  1346,   580,
    -514,  -514,  -514,  1199,   587,   600,  -514,  -514,   602,   562,
     607,  -514,   597,  -514,  -514,   550,  -514,  -514,  1119,  -514,
    -514,   605,   608,   599,  -514,   610,   611,   601,  -514,  -514,
     612,   614,   606,  -514,   615,   617,   618,  -514,  -514,   620,
     621,   623,  -514,   631,   632,   637,  -514,  -514,  -514,  -514,
    -514,  -514,  1346,  -514,    66,   633,    67,  1346,  -514,  1346,
    -514,    68,   639,    72,  1346,  -514,  -514,    75,  1346,  -514,
      77,  1346,  -514,   640,   682,   641,   642,  1346,   682,   594,
    -514,   598,   682,   682,   682,  -514,    59,   643,  1346,  1346,
    -514,  -514,  1238,   600,  1346,  1274,   629,   600,  -514,  -514,
    -514,  -514,  -514,   644,  -514,  -514,   645,  -514,  -514,   648,
    -514,  -514,   649,  -514,  -514,   650,  -514,  -514,   651,   652,
    1346,  -514,  -514,  1346,  -514,   657,   658,  1346,  -514,  -514,
    1346,  -514,   659,  1346,  -514,   660,  1346,  -514,   661,  -514,
    -514,   682,   682,   662,  -514,   663,  -514,  -514,  -514,  -514,
    1346,  -514,  -514,  -514,  1346,   664,  -514,  1346,  -514,  -514,
    1346,  1310,   600,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
     665,   666,  -514,  -514,   667,   668,  -514,   669,  -514,   670,
    -514,  -514,  -514,   682,   682,    59,  -514,  1346,  -514,  -514,
    1346,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -514,  -514,  -514,   187,  -514,  -514,   -49,   561,  -514,  -514,
    -514,   335,   463,   -62,   238,  -514,    36,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,   671,  -514,  -514,   -51,  -101,  -514,
    -514,   492,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -279,   229,  -514,   -64,   -36,  -514,  -190,
    -514,  -177,   -27,  -514,  -514,   443,   -23,  -514,   -29,  -514,
    -192,  -514,  -169,  -514,  -170,  -514,  -171,  -514,  -189,     3,
    -514,  -514,  -514,  -514,   622,   603,   450,  -514,  -514,  -443,
    -418,   630,   -41,   351,  -164,  -514,  -514,  -514,   737,  -514,
    -514,   127,   514,  -513,  -514,  -227,  -340,    37,  -140,  -514
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -388
static const short int yytable[] =
{
     140,   141,   308,   347,   169,   464,   425,   134,   149,   143,
     152,   237,   148,   187,   150,   142,   309,   295,   298,   318,
     143,   307,   143,   154,   157,   157,   142,   304,   142,   577,
     167,   328,   329,   292,   292,   164,   155,   158,   158,    23,
      26,   292,   292,   347,   320,   322,   324,   325,   405,   520,
     574,   653,   576,    16,   526,   657,   536,   612,   119,   199,
     200,   124,   419,   245,   241,   162,   163,   292,   165,   285,
     201,   138,   617,   115,   260,   261,   710,   619,   427,   292,
     286,   282,    20,   116,   624,   628,   202,    28,   631,   428,
     680,   683,   687,   247,   272,   273,   690,    28,   203,   693,
     301,   696,   519,    31,    29,    30,   262,   420,   293,   296,
     538,   302,   539,   204,   458,   205,   206,   418,   463,     5,
       6,     7,   406,   521,    16,    16,   274,   445,   527,   187,
     537,   613,   522,   442,   558,   660,   187,   357,   229,   207,
     208,   450,   451,   722,   354,    16,   618,    16,   552,   150,
     154,   620,   446,   447,   154,   448,   449,   659,   625,   629,
      16,   154,   632,   155,   681,   684,   688,   155,   311,   263,
     691,   266,   269,   694,   155,   697,    16,   508,    16,   240,
     360,   317,    16,   514,    27,    16,   230,   231,    16,    16,
     120,   361,   230,   231,   344,   350,   110,   369,   121,   232,
     368,    32,   376,   377,   459,   232,    16,    16,   509,    16,
     512,   412,   413,    16,   515,   478,   395,    16,   132,   400,
     390,   391,   426,   651,   112,   411,   332,   333,   334,   335,
     118,   482,   340,   488,   344,   570,   251,   492,     1,     2,
     498,   253,   513,   502,   582,   150,     3,     4,   415,   148,
     415,   432,   392,   430,   414,   145,   414,   433,   114,   429,
     433,   586,   591,   143,   595,   437,   438,   125,   600,   142,
     434,     2,   604,   434,   126,   525,   117,   154,   135,   136,
     528,     2,     5,     6,     7,   443,   516,   444,     3,     4,
     155,     5,     6,     7,   547,   130,   386,   389,   560,   120,
     394,   548,   131,   399,   122,   456,   457,   396,   128,   344,
     137,   479,   718,   468,   483,   651,   407,   257,   517,   489,
     217,   125,   493,     5,     6,     7,   218,   499,   401,   130,
     503,   127,   191,     5,     6,     7,   409,   198,   397,   452,
     453,   454,   455,    21,   518,   242,   420,   408,   523,   524,
     259,   264,   146,   529,    21,   243,   532,   474,   128,   533,
     402,   535,    22,   153,   553,   646,   129,   170,   410,   531,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   718,   265,   636,   546,   637,   326,   543,   543,   534,
     193,   148,   327,   542,   542,     5,     6,     7,   182,   556,
     556,   384,    24,   561,   186,   562,     5,     6,     7,   267,
      24,   248,   557,   557,   123,   190,   192,    25,   220,   221,
     507,   249,   566,   511,   567,   568,   569,   719,   223,   583,
     254,   573,   385,   587,   575,   118,   350,   195,   362,   592,
     255,   268,   197,   596,   183,     5,     6,     7,   363,   601,
     387,   213,   123,   605,     5,     6,     7,   224,   225,   226,
     211,   365,     5,     6,     7,   370,     5,     6,     7,   215,
     614,   366,   228,   616,   393,   371,   621,   236,   336,   623,
     639,   640,   388,   627,   615,   630,   645,     5,     6,     7,
     622,   398,   373,   330,   331,     5,     6,     7,   506,   235,
     633,   510,   374,   635,     5,     6,     7,   337,   338,   339,
     238,     5,     6,     7,     5,     6,     7,   239,   244,   378,
     745,   381,   647,   480,   484,   490,   245,   344,   494,   379,
     500,   382,   246,   481,   485,   491,   504,   247,   495,   250,
     501,   251,   350,   252,   253,   256,   505,   257,   258,   259,
     270,   275,   277,   279,   276,   281,   283,   288,   289,   299,
     305,   310,   313,   312,   300,   315,   314,   321,   353,   319,
     700,   356,   323,   364,   704,   358,   679,   359,   707,   708,
     709,   685,   367,   686,   372,   375,   183,   380,   692,   416,
     383,   423,   695,   417,   424,   698,   431,   441,   435,   436,
     439,   703,   465,   466,   471,   472,   470,   541,   551,   555,
     705,   606,   715,   716,   477,   475,   344,   476,   569,   344,
     486,   607,   487,   496,  -388,   497,   608,   530,   544,   545,
     609,   550,   641,   610,  -376,   563,   571,   741,   742,   572,
     611,   440,   706,   578,   730,   291,   306,   731,   467,   579,
     549,   734,   316,   189,   735,   580,   584,   737,   581,   585,
     739,   588,   458,   589,   161,   590,   593,   648,   594,   597,
     598,    12,   599,   602,   652,   603,   626,   634,   746,   757,
     758,   748,   638,   355,   749,   344,     1,   654,    33,   655,
     642,   643,    34,   644,   658,   656,  -387,    35,   663,    36,
     666,    37,    38,   661,    39,   669,   662,    40,   664,   665,
     667,   760,   668,   670,   761,   671,   721,   672,   673,   674,
      41,    42,   675,    43,    44,    45,    46,    47,    48,   676,
     677,   682,    49,    50,    51,    52,   678,   689,   699,   701,
     702,   714,   723,   724,    53,    54,   725,   726,   727,   728,
     729,    55,    56,    57,    58,   732,   733,   736,   738,   740,
     743,   744,   747,   751,   752,   753,   754,   755,   756,    59,
      60,    61,   139,   280,    62,    63,    64,     1,     0,   188,
     297,   554,   759,    34,   404,     0,     0,    65,    35,    66,
      36,     0,    37,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,    43,    44,    45,    46,    47,    48,
       0,     0,    34,    49,    50,    51,    52,   133,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      41,    42,     0,    43,    44,    45,    46,    47,    34,     0,
      59,    60,    61,   133,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    53,    54,     0,     0,    65,     0,
      66,     0,    56,     0,     0,     0,    41,    42,   341,    43,
      44,    45,    46,    47,     0,     0,     0,    34,     0,     0,
      60,    61,   133,     0,    62,    63,     0,     0,     0,     0,
      53,    54,     0,     0,     0,     0,     0,    65,    56,    66,
     166,     0,     0,     0,     0,    41,    42,   341,    43,    44,
      45,    46,    47,     0,     0,     0,    60,    61,    34,     0,
      62,    63,   342,   133,     0,     0,     0,   343,     0,    53,
      54,     0,     0,    65,     0,    66,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,     0,    43,
      44,    45,    46,    47,     0,    60,    61,    34,     0,    62,
      63,   342,   133,     0,     0,     0,   403,     0,     0,     0,
      53,    54,    65,     0,    66,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,    41,    42,     0,    43,    44,
      45,    46,    47,     0,     0,     0,    60,    61,    34,     0,
      62,    63,    64,   133,     0,     0,     0,   156,     0,    53,
      54,     0,     0,    65,     0,    66,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,     0,    43,
      44,    45,    46,    47,     0,    60,    61,    34,     0,    62,
      63,    64,   133,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    65,   160,    66,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,    41,    42,   460,    43,    44,
      45,    46,    47,    34,     0,    59,    60,    61,   133,     0,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    53,
      54,     0,     0,    65,     0,    66,     0,    56,     0,     0,
       0,    41,    42,     0,    43,    44,    45,    46,    47,    34,
       0,     0,     0,     0,   133,    60,    61,     0,     0,    62,
      63,   461,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,    65,    56,    66,     0,     0,    41,    42,     0,
      43,    44,    45,    46,    47,     0,     0,     0,    34,     0,
       0,    60,    61,   133,     0,    62,    63,    64,     0,     0,
       0,    53,    54,     0,     0,     0,     0,     0,    65,    56,
      66,     0,     0,     0,     0,     0,    41,    42,     0,    43,
      44,    45,    46,    47,     0,     0,     0,    60,    61,    34,
       0,    62,    63,     0,   133,     0,     0,   349,     0,     0,
      53,    54,     0,     0,    65,     0,    66,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,   649,
      43,    44,    45,    46,    47,     0,    60,    61,    34,     0,
      62,    63,     0,   133,     0,     0,   467,     0,     0,     0,
       0,    53,    54,    65,     0,    66,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,    41,    42,   717,    43,
      44,    45,    46,    47,    34,     0,     0,    60,    61,   133,
       0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
      53,    54,     0,     0,    65,     0,    66,     0,    56,     0,
       0,     0,    41,    42,   720,    43,    44,    45,    46,    47,
      34,     0,     0,     0,     0,   133,    60,    61,     0,     0,
      62,    63,     0,     0,     0,     0,    53,    54,     0,     0,
       0,     0,     0,    65,    56,    66,     0,     0,    41,    42,
     750,    43,    44,    45,    46,    47,    34,     0,     0,     0,
       0,   133,    60,    61,     0,     0,    62,    63,     0,     0,
       0,     0,    53,    54,     0,     0,     0,     0,     0,    65,
      56,    66,     0,     0,    41,    42,     0,    43,    44,    45,
      46,    47,     0,     0,     0,   133,     0,     0,    60,    61,
       0,     0,    62,    63,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,    65,    56,    66,    41,    42,
       0,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,   133,     0,     0,    60,    61,     0,     0,    62,    63,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      56,    65,     0,    66,    41,    42,     0,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,    62,    63,    64,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,    65,    56,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66
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
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

static const short int yycheck[] =
{
      36,    37,   192,   230,    68,   345,   285,    34,    49,    38,
      51,   112,    48,    75,    50,    38,   193,   157,   158,   211,
      49,   185,    51,    59,    60,    61,    49,   167,    51,   472,
      66,   220,   221,    20,    20,    64,    59,    60,    61,     3,
       4,    20,    20,   270,   213,   215,   217,   218,    24,    24,
     468,   564,   470,    44,    24,   568,    24,    24,    22,    10,
      11,    25,    23,     5,   115,    62,    63,    20,    65,    87,
      21,    35,    24,    88,    12,    13,    17,    24,    87,    20,
      98,   145,    44,    98,    24,    24,    37,     5,    24,    98,
      24,    24,    24,     5,    12,    13,    24,     5,    49,    24,
      87,    24,    44,    97,    12,    13,    44,    68,    87,    87,
      16,    98,    18,    64,   100,    66,    67,   281,   345,    57,
      58,    59,    98,    98,    44,    44,    44,   319,    98,   191,
      98,    98,    44,   310,    87,   578,   198,   238,    40,    90,
      91,   330,   331,   656,    40,    44,    98,    44,   427,   185,
     186,    98,   321,   323,   190,   326,   327,   575,    98,    98,
      44,   197,    98,   186,    98,    98,    98,   190,   195,   133,
      98,   135,   136,    98,   197,    98,    44,    13,    44,    99,
      99,   210,    44,    13,     0,    44,    88,    89,    44,    44,
       5,   242,    88,    89,   230,   231,   101,   248,    13,   101,
      99,    14,    99,   254,   344,   101,    44,    44,    44,    44,
      12,   275,   276,    44,    44,    99,   265,    44,    31,   268,
      12,    13,   286,   563,    87,   274,   223,   224,   225,   226,
       5,    99,   229,    99,   270,   462,     5,    99,     4,     5,
      99,     5,    44,    99,    99,   281,    12,    13,   277,   285,
     279,   292,    44,   289,   277,    98,   279,   293,    47,   288,
     296,    99,    99,   292,    99,   301,   302,     5,    99,   292,
     293,     5,    99,   296,    12,    44,    44,   313,    12,    13,
      44,     5,    57,    58,    59,   312,    12,   316,    12,    13,
     313,    57,    58,    59,    16,     5,   260,   261,   438,     5,
     264,    23,    12,   267,    44,   341,   342,    13,     5,   345,
      44,   362,   652,   349,   365,   655,    13,     5,    44,   370,
      55,     5,   373,    57,    58,    59,    61,   378,    12,     5,
     381,    44,    94,    57,    58,    59,    12,    99,    44,   336,
     337,   338,   339,     5,   393,    88,    68,    44,   397,   398,
       5,    13,    44,   402,     5,    98,    44,   354,     5,   408,
      44,   410,    13,    44,   428,   555,    13,    97,    44,   405,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   721,    44,    16,   420,    18,    55,   416,   417,    44,
       8,   427,    61,   416,   417,    57,    58,    59,    54,   435,
     436,    13,     5,   439,    87,   441,    57,    58,    59,    12,
       5,    88,   435,   436,     5,    87,    17,    12,    92,    93,
     384,    98,   458,   387,   460,   461,   462,   654,    65,   480,
      88,   467,    44,   484,   470,     5,   472,     9,    88,   490,
      98,    44,    87,   494,   100,    57,    58,    59,    98,   500,
      12,   103,     5,   504,    57,    58,    59,    94,    95,    96,
     102,    88,    57,    58,    59,    88,    57,    58,    59,   104,
     519,    98,    62,   522,    44,    98,   525,   101,    65,   528,
     544,   545,    44,   532,   520,   534,   550,    57,    58,    59,
     526,    44,    88,    92,    93,    57,    58,    59,    44,    44,
     536,    44,    98,   539,    57,    58,    59,    94,    95,    96,
      87,    57,    58,    59,    57,    58,    59,    44,    44,    88,
     710,    88,   558,    88,    88,    88,     5,   563,    88,    98,
      88,    98,    44,    98,    98,    98,    88,     5,    98,    44,
      98,     5,   578,    44,     5,    44,    98,     5,    44,     5,
      88,    98,    87,    87,    98,    21,    87,    47,    87,    99,
     108,     8,    87,     9,   106,    10,    21,   103,    44,   102,
     634,    44,   104,    44,   638,    98,   612,    99,   642,   643,
     644,   617,    44,   619,    44,    44,   100,    44,   624,    87,
      44,    44,   628,    87,    87,   631,    87,    16,    87,    87,
      87,   637,    99,    87,   106,    87,    98,    16,    44,    21,
      16,    44,   648,   649,    99,    98,   652,    98,   654,   655,
      98,    44,    99,    98,    87,    99,    44,    99,    98,    98,
      44,    98,    47,    44,    99,    87,    87,   701,   702,    87,
      44,   306,    44,    87,   680,   153,   183,   683,    98,    98,
     421,   687,   209,    92,   690,    98,    98,   693,    99,    99,
     696,    98,   100,    98,    61,    99,    98,    87,    99,    98,
      98,     0,    99,    98,    87,    99,    98,    98,   714,   743,
     744,   717,    98,   233,   720,   721,     4,    87,     6,    87,
      98,    98,    10,    98,    87,   568,    99,    15,    99,    17,
      99,    19,    20,    98,    22,    99,    98,    25,    98,    98,
      98,   747,    98,    98,   750,    98,    87,    99,    98,    98,
      38,    39,    99,    41,    42,    43,    44,    45,    46,    98,
      98,    98,    50,    51,    52,    53,    99,    98,    98,    98,
      98,    98,    98,    98,    62,    63,    98,    98,    98,    98,
      98,    69,    70,    71,    72,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    87,
      88,    89,    35,   143,    92,    93,    94,     4,    -1,     6,
     158,   430,   745,    10,   270,    -1,    -1,   105,    15,   107,
      17,    -1,    19,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      -1,    -1,    10,    50,    51,    52,    53,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    10,    -1,
      87,    88,    89,    15,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,   105,    -1,
     107,    -1,    70,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    10,    -1,    -1,
      88,    89,    15,    -1,    92,    93,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,   105,    70,   107,
     108,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    88,    89,    10,    -1,
      92,    93,    94,    15,    -1,    -1,    -1,    99,    -1,    62,
      63,    -1,    -1,   105,    -1,   107,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    88,    89,    10,    -1,    92,
      93,    94,    15,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      62,    63,   105,    -1,   107,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    88,    89,    10,    -1,
      92,    93,    94,    15,    -1,    -1,    -1,    99,    -1,    62,
      63,    -1,    -1,   105,    -1,   107,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    88,    89,    10,    -1,    92,
      93,    94,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,   105,   106,   107,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    10,    -1,    87,    88,    89,    15,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,   105,    -1,   107,    -1,    70,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    10,
      -1,    -1,    -1,    -1,    15,    88,    89,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,   105,    70,   107,    -1,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    10,    -1,
      -1,    88,    89,    15,    -1,    92,    93,    94,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,    70,
     107,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    88,    89,    10,
      -1,    92,    93,    -1,    15,    -1,    -1,    98,    -1,    -1,
      62,    63,    -1,    -1,   105,    -1,   107,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    88,    89,    10,    -1,
      92,    93,    -1,    15,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    62,    63,   105,    -1,   107,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    10,    -1,    -1,    88,    89,    15,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,   105,    -1,   107,    -1,    70,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      10,    -1,    -1,    -1,    -1,    15,    88,    89,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,   105,    70,   107,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    10,    -1,    -1,    -1,
      -1,    15,    88,    89,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   105,
      70,   107,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    15,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,   105,    70,   107,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,   105,    -1,   107,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,   105,    70,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    12,    13,    57,    58,    59,   110,   111,
     112,   125,   133,   134,   197,   198,    44,   136,   137,   138,
      44,     5,    13,   125,     5,    12,   125,     0,     5,    12,
      13,    97,   112,     6,    10,    15,    17,    19,    20,    22,
      25,    38,    39,    41,    42,    43,    44,    45,    46,    50,
      51,    52,    53,    62,    63,    69,    70,    71,    72,    87,
      88,    89,    92,    93,    94,   105,   107,   113,   114,   116,
     117,   118,   119,   121,   122,   123,   126,   127,   128,   129,
     130,   131,   132,   133,   141,   142,   143,   145,   146,   147,
     148,   151,   154,   155,   156,   158,   160,   161,   163,   165,
     167,   169,   171,   173,   175,   177,   178,   180,   181,   182,
     101,   139,    87,   135,    47,    88,    98,    44,     5,   125,
       5,    13,    44,     5,   125,     5,    12,    44,     5,    13,
       5,    12,   112,    15,   161,    12,    13,    44,   125,   197,
     156,   156,   165,   167,   191,    98,    44,   152,   156,   191,
     156,   193,   191,    44,   156,   165,    99,   156,   165,   184,
     106,   184,   178,   178,   167,   178,   108,   156,   196,   155,
      97,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    54,   100,   120,   124,    87,   122,     6,   116,
      87,   123,    17,     8,   157,     9,   159,    87,   123,    10,
      11,    21,    37,    49,    64,    66,    67,    90,    91,   162,
     164,   102,   166,   103,   168,   104,   170,    55,    61,   172,
      92,    93,   174,    65,    94,    95,    96,   176,    62,    40,
      88,    89,   101,   179,   185,    44,   101,   137,    87,    44,
      99,   136,    88,    98,    44,     5,    44,     5,    88,    98,
      44,     5,    44,     5,    88,    98,    44,     5,    44,     5,
      12,    13,    44,   125,    13,    44,   125,    12,    44,   125,
      88,   115,    12,    13,    44,    98,    98,    87,   190,    87,
     190,    21,   155,    87,   140,    87,    98,   150,    47,    87,
     192,   140,    20,    87,   183,   207,    87,   183,   207,    99,
     106,    87,    98,   195,   207,   108,   121,   193,   158,   160,
       8,   161,     9,    87,    21,    10,   164,   167,   169,   102,
     171,   103,   173,   104,   175,   175,    55,    61,   177,   177,
      92,    93,   178,   178,   178,   178,    65,    94,    95,    96,
     178,    40,    94,    99,   156,   199,   201,   204,   205,    98,
     156,   187,   188,    44,    40,   185,    44,   137,    98,    99,
      99,   136,    88,    98,    44,    88,    98,    44,    99,   136,
      88,    98,    44,    88,    98,    44,    99,   136,    88,    98,
      44,    88,    98,    44,    13,    44,   125,    12,    44,   125,
      12,    13,    44,    44,   125,   115,    13,    44,    44,   125,
     115,    12,    44,    99,   201,    24,    98,    13,    44,    12,
      44,   115,   155,   155,   165,   167,    87,    87,   193,    23,
      68,   149,   153,    44,    87,   152,   155,    87,    98,   167,
     156,    87,   191,   156,   165,    87,    87,   156,   156,    87,
     120,    16,   160,   161,   167,   169,   171,   173,   175,   175,
     177,   177,   178,   178,   178,   178,   156,   156,   100,   207,
      40,    94,   203,   204,   205,    99,    87,    98,   156,   189,
      98,   106,    87,   186,   178,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,    98,    99,    99,   136,
      88,    98,    99,   136,    88,    98,    44,   125,    13,    44,
      44,   125,    12,    44,    13,    44,    12,    44,   115,    44,
      24,    98,    44,   115,   115,    44,    24,    98,    44,   115,
      99,   156,    44,   115,    44,   115,    24,    98,    16,    18,
     144,    16,   165,   167,    98,    98,   156,    16,    23,   153,
      98,    44,   152,   155,   192,    21,   156,   165,    87,   194,
     207,   156,   156,    87,   200,   202,   156,   156,   156,   156,
     204,    87,    87,   156,   189,   156,   189,   188,    87,    98,
      98,    99,    99,   136,    98,    99,    99,   136,    98,    98,
      99,    99,   136,    98,    99,    99,   136,    98,    98,    99,
      99,   136,    98,    99,    99,   136,    44,    44,    44,    44,
      44,    44,    24,    98,   115,   156,   115,    24,    98,    24,
      98,   115,   156,   115,    24,    98,    98,   115,    24,    98,
     115,    24,    98,   156,    98,   156,    16,    18,    98,   155,
     155,    47,    98,    98,    98,   155,   158,   156,    87,    40,
     204,   205,    87,   202,    87,    87,   200,   202,    87,   189,
     188,    98,    98,    99,    98,    98,    99,    98,    98,    99,
      98,    98,    99,    98,    98,    99,    98,    98,    99,   156,
      24,    98,    98,    24,    98,   156,   156,    24,    98,    98,
      24,    98,   156,    24,    98,   156,    24,    98,   156,    98,
     155,    98,    98,   156,   155,    16,    44,   155,   155,   155,
      17,   206,   207,   208,    98,   156,   156,    40,   205,   204,
      40,    87,   202,    98,    98,    98,    98,    98,    98,    98,
     156,   156,    98,    98,   156,   156,    98,   156,    98,   156,
      98,   155,   155,    98,    98,   158,   156,    98,   156,   156,
      40,    98,    98,    98,    98,    98,    98,   155,   155,   206,
     156,   156
};

/* Error token number */
#define YYTERROR 1


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                                                           \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }       \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)          \
do {                                                            \
  if (yydebug)                                                  \
    {                                                           \
      YYFPRINTF (stderr, "%s ", Title);                         \
      yy_symbol_print (stderr, Type, Value);        \
      YYFPRINTF (stderr, "\n");                                 \
    }                                                           \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
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
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
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
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
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
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
/* Line 868 of glr.c  */
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						ast->print((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn), 0);
						Streams::verbose().flush();	
								}
    break;

  case 3:
/* Line 868 of glr.c  */
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
    break;

  case 4:
/* Line 868 of glr.c  */
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";}
    break;

  case 5:
/* Line 868 of glr.c  */
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
							cout<<"enter upper"<<endl;
						}
    break;

  case 6:
/* Line 868 of glr.c  */
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
    break;

  case 7:
/* Line 868 of glr.c  */
#line 151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							((*yyvalp).tn)=ast->createFunctionNode(testfunction,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
    break;

  case 8:
/* Line 868 of glr.c  */
#line 159 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
    break;

  case 9:
/* Line 868 of glr.c  */
#line 160 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
    break;

  case 10:
/* Line 868 of glr.c  */
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
    break;

  case 11:
/* Line 868 of glr.c  */
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
    break;

  case 12:
/* Line 868 of glr.c  */
#line 178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
    break;

  case 13:
/* Line 868 of glr.c  */
#line 179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 14:
/* Line 868 of glr.c  */
#line 180 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
    break;

  case 15:
/* Line 868 of glr.c  */
#line 188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
    break;

  case 16:
/* Line 868 of glr.c  */
#line 196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
    break;

  case 17:
/* Line 868 of glr.c  */
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 18:
/* Line 868 of glr.c  */
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
    break;

  case 19:
/* Line 868 of glr.c  */
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
    break;

  case 20:
/* Line 868 of glr.c  */
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
    break;

  case 21:
/* Line 868 of glr.c  */
#line 222 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 22:
/* Line 868 of glr.c  */
#line 223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
    break;

  case 23:
/* Line 868 of glr.c  */
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
    break;

  case 24:
/* Line 868 of glr.c  */
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
    break;

  case 25:
/* Line 868 of glr.c  */
#line 239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
    break;

  case 26:
/* Line 868 of glr.c  */
#line 240 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
    break;

  case 27:
/* Line 868 of glr.c  */
#line 248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
    break;

  case 28:
/* Line 868 of glr.c  */
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 29:
/* Line 868 of glr.c  */
#line 256 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 30:
/* Line 868 of glr.c  */
#line 257 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
    break;

  case 31:
/* Line 868 of glr.c  */
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
    break;

  case 32:
/* Line 868 of glr.c  */
#line 273 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 33:
/* Line 868 of glr.c  */
#line 274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 34:
/* Line 868 of glr.c  */
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
    break;

  case 35:
/* Line 868 of glr.c  */
#line 283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
    break;

  case 36:
/* Line 868 of glr.c  */
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
    break;

  case 37:
/* Line 868 of glr.c  */
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
    break;

  case 38:
/* Line 868 of glr.c  */
#line 292 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
    break;

  case 39:
/* Line 868 of glr.c  */
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
    break;

  case 40:
/* Line 868 of glr.c  */
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
    break;

  case 41:
/* Line 868 of glr.c  */
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";}
    break;

  case 42:
/* Line 868 of glr.c  */
#line 312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt:	simple_stmt \n";}
    break;

  case 43:
/* Line 868 of glr.c  */
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams::verbose() <<"stmt: compound_stmt\n";}
    break;

  case 44:
/* Line 868 of glr.c  */
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";}
    break;

  case 45:
/* Line 868 of glr.c  */
#line 317 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 46:
/* Line 868 of glr.c  */
#line 320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";}
    break;

  case 47:
/* Line 868 of glr.c  */
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";}
    break;

  case 48:
/* Line 868 of glr.c  */
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";}
    break;

  case 49:
/* Line 868 of glr.c  */
#line 323 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";}
    break;

  case 50:
/* Line 868 of glr.c  */
#line 324 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";}
    break;

  case 51:
/* Line 868 of glr.c  */
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
    break;

  case 52:
/* Line 868 of glr.c  */
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";}
    break;

  case 53:
/* Line 868 of glr.c  */
#line 329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
    break;

  case 54:
/* Line 868 of glr.c  */
#line 330 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
    break;

  case 55:
/* Line 868 of glr.c  */
#line 331 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
													((*yyvalp).tn)=ast->createAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL);
												}
    break;

  case 56:
/* Line 868 of glr.c  */
#line 337 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
    break;

  case 57:
/* Line 868 of glr.c  */
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 58:
/* Line 868 of glr.c  */
#line 341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
    break;

  case 59:
/* Line 868 of glr.c  */
#line 342 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
    break;

  case 60:
/* Line 868 of glr.c  */
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";}
    break;

  case 61:
/* Line 868 of glr.c  */
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
    break;

  case 62:
/* Line 868 of glr.c  */
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 63:
/* Line 868 of glr.c  */
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
    break;

  case 64:
/* Line 868 of glr.c  */
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
    break;

  case 65:
/* Line 868 of glr.c  */
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";}
    break;

  case 66:
/* Line 868 of glr.c  */
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
    break;

  case 67:
/* Line 868 of glr.c  */
#line 357 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
    break;

  case 68:
/* Line 868 of glr.c  */
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
    break;

  case 69:
/* Line 868 of glr.c  */
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
    break;

  case 70:
/* Line 868 of glr.c  */
#line 361 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
    break;

  case 71:
/* Line 868 of glr.c  */
#line 362 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
    break;

  case 72:
/* Line 868 of glr.c  */
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
    break;

  case 73:
/* Line 868 of glr.c  */
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
    break;

  case 74:
/* Line 868 of glr.c  */
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
    break;

  case 75:
/* Line 868 of glr.c  */
#line 366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
    break;

  case 76:
/* Line 868 of glr.c  */
#line 367 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
    break;

  case 77:
/* Line 868 of glr.c  */
#line 368 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
    break;

  case 78:
/* Line 868 of glr.c  */
#line 369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
    break;

  case 79:
/* Line 868 of glr.c  */
#line 370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
    break;

  case 80:
/* Line 868 of glr.c  */
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
    break;

  case 81:
/* Line 868 of glr.c  */
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
    break;

  case 82:
/* Line 868 of glr.c  */
#line 375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 83:
/* Line 868 of glr.c  */
#line 376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
    break;

  case 84:
/* Line 868 of glr.c  */
#line 378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";}
    break;

  case 85:
/* Line 868 of glr.c  */
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";}
    break;

  case 86:
/* Line 868 of glr.c  */
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";}
    break;

  case 87:
/* Line 868 of glr.c  */
#line 385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";}
    break;

  case 88:
/* Line 868 of glr.c  */
#line 386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";}
    break;

  case 89:
/* Line 868 of glr.c  */
#line 387 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";}
    break;

  case 90:
/* Line 868 of glr.c  */
#line 390 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";}
    break;

  case 91:
/* Line 868 of glr.c  */
#line 393 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";}
    break;

  case 92:
/* Line 868 of glr.c  */
#line 396 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";}
    break;

  case 93:
/* Line 868 of glr.c  */
#line 397 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";}
    break;

  case 94:
/* Line 868 of glr.c  */
#line 401 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";}
    break;

  case 95:
/* Line 868 of glr.c  */
#line 404 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";}
    break;

  case 96:
/* Line 868 of glr.c  */
#line 407 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
    break;

  case 97:
/* Line 868 of glr.c  */
#line 408 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}
    break;

  case 98:
/* Line 868 of glr.c  */
#line 410 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
					}
    break;

  case 99:
/* Line 868 of glr.c  */
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
						t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
				 }
    break;

  case 100:
/* Line 868 of glr.c  */
#line 427 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
    break;

  case 101:
/* Line 868 of glr.c  */
#line 428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
    break;

  case 102:
/* Line 868 of glr.c  */
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n"; temp_id=temp_id+(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal);}
    break;

  case 103:
/* Line 868 of glr.c  */
#line 432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
    break;

  case 104:
/* Line 868 of glr.c  */
#line 435 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal);
						}
    break;

  case 105:
/* Line 868 of glr.c  */
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal);
				 }
    break;

  case 106:
/* Line 868 of glr.c  */
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";}
    break;

  case 107:
/* Line 868 of glr.c  */
#line 446 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";}
    break;

  case 108:
/* Line 868 of glr.c  */
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";}
    break;

  case 109:
/* Line 868 of glr.c  */
#line 450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";}
    break;

  case 110:
/* Line 868 of glr.c  */
#line 453 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
    break;

  case 111:
/* Line 868 of glr.c  */
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
    break;

  case 112:
/* Line 868 of glr.c  */
#line 457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 113:
/* Line 868 of glr.c  */
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";}
    break;

  case 114:
/* Line 868 of glr.c  */
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 115:
/* Line 868 of glr.c  */
#line 466 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						   }
    break;

  case 116:
/* Line 868 of glr.c  */
#line 470 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";}
    break;

  case 117:
/* Line 868 of glr.c  */
#line 471 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 118:
/* Line 868 of glr.c  */
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
								}
    break;

  case 119:
/* Line 868 of glr.c  */
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									((*yyvalp).tn) = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);								
								}
    break;

  case 120:
/* Line 868 of glr.c  */
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.tn);
											elseIfNode->Next = ast->createElseIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.tn),NULL);
											((*yyvalp).tn) = elseIfNode;											
										  }
    break;

  case 121:
/* Line 868 of glr.c  */
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);
							  }
    break;

  case 122:
/* Line 868 of glr.c  */
#line 497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.tn), NULL);
										}
    break;

  case 123:
/* Line 868 of glr.c  */
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL);
												((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),elseNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL);
											  }
    break;

  case 124:
/* Line 868 of glr.c  */
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.tn);
														Node* elseNode = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.tn),NULL,NULL);
														elseIfNode->Next = elseNode;
														((*yyvalp).tn) = ast->createIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.tn),elseIfNode,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.tn),NULL);
													   }
    break;

  case 125:
/* Line 868 of glr.c  */
#line 515 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									((*yyvalp).tn) = ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn),NULL);
								 }
    break;

  case 126:
/* Line 868 of glr.c  */
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.tn),NULL);
													whileNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn),NULL,NULL);
													((*yyvalp).tn) = whileNode;
												 }
    break;

  case 127:
/* Line 868 of glr.c  */
#line 527 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												((*yyvalp).tn) = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.tn), NULL);
											   }
    break;

  case 128:
/* Line 868 of glr.c  */
#line 531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.tn), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.tn), NULL);
																forNode->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (9))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = forNode;															
															   }
    break;

  case 129:
/* Line 868 of glr.c  */
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn), NULL);
											 }
    break;

  case 130:
/* Line 868 of glr.c  */
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL);
															 }
    break;

  case 131:
/* Line 868 of glr.c  */
#line 551 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn);
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.tn), NULL, NULL);
																((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.tn), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.tn), NULL);
																}
    break;

  case 132:
/* Line 868 of glr.c  */
#line 559 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												Node* finally = ast->createFinallyNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.tn), NULL, NULL);
												((*yyvalp).tn) = ast->createTryNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.tn), finally, NULL);
											 }
    break;

  case 133:
/* Line 868 of glr.c  */
#line 566 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";
												Node* except = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn);
												except->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.tn);
												((*yyvalp).tn) = except;
											}
    break;

  case 134:
/* Line 868 of glr.c  */
#line 572 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";
																	Node* except_a = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																	Node* except_b = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.tn);
																	while(except_a->Next!=NULL)
																		except_a = except_a->Next;
																	except_a->Next = except_b;
																	except_b->Son = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.tn);
																	((*yyvalp).tn) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.tn);
																}
    break;

  case 135:
/* Line 868 of glr.c  */
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";}
    break;

  case 136:
/* Line 868 of glr.c  */
#line 585 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
    break;

  case 137:
/* Line 868 of glr.c  */
#line 588 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
    break;

  case 138:
/* Line 868 of glr.c  */
#line 589 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
    break;

  case 139:
/* Line 868 of glr.c  */
#line 592 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";}
    break;

  case 140:
/* Line 868 of glr.c  */
#line 593 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";}
    break;

  case 141:
/* Line 868 of glr.c  */
#line 596 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, NULL, NULL);
					   }
    break;

  case 142:
/* Line 868 of glr.c  */
#line 600 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								((*yyvalp).tn) = ast->createExceptNode(NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn), NULL);
							 }
    break;

  case 143:
/* Line 868 of glr.c  */
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
    break;

  case 144:
/* Line 868 of glr.c  */
#line 607 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);	Streams:: verbose() <<"list_stmt : stmt\n";
				}
    break;

  case 145:
/* Line 868 of glr.c  */
#line 610 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
								Node* node = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);
								if(node->Next!=NULL){
									while(node->Next != NULL)
										node = node->Next;
									ast->addNext(node,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								}else
									ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
								((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
							}
    break;

  case 146:
/* Line 868 of glr.c  */
#line 623 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"suite:	list_stmt END\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);	
						}
    break;

  case 147:
/* Line 868 of glr.c  */
#line 627 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	((*yyvalp).tn)=NULL;	Streams::verbose() <<"suite:	END\n"; ((*yyvalp).tn)=NULL;}
    break;

  case 148:
/* Line 868 of glr.c  */
#line 630 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 149:
/* Line 868 of glr.c  */
#line 631 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
    break;

  case 150:
/* Line 868 of glr.c  */
#line 634 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";}
    break;

  case 151:
/* Line 868 of glr.c  */
#line 635 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
    break;

  case 152:
/* Line 868 of glr.c  */
#line 638 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 153:
/* Line 868 of glr.c  */
#line 639 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";}
    break;

  case 154:
/* Line 868 of glr.c  */
#line 642 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";}
    break;

  case 155:
/* Line 868 of glr.c  */
#line 643 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
    break;

  case 156:
/* Line 868 of glr.c  */
#line 646 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 157:
/* Line 868 of glr.c  */
#line 647 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";}
    break;

  case 158:
/* Line 868 of glr.c  */
#line 650 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";}
    break;

  case 159:
/* Line 868 of glr.c  */
#line 651 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 160:
/* Line 868 of glr.c  */
#line 654 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";}
    break;

  case 161:
/* Line 868 of glr.c  */
#line 655 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";}
    break;

  case 162:
/* Line 868 of glr.c  */
#line 658 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 163:
/* Line 868 of glr.c  */
#line 659 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn);}
    break;

  case 164:
/* Line 868 of glr.c  */
#line 662 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";}
    break;

  case 165:
/* Line 868 of glr.c  */
#line 663 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";}
    break;

  case 166:
/* Line 868 of glr.c  */
#line 664 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";}
    break;

  case 167:
/* Line 868 of glr.c  */
#line 665 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";}
    break;

  case 168:
/* Line 868 of glr.c  */
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";}
    break;

  case 169:
/* Line 868 of glr.c  */
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";}
    break;

  case 170:
/* Line 868 of glr.c  */
#line 668 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";}
    break;

  case 171:
/* Line 868 of glr.c  */
#line 669 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";}
    break;

  case 172:
/* Line 868 of glr.c  */
#line 670 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";}
    break;

  case 173:
/* Line 868 of glr.c  */
#line 671 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";}
    break;

  case 174:
/* Line 868 of glr.c  */
#line 672 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";}
    break;

  case 175:
/* Line 868 of glr.c  */
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";}
    break;

  case 176:
/* Line 868 of glr.c  */
#line 678 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
    break;

  case 177:
/* Line 868 of glr.c  */
#line 679 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
    break;

  case 178:
/* Line 868 of glr.c  */
#line 681 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"expr: xor_expr\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 179:
/* Line 868 of glr.c  */
#line 685 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
    break;

  case 180:
/* Line 868 of glr.c  */
#line 688 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
    break;

  case 181:
/* Line 868 of glr.c  */
#line 689 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
    break;

  case 182:
/* Line 868 of glr.c  */
#line 692 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 183:
/* Line 868 of glr.c  */
#line 693 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
    break;

  case 184:
/* Line 868 of glr.c  */
#line 696 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
    break;

  case 185:
/* Line 868 of glr.c  */
#line 697 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
    break;

  case 186:
/* Line 868 of glr.c  */
#line 700 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 187:
/* Line 868 of glr.c  */
#line 701 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
    break;

  case 188:
/* Line 868 of glr.c  */
#line 704 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
    break;

  case 189:
/* Line 868 of glr.c  */
#line 705 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
    break;

  case 190:
/* Line 868 of glr.c  */
#line 706 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
    break;

  case 191:
/* Line 868 of glr.c  */
#line 707 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
    break;

  case 192:
/* Line 868 of glr.c  */
#line 710 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 193:
/* Line 868 of glr.c  */
#line 714 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 194:
/* Line 868 of glr.c  */
#line 717 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 195:
/* Line 868 of glr.c  */
#line 721 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";
							op=MINUS;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 196:
/* Line 868 of glr.c  */
#line 725 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";op=PLUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
									//ValueNode* v = static_cast<ValueNode*>(k);
									//cout << "value is in term_seq " << v->get_value()<<endl;
									((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),NULL,op);
								}
    break;

  case 197:
/* Line 868 of glr.c  */
#line 731 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";op=MINUS;
									k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.tn));
									((*yyvalp).tn) = ast->createExprNode(k,NULL,op);
								}
    break;

  case 198:
/* Line 868 of glr.c  */
#line 737 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 199:
/* Line 868 of glr.c  */
#line 738 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn));
											//cout<<"op= "<<op<<endl;
											((*yyvalp).tn) = ast->createExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.tn),NULL,op);
											
										}
    break;

  case 200:
/* Line 868 of glr.c  */
#line 748 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";
							op=MULT;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
						}
    break;

  case 201:
/* Line 868 of glr.c  */
#line 752 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";
								op=DIV;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 202:
/* Line 868 of glr.c  */
#line 756 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";
								op=MOD;
							((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn);
							}
    break;

  case 203:
/* Line 868 of glr.c  */
#line 760 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
    break;

  case 204:
/* Line 868 of glr.c  */
#line 761 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									op=MULT;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 205:
/* Line 868 of glr.c  */
#line 765 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									op=DIV;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 206:
/* Line 868 of glr.c  */
#line 769 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
									}
    break;

  case 207:
/* Line 868 of glr.c  */
#line 773 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
    break;

  case 208:
/* Line 868 of glr.c  */
#line 776 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 209:
/* Line 868 of glr.c  */
#line 777 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";
								((*yyvalp).tn) = ast->createExprNode(NULL,NULL,op);
							}
    break;

  case 210:
/* Line 868 of glr.c  */
#line 782 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";}
    break;

  case 211:
/* Line 868 of glr.c  */
#line 783 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";}
    break;

  case 212:
/* Line 868 of glr.c  */
#line 784 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";}
    break;

  case 213:
/* Line 868 of glr.c  */
#line 785 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
					Streams::verbose() <<"factor: power\n";
					((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);
				}
    break;

  case 214:
/* Line 868 of glr.c  */
#line 791 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";}
    break;

  case 215:
/* Line 868 of glr.c  */
#line 792 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";}
    break;

  case 216:
/* Line 868 of glr.c  */
#line 795 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";((*yyvalp).tn)=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.tn);}
    break;

  case 217:
/* Line 868 of glr.c  */
#line 796 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";}
    break;

  case 218:
/* Line 868 of glr.c  */
#line 797 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
    break;

  case 219:
/* Line 868 of glr.c  */
#line 798 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";}
    break;

  case 220:
/* Line 868 of glr.c  */
#line 801 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";}
    break;

  case 221:
/* Line 868 of glr.c  */
#line 802 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
    break;

  case 222:
/* Line 868 of glr.c  */
#line 805 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";}
    break;

  case 223:
/* Line 868 of glr.c  */
#line 806 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";}
    break;

  case 224:
/* Line 868 of glr.c  */
#line 807 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";}
    break;

  case 225:
/* Line 868 of glr.c  */
#line 808 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 226:
/* Line 868 of glr.c  */
#line 809 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";}
    break;

  case 227:
/* Line 868 of glr.c  */
#line 810 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
    break;

  case 228:
/* Line 868 of glr.c  */
#line 811 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    { Streams::verbose() <<"atom: NAME\n";
							((*yyvalp).tn)=ast->createCallVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),NULL,NULL);
					}
    break;

  case 229:
/* Line 868 of glr.c  */
#line 814 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
										v=((*yyvalp).var);
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
									}
    break;

  case 230:
/* Line 868 of glr.c  */
#line 819 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=((*yyvalp).var);
									acc_mod="";
									((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 231:
/* Line 868 of glr.c  */
#line 826 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=((*yyvalp).var);
											((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 232:
/* Line 868 of glr.c  */
#line 832 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
										}
    break;

  case 233:
/* Line 868 of glr.c  */
#line 838 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 234:
/* Line 868 of glr.c  */
#line 844 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 235:
/* Line 868 of glr.c  */
#line 850 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 236:
/* Line 868 of glr.c  */
#line 856 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 237:
/* Line 868 of glr.c  */
#line 862 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 238:
/* Line 868 of glr.c  */
#line 868 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 239:
/* Line 868 of glr.c  */
#line 874 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
												}
    break;

  case 240:
/* Line 868 of glr.c  */
#line 880 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=((*yyvalp).var);
													acc_mod="";
													((*yyvalp).tn) = ast->createIDNode(v,0,0);
											}
    break;

  case 241:
/* Line 868 of glr.c  */
#line 886 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 242:
/* Line 868 of glr.c  */
#line 892 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 243:
/* Line 868 of glr.c  */
#line 898 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=((*yyvalp).var);
															acc_mod="";
															((*yyvalp).tn) = ast->createIDNode(v,0,0);
														}
    break;

  case 244:
/* Line 868 of glr.c  */
#line 904 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														((*yyvalp).var)=p->addVariableToCurrentScope((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=((*yyvalp).var);
														acc_mod="";
														((*yyvalp).tn) = ast->createIDNode(v,0,0);
													}
    break;

  case 245:
/* Line 868 of glr.c  */
#line 910 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";
						int xx=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.intVal);
						cout<<"yhe number is"<<xx<<endl;
						((*yyvalp).tn) = ast->createTypeNode(&xx,0,0,INT);
						}
    break;

  case 246:
/* Line 868 of glr.c  */
#line 915 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							float x=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.floatVal);
							((*yyvalp).tn) = ast->createTypeNode(&x,0,0,FLOAT);
						}
    break;

  case 247:
/* Line 868 of glr.c  */
#line 919 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long xxx=(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.longVal);
							((*yyvalp).tn) = ast->createTypeNode(&xxx,0,0,LONG);
						}
    break;

  case 248:
/* Line 868 of glr.c  */
#line 923 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 249:
/* Line 868 of glr.c  */
#line 924 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";
									((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,STRINGS);
								}
    break;

  case 250:
/* Line 868 of glr.c  */
#line 927 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 251:
/* Line 868 of glr.c  */
#line 928 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 252:
/* Line 868 of glr.c  */
#line 929 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,True);
				}
    break;

  case 253:
/* Line 868 of glr.c  */
#line 932 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";
					((*yyvalp).tn) = ast->createTypeNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal),0,0,False);
				}
    break;

  case 254:
/* Line 868 of glr.c  */
#line 937 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";}
    break;

  case 255:
/* Line 868 of glr.c  */
#line 938 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 256:
/* Line 868 of glr.c  */
#line 939 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";}
    break;

  case 257:
/* Line 868 of glr.c  */
#line 940 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 258:
/* Line 868 of glr.c  */
#line 943 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 259:
/* Line 868 of glr.c  */
#line 944 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";}
    break;

  case 260:
/* Line 868 of glr.c  */
#line 945 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";}
    break;

  case 261:
/* Line 868 of glr.c  */
#line 946 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 262:
/* Line 868 of glr.c  */
#line 947 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 263:
/* Line 868 of glr.c  */
#line 948 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 264:
/* Line 868 of glr.c  */
#line 949 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 265:
/* Line 868 of glr.c  */
#line 950 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
/* Line 868 of glr.c  */
#line 951 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
/* Line 868 of glr.c  */
#line 952 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
/* Line 868 of glr.c  */
#line 955 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";}
    break;

  case 269:
/* Line 868 of glr.c  */
#line 956 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";}
    break;

  case 270:
/* Line 868 of glr.c  */
#line 957 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";}
    break;

  case 271:
/* Line 868 of glr.c  */
#line 958 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";}
    break;

  case 272:
/* Line 868 of glr.c  */
#line 961 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 273:
/* Line 868 of glr.c  */
#line 962 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 274:
/* Line 868 of glr.c  */
#line 965 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 275:
/* Line 868 of glr.c  */
#line 966 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 276:
/* Line 868 of glr.c  */
#line 967 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 277:
/* Line 868 of glr.c  */
#line 968 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 278:
/* Line 868 of glr.c  */
#line 971 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 279:
/* Line 868 of glr.c  */
#line 972 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 280:
/* Line 868 of glr.c  */
#line 973 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 281:
/* Line 868 of glr.c  */
#line 974 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 282:
/* Line 868 of glr.c  */
#line 975 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 283:
/* Line 868 of glr.c  */
#line 976 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 284:
/* Line 868 of glr.c  */
#line 977 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 285:
/* Line 868 of glr.c  */
#line 978 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 286:
/* Line 868 of glr.c  */
#line 979 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 287:
/* Line 868 of glr.c  */
#line 982 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 288:
/* Line 868 of glr.c  */
#line 983 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 289:
/* Line 868 of glr.c  */
#line 986 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
    break;

  case 290:
/* Line 868 of glr.c  */
#line 987 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
    break;

  case 291:
/* Line 868 of glr.c  */
#line 988 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
    break;

  case 292:
/* Line 868 of glr.c  */
#line 989 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
    break;

  case 293:
/* Line 868 of glr.c  */
#line 992 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";}
    break;

  case 294:
/* Line 868 of glr.c  */
#line 993 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
    break;

  case 295:
/* Line 868 of glr.c  */
#line 994 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";}
    break;

  case 296:
/* Line 868 of glr.c  */
#line 995 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
    break;

  case 297:
/* Line 868 of glr.c  */
#line 996 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";}
    break;

  case 298:
/* Line 868 of glr.c  */
#line 997 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
    break;

  case 299:
/* Line 868 of glr.c  */
#line 998 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
    break;

  case 300:
/* Line 868 of glr.c  */
#line 999 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
    break;

  case 301:
/* Line 868 of glr.c  */
#line 1002 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";}
    break;

  case 302:
/* Line 868 of glr.c  */
#line 1003 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";}
    break;

  case 303:
/* Line 868 of glr.c  */
#line 1006 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";}
    break;

  case 304:
/* Line 868 of glr.c  */
#line 1007 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";}
    break;

  case 305:
/* Line 868 of glr.c  */
#line 1008 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";}
    break;

  case 306:
/* Line 868 of glr.c  */
#line 1009 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
    break;

  case 307:
/* Line 868 of glr.c  */
#line 1012 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
    break;

  case 308:
/* Line 868 of glr.c  */
#line 1013 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
    break;

  case 309:
/* Line 868 of glr.c  */
#line 1015 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";}
    break;

  case 310:
/* Line 868 of glr.c  */
#line 1016 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
    break;

  case 311:
/* Line 868 of glr.c  */
#line 1019 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
    break;

  case 312:
/* Line 868 of glr.c  */
#line 1020 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
    break;

  case 313:
/* Line 868 of glr.c  */
#line 1021 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
    break;

  case 314:
/* Line 868 of glr.c  */
#line 1022 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
    break;

  case 315:
/* Line 868 of glr.c  */
#line 1023 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
    break;

  case 316:
/* Line 868 of glr.c  */
#line 1024 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
    break;

  case 317:
/* Line 868 of glr.c  */
#line 1025 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";}
    break;

  case 318:
/* Line 868 of glr.c  */
#line 1026 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 319:
/* Line 868 of glr.c  */
#line 1027 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";}
    break;

  case 320:
/* Line 868 of glr.c  */
#line 1028 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
    break;

  case 321:
/* Line 868 of glr.c  */
#line 1030 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() <<"classdef: classheader suite\n";
								((*yyvalp).type)=p->finishTypeDeclaration(t);
								((*yyvalp).tn)=ast->createClassNode((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.type),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.tn),NULL);
							}
    break;

  case 322:
/* Line 868 of glr.c  */
#line 1036 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);

								inhertance_list.clear();
					}
    break;

  case 323:
/* Line 868 of glr.c  */
#line 1044 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 324:
/* Line 868 of glr.c  */
#line 1051 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 325:
/* Line 868 of glr.c  */
#line 1058 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 326:
/* Line 868 of glr.c  */
#line 1065 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 327:
/* Line 868 of glr.c  */
#line 1072 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 328:
/* Line 868 of glr.c  */
#line 1079 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 329:
/* Line 868 of glr.c  */
#line 1086 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 330:
/* Line 868 of glr.c  */
#line 1093 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 331:
/* Line 868 of glr.c  */
#line 1100 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 332:
/* Line 868 of glr.c  */
#line 1107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 333:
/* Line 868 of glr.c  */
#line 1114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 334:
/* Line 868 of glr.c  */
#line 1121 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 335:
/* Line 868 of glr.c  */
#line 1128 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 336:
/* Line 868 of glr.c  */
#line 1135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 337:
/* Line 868 of glr.c  */
#line 1142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
							((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
					}
    break;

  case 338:
/* Line 868 of glr.c  */
#line 1149 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=((*yyvalp).type);
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}
    break;

  case 339:
/* Line 868 of glr.c  */
#line 1157 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 340:
/* Line 868 of glr.c  */
#line 1164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 341:
/* Line 868 of glr.c  */
#line 1171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 342:
/* Line 868 of glr.c  */
#line 1178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 343:
/* Line 868 of glr.c  */
#line 1185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 344:
/* Line 868 of glr.c  */
#line 1192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 345:
/* Line 868 of glr.c  */
#line 1199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 346:
/* Line 868 of glr.c  */
#line 1206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 347:
/* Line 868 of glr.c  */
#line 1213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 348:
/* Line 868 of glr.c  */
#line 1220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
								((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 349:
/* Line 868 of glr.c  */
#line 1227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 350:
/* Line 868 of glr.c  */
#line 1234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 351:
/* Line 868 of glr.c  */
#line 1241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 352:
/* Line 868 of glr.c  */
#line 1248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 353:
/* Line 868 of glr.c  */
#line 1255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.colNum)+1)); 
									((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=((*yyvalp).type);
								inhertance_list.clear();
								acc_mod="";
								}
    break;

  case 354:
/* Line 868 of glr.c  */
#line 1262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.r.colNum)+1));
												((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
												acc_mod="";
											}
    break;

  case 355:
/* Line 868 of glr.c  */
#line 1269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 356:
/* Line 868 of glr.c  */
#line 1276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 357:
/* Line 868 of glr.c  */
#line 1283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 358:
/* Line 868 of glr.c  */
#line 1290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 359:
/* Line 868 of glr.c  */
#line 1297 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													inhertance_list.clear();
													acc_mod="";
											}
    break;

  case 360:
/* Line 868 of glr.c  */
#line 1304 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 361:
/* Line 868 of glr.c  */
#line 1311 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 362:
/* Line 868 of glr.c  */
#line 1318 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 363:
/* Line 868 of glr.c  */
#line 1325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 364:
/* Line 868 of glr.c  */
#line 1332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 365:
/* Line 868 of glr.c  */
#line 1333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
    break;

  case 366:
/* Line 868 of glr.c  */
#line 1334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 367:
/* Line 868 of glr.c  */
#line 1341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 368:
/* Line 868 of glr.c  */
#line 1348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 369:
/* Line 868 of glr.c  */
#line 1355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.r.lineNum),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.colNum)+1));
													((*yyvalp).type)=p->createType((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=((*yyvalp).type);
													acc_mod="";
													inhertance_list.clear();
											}
    break;

  case 370:
/* Line 868 of glr.c  */
#line 1365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";}
    break;

  case 371:
/* Line 868 of glr.c  */
#line 1366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";}
    break;

  case 372:
/* Line 868 of glr.c  */
#line 1369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";}
    break;

  case 373:
/* Line 868 of glr.c  */
#line 1370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";}
    break;

  case 374:
/* Line 868 of glr.c  */
#line 1373 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";}
    break;

  case 375:
/* Line 868 of glr.c  */
#line 1374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";}
    break;

  case 376:
/* Line 868 of glr.c  */
#line 1376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";}
    break;

  case 377:
/* Line 868 of glr.c  */
#line 1378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {    
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
    break;

  case 378:
/* Line 868 of glr.c  */
#line 1386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									}
    break;

  case 379:
/* Line 868 of glr.c  */
#line 1399 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
		 					   		    std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
    break;

  case 380:
/* Line 868 of glr.c  */
#line 1408 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
    break;

  case 381:
/* Line 868 of glr.c  */
#line 1417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
		 										std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
    break;

  case 382:
/* Line 868 of glr.c  */
#line 1425 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
													std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  }
    break;

  case 383:
/* Line 868 of glr.c  */
#line 1437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
						std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
    break;

  case 384:
/* Line 868 of glr.c  */
#line 1444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";}
    break;

  case 385:
/* Line 868 of glr.c  */
#line 1445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
    break;

  case 386:
/* Line 868 of glr.c  */
#line 1446 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
    break;

  case 387:
/* Line 868 of glr.c  */
#line 1447 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
    break;

  case 388:
/* Line 868 of glr.c  */
#line 1449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {		
									std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
    break;

  case 389:
/* Line 868 of glr.c  */
#line 1457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
											std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 }
    break;

  case 390:
/* Line 868 of glr.c  */
#line 1470 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
												std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
    break;

  case 391:
/* Line 868 of glr.c  */
#line 1478 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
														std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
    break;

  case 392:
/* Line 868 of glr.c  */
#line 1486 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																		std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
    break;

  case 393:
/* Line 868 of glr.c  */
#line 1494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {
																std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.r.strVal));
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   }
    break;

  case 394:
/* Line 868 of glr.c  */
#line 1507 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {	std::string tempstr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
    break;

  case 395:
/* Line 868 of glr.c  */
#line 1517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
    break;

  case 396:
/* Line 868 of glr.c  */
#line 1518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
    break;

  case 397:
/* Line 868 of glr.c  */
#line 1521 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
    break;

  case 398:
/* Line 868 of glr.c  */
#line 1522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
    break;

  case 399:
/* Line 868 of glr.c  */
#line 1525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"default_arg: test '=' test\n";}
    break;

  case 400:
/* Line 868 of glr.c  */
#line 1527 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.r.strVal)); Streams::verbose() <<"argument: 	test\n";}
    break;

  case 401:
/* Line 868 of glr.c  */
#line 1528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {parameters.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.r.strVal));Streams::verbose() <<"argument: 	test comp_for\n";}
    break;

  case 402:
/* Line 868 of glr.c  */
#line 1532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";}
    break;

  case 403:
/* Line 868 of glr.c  */
#line 1533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";}
    break;

  case 404:
/* Line 868 of glr.c  */
#line 1536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
    break;

  case 405:
/* Line 868 of glr.c  */
#line 1537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
    break;

  case 406:
/* Line 868 of glr.c  */
#line 1540 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";}
    break;

  case 407:
/* Line 868 of glr.c  */
#line 1541 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
    break;


/* Line 868 of glr.c  */
#line 5230 "yacc.cpp"
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
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);

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
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           YY_NULL);
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

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-514)))

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-388)))

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
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
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

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
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
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs, yystackp,
                           yyvalp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
                 YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
                                              );
      YYFPRINTF (stderr, "\n");
    }
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
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL)
    {
      YYSTYPE yysval;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
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
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
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
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (YYID (yytrue))
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULL)
                break;
              else if (*yyz0p == YY_NULL)
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
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
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

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
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

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL; )
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
              return yyreportAmbiguity (yybest, yyp);
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
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != YY_NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
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
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
        }
      else
        {
          yySymbol yytoken;
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = YYLEX;
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              YYCHK (yyglrReduce (yystackp, yynewStack,
                                  *yyconflicts, yyfalse));
              YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                        yyposn));
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
                                yyfalse));
        }
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULL, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = YYLEX;
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail (yystackp, YY_NULL);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
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

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = YYLEX;
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (YYID (yytrue))
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif
/* Line 2575 of glr.c  */
#line 1544 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
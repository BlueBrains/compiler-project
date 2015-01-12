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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

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
     END_OF_FILE = 258,
     IMPORT = 259,
     CLASS = 260,
     ID = 261,
     COLON = 262,
     CLOSE_S = 263,
     COMMA = 264,
     DOT = 265,
     END = 266,
     OPEN_C = 267,
     CLOSE_C = 268,
     DEF = 269,
     ASSIGN = 270,
     STAR = 271,
     ELSE = 272,
     IF = 273,
     ELIF = 274,
     WHILE = 275,
     FOR = 276,
     IN = 277,
     TRY = 278,
     FINALLY = 279,
     EXPECT = 280,
     WITH = 281,
     AS = 282,
     ASSERT = 283,
     EQUAL = 284,
     DEL = 285,
     RETURN = 286,
     PRINT = 287,
     GLOBAL = 288,
     AND_W = 289,
     OR_W = 290,
     RAISE = 291,
     PRIVATE = 292,
     PUBLIC = 293,
     PROTECTED = 294,
     OPEN_D = 295,
     CLOSE_D = 296,
     RE_COT = 297,
     YIELD = 298,
     PRIMARY = 299,
     OR = 300,
     AND = 301,
     NOT = 302,
     PLUS = 303,
     MINUS = 304,
     DIV = 305,
     MOD = 306,
     NOT_EQUAL = 307,
     FINAL = 308,
     STATIC = 309,
     SELF = 310,
     LESS_THAN = 311,
     LESS_OR_EQUAL = 312,
     MORE_THAN = 313,
     MORE_OR_EQUAL = 314,
     TRUE = 315,
     FALSE = 316,
     EXCEPT = 317,
     SEMICOLON = 318,
     NEW_LINE = 319,
     PASS = 320,
     CHAR_VALUE = 321,
     OPEN_S = 322,
     STRING_VALUE = 323,
     INTEGER_VALUE = 324,
     BREAK = 325,
     CONTINUE = 326,
     LONG_VALUE = 327,
     FLOAT_VALUE = 328,
     stmt_1_2 = 329,
     stmt_11 = 330,
     stmt_10 = 331,
     stmt_9 = 332,
     stmt_7 = 333,
     stmt_6 = 334,
     stmt_5 = 335,
     stmt_4 = 336,
     stmt_3 = 337,
     stmt_2 = 338,
     stmt_1 = 339,
     stmt_8 = 340,
     MULTI = 341
   };
#endif
/* Tokens.  */
#define END_OF_FILE 258
#define IMPORT 259
#define CLASS 260
#define ID 261
#define COLON 262
#define CLOSE_S 263
#define COMMA 264
#define DOT 265
#define END 266
#define OPEN_C 267
#define CLOSE_C 268
#define DEF 269
#define ASSIGN 270
#define STAR 271
#define ELSE 272
#define IF 273
#define ELIF 274
#define WHILE 275
#define FOR 276
#define IN 277
#define TRY 278
#define FINALLY 279
#define EXPECT 280
#define WITH 281
#define AS 282
#define ASSERT 283
#define EQUAL 284
#define DEL 285
#define RETURN 286
#define PRINT 287
#define GLOBAL 288
#define AND_W 289
#define OR_W 290
#define RAISE 291
#define PRIVATE 292
#define PUBLIC 293
#define PROTECTED 294
#define OPEN_D 295
#define CLOSE_D 296
#define RE_COT 297
#define YIELD 298
#define PRIMARY 299
#define OR 300
#define AND 301
#define NOT 302
#define PLUS 303
#define MINUS 304
#define DIV 305
#define MOD 306
#define NOT_EQUAL 307
#define FINAL 308
#define STATIC 309
#define SELF 310
#define LESS_THAN 311
#define LESS_OR_EQUAL 312
#define MORE_THAN 313
#define MORE_OR_EQUAL 314
#define TRUE 315
#define FALSE 316
#define EXCEPT 317
#define SEMICOLON 318
#define NEW_LINE 319
#define PASS 320
#define CHAR_VALUE 321
#define OPEN_S 322
#define STRING_VALUE 323
#define INTEGER_VALUE 324
#define BREAK 325
#define CONTINUE 326
#define LONG_VALUE 327
#define FLOAT_VALUE 328
#define stmt_1_2 329
#define stmt_11 330
#define stmt_10 331
#define stmt_9 332
#define stmt_7 333
#define stmt_6 334
#define stmt_5 335
#define stmt_4 336
#define stmt_3 337
#define stmt_2 338
#define stmt_1 339
#define stmt_8 340
#define MULTI 341




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

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
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pp=true;
	int linefunc=0;
	int colmfunc=0;

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 63 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
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
/* Line 196 of yacc.c.  */
#line 331 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 343 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2762

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  396
/* YYNRULES -- Number of states. */
#define YYNSTATES  801

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     6,     9,    11,    15,    19,    22,    24,
      27,    30,    34,    38,    42,    47,    52,    58,    64,    69,
      74,    80,    86,    93,   100,   105,   110,   116,   122,   128,
     134,   140,   146,   152,   157,   163,   169,   175,   182,   189,
     197,   205,   212,   219,   227,   235,   244,   253,   260,   267,
     275,   283,   291,   299,   307,   315,   323,   331,   337,   344,
     351,   358,   366,   374,   383,   392,   400,   408,   417,   426,
     436,   446,   454,   462,   471,   480,   489,   498,   507,   516,
     525,   534,   537,   541,   544,   548,   550,   554,   556,   560,
     562,   565,   569,   572,   576,   579,   583,   587,   590,   592,
     595,   597,   599,   602,   605,   608,   611,   615,   619,   624,
     629,   631,   635,   639,   644,   649,   654,   660,   666,   673,
     680,   684,   688,   692,   697,   702,   708,   714,   719,   724,
     730,   736,   742,   748,   755,   762,   770,   778,   784,   790,
     797,   804,   812,   820,   827,   834,   842,   850,   855,   859,
     862,   866,   870,   874,   879,   884,   889,   894,   900,   906,
     912,   918,   925,   932,   939,   946,   953,   960,   965,   970,
     974,   979,   984,   989,   994,   999,  1004,  1006,  1008,  1012,
    1016,  1020,  1024,  1028,  1030,  1033,  1037,  1041,  1046,  1050,
    1052,  1057,  1062,  1066,  1071,  1077,  1084,  1090,  1093,  1097,
    1100,  1103,  1105,  1107,  1109,  1111,  1113,  1115,  1117,  1120,
    1123,  1128,  1131,  1135,  1139,  1144,  1153,  1164,  1167,  1172,
    1177,  1181,  1187,  1191,  1194,  1197,  1200,  1204,  1207,  1210,
    1214,  1217,  1222,  1227,  1234,  1241,  1246,  1251,  1257,  1263,
    1269,  1275,  1280,  1285,  1290,  1295,  1299,  1303,  1307,  1313,
    1319,  1325,  1333,  1335,  1339,  1345,  1349,  1355,  1359,  1365,
    1369,  1371,  1377,  1383,  1386,  1389,  1393,  1396,  1401,  1403,
    1405,  1407,  1409,  1411,  1413,  1415,  1417,  1419,  1421,  1423,
    1425,  1427,  1430,  1435,  1437,  1439,  1441,  1443,  1447,  1451,
    1458,  1464,  1470,  1476,  1479,  1484,  1487,  1493,  1501,  1507,
    1513,  1521,  1527,  1529,  1532,  1534,  1537,  1540,  1545,  1549,
    1554,  1557,  1560,  1564,  1566,  1568,  1571,  1576,  1581,  1587,
    1589,  1591,  1593,  1597,  1603,  1607,  1611,  1617,  1621,  1623,
    1625,  1629,  1633,  1635,  1637,  1639,  1641,  1643,  1645,  1647,
    1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,  1668,
    1672,  1676,  1679,  1681,  1685,  1689,  1692,  1695,  1698,  1702,
    1706,  1710,  1713,  1717,  1721,  1723,  1726,  1731,  1736,  1741,
    1743,  1745,  1749,  1753,  1758,  1762,  1764,  1768,  1772,  1776,
    1780,  1784,  1788,  1792,  1794,  1798,  1800,  1803,  1808,  1815,
    1820,  1822,  1824,  1826,  1828,  1830,  1832
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      88,     0,    -1,    89,     3,    -1,    89,    91,    -1,    91,
      -1,     4,    95,    63,    -1,     4,    95,     1,    -1,    90,
      92,    -1,    92,    -1,    93,    97,    -1,     5,     6,    -1,
     137,     5,     6,    -1,    54,     5,     6,    -1,    53,     5,
       6,    -1,    54,    53,     5,     6,    -1,    53,    54,     5,
       6,    -1,    54,     1,    54,     5,     6,    -1,    53,     1,
      53,     5,     6,    -1,    54,   137,     5,     6,    -1,    53,
     137,     5,     6,    -1,    54,    53,   137,     5,     6,    -1,
      53,    54,   137,     5,     6,    -1,    54,     1,    54,   137,
       5,     6,    -1,    53,     1,    53,   137,     5,     6,    -1,
     137,    54,     5,     6,    -1,   137,    53,     5,     6,    -1,
     137,    54,    53,     5,     6,    -1,   137,    53,    54,     5,
       6,    -1,   137,    54,    54,     5,     6,    -1,   137,    53,
      53,     5,     6,    -1,    54,   137,    53,     5,     6,    -1,
      53,   137,    53,     5,     6,    -1,    54,   137,    54,     5,
       6,    -1,     5,     6,    67,     8,    -1,   137,     5,     6,
      67,     8,    -1,    54,     5,     6,    67,     8,    -1,    53,
       5,     6,    67,     8,    -1,    54,    53,     5,     6,    67,
       8,    -1,    53,    54,     5,     6,    67,     8,    -1,    54,
       1,    54,     5,     6,    67,     8,    -1,    53,     1,    53,
       5,     6,    67,     8,    -1,    54,   137,     5,     6,    67,
       8,    -1,    53,   137,     5,     6,    67,     8,    -1,    54,
      53,   137,     5,     6,    67,     8,    -1,    53,    54,   137,
       5,     6,    67,     8,    -1,    54,     1,    54,   137,     5,
       6,    67,     8,    -1,    53,     1,    53,   137,     5,     6,
      67,     8,    -1,   137,    54,     5,     6,    67,     8,    -1,
     137,    53,     5,     6,    67,     8,    -1,   137,    54,    53,
       5,     6,    67,     8,    -1,   137,    53,    54,     5,     6,
      67,     8,    -1,   137,    54,    54,     5,     6,    67,     8,
      -1,   137,    53,    53,     5,     6,    67,     8,    -1,    54,
     137,    53,     5,     6,    67,     8,    -1,    53,   137,    54,
       5,     6,    67,     8,    -1,    54,   137,    54,     5,     6,
      67,     8,    -1,    53,   137,    53,     5,     6,    67,     8,
      -1,     5,     6,    67,    95,     8,    -1,   137,     5,     6,
      67,    95,     8,    -1,    54,     5,     6,    67,    95,     8,
      -1,    53,     5,     6,    67,    95,     8,    -1,    54,    53,
       5,     6,    67,    95,     8,    -1,    53,    54,     5,     6,
      67,    95,     8,    -1,    54,     1,    54,     5,     6,    67,
      95,     8,    -1,    53,     1,    53,     5,     6,    67,    95,
       8,    -1,    54,   137,     5,     6,    67,    95,     8,    -1,
      53,   137,     5,     6,    67,    95,     8,    -1,    54,    53,
     137,     5,     6,    67,    95,     8,    -1,    53,    54,   137,
       5,     6,    67,    95,     8,    -1,    54,     1,    54,   137,
       5,     6,    67,    95,     8,    -1,    53,     1,    53,   137,
       5,     6,    67,    95,     8,    -1,   137,    54,     5,     6,
      67,    95,     8,    -1,   137,    53,     5,     6,    67,    95,
       8,    -1,   137,    54,    53,     5,     6,    67,    95,     8,
      -1,   137,    53,    54,     5,     6,    67,    95,     8,    -1,
     137,    54,    54,     5,     6,    67,    95,     8,    -1,   137,
      53,    53,     5,     6,    67,    95,     8,    -1,    53,   137,
      54,     5,     6,    67,    95,     8,    -1,    54,   137,    53,
       5,     6,    67,    95,     8,    -1,    54,   137,    54,     5,
       6,    67,    95,     8,    -1,    53,   137,    53,     5,     6,
      67,    95,     8,    -1,     5,     1,    -1,     6,     1,     6,
      -1,     6,     1,    -1,    94,     9,   154,    -1,   154,    -1,
      95,     9,    96,    -1,    96,    -1,    96,    10,     6,    -1,
       6,    -1,     7,    11,    -1,     7,    98,    11,    -1,     1,
      11,    -1,     1,    98,    11,    -1,     7,     1,    -1,     7,
      98,     1,    -1,    98,    14,    99,    -1,    14,    99,    -1,
      99,    -1,   100,    63,    -1,   101,    -1,    92,    -1,   100,
       1,    -1,   137,     6,    -1,    54,     6,    -1,    53,     6,
      -1,    54,    53,     6,    -1,    53,    54,     6,    -1,    54,
       1,    54,     6,    -1,    53,     1,    53,     6,    -1,     6,
      -1,    53,   137,     6,    -1,    54,   137,     6,    -1,   137,
       6,    15,   154,    -1,    54,     6,    15,   154,    -1,    53,
       6,    15,   154,    -1,    54,    53,     6,    15,   154,    -1,
      53,    54,     6,    15,   154,    -1,    54,     1,    54,     6,
      15,   154,    -1,    53,     1,    53,     6,    15,   154,    -1,
       6,    15,   154,    -1,   137,    54,     6,    -1,   137,    53,
       6,    -1,   137,    54,    53,     6,    -1,   137,    53,    54,
       6,    -1,   137,    54,     1,    54,     6,    -1,   137,    53,
       1,    53,     6,    -1,    54,    53,   137,     6,    -1,    53,
      54,   137,     6,    -1,    54,     1,    54,   137,     6,    -1,
      53,     1,    53,   137,     6,    -1,   137,    54,     6,    15,
     154,    -1,   137,    53,     6,    15,   154,    -1,   137,    54,
      53,     6,    15,   154,    -1,   137,    53,    54,     6,    15,
     154,    -1,   137,    54,     1,    54,     6,    15,   154,    -1,
     137,    53,     1,    53,     6,    15,   154,    -1,    54,   137,
       6,    15,   154,    -1,    53,   137,     6,    15,   154,    -1,
      54,    53,   137,     6,    15,   154,    -1,    53,    54,   137,
       6,    15,   154,    -1,    54,     1,    54,   137,     6,    15,
     154,    -1,    53,     1,    53,   137,     6,    15,   154,    -1,
      54,   137,    53,     6,    15,   154,    -1,    53,   137,    54,
       6,    15,   154,    -1,    54,   137,    54,     1,     6,    15,
     154,    -1,    53,   137,    53,     1,     6,    15,   154,    -1,
     137,     6,     6,     1,    -1,     6,     6,     1,    -1,   102,
     108,    -1,   137,   102,   108,    -1,    54,   102,   108,    -1,
      53,   102,   108,    -1,   137,    54,   102,   108,    -1,   137,
      53,   102,   108,    -1,    54,   137,   102,   108,    -1,    53,
     137,   102,   108,    -1,    54,   137,    53,   102,   108,    -1,
      53,   137,    54,   102,   108,    -1,    54,    53,   137,   102,
     108,    -1,    53,    54,   137,   102,   108,    -1,    53,   137,
      53,     1,   102,   108,    -1,    54,   137,    54,     1,   102,
     108,    -1,    54,    54,     1,   137,   102,   108,    -1,    53,
      53,     1,   137,   102,   108,    -1,   137,    53,     1,    53,
     102,   108,    -1,   137,    54,     1,    54,   102,   108,    -1,
       6,    67,   103,     8,    -1,     6,    67,     6,     8,    -1,
       6,    67,     8,    -1,     1,    67,   103,     8,    -1,     1,
      67,     6,     8,    -1,     6,     1,   103,     8,    -1,     6,
       1,     6,     8,    -1,     6,    67,   103,     1,    -1,     6,
      67,     6,     1,    -1,   104,    -1,   106,    -1,   104,     9,
     106,    -1,   104,     9,   105,    -1,     6,     9,   105,    -1,
     104,     9,     6,    -1,     6,     9,     6,    -1,   105,    -1,
      16,     6,    -1,    16,    16,     6,    -1,     6,    16,     1,
      -1,     6,    16,    16,     1,    -1,   106,     9,   107,    -1,
     107,    -1,   106,     9,   104,     1,    -1,   106,     9,     6,
       1,    -1,     6,    15,   154,    -1,    16,     6,    15,   154,
      -1,    16,    16,     6,    15,   154,    -1,     6,    16,     1,
      16,    15,   154,    -1,     6,    16,     1,    15,   154,    -1,
       7,    11,    -1,     7,   109,    11,    -1,     1,    11,    -1,
     109,   110,    -1,   110,    -1,   111,    -1,   115,    -1,   117,
      -1,   122,    -1,   125,    -1,   108,    -1,   126,    63,    -1,
     126,     1,    -1,    55,    10,     6,    63,    -1,     6,    63,
      -1,    54,     6,    63,    -1,    53,     6,    63,    -1,     6,
      10,     6,    63,    -1,     6,     9,     6,    10,     6,    10,
       6,    63,    -1,     6,    10,     6,     9,     6,    10,     6,
      10,     6,    63,    -1,   113,   110,    -1,   113,   110,    17,
     110,    -1,   113,   110,     1,   110,    -1,   113,   110,   112,
      -1,   113,   110,   112,    17,   110,    -1,   114,   110,   112,
      -1,   114,   110,    -1,    18,   154,    -1,    19,   154,    -1,
       1,     6,   154,    -1,   116,   110,    -1,    20,   154,    -1,
       6,     1,   154,    -1,   118,   110,    -1,    21,   121,    22,
      94,    -1,    21,   121,    22,   148,    -1,    21,     6,     9,
       6,    22,    94,    -1,    21,     6,     9,     6,    22,   148,
      -1,    21,     6,    22,    94,    -1,    21,     6,    22,   148,
      -1,     6,     1,     6,    22,    94,    -1,     6,     1,     6,
      22,   148,    -1,     6,     1,   121,    22,    94,    -1,     6,
       1,   121,    22,   148,    -1,    21,     6,     1,    94,    -1,
      21,     6,     1,   148,    -1,    21,   121,     1,    94,    -1,
      21,   121,     1,   148,    -1,   119,     9,   120,    -1,     6,
       9,   119,    -1,     6,     9,     6,    -1,     6,     9,     6,
      10,     6,    -1,     6,    10,     6,     9,   119,    -1,     6,
      10,     6,     9,     6,    -1,     6,    10,     6,     9,     6,
      10,     6,    -1,   120,    -1,   120,    10,     6,    -1,     6,
      10,     6,    10,     6,    -1,   121,     9,   138,    -1,     6,
       9,     6,     9,   138,    -1,   121,     9,     6,    -1,     6,
       9,     6,     9,     6,    -1,     6,     9,   138,    -1,   138,
      -1,    23,   110,     7,   124,    11,    -1,    23,   110,     7,
     123,    11,    -1,    24,   108,    -1,    62,   110,    -1,    62,
     154,   110,    -1,    26,   154,    -1,    26,   154,    27,   138,
      -1,    94,    -1,   127,    -1,   129,    -1,    65,    -1,   130,
      -1,   133,    -1,   131,    -1,   132,    -1,   136,    -1,    70,
      -1,    71,    -1,   119,    -1,   134,    -1,    28,   154,    -1,
      28,   154,     9,   154,    -1,    94,    -1,   147,    -1,   148,
      -1,   144,    -1,   121,    15,   128,    -1,   156,    15,   128,
      -1,   156,    40,    94,    41,    15,   128,    -1,   156,    40,
      41,    15,   128,    -1,     6,     9,     6,    15,   128,    -1,
      55,    10,     6,    15,   128,    -1,    30,   121,    -1,    30,
       6,     9,     6,    -1,    30,     6,    -1,    30,     6,    40,
     154,    41,    -1,    30,     6,    40,   154,     7,   154,    41,
      -1,    30,     6,    40,     7,    41,    -1,    30,   121,    40,
     154,    41,    -1,    30,   121,    40,   154,     7,   154,    41,
      -1,    30,   121,    40,     7,    41,    -1,    31,    -1,    31,
      94,    -1,   151,    -1,    32,    94,    -1,    32,   121,    -1,
      32,    58,    58,    94,    -1,     6,     1,    94,    -1,     6,
      58,    58,    94,    -1,    33,   135,    -1,    33,     1,    -1,
       6,     9,   135,    -1,     6,    -1,    36,    -1,    36,   154,
      -1,    36,   154,     9,   154,    -1,    36,   154,     9,     1,
      -1,     6,     1,   154,     9,   154,    -1,    37,    -1,    38,
      -1,    39,    -1,    67,   121,     8,    -1,    67,     6,     9,
       6,     8,    -1,    67,     6,     8,    -1,    40,   121,    41,
      -1,    40,     6,     9,     6,    41,    -1,    40,     6,    41,
      -1,   139,    -1,   152,    -1,   140,    10,     6,    -1,     6,
      10,     6,    -1,   141,    -1,   139,    -1,   152,    -1,   153,
      -1,   143,    -1,   142,    -1,    68,    -1,    69,    -1,    72,
      -1,    73,    -1,    66,    -1,   147,    -1,   148,    -1,   149,
      -1,   150,    -1,   144,    -1,    12,    13,    -1,    12,   145,
      13,    -1,   145,     9,   146,    -1,   145,     9,    -1,   146,
      -1,   154,     7,   154,    -1,    67,    94,     8,    -1,    67,
       8,    -1,     1,     8,    -1,    67,     1,    -1,     1,   154,
       8,    -1,    67,    94,     1,    -1,    40,    94,    41,    -1,
      40,    41,    -1,    42,    94,    42,    -1,    67,   151,     8,
      -1,    43,    -1,    43,    94,    -1,    44,    40,    94,    41,
      -1,    44,    40,   104,    41,    -1,    44,    40,     6,    41,
      -1,   155,    -1,   142,    -1,   154,   158,   154,    -1,    55,
      10,     6,    -1,    55,    10,     6,   147,    -1,    55,    10,
      55,    -1,   157,    -1,   154,     1,   154,    -1,   154,    29,
     154,    -1,   154,    52,   154,    -1,   154,    56,   154,    -1,
     154,    57,   154,    -1,   154,    58,   154,    -1,   154,    59,
     154,    -1,     6,    -1,   156,    10,     6,    -1,   156,    -1,
     156,   147,    -1,   156,    40,   154,    41,    -1,   156,    40,
     154,     7,   154,    41,    -1,   156,    40,     7,    41,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    45,    -1,
      47,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   104,   104,   112,   115,   123,   124,   129,   130,   133,
     136,   141,   147,   153,   159,   165,   171,   178,   185,   191,
     197,   203,   209,   216,   223,   229,   235,   241,   247,   255,
     263,   269,   277,   285,   291,   297,   303,   309,   315,   321,
     324,   327,   333,   339,   345,   351,   358,   365,   371,   377,
     383,   389,   397,   405,   411,   417,   425,   433,   439,   445,
     451,   457,   463,   469,   472,   475,   481,   487,   493,   499,
     506,   513,   519,   525,   531,   537,   545,   554,   560,   566,
     574,   582,   587,   592,   599,   600,   603,   610,   619,   623,
     631,   635,   638,   644,   651,   657,   665,   666,   667,   673,
     674,   675,   676,   682,   688,   693,   698,   703,   708,   712,
     716,   720,   726,   732,   737,   738,   739,   740,   741,   745,
     749,   753,   759,   766,   772,   778,   782,   787,   793,   800,
     804,   808,   815,   821,   827,   833,   837,   841,   847,   853,
     859,   865,   869,   873,   879,   885,   889,   893,   897,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   919,   923,   927,   931,   935,   942,   943,   944,
     945,   949,   953,   957,   961,   965,   971,   972,   973,   975,
     976,   977,   978,   979,   982,   988,   992,   996,  1003,  1004,
    1005,  1009,  1015,  1016,  1022,  1026,  1030,  1036,  1037,  1038,
    1049,  1050,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1064,  1071,  1077,  1081,  1087,  1088,  1089,  1092,  1093,  1094,
    1098,  1099,  1102,  1103,  1110,  1113,  1114,  1120,  1125,  1130,
    1136,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1149,  1153,
    1157,  1161,  1165,  1169,  1173,  1180,  1181,  1182,  1183,  1184,
    1185,  1186,  1187,  1191,  1192,  1196,  1197,  1198,  1199,  1200,
    1201,  1204,  1205,  1208,  1211,  1212,  1215,  1216,  1219,  1220,
    1221,  1223,  1224,  1225,  1226,  1227,  1228,  1229,  1230,  1231,
    1232,  1235,  1236,  1238,  1239,  1240,  1241,  1244,  1245,  1250,
    1251,  1252,  1253,  1265,  1266,  1267,  1268,  1269,  1270,  1271,
    1272,  1273,  1276,  1277,  1280,  1283,  1284,  1285,  1286,  1290,
    1295,  1296,  1302,  1303,  1306,  1307,  1308,  1309,  1313,  1319,
    1320,  1321,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,
    1336,  1337,  1340,  1341,  1342,  1343,  1346,  1347,  1350,  1351,
    1352,  1353,  1354,  1357,  1358,  1359,  1360,  1361,  1364,  1365,
    1367,  1368,  1369,  1371,  1374,  1375,  1376,  1380,  1384,  1388,
    1395,  1396,  1399,  1402,  1405,  1406,  1409,  1413,  1414,  1418,
    1419,  1420,  1421,  1427,  1431,  1435,  1440,  1446,  1447,  1448,
    1449,  1450,  1451,  1453,  1456,  1465,  1470,  1471,  1472,  1473,
    1476,  1477,  1478,  1479,  1480,  1481,  1482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_FILE", "IMPORT", "CLASS", "ID",
  "COLON", "CLOSE_S", "COMMA", "DOT", "END", "OPEN_C", "CLOSE_C", "DEF",
  "ASSIGN", "STAR", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY",
  "FINALLY", "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN",
  "PRINT", "GLOBAL", "AND_W", "OR_W", "RAISE", "PRIVATE", "PUBLIC",
  "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT", "YIELD", "PRIMARY", "OR",
  "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL",
  "STATIC", "SELF", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT", "SEMICOLON", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_11",
  "stmt_10", "stmt_9", "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3",
  "stmt_2", "stmt_1", "stmt_8", "MULTI", "$accept", "programes", "program",
  "import_stmt", "unit", "class_decl", "class_h", "expr_list", "unit_list",
  "unit_import", "class_body", "dm_list", "dm", "var_declaration",
  "method_declaration", "method_h", "arguments", "args_list", "arg",
  "default_args_list", "default_arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "import_list", "import",
  "target_list", "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "left_assignment_side",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "target",
  "attributeref", "primary", "atom", "literal", "enclosure",
  "dict_display", "key_datum_list", "key_datum", "parenth_form",
  "list_display", "string_conversion", "yield_atom", "yield_expression",
  "subscription", "call", "expr", "condition", "id_dot", "long_id", "op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   112,   112,   113,   114,   114,   115,   116,   116,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   131,   132,   133,   133,   133,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   142,
     142,   142,   142,   143,   143,   143,   143,   143,   144,   144,
     145,   145,   145,   146,   147,   147,   147,   147,   147,   147,
     148,   148,   149,   150,   151,   151,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   158,   158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     2,     1,     2,
       2,     3,     3,     3,     4,     4,     5,     5,     4,     4,
       5,     5,     6,     6,     4,     4,     5,     5,     5,     5,
       5,     5,     5,     4,     5,     5,     5,     6,     6,     7,
       7,     6,     6,     7,     7,     8,     8,     6,     6,     7,
       7,     7,     7,     7,     7,     7,     7,     5,     6,     6,
       6,     7,     7,     8,     8,     7,     7,     8,     8,     9,
       9,     7,     7,     8,     8,     8,     8,     8,     8,     8,
       8,     2,     3,     2,     3,     1,     3,     1,     3,     1,
       2,     3,     2,     3,     2,     3,     3,     2,     1,     2,
       1,     1,     2,     2,     2,     2,     3,     3,     4,     4,
       1,     3,     3,     4,     4,     4,     5,     5,     6,     6,
       3,     3,     3,     4,     4,     5,     5,     4,     4,     5,
       5,     5,     5,     6,     6,     7,     7,     5,     5,     6,
       6,     7,     7,     6,     6,     7,     7,     4,     3,     2,
       3,     3,     3,     4,     4,     4,     4,     5,     5,     5,
       5,     6,     6,     6,     6,     6,     6,     4,     4,     3,
       4,     4,     4,     4,     4,     4,     1,     1,     3,     3,
       3,     3,     3,     1,     2,     3,     3,     4,     3,     1,
       4,     4,     3,     4,     5,     6,     5,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     2,     3,     3,     4,     8,    10,     2,     4,     4,
       3,     5,     3,     2,     2,     2,     3,     2,     2,     3,
       2,     4,     4,     6,     6,     4,     4,     5,     5,     5,
       5,     4,     4,     4,     4,     3,     3,     3,     5,     5,
       5,     7,     1,     3,     5,     3,     5,     3,     5,     3,
       1,     5,     5,     2,     2,     3,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     5,     2,     4,     2,     5,     7,     5,     5,
       7,     5,     1,     2,     1,     2,     2,     4,     3,     4,
       2,     2,     3,     1,     1,     2,     4,     4,     5,     1,
       1,     1,     3,     5,     3,     3,     5,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     2,     1,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     3,     1,     2,     4,     4,     4,     1,
       1,     3,     3,     4,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     2,     4,     6,     4,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   319,   320,   321,     0,     0,     0,
       0,     0,     4,     8,     0,     0,    89,     0,    87,    81,
      10,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     7,     0,     0,     9,     0,     0,     0,
       6,     0,     5,     0,     0,    82,     0,    13,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,   110,    92,     0,     0,     0,   101,     0,    98,     0,
     100,     0,     0,    94,    90,     0,    11,     0,     0,     0,
       0,     0,     0,    86,    88,    33,     0,     0,     0,     0,
      15,     0,    19,     0,     0,     0,     0,     0,    14,     0,
      18,     0,     0,     0,    83,     0,     0,     0,    97,     0,
     105,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,    93,     0,   102,    99,     0,     0,   149,   103,     0,
       0,     0,    95,    91,     0,    25,     0,     0,    24,     0,
       0,    57,    17,     0,    36,     0,     0,    21,     0,    31,
       0,    16,     0,    35,     0,     0,    20,     0,    30,    32,
       0,     0,     0,   176,   183,   177,   189,    82,     0,   148,
     383,     0,   342,   338,   339,   340,   341,   370,   120,   369,
       0,   375,     0,   169,     0,     0,     0,     0,     0,   107,
       0,   152,   111,     0,     0,     0,     0,     0,   106,     0,
       0,   151,   112,     0,     0,     0,    96,   199,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,   314,     0,     0,   364,     0,     0,     0,     0,
     271,     0,   277,   278,   268,   207,     0,   201,   202,     0,
     203,     0,   204,     0,   279,   252,     0,   205,   206,     0,
     269,   270,   272,   274,   275,   273,   280,   276,   260,   328,
       0,   332,   370,   336,   347,   343,   344,   345,   346,   304,
     329,   335,     0,     0,     0,     0,     0,   122,     0,     0,
       0,   121,     0,     0,   150,    34,     0,     0,    29,    27,
       0,    26,    28,     0,    23,    60,    38,     0,     0,    42,
       0,     0,     0,     0,    22,    59,    37,     0,     0,    41,
       0,     0,     0,   171,     0,     0,     0,   184,     0,   170,
       0,     0,   173,   172,     0,     0,     0,   394,   396,   395,
     390,   391,   392,   393,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   386,   175,   168,   174,   167,   109,
       0,     0,   115,     0,     0,   128,     0,     0,     0,     0,
       0,   156,   108,     0,   114,     0,   127,     0,     0,     0,
       0,     0,     0,   155,   356,     0,     0,     0,     0,     0,
     211,   348,     0,   352,     0,   224,   228,     0,     0,   337,
       0,   266,   281,   295,   293,   303,   383,     0,   305,   306,
     311,   313,   310,   315,   383,   361,     0,     0,     0,   365,
       0,     0,     0,     0,   357,   383,   355,     0,     0,     0,
       0,   198,   200,     0,   227,   230,     0,     0,     0,     0,
     209,   208,     0,     0,     0,   147,   113,     0,     0,   124,
     154,     0,     0,   123,   153,    58,    48,     0,     0,     0,
      47,     0,     0,     0,    40,     0,     0,    62,    44,     0,
      66,    56,     0,    54,     0,    39,     0,     0,    61,    43,
       0,    65,    53,     0,    55,     0,   182,     0,   180,   192,
     186,     0,     0,   185,   181,   179,   178,     0,     0,   188,
       0,   374,     0,   377,   378,   379,   380,   381,   382,     0,
     384,     0,     0,   357,     0,   130,     0,     0,   117,     0,
     160,   138,     0,     0,     0,   158,     0,   129,   116,     0,
     159,     0,   137,     0,   157,     0,     0,   358,   383,   308,
       0,   229,   247,   246,   259,   331,     0,   351,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,   360,   325,
     362,   383,     0,     0,   213,   212,     0,   324,     0,   359,
     354,   322,   363,    84,     0,     0,     0,   220,     0,     0,
     245,   253,   257,   255,     0,   283,   287,   286,   284,   285,
     330,   288,     0,     0,     0,   126,     0,   132,     0,   125,
       0,   131,     0,    72,    52,     0,    50,     0,    71,    49,
       0,    51,     0,    64,    46,     0,    68,    80,    77,    63,
      45,     0,    67,    78,    79,     0,   184,     0,     0,     0,
     187,   193,     0,   191,   190,     0,   373,   389,     0,   387,
     119,     0,   164,   140,     0,   161,   144,   118,     0,   139,
     163,   143,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,   214,   309,   350,     0,   241,   242,     0,   331,
     235,   236,   243,   244,   231,   232,     0,     0,     0,     0,
       0,   267,   282,   294,     0,     0,     0,     0,     0,   307,
     312,   317,   316,     0,   368,   366,   367,     0,   210,     0,
       0,   219,   218,     0,     0,     0,     0,     0,     0,     0,
     165,   134,     0,   166,   133,    76,    74,    73,    75,    70,
      69,   186,   185,   196,     0,   194,   181,     0,   142,   146,
     141,   145,   237,   238,   239,   240,   318,   247,   256,   248,
     291,   250,   249,   254,     0,     0,   263,   264,     0,   262,
     261,   298,     0,   296,   301,     0,   299,   326,   292,   323,
     226,   221,     0,   222,     0,   290,     0,   136,   135,   195,
     388,     0,     0,     0,     0,     0,   258,   233,   234,     0,
     265,     0,     0,     0,   289,   247,   248,   250,   254,   251,
       0,   297,   300,     0,     0,   215,     0,   248,   251,   254,
     216
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    66,    14,   234,    17,    18,
      36,    67,    68,    69,    70,    71,   168,   163,   164,   165,
     166,   235,   236,   237,   238,   577,   239,   578,   240,   241,
     242,   243,   244,   245,   246,   247,   678,   679,   248,   249,
     250,   586,   251,   252,   253,   254,   255,   256,   402,   257,
      72,   258,   259,   260,   261,   177,   263,   264,   382,   383,
     265,   266,   267,   268,   269,   270,   271,   272,   179,   180,
     181,   339
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -417
static const short int yypact[] =
{
    1946,    33,   241,   163,  -417,  -417,  -417,   328,   346,   188,
    2606,  1618,  -417,  -417,   447,    98,  -417,    52,   198,  -417,
     229,   269,   246,   333,   490,   185,   303,   362,   518,   200,
    -417,  -417,  -417,  -417,  1764,  1837,  -417,   371,   239,   289,
    -417,    33,  -417,   382,   135,  -417,   562,   385,   455,   470,
     495,   516,   557,   592,   441,   527,   560,   579,   587,   590,
     538,    13,  -417,  1910,  2256,  2315,  -417,   212,  -417,     6,
    -417,   449,   112,   538,  -417,   429,   546,   621,   638,   679,
     634,   684,   718,   198,  -417,  -417,   643,   709,   722,   426,
     673,   751,   693,   758,   767,   775,   847,   687,   723,   804,
     802,   853,   868,   208,   347,   881,  1662,   570,  -417,   258,
      32,   904,   400,   449,   318,   -24,    47,   531,   913,   449,
     339,  -417,  1910,  -417,  -417,   930,  1756,  -417,    34,   406,
     423,   449,  -417,  -417,   710,   877,   962,   972,   920,  1008,
    1011,  -417,   974,  1030,  -417,   658,   713,   984,   728,   993,
    1020,  1023,  1101,  -417,   744,   738,  1046,   761,  1051,  1054,
     857,   374,  1132,  1117,  -417,  1127,  -417,   862,  1153,  -417,
    -417,  1181,  -417,  -417,  -417,  -417,  -417,  -417,  2703,  -417,
     776,  -417,   482,  -417,   353,   694,   409,  1662,   799,  1148,
     162,  -417,    71,    59,   413,   449,   704,  1662,  1184,   619,
     799,  -417,    72,   765,   396,   449,  -417,  -417,   543,  1099,
    -417,   566,  1662,  1662,   234,  1902,  1662,  1662,  2025,  1662,
     149,   265,  1662,   445,  1662,  1662,  1149,  1205,  1228,  1226,
    -417,  2015,  -417,  -417,  1185,  -417,  1829,  -417,  -417,  1902,
    -417,  1902,  -417,  1902,  1244,  1246,   532,  -417,  -417,    26,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  1254,
    1257,  -417,  1262,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    1276,  -417,  1172,  1245,  1283,  1662,   263,    77,   850,   449,
      30,   108,   890,   449,  -417,  -417,   910,   792,  1240,  1242,
     854,  1259,  1270,   896,  1273,  -417,  -417,   947,   909,  -417,
     983,   934,   961,   969,  1278,  -417,  -417,  1056,   982,  -417,
    1107,  1007,  1034,  -417,   463,  1662,    25,  1340,  1350,  -417,
     503,   509,  -417,  -417,   116,  1662,  1662,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  1662,  1662,  1662,  1662,  1662,  1662,
     690,  1351,   785,   249,  -417,  -417,  -417,  -417,  -417,  1344,
    1118,   862,  2703,   380,  1662,   118,   449,  1662,   415,   133,
     449,  -417,  1363,  1128,  2703,  1662,   145,   449,   380,  1662,
     158,   449,   435,  -417,  -417,  2485,   682,  2060,  1373,  1324,
    -417,  -417,   665,  -417,  2538,  2703,  2703,   530,   337,  -417,
    1386,  2523,  2590,    45,    28,  1185,  1371,  1336,  1185,  1387,
    -417,  1392,  -417,  2605,    15,  -417,    36,   170,    41,  1185,
     795,  1332,  1339,   148,   690,  1129,  -417,   647,  1151,  1396,
    1662,  -417,  -417,  1610,  -417,  -417,  1399,  1400,  2073,   635,
    -417,  -417,  1401,   635,   706,  -417,  2703,   467,  1662,  1393,
    -417,   601,  1662,  1395,  -417,  -417,  -417,  1166,  1042,  1055,
    -417,  1168,  1080,  1095,  -417,  1174,  1096,  -417,  -417,  1177,
    -417,  -417,  1179,  -417,  1188,  -417,  1198,  1104,  -417,  -417,
    1201,  -417,  -417,  1224,  -417,  1239,  1397,   528,  -417,  2703,
    1234,  1414,  1662,  1403,  1243,  -417,  1127,   544,   326,  -417,
     880,  -417,   953,   980,   980,   980,   980,   980,   980,  1026,
    -417,  1375,  2365,  -417,  1662,  1410,    21,   449,  2703,  1662,
    -417,  2703,   191,   449,  1662,  -417,  1662,  1411,  2703,  1662,
    -417,   449,  2703,  1662,  -417,   195,   449,  -417,    86,  1185,
     340,  2288,   696,  1419,  -417,    35,  1662,  1662,  -417,  1662,
    1619,  2108,  1423,  1619,  1619,  1619,     1,  2118,  1662,  2153,
    1473,  1546,  2166,  1662,  1424,   354,  2201,  -417,  -417,  -417,
    -417,    49,   228,   232,  -417,  -417,  1318,  -417,  2211,  -417,
    -417,  -417,  -417,  2703,  1975,  1902,  1662,  1415,  1902,  1441,
    1246,  -417,  1442,  -417,   129,  1185,  -417,  -417,  -417,  -417,
    -417,  -417,  1438,   236,  2341,   264,   449,  2703,  1662,   297,
     449,  2703,  1662,  -417,  -417,  1253,  -417,  1261,  -417,  -417,
    1271,  -417,  1274,  -417,  -417,  1297,  -417,  -417,  -417,  -417,
    -417,  1312,  -417,  -417,  -417,   161,  -417,  1449,  1662,  1451,
    -417,  2703,  1662,  -417,  -417,   558,  -417,  -417,  1662,  -417,
    2703,  1662,  -417,  2703,  1662,  -417,  2703,  2703,  1662,  2703,
    -417,  2703,  1662,  -417,  1619,  1619,  1662,  2246,  1461,   635,
    1462,  1463,  -417,  1185,  -417,  2417,  1185,  -417,   456,  -417,
    1185,  -417,  1185,  -417,  1185,  -417,   449,  1902,  1466,  1467,
    1442,  -417,  2703,  1313,  1431,  2402,  1433,  2470,  1313,  1185,
    -417,  -417,  2703,   172,  -417,  -417,  -417,   635,  -417,   805,
     613,  -417,  -417,  1537,  1902,  1683,  1469,   635,  1468,  1662,
    -417,  2703,  1662,  -417,  2703,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  2703,  1662,  2703,  1397,  2629,  2703,  2703,
    2703,  2703,  1185,  -417,  1185,  -417,  2703,   875,  -417,   948,
    -417,  1319,  1419,  -417,  2259,  1619,  -417,  -417,  1464,  -417,
    -417,  -417,  1662,  -417,  -417,  1662,  -417,  -417,  -417,  -417,
    2703,  -417,  1475,  -417,  1476,  -417,   635,  2703,  2703,  2703,
    -417,  1482,  1483,  1485,  1492,  1493,  1442,  1185,  -417,   543,
    -417,  2664,  2688,  1662,  -417,  1322,   948,  1325,  1439,  1333,
    1391,  -417,  -417,  1495,  1497,  -417,  1499,  1343,  1343,  1439,
    -417
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -417,  -417,  -417,  -417,  1514,   493,  -417,  -149,   427,  1484,
    -417,  1491,   -43,  -417,  -417,   -63,   584,  -317,  -309,  1220,
    1227,   -19,  -417,  -205,  -417,   842,  -417,  -417,  -417,  -417,
    -417,  -417,  -371,  1124,  -202,  -417,  -417,  -417,  -417,  -417,
    -417,  -410,  -417,  -417,  -417,  -417,  -417,  -417,   997,  -417,
     580,  -369,  -417,  -417,  -417,   -94,  -417,  -416,  -417,  1017,
    -177,  -387,  -417,  -417,  1328,  -417,  -417,  -106,  -417,  -111,
    -417,  -417
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -386
static const short int yytable[] =
{
     178,   113,   119,   344,   488,   478,   533,   123,   534,   131,
     390,   485,   388,   587,  -386,   273,   394,   587,   399,   105,
     108,   407,   186,   591,   556,   676,   480,   430,   106,   418,
     196,   422,   262,  -386,   423,  -386,   424,   428,   425,    16,
     274,   481,   589,   103,  -386,   420,   589,   187,  -386,   275,
     420,   195,   127,    40,   549,   542,   557,   205,   314,   583,
     358,    41,   197,   677,    93,   625,   279,   283,   551,   124,
     395,   398,  -386,  -386,   406,   408,   409,   558,  -386,   206,
     107,   352,   417,   560,   441,   550,   357,   369,   107,   431,
     694,   364,   438,   563,   191,   552,   344,   103,   662,   107,
     201,   107,   375,    37,   273,   384,   385,   386,   654,  -386,
     391,   392,   284,    60,   107,    42,   403,    37,   128,  -386,
     389,   262,   490,   442,   389,   273,   262,   356,   273,   262,
     273,   360,   273,   509,   186,   170,   367,   262,   107,   107,
     371,    16,   262,    85,   107,   262,  -386,   262,   514,   262,
     340,    38,    39,   667,   566,   396,   671,   673,   675,   186,
     519,   211,   721,    60,    21,   129,   130,    91,   355,   436,
     405,   491,   534,   523,   530,   107,   361,   481,   681,   428,
     534,   744,   542,   534,   171,   107,   373,   534,    30,   223,
      50,   224,   186,   226,   417,   172,   186,   173,   174,   534,
     107,   175,   176,   491,   171,    57,   644,   397,    43,   479,
     652,   559,   107,   757,   160,   172,   231,   173,   174,   492,
     493,   175,   176,   121,   161,   107,   122,   529,   494,   495,
     496,   497,   498,   499,   375,   340,   502,   420,    51,    52,
     387,   635,    19,   587,    77,   420,   211,    20,   508,   740,
     503,   511,   588,    58,    59,   170,   588,   416,   107,   518,
     440,   562,   107,   522,   444,  -386,   400,   733,   735,   695,
     531,   401,   589,   696,   223,    45,   224,   708,   226,   709,
     585,   587,   262,   389,   585,   593,   533,   758,   738,   742,
     507,   587,    78,    79,    80,   513,    44,   765,  -386,    46,
     172,   231,   173,   174,   171,   521,   175,   176,   375,   526,
     589,   185,   712,   636,   573,   172,   437,   173,   174,    60,
     589,   175,   176,    50,   192,   103,   485,   634,   594,    22,
     103,   107,   597,    23,   389,   635,   601,   510,   544,    47,
      60,   515,    81,    82,    57,   202,   428,    26,   520,   428,
     587,    27,   524,   167,   347,   691,   784,    53,   778,   545,
     170,   348,   655,   161,   107,     4,     5,     6,    54,   701,
     702,   193,   194,   705,   596,   738,   631,    76,   600,   589,
     317,    60,    24,     4,     5,     6,   506,   663,    84,   636,
     318,   666,   203,   204,   670,   672,   674,   372,   640,    28,
     533,   102,   742,   643,   689,    48,   189,   276,   646,   171,
     647,    77,   277,   649,    60,   351,    60,   651,    94,   359,
     172,   512,   173,   174,   280,   161,   175,   176,    80,   281,
     132,   384,    16,   665,   144,   406,    60,     4,     5,     6,
     133,   525,   682,   122,   685,   687,   340,   389,    34,   692,
     125,   404,    89,   389,    35,   389,   126,   211,   389,    78,
     278,    90,   389,   273,   273,   744,   542,   273,    60,   476,
     703,    86,   747,   595,   389,    91,   282,    82,   745,   477,
     262,   262,   588,   345,   262,   223,   405,   224,   642,   226,
     346,   314,   711,    13,   645,    48,   714,   315,   316,   761,
     171,    92,   650,    13,    33,   732,   734,   653,    97,   484,
     585,   172,   231,   173,   174,   487,   145,   175,   176,   161,
     588,    93,   723,    55,   154,   161,   725,     4,     5,     6,
     588,   540,   727,    98,   626,   728,    55,   198,   729,   541,
     542,   428,   730,   780,   627,   633,   731,   429,   585,   170,
     736,   374,   543,   314,   207,     4,     5,     6,   585,   315,
     316,   286,    94,   389,   726,    99,   273,    87,     4,     5,
       6,   748,   170,   297,   477,   300,   182,   710,   183,   381,
      15,   713,   307,   262,   310,   100,   161,    25,    29,   588,
      15,    15,   101,   273,   760,   102,   777,    95,   171,     4,
       5,     6,    60,   767,    49,   103,   768,   599,    56,   172,
     262,   173,   174,   134,   376,   175,   176,   585,   769,   170,
      60,   171,   377,  -383,    99,   366,    88,   135,  -383,     4,
       5,     6,   172,    96,   173,   174,   340,   273,   175,   176,
     138,   170,  -383,   136,   114,   120,   781,   211,   569,   782,
     389,   141,    41,  -383,   262,   570,   420,   746,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,   295,    41,   171,  -383,
    -383,   379,  -383,   790,   537,   584,   380,   760,   538,   172,
    -383,   173,   174,   340,   137,   175,   176,   162,   528,   139,
     171,   184,   190,    16,   211,   153,   170,   199,   374,    87,
     349,   172,   343,   173,   174,  -386,   658,   175,   176,    95,
     362,   659,   170,   501,   447,   142,    16,   451,   285,    16,
     455,   296,   223,   140,   224,   459,   226,   143,   462,   464,
     466,     4,     5,     6,    16,   470,   299,   171,   473,   475,
     146,     4,     5,     6,    16,   171,   306,   592,   172,   231,
     173,   174,   305,    41,   175,   176,   172,   147,   173,   174,
     148,   171,   175,   176,   149,   350,    60,    16,   353,   309,
     101,   370,   172,   150,   173,   174,   363,   340,   175,   176,
     368,   151,  -385,  -385,  -385,  -385,   341,  -385,  -385,  -385,
     155,   170,   501,  -385,  -385,  -385,  -385,  -385,    16,  -385,
     446,   561,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
     156,   477,  -385,   759,   744,   542,   342,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,     4,     5,     6,  -385,
     171,  -385,  -385,   343,  -385,  -385,  -385,  -385,  -385,  -385,
     171,   172,   152,   173,   174,   137,   439,   175,   176,   158,
      16,   172,   450,   173,   174,   313,   314,   175,   176,   157,
     322,   314,   315,   316,   159,   605,   607,   315,   316,   610,
     612,   340,   169,   615,  -386,   772,  -372,  -372,  -372,  -372,
    -258,  -372,  -372,  -372,   621,   139,   443,  -372,  -372,  -372,
    -372,  -372,    16,  -372,   454,   188,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,   200,    16,  -372,   458,   445,    41,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
      16,   207,   461,  -372,   287,  -372,  -372,   343,  -372,  -372,
    -372,  -372,  -372,  -372,   325,   457,    41,  -386,  -331,  -376,
    -376,  -376,  -376,  -331,  -376,  -376,  -376,    16,   288,   463,
    -376,  -376,  -376,  -376,  -376,    16,  -376,   465,   289,  -376,
    -376,  -376,   326,  -376,  -376,  -376,  -376,   290,    16,  -376,
     469,   460,    41,  -376,  -376,  -376,  -376,  -376,   327,   328,
     329,   330,   331,   332,   333,   334,  -376,  -376,  -376,   335,
     336,   337,   338,    16,   291,   472,  -376,   292,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,   325,   330,   331,
     332,   333,  -371,  -371,  -371,  -371,   294,  -371,  -371,  -371,
      16,   293,   474,  -371,  -371,  -371,  -371,  -371,    16,  -371,
     604,   298,  -371,  -371,  -371,   326,  -371,  -371,  -371,  -371,
     301,    16,  -371,   606,   468,    41,  -371,  -371,  -371,  -371,
    -371,   327,   328,   329,   330,   331,   332,   333,   334,  -371,
    -371,  -371,   335,   336,   337,   338,    16,   302,   609,  -371,
     303,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
     376,    16,    16,   611,   614,  -383,  -383,   304,   377,  -383,
      16,  -383,   620,   308,  -383,   471,    41,  -383,   311,  -383,
    -383,   312,  -383,   143,   505,  -383,   320,  -383,  -383,  -383,
    -383,  -383,  -383,   152,   517,  -383,   321,   567,   568,  -383,
     319,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,   379,  -383,   571,
     428,   323,   380,   354,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,   325,   603,    41,   608,    41,   -85,   -85,
     -85,   -85,   613,    41,   -85,   616,    41,   617,    41,   410,
     -85,   324,   -85,   -85,   420,   -85,   618,    41,   -85,   365,
     -85,   326,   -85,   -85,   -85,   -85,   619,    41,   -85,   622,
      41,   411,   -85,   -85,   -85,   -85,   -85,   327,   328,   329,
     330,   331,   332,   333,   334,   -85,   -85,   -85,   335,   336,
     337,   338,   623,    41,   412,   -85,   413,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   340,   624,    41,   628,
     629,  -385,  -385,   426,  -385,   341,   427,  -385,   315,   316,
     433,   715,    41,  -385,  -333,  -385,  -385,   432,  -385,   716,
      41,  -385,  -337,  -385,  -385,  -385,  -385,  -385,  -385,   717,
      41,  -385,   718,    41,   435,   434,  -334,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,   719,    41,   448,  -385,   449,
    -385,  -385,   343,  -385,  -385,  -385,  -385,  -385,  -385,   340,
     720,    41,   744,   542,  -372,  -372,   452,  -372,  -386,   775,
    -372,  -386,   793,   697,  -386,   794,  -372,   453,  -372,  -372,
     456,  -372,  -386,   796,  -372,   467,  -372,  -372,  -372,  -372,
    -372,  -372,  -386,   661,  -372,   482,   483,   500,  -372,   504,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,   516,   535,
     552,   698,   536,  -372,  -372,   343,  -372,  -372,  -372,  -372,
    -372,  -372,   325,   546,   553,   564,   428,  -376,  -376,   527,
    -376,   554,   565,  -376,   572,   579,   581,   590,   598,  -376,
     602,  -376,  -376,   625,  -376,   630,   637,  -376,   632,  -376,
     326,  -376,  -376,  -376,  -376,   641,   648,  -376,  -386,   669,
     401,  -376,   704,  -376,  -376,  -376,   327,   328,   329,   330,
     331,   332,   333,   334,  -376,  -376,  -376,   335,   336,   337,
     338,   706,   542,   707,  -376,   722,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,   779,   724,   739,   741,   743,
     209,   126,   751,   -85,   754,   764,   211,   749,   750,   170,
     684,   783,   212,   766,   213,   214,   661,   215,   785,   786,
     216,   787,   217,   326,   218,   219,   220,   221,   788,   789,
     222,   797,  -386,   798,   223,   799,   224,   225,   226,   327,
     328,   329,   330,   331,   332,   333,   334,   227,   228,   229,
     335,   336,   337,   338,    32,    83,    75,   -85,   171,   230,
     172,   231,   173,   174,   232,   233,   175,   176,   325,   172,
     486,   173,   174,  -225,  -225,   175,   176,   763,   489,  -225,
     580,   690,   170,   686,   664,  -225,     0,  -225,  -225,   419,
    -225,     0,     0,  -225,     0,  -225,   326,  -225,  -225,  -225,
    -225,     0,     0,  -225,     0,     0,     0,  -225,     0,  -225,
    -225,  -225,   327,   328,   329,   330,   331,   332,   333,   334,
    -225,  -225,  -225,   335,   336,   337,   338,     0,     0,     0,
       0,   171,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,   574,   172,     0,   173,   174,  -217,  -217,   175,   176,
       0,  -217,  -217,     2,     3,   170,     0,   575,  -217,   576,
    -217,  -217,     0,  -217,     0,     0,  -217,     0,  -217,     0,
    -217,  -217,  -217,  -217,     0,     0,  -217,     0,     0,     0,
    -217,     0,  -217,  -217,  -217,     4,     5,     6,     0,   584,
       0,     0,     0,  -217,  -217,  -217,     0,     0,   170,     0,
       0,     7,     8,     0,   171,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,   762,   172,     0,   173,   174,  -223,
    -223,   175,   176,     0,  -223,  -223,     0,     0,     0,     0,
    -223,  -223,   576,  -223,  -223,     0,  -223,     0,     0,  -223,
       0,  -223,     0,  -223,  -223,  -223,  -223,   171,     0,  -223,
       0,     0,     0,  -223,     0,  -223,  -223,  -223,   172,     0,
     173,   174,     0,     0,   175,   176,  -223,  -223,  -223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,   208,     0,     0,
       0,     0,   209,   126,     0,    60,     0,   210,   211,     2,
      61,     0,     0,     0,   212,    62,   213,   214,    63,   215,
       0,     0,   216,     0,   217,     0,   218,   219,   220,   221,
       0,     0,   222,     0,     0,     0,   223,     0,   224,   225,
     226,     4,     5,     6,     0,     0,     0,     0,     0,   227,
     228,   229,     0,     0,     0,     0,     0,    64,    65,     0,
       0,   230,   172,   231,   173,   174,   232,   233,   175,   176,
     208,     0,     0,     0,     0,   209,   126,     0,    73,     0,
     421,   211,     2,    61,     0,     0,     0,   212,    74,   213,
     214,    63,   215,     0,     0,   216,     0,   217,     0,   218,
     219,   220,   221,     0,     0,   222,     0,     0,     0,   223,
       0,   224,   225,   226,     4,     5,     6,     0,     0,     0,
       0,     0,   227,   228,   229,     0,     0,     0,     0,     0,
      64,    65,     0,     0,   230,   172,   231,   173,   174,   232,
     233,   175,   176,   208,     0,     0,     0,     0,   209,   126,
       0,    60,     0,     0,   211,     2,    61,     0,     0,     0,
     212,     0,   213,   214,     0,   215,     0,     0,   216,     0,
     217,     0,   218,   219,   220,   221,     0,     0,   222,     0,
       0,     0,   223,     0,   224,   225,   226,     4,     5,     6,
       1,     2,     3,     0,     0,   227,   228,   229,     0,     0,
       0,     0,     0,    64,    65,     0,     0,   230,   172,   231,
     173,   174,   232,   233,   175,   176,   208,     0,     0,     0,
       0,   700,   126,     4,     5,     6,     0,   211,     0,     0,
       0,     0,     0,   212,     0,   213,   214,     0,   215,     7,
       8,   216,     0,   217,     0,   218,   219,   220,   221,     0,
       0,   222,     0,     0,     0,   223,   414,   224,   225,   226,
       0,   415,     0,   416,     0,     0,   340,   211,   227,   228,
     229,   393,     0,     0,     0,     0,     0,   211,     0,     0,
     230,   172,   231,   173,   174,   232,   233,   175,   176,     0,
       0,     0,     0,     0,     0,   223,     0,   224,   225,   226,
       0,   340,     0,     0,     0,   223,   532,   224,     0,   226,
     171,     0,   211,     0,   340,     0,     0,     0,     0,   582,
       0,   172,   231,   173,   174,   211,     0,   175,   176,     0,
       0,   172,   231,   173,   174,     0,     0,   175,   176,     0,
     223,     0,   224,     0,   226,     0,     0,     0,     0,   340,
       0,     0,     0,   223,   668,   224,     0,   226,     0,   340,
     211,     0,     0,     0,   680,     0,   172,   231,   173,   174,
     211,     0,   175,   176,     0,     0,     0,     0,     0,   172,
     231,   173,   174,     0,     0,   175,   176,     0,   223,     0,
     224,     0,   226,     0,   340,     0,     0,     0,   223,   683,
     224,     0,   226,     0,     0,   211,     0,   340,     0,     0,
       0,     0,   688,     0,   172,   231,   173,   174,   211,     0,
     175,   176,     0,     0,   172,   231,   173,   174,     0,     0,
     175,   176,     0,   223,     0,   224,     0,   226,     0,     0,
       0,     0,   340,     0,     0,     0,   223,   693,   224,     0,
     226,     0,   340,   211,     0,     0,     0,   699,     0,   172,
     231,   173,   174,   211,     0,   175,   176,     0,     0,     0,
       0,     0,   172,   231,   173,   174,     0,     0,   175,   176,
       0,   223,     0,   224,     0,   226,     0,   340,     0,     0,
       0,   223,   737,   224,     0,   226,     0,   109,   211,     0,
     340,    23,   110,     0,     0,   776,     0,   172,   231,   173,
     174,   211,     0,   175,   176,     0,     0,   172,   231,   173,
     174,     0,     0,   175,   176,     0,   223,     0,   224,  -386,
     226,     0,     0,     4,     5,     6,     0,   656,     0,   223,
       0,   224,     0,   226,     0,     0,     0,     0,     0,   111,
     112,     0,   172,   231,   173,   174,   115,   326,   175,   176,
      27,   116,     0,     0,     0,   172,   231,   173,   174,     0,
       0,   175,   176,   327,   328,   329,   330,   331,   332,   333,
     334,     0,   325,     0,   335,   336,   337,   338,   638,     0,
     -85,   -85,     4,     5,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,   117,   118,
     326,     0,   638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   639,     0,     0,     0,   327,   328,   329,   330,
     331,   332,   333,   334,   326,     0,     0,   335,   336,   337,
     338,     0,     0,   325,     0,     0,   639,     0,     0,   752,
     327,   328,   329,   330,   331,   332,   333,   334,   325,     0,
       0,   335,   336,   337,   338,     0,  -353,     0,     0,     0,
    -353,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   753,     0,     0,   326,   327,   328,   329,
     330,   331,   332,   333,   334,     0,     0,     0,   335,   336,
     337,   338,   327,   328,   329,   330,   331,   332,   333,   334,
       0,   325,     0,   335,   336,   337,   338,   755,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,     0,     0,
       0,     0,     0,   527,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   756,     0,     0,   326,   327,   328,   329,   330,   331,
     332,   333,   334,     0,  -386,     0,   335,   336,   337,   338,
     327,   328,   329,   330,   331,   332,   333,   334,     0,   325,
       0,   335,   336,   337,   338,   539,     0,     0,     0,     0,
     547,     0,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   326,   327,   328,
     329,   330,   331,   332,   333,   334,     0,     0,     0,   335,
     336,   337,   338,   327,   328,   329,   330,   331,   332,   333,
     334,  -386,     0,     0,   335,   336,   337,   338,     0,   548,
       0,     0,     0,     0,     0,     0,  -386,     0,     0,    31,
       1,     2,     3,     0,   555,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     325,     0,     0,     0,   326,   327,   328,   329,   330,   331,
     332,   333,   334,     4,     5,     6,   335,   336,   337,   338,
     327,   328,   329,   330,   331,   332,   333,   334,   326,     7,
       8,   335,   336,   337,   338,   325,     0,     0,     0,     0,
     770,     0,     0,     0,   327,   328,   329,   330,   331,   332,
     333,   334,     0,     0,     0,   335,   336,   337,   338,   325,
       0,     0,     0,   326,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -386,   791,     0,     0,     0,   327,
     328,   329,   330,   331,   332,   333,   334,   326,     0,     0,
     335,   336,   337,   338,     0,     0,     0,     0,     0,   792,
       0,     0,   326,   327,   328,   329,   330,   331,   332,   333,
     334,     0,     0,     0,   335,   336,   337,   338,   327,   328,
     329,   330,   331,   332,   333,   334,     0,     0,     0,   335,
     336,   337,   338
};

static const short int yycheck[] =
{
     106,    64,    65,   180,   321,   314,   377,     1,   377,    72,
     215,   320,   214,   429,     1,   126,   218,   433,   220,     6,
      63,   223,     1,   433,     9,    24,     1,     1,    15,   231,
      54,   236,   126,     1,   239,     1,   241,     9,   243,     6,
       6,    16,   429,    67,     9,     9,   433,    15,     1,    15,
       9,   114,    71,     1,     9,    10,    41,   120,     9,   428,
       1,     9,    15,    62,     5,    16,   129,   130,    40,    63,
     219,   220,     1,     1,   223,   224,   225,    41,     1,   122,
      67,   187,   231,    42,    54,    40,    15,    15,    67,    63,
      41,   197,    15,   410,   113,     9,   273,    67,    63,    67,
     119,    67,   208,     5,   215,   211,   212,   213,    22,     1,
     216,   217,   131,     1,    67,    63,   222,     5,     6,     1,
     214,   215,     6,    15,   218,   236,   220,   190,   239,   223,
     241,   194,   243,    15,     1,     6,   199,   231,    67,    67,
     203,     6,   236,     8,    67,   239,     1,   241,    15,   243,
       1,    53,    54,   540,     6,     6,   543,   544,   545,     1,
      15,    12,     1,     1,     1,    53,    54,     5,     6,   275,
      41,    55,   541,    15,   376,    67,   195,    16,   547,     9,
     549,     9,    10,   552,    55,    67,   205,   556,     0,    40,
       5,    42,     1,    44,   343,    66,     1,    68,    69,   568,
      67,    72,    73,    55,    55,     5,    15,    58,    10,   315,
      15,    41,    67,    41,     6,    66,    67,    68,    69,   325,
     326,    72,    73,    11,    16,    67,    14,   376,   334,   335,
     336,   337,   338,   339,   340,     1,   342,     9,    53,    54,
       6,     9,     1,   659,     5,     9,    12,     6,   354,   659,
       1,   357,   429,    53,    54,     6,   433,     8,    67,   365,
     279,   410,    67,   369,   283,     1,     1,   654,   655,    41,
     376,     6,   659,    41,    40,     6,    42,    41,    44,    15,
     429,   697,   376,   377,   433,   434,   657,   697,   657,   660,
     353,   707,    53,    54,     5,   358,    67,   707,     1,    53,
      66,    67,    68,    69,    55,   368,    72,    73,   414,   372,
     697,    53,    15,   490,   420,    66,    53,    68,    69,     1,
     707,    72,    73,     5,     6,    67,   635,     1,   434,     1,
      67,    67,   438,     5,   428,     9,   442,   356,     1,     6,
       1,   360,    53,    54,     5,     6,     9,     1,   367,     9,
     766,     5,   371,     6,     1,     1,   766,    54,   745,    22,
       6,     8,    22,    16,    67,    37,    38,    39,     6,   574,
     575,    53,    54,   578,   437,   744,   482,     6,   441,   766,
       6,     1,    54,    37,    38,    39,     6,   536,     6,   566,
      16,   540,    53,    54,   543,   544,   545,     1,   504,    53,
     771,     5,   773,   509,   553,     5,     6,     1,   514,    55,
     516,     5,     6,   519,     1,     6,     1,   523,     5,     6,
      66,     6,    68,    69,     1,    16,    72,    73,     5,     6,
       1,   537,     6,   539,     8,   584,     1,    37,    38,    39,
      11,     6,   548,    14,   550,   551,     1,   541,     1,   555,
       1,     6,    67,   547,     7,   549,     7,    12,   552,    53,
      54,     6,   556,   574,   575,     9,    10,   578,     1,     6,
     576,    44,   677,     6,   568,     5,    53,    54,    22,    16,
     574,   575,   659,     1,   578,    40,    41,    42,   507,    44,
       8,     9,   598,     0,   513,     5,   602,    15,    16,   704,
      55,     6,   521,    10,    11,   654,   655,   526,    67,     6,
     659,    66,    67,    68,    69,     6,    89,    72,    73,    16,
     697,     5,   628,     5,    97,    16,   632,    37,    38,    39,
     707,     1,   638,     6,     6,   641,     5,     6,   644,     9,
      10,     9,   648,   748,    16,     1,   652,    15,   697,     6,
     656,     8,    22,     9,    11,    37,    38,    39,   707,    15,
      16,   134,     5,   657,     6,     5,   677,     5,    37,    38,
      39,   677,     6,   146,    16,   148,     6,   596,     8,    13,
       0,   600,   155,   677,   157,     6,    16,     7,     8,   766,
      10,    11,     5,   704,   700,     5,   745,     5,    55,    37,
      38,    39,     1,   709,    24,    67,   712,     6,    28,    66,
     704,    68,    69,    67,     1,    72,    73,   766,   724,     6,
       1,    55,     9,    10,     5,     6,    46,     6,    15,    37,
      38,    39,    66,    53,    68,    69,     1,   748,    72,    73,
       6,     6,    29,     5,    64,    65,   752,    12,     1,   755,
     744,     8,     9,    40,   748,     8,     9,   676,    45,    46,
      47,    48,    49,    50,    51,    52,     8,     9,    55,    56,
      57,    58,    59,   779,     9,    40,    63,   783,    13,    66,
      67,    68,    69,     1,     5,    72,    73,   103,     6,     5,
      55,   107,   112,     6,    12,     8,     6,   117,     8,     5,
       6,    66,    67,    68,    69,     9,    10,    72,    73,     5,
       6,    15,     6,     7,   287,     6,     6,   290,     8,     6,
     293,     8,    40,     5,    42,   298,    44,     5,   301,   302,
     303,    37,    38,    39,     6,   308,     8,    55,   311,   312,
      67,    37,    38,    39,     6,    55,     8,    41,    66,    67,
      68,    69,     8,     9,    72,    73,    66,     6,    68,    69,
      67,    55,    72,    73,     6,   185,     1,     6,   188,     8,
       5,     6,    66,     6,    68,    69,   196,     1,    72,    73,
     200,     6,     6,     7,     8,     9,    10,    11,    12,    13,
      67,     6,     7,    17,    18,    19,    20,    21,     6,    23,
       8,     6,    26,    27,    28,    29,    30,    31,    32,    33,
       6,    16,    36,     8,     9,    10,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    37,    38,    39,    63,
      55,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      55,    66,     5,    68,    69,     5,     6,    72,    73,     6,
       6,    66,     8,    68,    69,     8,     9,    72,    73,    67,
       8,     9,    15,    16,     6,   448,   449,    15,    16,   452,
     453,     1,     1,   456,     9,    10,     6,     7,     8,     9,
      15,    11,    12,    13,   467,     5,     6,    17,    18,    19,
      20,    21,     6,    23,     8,     1,    26,    27,    28,    29,
      30,    31,    32,    33,     1,     6,    36,     8,     8,     9,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       6,    11,     8,    63,    67,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,     8,     9,     9,    10,     6,
       7,     8,     9,    15,    11,    12,    13,     6,     6,     8,
      17,    18,    19,    20,    21,     6,    23,     8,     6,    26,
      27,    28,    29,    30,    31,    32,    33,    67,     6,    36,
       8,     8,     9,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     6,     6,     8,    63,     6,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,    48,    49,
      50,    51,     6,     7,     8,     9,     6,    11,    12,    13,
       6,    67,     8,    17,    18,    19,    20,    21,     6,    23,
       8,    67,    26,    27,    28,    29,    30,    31,    32,    33,
      67,     6,    36,     8,     8,     9,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     6,    67,     8,    63,
      67,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,     6,     6,     8,     8,     6,     7,     6,     9,    10,
       6,    12,     8,    67,    15,     8,     9,    18,    67,    20,
      21,    67,    23,     5,     6,    26,     9,    28,    29,    30,
      31,    32,    33,     5,     6,    36,     9,     8,     9,    40,
       8,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     8,
       9,     8,    63,    15,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,     8,     9,     8,     9,     6,     7,
       8,     9,     8,     9,    12,     8,     9,     8,     9,    40,
      18,    10,    20,    21,     9,    23,     8,     9,    26,    15,
      28,    29,    30,    31,    32,    33,     8,     9,    36,     8,
       9,     6,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     8,     9,     6,    63,    10,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,     8,     9,    15,
      16,     6,     7,     9,     9,    10,    10,    12,    15,    16,
      15,     8,     9,    18,    10,    20,    21,    10,    23,     8,
       9,    26,    10,    28,    29,    30,    31,    32,    33,     8,
       9,    36,     8,     9,     1,    40,    10,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     8,     9,    67,    63,    67,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
       8,     9,     9,    10,     6,     7,    67,     9,     9,    10,
      12,     9,    10,    15,     9,    10,    18,    67,    20,    21,
      67,    23,     9,    10,    26,    67,    28,    29,    30,    31,
      32,    33,     9,    10,    36,    15,     6,     6,    40,    15,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    15,     6,
       9,    63,    58,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,     7,    58,    63,     9,     6,     7,     8,
       9,     9,    63,    12,     8,     6,     6,     6,    15,    18,
      15,    20,    21,    16,    23,     1,    41,    26,    15,    28,
      29,    30,    31,    32,    33,    15,    15,    36,     9,     6,
       6,    40,    17,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    10,    10,    15,    63,     6,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    15,     6,     6,     6,
       6,     7,    41,     9,    41,     6,    12,    11,    11,     6,
       7,     6,    18,    15,    20,    21,    10,    23,     6,     6,
      26,     6,    28,    29,    30,    31,    32,    33,     6,     6,
      36,     6,    63,     6,    40,     6,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    10,    41,    35,    63,    55,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,    66,
     320,    68,    69,     6,     7,    72,    73,   705,   321,    12,
     426,   554,     6,     7,   537,    18,    -1,    20,    21,   231,
      23,    -1,    -1,    26,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    55,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    66,    -1,    68,    69,     6,     7,    72,    73,
      -1,    11,    12,     5,     6,     6,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    37,    38,    39,    -1,    40,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,     6,    -1,
      -1,    53,    54,    -1,    55,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,    66,    -1,    68,    69,     6,
       7,    72,    73,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    23,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    55,    -1,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    66,    -1,
      68,    69,    -1,    -1,    72,    73,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     1,    -1,    11,    12,     5,
       6,    -1,    -1,    -1,    18,    11,    20,    21,    14,    23,
      -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,     1,    -1,
      11,    12,     5,     6,    -1,    -1,    -1,    18,    11,    20,
      21,    14,    23,    -1,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,     1,    -1,    -1,    12,     5,     6,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    37,    38,    39,
       4,     5,     6,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    -1,    -1,    -1,
      -1,     6,     7,    37,    38,    39,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,    53,
      54,    26,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    40,     1,    42,    43,    44,
      -1,     6,    -1,     8,    -1,    -1,     1,    12,    53,    54,
      55,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      -1,     1,    -1,    -1,    -1,    40,     6,    42,    -1,    44,
      55,    -1,    12,    -1,     1,    -1,    -1,    -1,    -1,     6,
      -1,    66,    67,    68,    69,    12,    -1,    72,    73,    -1,
      -1,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    40,     6,    42,    -1,    44,    -1,     1,
      12,    -1,    -1,    -1,     6,    -1,    66,    67,    68,    69,
      12,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    40,    -1,
      42,    -1,    44,    -1,     1,    -1,    -1,    -1,    40,     6,
      42,    -1,    44,    -1,    -1,    12,    -1,     1,    -1,    -1,
      -1,    -1,     6,    -1,    66,    67,    68,    69,    12,    -1,
      72,    73,    -1,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    40,    -1,    42,    -1,    44,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    40,     6,    42,    -1,
      44,    -1,     1,    12,    -1,    -1,    -1,     6,    -1,    66,
      67,    68,    69,    12,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    40,    -1,    42,    -1,    44,    -1,     1,    -1,    -1,
      -1,    40,     6,    42,    -1,    44,    -1,     1,    12,    -1,
       1,     5,     6,    -1,    -1,     6,    -1,    66,    67,    68,
      69,    12,    -1,    72,    73,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    40,    -1,    42,     1,
      44,    -1,    -1,    37,    38,    39,    -1,     9,    -1,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    66,    67,    68,    69,     1,    29,    72,    73,
       5,     6,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    72,    73,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,     1,    -1,    56,    57,    58,    59,     7,    -1,
       9,    63,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    53,    54,
      29,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    29,    -1,    -1,    56,    57,    58,
      59,    -1,    -1,     1,    -1,    -1,    41,    -1,    -1,     7,
      45,    46,    47,    48,    49,    50,    51,    52,     1,    -1,
      -1,    56,    57,    58,    59,    -1,     9,    -1,    -1,    -1,
      13,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    29,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      58,    59,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,     1,    -1,    56,    57,    58,    59,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    29,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,     1,    -1,    56,    57,    58,    59,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,     1,
      -1,    56,    57,    58,    59,     7,    -1,    -1,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    58,    59,    45,    46,    47,    48,    49,    50,    51,
      52,     1,    -1,    -1,    56,    57,    58,    59,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     3,
       4,     5,     6,    -1,     9,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    29,    45,    46,    47,    48,    49,
      50,    51,    52,    37,    38,    39,    56,    57,    58,    59,
      45,    46,    47,    48,    49,    50,    51,    52,    29,    53,
      54,    56,    57,    58,    59,     1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    57,    58,    59,     1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    29,    -1,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    29,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    37,    38,    39,    53,    54,    88,
      89,    90,    91,    92,    93,   137,     6,    95,    96,     1,
       6,     1,     1,     5,    54,   137,     1,     5,    53,   137,
       0,     3,    91,    92,     1,     7,    97,     5,    53,    54,
       1,     9,    63,    10,    67,     6,    53,     6,     5,   137,
       5,    53,    54,    54,     6,     5,   137,     5,    53,    54,
       1,     6,    11,    14,    53,    54,    92,    98,    99,   100,
     101,   102,   137,     1,    11,    98,     6,     5,    53,    54,
       5,    53,    54,    96,     6,     8,    95,     5,   137,    67,
       6,     5,     6,     5,     5,     5,   137,    67,     6,     5,
       6,     5,     5,    67,     1,     6,    15,    67,    99,     1,
       6,    53,    54,   102,   137,     1,     6,    53,    54,   102,
     137,    11,    14,     1,    63,     1,     7,   108,     6,    53,
      54,   102,     1,    11,    67,     6,     5,     5,     6,     5,
       5,     8,     6,     5,     8,    95,    67,     6,    67,     6,
       6,     6,     5,     8,    95,    67,     6,    67,     6,     6,
       6,    16,   103,   104,   105,   106,   107,     6,   103,     1,
       6,    55,    66,    68,    69,    72,    73,   142,   154,   155,
     156,   157,     6,     8,   103,    53,     1,    15,     1,     6,
     137,   108,     6,    53,    54,   102,    54,    15,     6,   137,
       1,   108,     6,    53,    54,   102,    99,    11,     1,     6,
      11,    12,    18,    20,    21,    23,    26,    28,    30,    31,
      32,    33,    36,    40,    42,    43,    44,    53,    54,    55,
      65,    67,    70,    71,    94,   108,   109,   110,   111,   113,
     115,   116,   117,   118,   119,   120,   121,   122,   125,   126,
     127,   129,   130,   131,   132,   133,   134,   136,   138,   139,
     140,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     152,   153,   154,   156,     6,    15,     1,     6,    54,   102,
       1,     6,    53,   102,   108,     8,    95,    67,     6,     6,
      67,     6,     6,    67,     6,     8,     8,    95,    67,     8,
      95,    67,    67,    67,     6,     8,     8,    95,    67,     8,
      95,    67,    67,     8,     9,    15,    16,     6,    16,     8,
       9,     9,     8,     8,    10,     1,    29,    45,    46,    47,
      48,    49,    50,    51,    52,    56,    57,    58,    59,   158,
       1,    10,    40,    67,   147,     1,     8,     1,     8,     6,
     137,     6,   154,   137,    15,     6,   102,    15,     1,     6,
     102,   108,     6,   137,   154,    15,     6,   102,   137,    15,
       6,   102,     1,   108,     8,   154,     1,     9,    10,    58,
      63,    13,   145,   146,   154,   154,   154,     6,   121,   142,
     110,   154,   154,     6,   121,    94,     6,    58,    94,   121,
       1,     6,   135,   154,     6,    41,    94,   121,    94,    94,
      40,     6,     6,    10,     1,     6,     8,    94,   121,   151,
       9,    11,   110,   110,   110,   110,     9,    10,     9,    15,
       1,    63,    10,    15,    40,     1,   154,    53,    15,     6,
     108,    54,    15,     6,   108,     8,     8,    95,    67,    67,
       8,    95,    67,    67,     8,    95,    67,     8,     8,    95,
       8,     8,    95,     8,    95,     8,    95,    67,     8,     8,
      95,     8,     8,    95,     8,    95,     6,    16,   105,   154,
       1,    16,    15,     6,     6,   105,   106,     6,   104,   107,
       6,    55,   154,   154,   154,   154,   154,   154,   154,   154,
       6,     7,   154,     1,    15,     6,     6,   102,   154,    15,
     108,   154,     6,   102,    15,   108,    15,     6,   154,    15,
     108,   102,   154,    15,   108,     6,   102,     8,     6,    94,
     121,   154,     6,   119,   138,     6,    58,     9,    13,     7,
       1,     9,    10,    22,     1,    22,     7,    27,     9,     9,
      40,    40,     9,    58,     9,     9,     9,    41,    41,    41,
      42,     6,    94,   104,    63,    63,     6,     8,     9,     1,
       8,     8,     8,   154,     1,    17,    19,   112,   114,     6,
     120,     6,     6,   138,    40,    94,   128,   144,   147,   148,
       6,   128,    41,    94,   154,     6,   102,   154,    15,     6,
     102,   154,    15,     8,     8,    95,     8,    95,     8,     8,
      95,     8,    95,     8,     8,    95,     8,     8,     8,     8,
       8,    95,     8,     8,     8,    16,     6,    16,    15,    16,
       1,   154,    15,     1,     1,     9,   147,    41,     7,    41,
     154,    15,   108,   154,    15,   108,   154,   154,    15,   154,
     108,   154,    15,   108,    22,    22,     9,     9,    10,    15,
       9,    10,    63,    94,   146,   154,    94,   148,     6,     6,
      94,   148,    94,   148,    94,   148,    24,    62,   123,   124,
       6,   138,   154,     6,     7,   154,     7,   154,     6,    94,
     135,     1,   154,     6,    41,    41,    41,    15,    63,     6,
       6,   110,   110,   154,    17,   110,    10,    15,    41,    15,
     108,   154,    15,   108,   154,     8,     8,     8,     8,     8,
       8,     1,     6,   154,    15,   154,     6,   154,   154,   154,
     154,   154,    94,   148,    94,   148,   154,     6,   138,     6,
     128,     6,   119,     6,     9,    22,   108,   110,   154,    11,
      11,    41,     7,    41,    41,     7,    41,    41,   128,     8,
     154,   110,     1,   112,     6,   128,    15,   154,   154,   154,
      41,     9,    10,     9,    10,    10,     6,    94,   148,     1,
     110,   154,   154,     6,   128,     6,     6,     6,     6,     6,
     154,    41,    41,    10,    10,    63,    10,     6,     6,     6,
      63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

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

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
static YYSIZE_T
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
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

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
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


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 104 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 112 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 115 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 123 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 129 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 133 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 147 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 153 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 203 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  (yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 29:
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  (yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 30:
#line 263 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 269 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 32:
#line 277 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 33:
#line 285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
										acc_mod="";
								;}
    break;

  case 34:
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 297 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 383 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 52:
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								  ;}
    break;

  case 53:
#line 405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 411 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 417 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
										   ;}
    break;

  case 56:
#line 425 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
										   (yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
										   ;}
    break;

  case 57:
#line 433 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 445 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 463 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 469 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 475 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 487 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 499 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 519 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 525 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 531 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 537 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
										t=(yyval.type);
										inhertance_list.clear();
										acc_mod="";
								  ;}
    break;

  case 76:
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								 
								  ;}
    break;

  case 77:
#line 554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 566 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 80:
#line 574 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
											(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=(yyval.type);
											inhertance_list.clear();
											acc_mod="";
										   ;}
    break;

  case 81:
#line 582 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 592 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 599 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 600 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 603 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 610 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 623 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 631 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 635 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 644 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 651 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 657 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 665 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 666 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'def' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'def' ","");									
						;}
    break;

  case 99:
#line 673 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 674 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 676 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 682 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 688 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
							;}
    break;

  case 105:
#line 693 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
								;}
    break;

  case 106:
#line 698 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 703 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 108:
#line 708 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 712 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 716 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 720 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 726 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 113:
#line 732 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 114:
#line 737 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";;}
    break;

  case 115:
#line 738 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";;}
    break;

  case 116:
#line 739 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 117:
#line 740 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 118:
#line 741 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 119:
#line 745 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 120:
#line 749 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 121:
#line 753 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
											;}
    break;

  case 122:
#line 759 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
											;}
    break;

  case 123:
#line 766 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 124:
#line 772 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 125:
#line 778 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 126:
#line 782 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 127:
#line 787 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 128:
#line 793 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 129:
#line 800 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 804 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 131:
#line 808 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 132:
#line 815 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
														v=(yyval.var);
														acc_mod="";
													;}
    break;

  case 133:
#line 821 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 134:
#line 827 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 135:
#line 833 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 136:
#line 837 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 137:
#line 841 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 138:
#line 847 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
															v=(yyval.var);
															acc_mod="";
														;}
    break;

  case 139:
#line 853 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 140:
#line 859 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 141:
#line 865 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 142:
#line 869 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 143:
#line 873 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 144:
#line 879 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-4].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";	
															;}
    break;

  case 145:
#line 885 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 146:
#line 889 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 147:
#line 893 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 148:
#line 897 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 149:
#line 903 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 904 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 905 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 906 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 907 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 908 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 909 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 910 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 911 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 912 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 913 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 914 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 161:
#line 915 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 162:
#line 919 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 923 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 927 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 931 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 935 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 167:
#line 942 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 168:
#line 943 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back((yyvsp[-1].r.strVal));testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 169:
#line 944 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 170:
#line 945 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 171:
#line 949 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 172:
#line 953 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 173:
#line 957 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 174:
#line 961 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 175:
#line 965 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 176:
#line 971 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 177:
#line 972 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 178:
#line 973 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 179:
#line 975 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 180:
#line 976 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 181:
#line 977 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 182:
#line 978 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 183:
#line 979 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 184:
#line 982 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 185:
#line 988 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 186:
#line 992 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 187:
#line 996 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 188:
#line 1003 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 189:
#line 1004 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 190:
#line 1005 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 191:
#line 1009 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 192:
#line 1015 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 193:
#line 1016 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 194:
#line 1022 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 195:
#line 1026 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 196:
#line 1030 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 197:
#line 1036 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 198:
#line 1037 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 199:
#line 1038 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 200:
#line 1049 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 201:
#line 1050 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 202:
#line 1053 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 203:
#line 1054 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 204:
#line 1055 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 205:
#line 1056 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 206:
#line 1057 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 207:
#line 1058 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 208:
#line 1059 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 209:
#line 1060 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 210:
#line 1064 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 211:
#line 1071 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
								;}
    break;

  case 212:
#line 1077 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<(yyvsp[-2].r.lineNum)<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Error: illegal start of expression ","");										
										;}
    break;

  case 213:
#line 1081 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 214:
#line 1087 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 215:
#line 1088 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 216:
#line 1089 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 217:
#line 1092 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 218:
#line 1093 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 219:
#line 1094 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 220:
#line 1098 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 221:
#line 1099 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 222:
#line 1102 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 223:
#line 1103 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 224:
#line 1110 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 225:
#line 1113 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 226:
#line 1114 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 227:
#line 1120 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 228:
#line 1125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 229:
#line 1130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 230:
#line 1136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 231:
#line 1139 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 232:
#line 1140 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 233:
#line 1141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 234:
#line 1142 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 235:
#line 1143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 236:
#line 1144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 237:
#line 1145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 238:
#line 1149 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 239:
#line 1153 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 240:
#line 1157 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 241:
#line 1161 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 242:
#line 1165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 243:
#line 1169 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 244:
#line 1173 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 245:
#line 1180 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 246:
#line 1181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 247:
#line 1182 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 248:
#line 1183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 249:
#line 1184 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 250:
#line 1185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 251:
#line 1186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 252:
#line 1187 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 253:
#line 1191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 254:
#line 1192 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 255:
#line 1196 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 256:
#line 1197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 257:
#line 1198 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 258:
#line 1199 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 259:
#line 1200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 260:
#line 1201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 261:
#line 1204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 262:
#line 1205 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 263:
#line 1208 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 264:
#line 1211 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 265:
#line 1212 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 266:
#line 1215 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 267:
#line 1216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 268:
#line 1219 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 269:
#line 1220 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 270:
#line 1221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 271:
#line 1223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 272:
#line 1224 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 273:
#line 1225 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 274:
#line 1226 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 275:
#line 1227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 276:
#line 1228 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 277:
#line 1229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 278:
#line 1230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 279:
#line 1231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 280:
#line 1232 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 281:
#line 1235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 282:
#line 1236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 283:
#line 1238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 284:
#line 1239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 285:
#line 1240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 286:
#line 1241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 287:
#line 1244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 288:
#line 1245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";
																	(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,true);
																	v=(yyval.var);
																	temp_id="";
																;}
    break;

  case 289:
#line 1250 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 290:
#line 1251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 291:
#line 1252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 292:
#line 1253 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
																	;}
    break;

  case 293:
#line 1265 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 294:
#line 1266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 295:
#line 1267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 296:
#line 1268 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 297:
#line 1269 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";;}
    break;

  case 298:
#line 1270 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 299:
#line 1271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 300:
#line 1272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 301:
#line 1273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 302:
#line 1276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 303:
#line 1277 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 304:
#line 1280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 305:
#line 1283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 306:
#line 1284 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 307:
#line 1285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 308:
#line 1286 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 309:
#line 1290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 310:
#line 1295 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 311:
#line 1296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 312:
#line 1302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 313:
#line 1303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 314:
#line 1306 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 315:
#line 1307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 316:
#line 1308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 317:
#line 1309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 318:
#line 1313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 319:
#line 1319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 320:
#line 1320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 321:
#line 1321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 322:
#line 1326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 323:
#line 1327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 324:
#line 1328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 325:
#line 1329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 326:
#line 1330 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 327:
#line 1331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 328:
#line 1332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 329:
#line 1333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 330:
#line 1336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 331:
#line 1337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 332:
#line 1340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 333:
#line 1341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 334:
#line 1342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 335:
#line 1343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 336:
#line 1346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 337:
#line 1347 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 338:
#line 1350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 339:
#line 1351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 340:
#line 1352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 341:
#line 1353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 342:
#line 1354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 343:
#line 1357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 344:
#line 1358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 345:
#line 1359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 346:
#line 1360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 347:
#line 1361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 348:
#line 1364 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 349:
#line 1365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 350:
#line 1367 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 351:
#line 1368 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 352:
#line 1369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 353:
#line 1371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 354:
#line 1374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 355:
#line 1375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 356:
#line 1376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 357:
#line 1380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 358:
#line 1384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 359:
#line 1388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 360:
#line 1395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 361:
#line 1396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 362:
#line 1399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 363:
#line 1402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 364:
#line 1405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 365:
#line 1406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 366:
#line 1409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 367:
#line 1413 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 368:
#line 1414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 369:
#line 1418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 370:
#line 1419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 371:
#line 1420 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 372:
#line 1421 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"expr:	self.id\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,false,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 373:
#line 1427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"expr:	self.id()\n";
										cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 374:
#line 1431 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: unExpected self at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"unExpected self ","");
									;}
    break;

  case 375:
#line 1435 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 376:
#line 1440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 377:
#line 1446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 378:
#line 1447 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 379:
#line 1448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 380:
#line 1449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 381:
#line 1450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 382:
#line 1451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 383:
#line 1453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id=temp_id+(yyvsp[0].r.strVal);
							;}
    break;

  case 384:
#line 1456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";temp_id=temp_id+"."+(yyvsp[0].r.strVal);;}
    break;

  case 385:
#line 1465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,false);
										v=(yyval.var);
										temp_id="";
								;}
    break;

  case 386:
#line 1470 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 387:
#line 1471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 388:
#line 1472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 389:
#line 1473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 390:
#line 1476 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 391:
#line 1477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 392:
#line 1478 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 393:
#line 1479 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 394:
#line 1480 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 395:
#line 1481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 396:
#line 1482 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5291 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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

	  yyarg[0] = yytname[yytype];
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
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
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
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1484 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
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

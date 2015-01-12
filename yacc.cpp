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
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
#line 63 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#define YYLAST   2837

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  410
/* YYNRULES -- Number of states. */
#define YYNSTATES  832

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
     975,   979,   984,   989,   994,   998,  1003,  1008,  1013,  1017,
    1022,  1027,  1032,  1036,  1038,  1042,  1046,  1050,  1054,  1060,
    1066,  1070,  1075,  1080,  1084,  1088,  1092,  1094,  1097,  1101,
    1105,  1110,  1114,  1116,  1121,  1126,  1130,  1135,  1141,  1148,
    1154,  1157,  1161,  1164,  1168,  1171,  1175,  1178,  1180,  1182,
    1184,  1186,  1188,  1190,  1192,  1195,  1198,  1201,  1205,  1209,
    1214,  1223,  1234,  1237,  1242,  1247,  1251,  1257,  1261,  1264,
    1267,  1270,  1273,  1277,  1280,  1283,  1287,  1290,  1295,  1300,
    1307,  1314,  1319,  1324,  1330,  1336,  1342,  1348,  1353,  1358,
    1363,  1368,  1372,  1376,  1380,  1386,  1392,  1398,  1406,  1408,
    1412,  1418,  1422,  1428,  1432,  1438,  1442,  1444,  1450,  1456,
    1459,  1462,  1466,  1469,  1474,  1476,  1478,  1480,  1482,  1484,
    1486,  1488,  1490,  1492,  1494,  1496,  1498,  1500,  1503,  1508,
    1510,  1512,  1514,  1516,  1520,  1524,  1531,  1537,  1543,  1549,
    1552,  1557,  1560,  1566,  1574,  1580,  1586,  1594,  1600,  1602,
    1605,  1607,  1610,  1613,  1618,  1622,  1628,  1631,  1634,  1638,
    1640,  1642,  1645,  1650,  1655,  1661,  1663,  1665,  1667,  1671,
    1677,  1681,  1685,  1691,  1695,  1697,  1699,  1703,  1707,  1709,
    1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,  1727,  1729,
    1731,  1733,  1735,  1737,  1739,  1742,  1746,  1750,  1753,  1755,
    1759,  1763,  1766,  1769,  1772,  1776,  1780,  1784,  1787,  1791,
    1795,  1797,  1800,  1805,  1810,  1815,  1817,  1819,  1823,  1825,
    1829,  1833,  1837,  1841,  1845,  1849,  1851,  1855,  1857,  1862,
    1865,  1870,  1877,  1882,  1886,  1888,  1890,  1892,  1894,  1896,
    1898
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
       6,    67,    55,     8,    -1,     6,    67,     6,     8,    -1,
       6,    67,   103,     8,    -1,     6,    67,     8,    -1,     1,
      67,   103,     8,    -1,     1,    67,     6,     8,    -1,     1,
      67,    55,     8,    -1,     1,    67,     8,    -1,     6,     1,
     103,     8,    -1,     6,     1,     6,     8,    -1,     6,     1,
      55,     8,    -1,     6,     1,     8,    -1,     6,    67,   103,
       1,    -1,     6,    67,     6,     1,    -1,     6,    67,    55,
       1,    -1,     6,    67,     1,    -1,   104,    -1,    55,     9,
     104,    -1,    55,     9,     6,    -1,    55,     9,   106,    -1,
     104,     9,   106,    -1,    55,     9,   104,     9,   106,    -1,
      55,     9,     6,     9,   106,    -1,   104,     9,   105,    -1,
     104,     9,     1,    55,    -1,     6,     9,     1,    55,    -1,
       6,     9,   105,    -1,   104,     9,     6,    -1,     6,     9,
       6,    -1,   105,    -1,    16,     6,    -1,    16,    16,     6,
      -1,     6,    16,     1,    -1,     6,    16,    16,     1,    -1,
     106,     9,   107,    -1,   107,    -1,   106,     1,     9,   104,
      -1,   106,     1,     9,     6,    -1,     6,    15,   154,    -1,
      16,     6,    15,   154,    -1,    16,    16,     6,    15,   154,
      -1,     6,    16,     1,    16,    15,   154,    -1,     6,    16,
       1,    15,   154,    -1,     7,    11,    -1,     7,   109,    11,
      -1,     1,    11,    -1,     1,   109,    11,    -1,     7,     1,
      -1,     7,   109,     1,    -1,   109,   110,    -1,   110,    -1,
     111,    -1,   115,    -1,   117,    -1,   122,    -1,   125,    -1,
     108,    -1,   126,    63,    -1,   126,     1,    -1,     6,    63,
      -1,    54,     6,    63,    -1,    53,     6,    63,    -1,     6,
      10,     6,    63,    -1,     6,     9,     6,    10,     6,    10,
       6,    63,    -1,     6,    10,     6,     9,     6,    10,     6,
      10,     6,    63,    -1,   113,   110,    -1,   113,   110,    17,
     110,    -1,   113,   110,     1,   110,    -1,   113,   110,   112,
      -1,   113,   110,   112,    17,   110,    -1,   114,   110,   112,
      -1,   114,   110,    -1,   114,     1,    -1,    18,   154,    -1,
      19,   154,    -1,     1,     6,   154,    -1,   116,   110,    -1,
      20,   154,    -1,     1,     6,   154,    -1,   118,   110,    -1,
      21,   121,    22,    94,    -1,    21,   121,    22,   148,    -1,
      21,     6,     9,     6,    22,    94,    -1,    21,     6,     9,
       6,    22,   148,    -1,    21,     6,    22,    94,    -1,    21,
       6,    22,   148,    -1,     6,     1,     6,    22,    94,    -1,
       6,     1,     6,    22,   148,    -1,     6,     1,   121,    22,
      94,    -1,     6,     1,   121,    22,   148,    -1,    21,     6,
       1,    94,    -1,    21,     6,     1,   148,    -1,    21,   121,
       1,    94,    -1,    21,   121,     1,   148,    -1,   119,     9,
     120,    -1,     6,     9,   119,    -1,     6,     9,     6,    -1,
       6,     9,     6,    10,     6,    -1,     6,    10,     6,     9,
     119,    -1,     6,    10,     6,     9,     6,    -1,     6,    10,
       6,     9,     6,    10,     6,    -1,   120,    -1,   120,    10,
       6,    -1,     6,    10,     6,    10,     6,    -1,   121,     9,
     138,    -1,     6,     9,     6,     9,   138,    -1,   121,     9,
       6,    -1,     6,     9,     6,     9,     6,    -1,     6,     9,
     138,    -1,   138,    -1,    23,   110,     7,   124,    11,    -1,
      23,   110,     7,   123,    11,    -1,    24,   108,    -1,    62,
     110,    -1,    62,   154,   110,    -1,    26,   154,    -1,    26,
     154,    27,   138,    -1,    94,    -1,   127,    -1,   129,    -1,
      65,    -1,   130,    -1,   133,    -1,   131,    -1,   132,    -1,
     136,    -1,    70,    -1,    71,    -1,   119,    -1,   134,    -1,
      28,   154,    -1,    28,   154,     9,   154,    -1,    94,    -1,
     147,    -1,   148,    -1,   144,    -1,   121,    15,   128,    -1,
     156,    15,   128,    -1,   156,    40,    94,    41,    15,   128,
      -1,   156,    40,    41,    15,   128,    -1,     6,     9,     6,
      15,   128,    -1,    55,    10,   156,    15,   128,    -1,    30,
     121,    -1,    30,     6,     9,     6,    -1,    30,     6,    -1,
      30,     6,    40,   154,    41,    -1,    30,     6,    40,   154,
       7,   154,    41,    -1,    30,     6,    40,     7,    41,    -1,
      30,   121,    40,   154,    41,    -1,    30,   121,    40,   154,
       7,   154,    41,    -1,    30,   121,    40,     7,    41,    -1,
      31,    -1,    31,    94,    -1,   151,    -1,    32,    94,    -1,
      32,   121,    -1,    32,    58,    58,    94,    -1,     6,     1,
      94,    -1,     6,     1,    58,    58,    94,    -1,    33,   135,
      -1,    33,     1,    -1,     6,     9,   135,    -1,     6,    -1,
      36,    -1,    36,   154,    -1,    36,   154,     9,   154,    -1,
      36,   154,     9,     1,    -1,     6,     1,   154,     9,   154,
      -1,    37,    -1,    38,    -1,    39,    -1,    67,   121,     8,
      -1,    67,     6,     9,     6,     8,    -1,    67,     6,     8,
      -1,    40,   121,    41,    -1,    40,     6,     9,     6,    41,
      -1,    40,     6,    41,    -1,   139,    -1,   152,    -1,   140,
      10,     6,    -1,     6,    10,     6,    -1,   141,    -1,   139,
      -1,   152,    -1,   153,    -1,   143,    -1,   142,    -1,    68,
      -1,    69,    -1,    72,    -1,    73,    -1,    66,    -1,   147,
      -1,   148,    -1,   149,    -1,   150,    -1,   144,    -1,    12,
      13,    -1,    12,   145,    13,    -1,   145,     9,   146,    -1,
     145,     9,    -1,   146,    -1,   154,     7,   154,    -1,    67,
      94,     8,    -1,    67,     8,    -1,     1,     8,    -1,    67,
       1,    -1,     1,    94,     8,    -1,    67,    94,     1,    -1,
      40,    94,    41,    -1,    40,    41,    -1,    42,    94,    42,
      -1,    67,   151,     8,    -1,    43,    -1,    43,    94,    -1,
      44,    40,    94,    41,    -1,    44,    40,   104,    41,    -1,
      44,    40,     6,    41,    -1,   155,    -1,   142,    -1,   154,
     158,   154,    -1,   157,    -1,   154,    29,   154,    -1,   154,
      52,   154,    -1,   154,    56,   154,    -1,   154,    57,   154,
      -1,   154,    58,   154,    -1,   154,    59,   154,    -1,     6,
      -1,   156,    10,     6,    -1,   156,    -1,    55,    10,   156,
     147,    -1,   156,   147,    -1,   156,    40,   154,    41,    -1,
     156,    40,   154,     7,   154,    41,    -1,   156,    40,     7,
      41,    -1,    55,    10,   156,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    45,    -1,    47,    -1,    46,    -1
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
     914,   915,   919,   923,   927,   931,   935,   943,   944,   945,
     946,   947,   951,   955,   959,   963,   967,   971,   975,   979,
     983,   987,   991,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1006,  1007,  1011,  1015,  1016,  1017,  1018,  1021,  1027,  1031,
    1035,  1042,  1043,  1044,  1048,  1054,  1055,  1061,  1065,  1069,
    1075,  1076,  1077,  1081,  1085,  1089,  1096,  1097,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1118,  1124,  1128,  1134,
    1135,  1136,  1139,  1140,  1141,  1145,  1146,  1149,  1150,  1151,
    1157,  1160,  1161,  1167,  1172,  1173,  1179,  1182,  1183,  1184,
    1185,  1186,  1187,  1188,  1192,  1196,  1200,  1204,  1208,  1212,
    1216,  1223,  1224,  1225,  1226,  1227,  1228,  1229,  1230,  1234,
    1235,  1239,  1240,  1241,  1242,  1243,  1244,  1247,  1248,  1251,
    1254,  1255,  1258,  1259,  1262,  1263,  1264,  1266,  1267,  1268,
    1269,  1270,  1271,  1272,  1273,  1274,  1275,  1278,  1279,  1281,
    1282,  1283,  1284,  1287,  1288,  1293,  1294,  1295,  1296,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1319,  1320,
    1323,  1326,  1327,  1328,  1329,  1333,  1338,  1339,  1345,  1346,
    1349,  1350,  1351,  1352,  1356,  1362,  1363,  1364,  1369,  1370,
    1371,  1372,  1373,  1374,  1375,  1376,  1379,  1380,  1384,  1385,
    1386,  1387,  1390,  1391,  1394,  1395,  1396,  1397,  1398,  1401,
    1402,  1403,  1404,  1405,  1408,  1409,  1411,  1412,  1413,  1415,
    1418,  1419,  1420,  1424,  1428,  1432,  1439,  1440,  1443,  1446,
    1449,  1450,  1453,  1457,  1458,  1462,  1463,  1464,  1476,  1487,
    1488,  1489,  1490,  1491,  1492,  1494,  1497,  1506,  1511,  1516,
    1517,  1518,  1519,  1520,  1528,  1529,  1530,  1531,  1532,  1533,
    1534
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
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   116,   116,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   136,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   140,   140,
     140,   140,   141,   141,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   144,   144,   145,   145,   145,   146,
     147,   147,   147,   147,   147,   147,   148,   148,   149,   150,
     151,   151,   152,   153,   153,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   158,   158,   158,   158,
     158
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
       5,     6,     6,     6,     6,     6,     6,     4,     4,     4,
       3,     4,     4,     4,     3,     4,     4,     4,     3,     4,
       4,     4,     3,     1,     3,     3,     3,     3,     5,     5,
       3,     4,     4,     3,     3,     3,     1,     2,     3,     3,
       4,     3,     1,     4,     4,     3,     4,     5,     6,     5,
       2,     3,     2,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     3,     4,
       8,    10,     2,     4,     4,     3,     5,     3,     2,     2,
       2,     2,     3,     2,     2,     3,     2,     4,     4,     6,
       6,     4,     4,     5,     5,     5,     5,     4,     4,     4,
       4,     3,     3,     3,     5,     5,     5,     7,     1,     3,
       5,     3,     5,     3,     5,     3,     1,     5,     5,     2,
       2,     3,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     1,
       1,     1,     1,     3,     3,     6,     5,     5,     5,     2,
       4,     2,     5,     7,     5,     5,     7,     5,     1,     2,
       1,     2,     2,     4,     3,     5,     2,     2,     3,     1,
       1,     2,     4,     4,     5,     1,     1,     1,     3,     5,
       3,     3,     5,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     2,     1,     3,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     3,
       1,     2,     4,     4,     4,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     4,     2,
       4,     6,     4,     3,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   335,   336,   337,     0,     0,     0,
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
       0,   174,     0,     0,     0,   183,   196,    82,   178,     0,
       0,   148,   395,     0,   358,   354,   355,   356,   357,   386,
     120,   385,     0,   388,   182,     0,   170,     0,     0,     0,
       0,     0,     0,   107,     0,   152,   111,     0,     0,     0,
       0,     0,   106,     0,     0,   151,   112,     0,     0,     0,
      96,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,   330,     0,     0,   380,     0,
       0,     0,     0,   287,     0,   293,   294,   284,   223,     0,
     217,   218,     0,   219,     0,   220,     0,   295,   268,     0,
     221,   222,     0,   285,   286,   288,   290,   291,   289,   296,
     292,   276,   344,     0,   348,   386,   352,   363,   359,   360,
     361,   362,   320,   345,   351,    85,     0,   214,   210,     0,
       0,     0,     0,   122,     0,     0,     0,   121,     0,     0,
     150,    34,     0,     0,    29,    27,     0,    26,    28,     0,
      23,    60,    38,     0,     0,    42,     0,     0,     0,     0,
      22,    59,    37,     0,     0,    41,     0,     0,     0,   172,
       0,     0,   197,     0,   173,     0,   171,     0,   176,   177,
     175,     0,     0,   408,   410,   409,   404,   405,   406,   407,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   180,   168,   181,   167,   179,   169,   109,     0,     0,
     115,     0,     0,   128,     0,     0,     0,     0,     0,   156,
     108,     0,   114,     0,   127,     0,     0,     0,     0,     0,
       0,   155,     0,   372,   284,     0,     0,     0,   226,   364,
       0,   368,     0,   240,   244,     0,     0,   353,     0,   282,
     297,   311,   309,   319,   395,     0,   321,   322,   327,   329,
     326,   331,   395,   377,     0,     0,     0,   381,     0,     0,
       0,     0,   373,   395,   371,     0,     0,     0,     0,   213,
     216,     0,   243,   246,     0,     0,     0,     0,   225,   224,
       0,     0,     0,   215,   211,   147,   113,     0,     0,   124,
     154,     0,     0,   123,   153,    58,    48,     0,     0,     0,
      47,     0,     0,     0,    40,     0,     0,    62,    44,     0,
      66,    56,     0,    54,     0,    39,     0,     0,    61,    43,
       0,    65,    53,     0,    55,     0,     0,   195,   193,   199,
       0,   198,   185,     0,   184,   186,   202,     0,   194,   190,
     187,     0,   389,   390,   391,   392,   393,   394,   387,     0,
     396,     0,     0,   373,     0,   130,     0,     0,   117,     0,
     160,   138,     0,     0,     0,   158,     0,   129,   116,     0,
     159,     0,   137,     0,   157,     0,     0,   245,   374,   395,
       0,   324,     0,    85,   263,   262,   275,   347,   367,   365,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   376,
     341,   378,   395,     0,     0,   228,   227,     0,   340,     0,
     375,   370,   338,   379,    84,     0,     0,     0,   235,     0,
       0,   261,   269,   273,   271,     0,   299,   303,   302,   300,
     301,   346,   304,     0,     0,    85,   126,     0,   132,     0,
     125,     0,   131,     0,    72,    52,     0,    50,     0,    71,
      49,     0,    51,     0,    64,    46,     0,    68,    80,    77,
      63,    45,     0,    67,    78,    79,   192,   200,     0,     0,
       0,   197,     0,     0,     0,     0,   191,   398,   402,     0,
     400,   119,     0,   164,   140,     0,   161,   144,   118,     0,
     139,   163,   143,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,   366,   369,   257,   258,     0,
     347,   251,   252,   259,   260,   247,   248,     0,     0,     0,
       0,     0,   283,   298,   310,     0,     0,     0,     0,     0,
     323,   328,   333,   332,     0,   384,   382,     0,   383,     0,
       0,     0,   234,   233,   241,     0,     0,     0,     0,     0,
       0,     0,   165,   134,     0,   166,   133,    76,    74,    73,
      75,    70,    69,   195,   189,   205,   199,     0,   198,   188,
       0,     0,     0,   201,     0,   142,   146,   141,   145,   253,
     254,   325,   255,   256,   334,   263,   272,   264,   307,   266,
     265,   270,     0,     0,   279,   280,     0,   278,   277,   314,
       0,   312,   317,     0,   315,   342,   194,   308,   339,   242,
     236,     0,   237,     0,   306,     0,   136,   135,     0,     0,
     206,     0,   204,   203,     0,     0,     0,   401,     0,     0,
       0,     0,     0,   274,   249,   250,   281,     0,     0,     0,
     305,   209,     0,   207,     0,     0,   263,   264,   266,   270,
     267,   313,   316,   208,     0,     0,   230,     0,   264,   267,
     270,   231
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    66,    14,   237,    17,    18,
      36,    67,    68,    69,    70,    71,   170,   165,   166,   495,
     496,   238,   239,   240,   241,   588,   242,   589,   243,   244,
     245,   246,   247,   248,   249,   250,   689,   690,   251,   252,
     253,   597,   254,   255,   256,   257,   258,   259,   410,   260,
      72,   261,   262,   263,   264,   179,   266,   267,   390,   391,
     268,   269,   270,   271,   272,   273,   274,   275,   181,   182,
     183,   345
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -404
static const short int yypact[] =
{
    1314,   130,    12,   151,  -404,  -404,  -404,   797,   316,   195,
    1353,  1424,  -404,  -404,   302,   207,  -404,     3,   145,  -404,
     123,   234,   254,   237,    78,   220,   272,   277,   134,   236,
    -404,  -404,  -404,  -404,  1497,  1570,  -404,   350,   258,   291,
    -404,   130,  -404,   374,   446,  -404,   560,   329,   477,   486,
     542,   553,   596,   919,   554,   656,   660,   662,   693,   696,
     646,    36,  -404,   248,   294,  1278,  -404,   580,  -404,    58,
    -404,   510,   533,   646,  -404,   541,   655,   778,   783,   788,
     809,   820,   825,   145,  -404,  -404,    54,   840,   851,   682,
     800,   881,   859,   890,   941,   957,   962,   724,   916,   988,
     945,  1010,  1033,   351,   382,  1041,   611,    42,  -404,   205,
      34,  1064,   572,   510,   587,   230,    40,   821,  1069,   510,
     642,  -404,   248,  -404,  -404,  1635,  1708,  -404,    38,   741,
     786,   510,  -404,  -404,   737,  1006,  1072,  1084,  1025,  1107,
    1109,  -404,  1065,  1137,  -404,   420,   791,  1068,   804,  1079,
    1096,  1098,  1145,  -404,   575,   810,  1119,   835,  1138,  1147,
     369,  -404,   141,   798,  1180,  1207,  -404,   555,  -404,   829,
    1211,  -404,  -404,  1214,  -404,  -404,  -404,  -404,  -404,  -404,
    2778,  -404,   708,  -404,  -404,   812,  -404,   520,   327,   931,
     386,   611,   731,  1221,   795,  -404,    53,   509,   860,   510,
    1289,   611,  1223,   954,   731,  -404,    56,   960,   673,   510,
    -404,  1489,  1124,  -404,     1,   611,   611,  2166,  1927,   611,
     611,  2288,   611,   584,   105,   611,  2235,   611,   611,  1219,
    1255,  1274,  1282,  -404,   367,  -404,  -404,  1288,  -404,  1781,
    -404,  -404,  1927,  -404,  1927,  -404,  1927,  1290,  1299,   623,
    -404,  -404,    59,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  1301,  1355,  -404,  1360,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  1362,  -404,  2778,   978,  1562,  -404,  1854,
    1381,   611,   213,    76,   948,   510,   347,    81,   966,   510,
    -404,  -404,   967,   844,  1317,  1321,   847,  1322,  1326,   856,
    1327,  -404,  -404,  1059,   878,  -404,  1067,   891,   940,   956,
    1328,  -404,  -404,  1077,   974,  -404,  1080,   983,   989,  -404,
     246,   192,  -404,  1393,  -404,   201,  -404,   488,  -404,  -404,
    -404,  1394,   611,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
     611,   611,   611,   611,   611,   611,   331,  1395,   534,   155,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  1387,  1106,   555,
    2778,   544,   611,    83,   510,   611,   568,   111,   510,  -404,
    1388,  1121,  2778,   611,   139,   510,   544,   611,   164,   510,
     613,  -404,  2146,  -404,  1120,  2279,  2323,  1398,  -404,  -404,
     678,  -404,   893,  2778,  2778,   210,   479,  -404,  1411,  2691,
    2630,     7,   189,  1288,  1396,  1361,  1288,  1412,  -404,  1415,
    -404,  2645,    11,  -404,    91,    93,   118,  1288,   377,  1357,
    1363,  1394,   331,  1129,  -404,   636,  1132,  1417,   611,  -404,
    -404,  1343,  -404,  -404,  1425,  1426,  2332,  2096,  -404,  -404,
    1432,  2096,   209,  1562,  -404,  -404,  2778,   698,   611,  1428,
    -404,   704,   611,  1430,  -404,  -404,  -404,  1140,   994,   997,
    -404,  1150,  1007,  1011,  -404,  1153,  1032,  -404,  -404,  1176,
    -404,  -404,  1191,  -404,  1193,  -404,  1199,  1056,  -404,  -404,
    1202,  -404,  -404,  1204,  -404,  1213,  1385,  1434,  -404,  -404,
    1440,  -404,   289,   324,  1442,   468,  -404,  1399,  1216,  -404,
     468,   862,  1005,  1005,  1005,  1005,  1005,  1005,  2778,  1120,
    -404,  1414,  2544,  -404,   611,  1438,    14,   510,  2778,   611,
    -404,  2778,   166,   510,   611,  -404,   611,  1449,  2778,   611,
    -404,   510,  2778,   611,  -404,   179,   510,  2778,  -404,   403,
    1407,  1288,   429,  2676,   448,  1448,  -404,    13,   611,  -404,
     611,   458,  2367,  1460,   458,   458,   458,    75,  2376,   611,
    2411,   561,   717,  2420,   611,  1461,    20,  2455,  -404,  -404,
    -404,  -404,   160,   133,   161,  -404,  -404,  1051,  -404,  2464,
    -404,  -404,  -404,  -404,  2778,  2000,  1927,   611,  1451,  2073,
    1462,  1299,  -404,  1463,  -404,   776,  1288,  -404,  -404,  -404,
    -404,  -404,  -404,  1459,   173,  2544,   188,   510,  2778,   611,
     190,   510,  2778,   611,  -404,  -404,  1226,  -404,  1249,  -404,
    -404,  1264,  -404,  1266,  -404,  -404,  1277,  -404,  -404,  -404,
    -404,  -404,  1296,  -404,  -404,  -404,  -404,  -404,   496,   611,
     229,  1464,  1469,   488,  1467,   346,  -404,  -404,  -404,   611,
    -404,  2778,   611,  -404,  2778,   611,  -404,  2778,  2778,   611,
    2778,  -404,  2778,   611,  -404,   458,   611,   458,   611,  2499,
    1474,  2096,  1485,  1486,  -404,  -404,  2778,  1288,  -404,   649,
    -404,  1288,  -404,  1288,  -404,  1288,  -404,   510,  1927,  1482,
    1483,  1463,  -404,  2778,  1298,  1458,  2575,  1465,  2599,  1298,
    1288,  -404,  -404,  2778,   438,  -404,  -404,   519,  -404,  2096,
     868,  2215,  -404,  -404,  2778,  1927,  1270,  1416,  1498,  2096,
    1490,   611,  -404,  2778,   611,  -404,  2778,  -404,  -404,  -404,
    -404,  -404,  -404,  1216,   468,  2778,  1306,   611,  1499,   468,
     415,  1318,   469,  -404,  2715,  2778,  2778,  2778,  2778,  1288,
    -404,  1288,  1288,  -404,  2778,   645,  -404,   666,  -404,  1320,
    1448,  -404,  2508,   458,  -404,  -404,  1197,  -404,  -404,  -404,
     611,  -404,  -404,   611,  -404,  -404,  1434,  -404,  -404,  2778,
    -404,  1507,  -404,  1506,  -404,  2096,  2778,  2778,   611,  1503,
    2778,   611,   342,  1448,  1522,  1464,  1518,  -404,  1520,  1521,
    1524,  1531,  1532,  1463,  1288,  -404,  -404,  2739,  2763,   611,
    -404,  2778,   611,  2778,  1306,  1499,  1336,   666,  1338,  1476,
    1368,  -404,  -404,  2778,  1534,  1535,  -404,  1539,  1371,  1371,
    1476,  -404
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -404,  -404,  -404,  -404,  1536,   461,  -404,   138,   515,  1487,
    -404,  1512,   -57,  -404,  -404,    15,   604,  -324,  -318,  -319,
     903,   -41,  1423,  -215,  -404,   836,  -404,  -404,  -404,  -404,
    -404,  -404,  -381,  1118,  -198,  -404,  -404,  -404,  -404,  -404,
    -404,  -401,  -404,  -404,  -404,  -404,  -404,  -404,   999,  -404,
     508,  -375,  -404,  -404,  -404,   -93,  -404,  -403,  -404,  1017,
    -172,  -241,  -404,  -404,  1332,  -404,  -404,  -106,  -404,   -80,
    -404,  -404
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -404
static const short int yytable[] =
{
     180,   494,   488,   398,    40,   545,   108,   172,   500,   499,
     350,   546,    41,    19,   389,   190,   560,   553,    20,   396,
     567,   702,  -404,   402,   430,   407,   172,   431,   415,   432,
     127,   433,   265,   265,   598,  -404,   426,  -404,   598,  -404,
     602,  -404,   105,   184,   280,   276,   276,   561,   185,   191,
     186,   106,   568,   281,  -404,   201,   173,  -404,   162,   123,
     438,   594,   141,    41,   430,   210,    42,   174,   365,   175,
     176,   377,   195,   177,   178,   173,   674,  -404,   205,   113,
     119,   107,  -404,    48,  -404,   360,   174,   131,   175,   176,
     290,   448,   177,   178,   574,   372,   452,   187,   519,   687,
     428,   107,   436,   107,   350,   107,   408,   107,   392,   393,
     394,   409,   190,   399,   400,     4,     5,     6,   265,   411,
     107,   124,   439,   107,   397,   265,   524,   428,   397,   199,
     265,   276,   569,   265,   570,   209,    16,   688,   276,    55,
    -404,   265,   428,   107,   285,   289,   265,   322,   107,   265,
     107,   265,    21,   265,   529,    43,   513,   323,   369,   276,
     571,   172,   276,   424,   276,   190,   276,   190,   381,   320,
     707,     4,     5,     6,   706,   446,   321,   546,   107,   533,
     190,   655,   428,   692,   265,   546,   265,   542,   546,  -404,
      44,  -404,   546,   489,   663,    30,   600,   276,   436,   276,
     600,   705,   708,   721,   546,   724,   107,   492,   490,   364,
     173,   551,    37,   368,   720,   172,   511,   493,   375,   552,
     553,   174,   379,   175,   176,    50,   502,   177,   178,   562,
     736,   107,   554,   107,   503,   504,   505,   506,   507,   508,
      45,    57,   512,    47,   450,   490,   107,   486,   454,    60,
     603,   501,   487,     2,    61,   107,   518,   107,   189,   521,
      38,    39,   162,    77,   173,   599,   447,   528,   598,   599,
     758,   532,   103,    51,    52,   174,   537,   175,   176,   543,
     103,   177,   178,    54,   200,     4,     5,     6,   545,    58,
      59,   760,   265,   397,   756,   109,    80,   103,   638,    23,
     110,    64,    65,    34,   639,   640,   598,    46,   777,    35,
     678,    78,    79,   682,   684,   686,   598,    26,   784,   734,
     488,    27,   584,   520,   739,   499,    53,   525,   355,   647,
     641,     4,     5,     6,   530,   356,   605,   172,   534,   383,
     642,   577,   608,   397,    81,    82,   612,   111,   112,   384,
     265,  -404,   741,     4,     5,     6,    76,   160,   321,   161,
     403,   406,   742,   276,   414,   416,   417,   162,   422,    28,
     712,   713,   425,   423,   717,   424,   517,   319,   320,   214,
      84,   523,   598,   572,   810,   321,   173,   756,   167,   499,
     168,   531,   359,   162,   168,   536,    89,   174,   162,   175,
     176,   451,   162,   177,   178,   647,   163,   226,   651,   227,
     228,   229,   563,   654,   103,   384,   793,   545,   657,   760,
     658,   792,   173,   660,   750,   665,   753,   662,   301,    41,
     600,   162,   173,   174,   234,   175,   176,   169,   436,   177,
     178,   169,   392,   174,   676,   175,   176,   762,   553,   177,
     178,   667,    16,   693,    85,   696,   698,  -404,   670,   397,
     703,    13,   607,   671,   172,   397,   611,   397,   600,  -404,
     397,    13,    33,   765,   397,   795,   653,   645,   600,   775,
     555,   714,   656,    90,   509,   796,   397,   425,   436,   497,
     661,    91,   265,   265,   498,   664,   265,   486,   595,   599,
     780,   556,   733,   723,   493,   276,   276,   726,    15,   276,
     366,   125,   493,   173,    93,    25,    29,   126,    15,    15,
     497,   353,   805,   541,   174,   776,   175,   176,   354,   325,
     177,   178,    49,   735,    60,   162,    56,   599,    37,   128,
     172,   511,   132,   744,   600,    60,   745,   599,    92,   746,
     516,   806,   133,   747,    88,   122,   573,   748,    93,    86,
     509,    96,   754,   328,   320,    87,   722,   172,   695,    60,
     725,   321,   114,   120,   522,   596,   397,    48,   193,   596,
     604,   384,   766,   311,    41,   346,   129,   130,    60,   173,
     404,   121,    50,   196,   122,   265,   214,     4,     5,     6,
     174,    94,   175,   176,   145,   779,   177,   178,   276,     4,
       5,     6,   154,   599,    60,   786,   173,   172,   787,   535,
     194,    97,   265,   265,   226,   203,   227,   174,   229,   175,
     176,   790,   436,   177,   178,   276,   276,   580,   437,   173,
     197,   198,   405,    60,   581,   428,   764,    57,   206,   292,
     174,   234,   175,   176,  -404,   799,   177,   178,   762,   553,
    -274,   303,    98,   306,   807,    99,   173,   808,   100,   397,
     313,   763,   316,   265,   380,  -404,  -347,   174,   102,   175,
     176,  -347,   811,   177,   178,   813,   276,   548,    16,   677,
     144,   549,   681,   683,   685,   207,   208,   358,   101,    60,
     361,   102,   700,   779,   606,    60,   823,   164,   371,   346,
     610,   188,   376,   103,  -397,  -397,  -397,  -397,   347,  -397,
    -397,  -397,   134,   172,   697,  -397,  -397,  -397,  -397,  -397,
      16,  -397,   153,   414,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,   282,    16,  -397,   291,    77,   283,   348,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,     4,     5,
       6,  -397,   173,  -397,  -397,   349,  -397,  -397,  -397,  -397,
    -397,  -397,   172,   174,   135,   175,   176,   286,   136,   177,
     178,    80,   287,   137,    78,   284,    60,    16,    22,   302,
      91,   363,    23,   749,   751,   752,   324,   325,   457,   596,
      16,   461,   305,   351,   465,   138,    16,   413,   312,   469,
     352,   320,   472,   474,   476,   139,    55,   202,   321,   480,
     140,   173,   483,   485,     4,     5,     6,   329,   325,   288,
      82,    16,   174,   315,   175,   176,   142,   596,   177,   178,
      16,    24,   456,    16,   384,   460,   143,   596,     4,     5,
       6,    60,    16,   346,   464,    94,   367,   146,  -403,  -403,
    -403,  -403,   347,  -403,  -403,  -403,   778,   762,   553,  -403,
    -403,  -403,  -403,  -403,    16,  -403,   468,   147,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,   149,    16,  -403,   471,
     550,   804,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,   332,   596,    95,  -403,   148,  -403,  -403,   349,
    -403,  -403,  -403,  -403,  -403,  -403,    87,   357,   333,   334,
     335,   336,   337,   338,   339,   340,    16,   150,   473,   341,
     342,   343,   344,   137,   449,    60,     4,     5,     6,    99,
     374,    60,    16,   151,   475,   101,   378,   152,     4,     5,
       6,   139,   453,   616,   618,   455,    41,   621,   623,   346,
      16,   626,   479,   155,  -397,  -397,  -397,  -397,   347,    16,
    -397,   482,   632,   441,   156,    16,  -397,   484,  -397,  -397,
      16,  -397,   615,    16,  -397,   617,  -397,  -397,  -397,  -397,
    -397,  -397,   157,    16,  -397,   620,   158,    16,   442,   622,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,    16,   159,
     625,  -397,   171,  -397,  -397,   349,  -397,  -397,  -397,  -397,
    -397,  -397,   346,   336,   337,   338,   339,  -403,  -403,  -403,
    -403,   347,    16,  -403,   631,   192,   709,   467,    41,  -403,
     204,  -403,  -403,   293,  -403,   470,    41,  -403,   294,  -403,
    -403,  -403,  -403,  -403,  -403,   478,    41,  -403,   481,    41,
     295,  -403,   296,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,   143,   515,   297,  -403,   298,  -403,  -403,   349,  -403,
    -403,  -403,  -403,  -403,  -403,   385,   152,   527,   538,   428,
    -395,  -395,   299,   386,  -395,   304,  -395,   578,   579,  -395,
     582,   436,  -395,   300,  -395,  -395,   307,  -395,   614,    41,
    -395,   310,  -395,  -395,  -395,  -395,  -395,  -395,   619,    41,
    -395,   624,    41,   308,  -395,   309,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,   627,    41,   314,   388,   326,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,   211,   628,
      41,   629,    41,   212,   126,   317,   -85,   630,    41,   214,
     633,    41,   634,    41,   318,   215,   327,   216,   217,   330,
     218,   635,    41,   219,   331,   220,   332,   221,   222,   223,
     224,   639,   640,   225,   727,    41,   362,   226,   373,   227,
     228,   229,   333,   334,   335,   336,   337,   338,   339,   340,
     230,   231,   232,   341,   342,   343,   344,   728,    41,   418,
     -85,   419,   233,   174,   234,   175,   176,   235,   236,   177,
     178,   211,   729,    41,   730,    41,   382,   126,   383,   115,
     420,   213,   214,    27,   116,   731,    41,  -239,   215,  -239,
     216,   217,   421,   218,    95,   370,   219,   428,   220,   434,
     221,   222,   223,   224,   732,    41,   225,   762,   553,   435,
     226,  -349,   227,   228,   229,     4,     5,     6,     1,     2,
       3,   788,   789,   230,   231,   232,     4,     5,     6,  -404,
     802,   117,   118,   639,   794,   233,   174,   234,   175,   176,
     235,   236,   177,   178,   585,  -404,   824,  -404,   825,  -232,
    -232,     4,     5,     6,  -232,  -232,    31,     1,     2,     3,
     586,  -232,   587,  -232,  -232,   440,  -232,     7,     8,  -232,
    -353,  -232,  -350,  -232,  -232,  -232,  -232,  -404,   827,  -232,
    -404,   673,   445,  -232,   458,  -232,  -232,  -232,   459,   462,
       4,     5,     6,   463,   466,   477,  -232,  -232,  -232,   491,
     172,   510,   514,   526,   547,   563,     7,     8,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,   781,   557,   564,
     575,   436,  -238,  -238,   565,   583,   576,  -238,  -238,     2,
       3,   590,   592,  -238,  -238,   587,  -238,  -238,   601,  -238,
     636,   637,  -238,   609,  -238,   613,  -238,  -238,  -238,  -238,
     321,   643,  -238,   652,   646,   648,  -238,  -404,  -238,  -238,
    -238,     4,     5,     6,   659,   666,   680,   409,   715,  -238,
    -238,  -238,   718,   553,   719,   738,   740,     7,     8,   737,
     757,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
     211,   759,   761,   767,   768,   382,   126,   383,    60,   769,
     213,   214,     2,    61,   783,   785,   772,   215,    62,   216,
     217,    63,   218,   809,   791,   219,   673,   220,   812,   221,
     222,   223,   224,   814,   815,   225,   816,   817,    83,   226,
     818,   227,   228,   229,     4,     5,     6,   819,   820,  -404,
     828,   829,   230,   231,   232,   830,    32,    75,   743,   279,
      64,    65,   591,   782,   233,   174,   234,   175,   176,   235,
     236,   177,   178,  -404,   701,   675,   427,     0,  -404,  -404,
     383,    73,     0,  -404,  -404,     2,    61,     0,     0,     0,
    -404,    74,  -404,  -404,    63,  -404,     0,     0,  -404,     0,
    -404,     0,  -404,  -404,  -404,  -404,     0,     0,  -404,     0,
       0,     0,  -404,     0,  -404,  -404,  -404,     4,     5,     6,
       0,     0,     0,     0,     0,  -404,  -404,  -404,     0,     0,
       0,     0,     0,    64,    65,     0,     0,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,   211,     0,     0,     0,
       0,   212,   126,     0,     0,     0,   213,   214,     0,     0,
       0,     0,     0,   215,     0,   216,   217,     0,   218,     0,
       0,   219,     0,   220,     0,   221,   222,   223,   224,     0,
       0,   225,     0,     0,     0,   226,     0,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   231,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,   174,   234,   175,   176,   235,   236,   177,   178,   277,
       0,     0,     0,     0,   212,   126,     0,     0,     0,   278,
     214,     0,     0,     0,     0,     0,   215,     0,   216,   217,
       0,   218,     0,     0,   219,     0,   220,     0,   221,   222,
     223,   224,     0,     0,   225,     0,     0,     0,   226,     0,
     227,   228,   229,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   231,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,   174,   234,   175,   176,   235,   236,
     177,   178,   211,     0,     0,     0,     0,   212,   126,     0,
       0,     0,   429,   214,     0,     0,     0,     0,     0,   215,
       0,   216,   217,     0,   218,     0,     0,   219,     0,   220,
       0,   221,   222,   223,   224,     0,     0,   225,     0,     0,
       0,   226,     0,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   231,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,   174,   234,   175,
     176,   235,   236,   177,   178,   443,     0,     0,     0,     0,
     212,   126,     0,     0,     0,   444,   214,     0,     0,     0,
       0,     0,   215,     0,   216,   217,     0,   218,     0,     0,
     219,     0,   220,     0,   221,   222,   223,   224,     0,     0,
     225,     0,     0,     0,   226,     0,   227,   228,   229,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
     174,   234,   175,   176,   235,   236,   177,   178,   211,     0,
       0,     0,     0,   212,   126,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,     0,   216,   217,     0,
     218,     0,     0,   219,     0,   220,     0,   221,   222,   223,
     224,     0,     0,   225,     0,     0,     0,   226,     0,   227,
     228,   229,     0,     0,     0,     0,     0,     0,     0,     0,
     230,   231,   232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,   174,   234,   175,   176,   235,   236,   177,
     178,   211,     0,     0,     0,     0,   711,   126,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
     216,   217,     0,   218,     0,     0,   219,     0,   220,     0,
     221,   222,   223,   224,     0,     0,   225,     0,     0,     0,
     226,     0,   227,   228,   229,     0,     0,     0,     0,     0,
       0,     0,     0,   230,   231,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,   174,   234,   175,   176,
     235,   236,   177,   178,   716,     0,     0,     0,     0,   212,
     126,     0,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,     0,   216,   217,     0,   218,   346,     0,   219,
       0,   220,   172,   221,   222,   223,   224,     0,   214,   225,
       0,     0,     0,   226,     0,   227,   228,   229,     0,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,     0,
       0,     0,     0,     0,     0,     0,   595,     0,   233,   174,
     234,   175,   176,   235,   236,   177,   178,   385,     0,     0,
       0,   173,   172,     0,  -395,   386,  -395,     0,     0,     0,
       0,  -395,   174,   349,   175,   176,     0,   346,   177,   178,
       0,     0,   395,     0,     0,  -395,     0,     0,   214,     0,
       0,     0,     0,     0,     0,     0,  -395,     0,     0,     0,
       0,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,     0,
       0,   173,  -395,  -395,  -395,  -395,   226,     0,   227,   388,
     229,     0,   174,  -395,   175,   176,   385,     0,   177,   178,
       0,   172,     0,     0,   386,  -395,     0,     0,     0,     0,
    -395,     0,   174,   234,   175,   176,   346,     0,   177,   178,
       0,   412,     0,     0,  -395,     0,     0,   214,     0,     0,
       0,     0,     0,     0,     0,  -395,     0,     0,     0,     0,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,     0,     0,
     173,  -395,  -395,  -395,  -395,   226,   413,   227,   388,   229,
     346,   174,  -395,   175,   176,   539,     0,   177,   178,   346,
     173,   214,     0,     0,   401,     0,     0,     0,     0,     0,
     214,   174,   234,   175,   176,     0,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
       0,   227,     0,   229,   346,     0,     0,     0,   226,   544,
     227,     0,   229,   346,   173,   214,     0,   540,   593,     0,
       0,     0,     0,     0,   214,   174,   234,   175,   176,     0,
       0,   177,   178,     0,   174,   234,   175,   176,     0,     0,
     177,   178,     0,   226,     0,   227,     0,   229,   346,     0,
       0,     0,   226,   679,   227,     0,   229,   346,     0,   214,
       0,     0,   691,     0,     0,     0,     0,     0,   214,   174,
     234,   175,   176,     0,     0,   177,   178,     0,   174,   234,
     175,   176,     0,     0,   177,   178,     0,   226,     0,   227,
       0,   229,   346,     0,     0,     0,   226,   694,   227,     0,
     229,   346,     0,   214,     0,     0,   699,     0,     0,     0,
       0,     0,   214,   174,   234,   175,   176,     0,     0,   177,
     178,     0,   174,   234,   175,   176,     0,     0,   177,   178,
       0,   226,     0,   227,     0,   229,   346,     0,     0,     0,
     226,   704,   227,     0,   229,   346,     0,   214,     0,     0,
     710,     0,     0,     0,     0,     0,   214,   174,   234,   175,
     176,     0,     0,   177,   178,     0,   174,   234,   175,   176,
       0,     0,   177,   178,     0,   226,     0,   227,     0,   229,
     346,     0,     0,     0,   226,   755,   227,     0,   229,   346,
       0,   214,     0,     0,   803,     0,     0,     0,     0,     0,
     214,   174,   234,   175,   176,     0,     0,   177,   178,     0,
     174,   234,   175,   176,     0,     0,   177,   178,     0,   226,
       0,   227,     0,   229,     0,     0,     0,     0,   226,     0,
     227,   649,   229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   234,   175,   176,     0,
       0,   177,   178,   332,   174,   234,   175,   176,     0,     0,
     177,   178,   770,     0,     0,   650,     0,     0,     0,   333,
     334,   335,   336,   337,   338,   339,   340,     0,     0,     0,
     341,   342,   343,   344,   332,     0,   773,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   771,     0,     0,     0,
     333,   334,   335,   336,   337,   338,   339,   340,   332,     0,
       0,   341,   342,   343,   344,     0,     0,     0,     0,   559,
     774,     0,     0,     0,   333,   334,   335,   336,   337,   338,
     339,   340,     0,     0,   566,   341,   342,   343,   344,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,     0,     0,   668,   341,   342,   343,   344,
     333,   334,   335,   336,   337,   338,   339,   340,     0,     0,
       0,   341,   342,   343,   344,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   558,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,     0,
       0,     0,   341,   342,   343,   344,   333,   334,   335,   336,
     337,   338,   339,   340,   332,     0,     0,   341,   342,   343,
     344,     0,     0,     0,     0,     0,   797,     0,     0,     0,
     333,   334,   335,   336,   337,   338,   339,   340,   332,     0,
       0,   341,   342,   343,   344,     0,     0,     0,     0,     0,
     821,     0,     0,     0,   333,   334,   335,   336,   337,   338,
     339,   340,   332,     0,     0,   341,   342,   343,   344,     0,
       0,     0,     0,     0,   822,     0,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,     0,     0,     0,   341,
     342,   343,   344,   333,   334,   335,   336,   337,   338,   339,
     340,     0,     0,     0,   341,   342,   343,   344
};

static const short int yycheck[] =
{
     106,   325,   320,   218,     1,   386,    63,     6,   327,   327,
     182,   386,     9,     1,    13,     1,     9,    10,     6,   217,
       9,     1,     9,   221,   239,   223,     6,   242,   226,   244,
      71,   246,   125,   126,   437,     1,   234,     1,   441,     1,
     441,     1,     6,     1,     6,   125,   126,    40,     6,    15,
       8,    15,    41,    15,     1,    15,    55,     1,    16,     1,
       1,   436,     8,     9,   279,   122,    63,    66,    15,    68,
      69,    15,   113,    72,    73,    55,    63,     1,   119,    64,
      65,    67,     1,     5,     1,   191,    66,    72,    68,    69,
     131,    15,    72,    73,   418,   201,    15,    55,    15,    24,
       9,    67,     9,    67,   276,    67,     1,    67,   214,   215,
     216,     6,     1,   219,   220,    37,    38,    39,   211,   225,
      67,    63,    63,    67,   217,   218,    15,     9,   221,   114,
     223,   211,    41,   226,    41,   120,     6,    62,   218,     5,
       1,   234,     9,    67,   129,   130,   239,     6,    67,   242,
      67,   244,     1,   246,    15,    10,     1,    16,   199,   239,
      42,     6,   242,     8,   244,     1,   246,     1,   209,     9,
       9,    37,    38,    39,    41,   281,    16,   552,    67,    15,
       1,    15,     9,   558,   277,   560,   279,   385,   563,     1,
      67,     1,   567,     1,    15,     0,   437,   277,     9,   279,
     441,    41,    41,    15,   579,    15,    67,     6,    16,   194,
      55,     1,     5,   198,    41,     6,     7,    16,   203,     9,
      10,    66,   207,    68,    69,     5,   332,    72,    73,    40,
       1,    67,    22,    67,   340,   341,   342,   343,   344,   345,
       6,     5,   348,     6,   285,    16,    67,     1,   289,     1,
      41,   331,     6,     5,     6,    67,   362,    67,    53,   365,
      53,    54,    16,     5,    55,   437,    53,   373,   671,   441,
     671,   377,    67,    53,    54,    66,   382,    68,    69,   385,
      67,    72,    73,     6,    54,    37,    38,    39,   669,    53,
      54,   672,   385,   386,   669,     1,     5,    67,     9,     5,
       6,    53,    54,     1,    15,    16,   709,    53,   709,     7,
     551,    53,    54,   554,   555,   556,   719,     1,   719,   638,
     638,     5,   428,   364,   643,   643,    54,   368,     1,   501,
       6,    37,    38,    39,   375,     8,   442,     6,   379,     8,
      16,   421,   448,   436,    53,    54,   452,    53,    54,   211,
     443,     9,     6,    37,    38,    39,     6,     6,    16,     8,
     222,   223,    16,   443,   226,   227,   228,    16,     1,    53,
     585,   586,   234,     6,   589,     8,   361,     8,     9,    12,
       6,   366,   785,     6,   785,    16,    55,   762,     6,   707,
       8,   376,     6,    16,     8,   380,    67,    66,    16,    68,
      69,    54,    16,    72,    73,   577,    55,    40,   514,    42,
      43,    44,     9,   519,    67,   277,   740,   798,   524,   800,
     526,     6,    55,   529,   665,    22,   667,   533,     8,     9,
     671,    16,    55,    66,    67,    68,    69,    55,     9,    72,
      73,    55,   548,    66,   550,    68,    69,     9,    10,    72,
      73,    22,     6,   559,     8,   561,   562,     9,    10,   552,
     566,     0,   447,    15,     6,   558,   451,   560,   709,     1,
     563,    10,    11,   688,   567,     6,   517,     9,   719,    41,
       1,   587,   523,     6,   346,    16,   579,   349,     9,     1,
     531,     5,   585,   586,     6,   536,   589,     1,    40,   671,
     715,    22,     6,   609,    16,   585,   586,   613,     0,   589,
       1,     1,    16,    55,     5,     7,     8,     7,    10,    11,
       1,     1,   763,   385,    66,     6,    68,    69,     8,     9,
      72,    73,    24,   639,     1,    16,    28,   709,     5,     6,
       6,     7,     1,   649,   785,     1,   652,   719,     6,   655,
       6,   766,    11,   659,    46,    14,   418,   663,     5,    44,
     422,    53,   668,     8,     9,     5,   607,     6,     7,     1,
     611,    16,    64,    65,     6,   437,   669,     5,     6,   441,
     442,   443,   688,     8,     9,     1,    53,    54,     1,    55,
       6,    11,     5,     6,    14,   688,    12,    37,    38,    39,
      66,     5,    68,    69,    89,   711,    72,    73,   688,    37,
      38,    39,    97,   785,     1,   721,    55,     6,   724,     6,
     112,    67,   715,   716,    40,   117,    42,    66,    44,    68,
      69,   737,     9,    72,    73,   715,   716,     1,    15,    55,
      53,    54,    58,     1,     8,     9,   687,     5,     6,   134,
      66,    67,    68,    69,     9,    10,    72,    73,     9,    10,
      15,   146,     6,   148,   770,     5,    55,   773,     6,   762,
     155,    22,   157,   766,     1,     9,    10,    66,     5,    68,
      69,    15,   788,    72,    73,   791,   766,     9,     6,   551,
       8,    13,   554,   555,   556,    53,    54,   189,     5,     1,
     192,     5,   564,   809,     6,     1,   812,   103,   200,     1,
       6,   107,   204,    67,     6,     7,     8,     9,    10,    11,
      12,    13,    67,     6,     7,    17,    18,    19,    20,    21,
       6,    23,     8,   595,    26,    27,    28,    29,    30,    31,
      32,    33,     1,     6,    36,     8,     5,     6,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    37,    38,
      39,    63,    55,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     6,    66,     6,    68,    69,     1,     5,    72,
      73,     5,     6,     5,    53,    54,     1,     6,     1,     8,
       5,     6,     5,   665,   666,   667,     8,     9,   293,   671,
       6,   296,     8,     1,   299,     6,     6,    41,     8,   304,
       8,     9,   307,   308,   309,     5,     5,     6,    16,   314,
       5,    55,   317,   318,    37,    38,    39,     8,     9,    53,
      54,     6,    66,     8,    68,    69,     6,   709,    72,    73,
       6,    54,     8,     6,   716,     8,     5,   719,    37,    38,
      39,     1,     6,     1,     8,     5,     6,    67,     6,     7,
       8,     9,    10,    11,    12,    13,     8,     9,    10,    17,
      18,    19,    20,    21,     6,    23,     8,     6,    26,    27,
      28,    29,    30,    31,    32,    33,     6,     6,    36,     8,
       7,   763,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    29,   785,     5,    63,    67,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     5,     6,    45,    46,
      47,    48,    49,    50,    51,    52,     6,     6,     8,    56,
      57,    58,    59,     5,     6,     1,    37,    38,    39,     5,
       6,     1,     6,     6,     8,     5,     6,     5,    37,    38,
      39,     5,     6,   458,   459,     8,     9,   462,   463,     1,
       6,   466,     8,    67,     6,     7,     8,     9,    10,     6,
      12,     8,   477,    15,     6,     6,    18,     8,    20,    21,
       6,    23,     8,     6,    26,     8,    28,    29,    30,    31,
      32,    33,    67,     6,    36,     8,     6,     6,    40,     8,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     6,     6,
       8,    63,     1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,    48,    49,    50,    51,     6,     7,     8,
       9,    10,     6,    12,     8,     1,    15,     8,     9,    18,
       1,    20,    21,    67,    23,     8,     9,    26,     6,    28,
      29,    30,    31,    32,    33,     8,     9,    36,     8,     9,
       6,    40,    67,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     5,     6,     6,    63,     6,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,     5,     6,     8,     9,
       6,     7,    67,     9,    10,    67,    12,     8,     9,    15,
       8,     9,    18,     6,    20,    21,    67,    23,     8,     9,
      26,     6,    28,    29,    30,    31,    32,    33,     8,     9,
      36,     8,     9,    67,    40,    67,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     8,     9,    67,    63,     8,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,     8,
       9,     8,     9,     6,     7,    67,     9,     8,     9,    12,
       8,     9,     8,     9,    67,    18,     9,    20,    21,     8,
      23,     8,     9,    26,    10,    28,    29,    30,    31,    32,
      33,    15,    16,    36,     8,     9,    15,    40,    15,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     8,     9,    40,
      63,     6,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,     8,     9,     8,     9,     6,     7,     8,     1,
       6,    11,    12,     5,     6,     8,     9,    17,    18,    19,
      20,    21,    10,    23,     5,     6,    26,     9,    28,     9,
      30,    31,    32,    33,     8,     9,    36,     9,    10,    10,
      40,    10,    42,    43,    44,    37,    38,    39,     4,     5,
       6,    15,    16,    53,    54,    55,    37,    38,    39,     9,
      10,    53,    54,    15,    16,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,     9,    10,     9,    10,     6,
       7,    37,    38,    39,    11,    12,     3,     4,     5,     6,
      17,    18,    19,    20,    21,    10,    23,    53,    54,    26,
      10,    28,    10,    30,    31,    32,    33,     9,    10,    36,
       9,    10,     1,    40,    67,    42,    43,    44,    67,    67,
      37,    38,    39,    67,    67,    67,    53,    54,    55,     6,
       6,     6,    15,    15,     6,     9,    53,    54,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,     7,    58,
      63,     9,     6,     7,     9,     8,    63,    11,    12,     5,
       6,     6,     6,    17,    18,    19,    20,    21,     6,    23,
      55,     1,    26,    15,    28,    15,    30,    31,    32,    33,
      16,     9,    36,    15,    55,    41,    40,     9,    42,    43,
      44,    37,    38,    39,    15,    58,     6,     6,    17,    53,
      54,    55,    10,    10,    15,     6,     9,    53,    54,    15,
       6,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,     6,     6,    11,    11,     6,     7,     8,     1,    41,
      11,    12,     5,     6,     6,    15,    41,    18,    11,    20,
      21,    14,    23,     6,    15,    26,    10,    28,    15,    30,
      31,    32,    33,     1,     6,    36,     6,     6,    41,    40,
       6,    42,    43,    44,    37,    38,    39,     6,     6,    63,
       6,     6,    53,    54,    55,     6,    10,    35,   645,   126,
      53,    54,   434,   717,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,   565,   548,   234,    -1,     6,     7,
       8,     1,    -1,    11,    12,     5,     6,    -1,    -1,    -1,
      18,    11,    20,    21,    14,    23,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    23,    -1,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      23,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    23,     1,    -1,    26,
      -1,    28,     6,    30,    31,    32,    33,    -1,    12,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    55,     6,    -1,     8,     9,    10,    -1,    -1,    -1,
      -1,    15,    66,    67,    68,    69,    -1,     1,    72,    73,
      -1,    -1,     6,    -1,    -1,    29,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    56,    57,    58,    59,    40,    -1,    42,    63,
      44,    -1,    66,    67,    68,    69,     1,    -1,    72,    73,
      -1,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      15,    -1,    66,    67,    68,    69,     1,    -1,    72,    73,
      -1,     6,    -1,    -1,    29,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    56,    57,    58,    59,    40,    41,    42,    63,    44,
       1,    66,    67,    68,    69,     6,    -1,    72,    73,     1,
      55,    12,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      12,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,     1,    -1,    -1,    -1,    40,     6,
      42,    -1,    44,     1,    55,    12,    -1,    58,     6,    -1,
      -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    40,    -1,    42,    -1,    44,     1,    -1,
      -1,    -1,    40,     6,    42,    -1,    44,     1,    -1,    12,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    66,    67,
      68,    69,    -1,    -1,    72,    73,    -1,    40,    -1,    42,
      -1,    44,     1,    -1,    -1,    -1,    40,     6,    42,    -1,
      44,     1,    -1,    12,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    12,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    66,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    40,    -1,    42,    -1,    44,     1,    -1,    -1,    -1,
      40,     6,    42,    -1,    44,     1,    -1,    12,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    66,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    40,    -1,    42,    -1,    44,
       1,    -1,    -1,    -1,    40,     6,    42,    -1,    44,     1,
      -1,    12,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      12,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      66,    67,    68,    69,    -1,    -1,    72,    73,    -1,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    40,    -1,
      42,     7,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    72,    73,    29,    66,    67,    68,    69,    -1,    -1,
      72,    73,     7,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    58,    59,    29,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    29,    -1,
      -1,    56,    57,    58,    59,    -1,    -1,    -1,    -1,     9,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,     9,    56,    57,    58,    59,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,     9,    56,    57,    58,    59,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    58,    59,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    58,    59,    45,    46,    47,    48,
      49,    50,    51,    52,    29,    -1,    -1,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    29,    -1,
      -1,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    29,    -1,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    29,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    58,    59,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59
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
       6,     8,    16,    55,   103,   104,   105,     6,     8,    55,
     103,     1,     6,    55,    66,    68,    69,    72,    73,   142,
     154,   155,   156,   157,     1,     6,     8,    55,   103,    53,
       1,    15,     1,     6,   137,   108,     6,    53,    54,   102,
      54,    15,     6,   137,     1,   108,     6,    53,    54,   102,
      99,     1,     6,    11,    12,    18,    20,    21,    23,    26,
      28,    30,    31,    32,    33,    36,    40,    42,    43,    44,
      53,    54,    55,    65,    67,    70,    71,    94,   108,   109,
     110,   111,   113,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   127,   129,   130,   131,   132,   133,   134,
     136,   138,   139,   140,   141,   142,   143,   144,   147,   148,
     149,   150,   151,   152,   153,   154,   156,     1,    11,   109,
       6,    15,     1,     6,    54,   102,     1,     6,    53,   102,
     108,     8,    95,    67,     6,     6,    67,     6,     6,    67,
       6,     8,     8,    95,    67,     8,    95,    67,    67,    67,
       6,     8,     8,    95,    67,     8,    95,    67,    67,     8,
       9,    16,     6,    16,     8,     9,     8,     9,     8,     8,
       8,    10,    29,    45,    46,    47,    48,    49,    50,    51,
      52,    56,    57,    58,    59,   158,     1,    10,    40,    67,
     147,     1,     8,     1,     8,     1,     8,     6,   137,     6,
     154,   137,    15,     6,   102,    15,     1,     6,   102,   108,
       6,   137,   154,    15,     6,   102,   137,    15,     6,   102,
       1,   108,     6,     8,    94,     1,     9,    10,    63,    13,
     145,   146,   154,   154,   154,     6,   121,   142,   110,   154,
     154,     6,   121,    94,     6,    58,    94,   121,     1,     6,
     135,   154,     6,    41,    94,   121,    94,    94,    40,     6,
       6,    10,     1,     6,     8,    94,   121,   151,     9,    11,
     110,   110,   110,   110,     9,    10,     9,    15,     1,    63,
      10,    15,    40,     1,    11,     1,   154,    53,    15,     6,
     108,    54,    15,     6,   108,     8,     8,    95,    67,    67,
       8,    95,    67,    67,     8,    95,    67,     8,     8,    95,
       8,     8,    95,     8,    95,     8,    95,    67,     8,     8,
      95,     8,     8,    95,     8,    95,     1,     6,   105,     1,
      16,     6,     6,    16,   104,   106,   107,     1,     6,   105,
     106,   156,   154,   154,   154,   154,   154,   154,   154,    94,
       6,     7,   154,     1,    15,     6,     6,   102,   154,    15,
     108,   154,     6,   102,    15,   108,    15,     6,   154,    15,
     108,   102,   154,    15,   108,     6,   102,   154,     8,     6,
      58,    94,   121,   154,     6,   119,   138,     6,     9,    13,
       7,     1,     9,    10,    22,     1,    22,     7,    27,     9,
       9,    40,    40,     9,    58,     9,     9,     9,    41,    41,
      41,    42,     6,    94,   104,    63,    63,   156,     8,     9,
       1,     8,     8,     8,   154,     1,    17,    19,   112,   114,
       6,   120,     6,     6,   138,    40,    94,   128,   144,   147,
     148,     6,   128,    41,    94,   154,     6,   102,   154,    15,
       6,   102,   154,    15,     8,     8,    95,     8,    95,     8,
       8,    95,     8,    95,     8,     8,    95,     8,     8,     8,
       8,     8,    95,     8,     8,     8,    55,     1,     9,    15,
      16,     6,    16,     9,     1,     9,    55,   147,    41,     7,
      41,   154,    15,   108,   154,    15,   108,   154,   154,    15,
     154,   108,   154,    15,   108,    22,    58,    22,     9,     9,
      10,    15,     9,    10,    63,   146,   154,    94,   148,     6,
       6,    94,   148,    94,   148,    94,   148,    24,    62,   123,
     124,     6,   138,   154,     6,     7,   154,     7,   154,     6,
      94,   135,     1,   154,     6,    41,    41,     9,    41,    15,
       6,     6,   110,   110,   154,    17,     1,   110,    10,    15,
      41,    15,   108,   154,    15,   108,   154,     8,     8,     8,
       8,     8,     8,     6,   106,   154,     1,    15,     6,   106,
       9,     6,    16,   107,   154,   154,   154,   154,   154,    94,
     148,    94,    94,   148,   154,     6,   138,     6,   128,     6,
     119,     6,     9,    22,   108,   110,   154,    11,    11,    41,
       7,    41,    41,     7,    41,    41,     6,   128,     8,   154,
     110,     1,   112,     6,   128,    15,   154,   154,    15,    16,
     154,    15,     6,   104,    16,     6,    16,    41,     9,    10,
       9,    10,    10,     6,    94,   148,   110,   154,   154,     6,
     128,   154,    15,   154,     1,     6,     6,     6,     6,     6,
       6,    41,    41,   154,    10,    10,    63,    10,     6,     6,
       6,    63
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
#line 104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 112 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 123 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 133 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 141 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 153 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 159 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 178 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 229 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 247 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
										acc_mod="";
								;}
    break;

  case 34:
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 297 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 324 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 377 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 383 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 389 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 397 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 411 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 425 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 433 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 445 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 463 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 469 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 487 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 499 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 537 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 554 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 560 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 566 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 574 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 582 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 587 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 592 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 599 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 600 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 610 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 619 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 623 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 631 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 635 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 638 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 644 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 651 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 657 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 665 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'def' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'def' ","");									
						;}
    break;

  case 99:
#line 673 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 674 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 676 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 682 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 688 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
							;}
    break;

  case 105:
#line 693 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
								;}
    break;

  case 106:
#line 698 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 703 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 108:
#line 708 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 712 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 716 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 720 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 726 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 113:
#line 732 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 114:
#line 737 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";;}
    break;

  case 115:
#line 738 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";;}
    break;

  case 116:
#line 739 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 117:
#line 740 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 118:
#line 741 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 119:
#line 745 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 120:
#line 749 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 121:
#line 753 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
											;}
    break;

  case 122:
#line 759 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
											;}
    break;

  case 123:
#line 766 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 124:
#line 772 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 125:
#line 778 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 126:
#line 782 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 127:
#line 787 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 128:
#line 793 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 129:
#line 800 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 804 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 131:
#line 808 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 132:
#line 815 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
														v=(yyval.var);
														acc_mod="";
													;}
    break;

  case 133:
#line 821 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 134:
#line 827 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 135:
#line 833 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 136:
#line 837 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 137:
#line 841 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 138:
#line 847 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
															v=(yyval.var);
															acc_mod="";
														;}
    break;

  case 139:
#line 853 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 140:
#line 859 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 141:
#line 865 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 142:
#line 869 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 143:
#line 873 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 144:
#line 879 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-4].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";	
															;}
    break;

  case 145:
#line 885 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 146:
#line 889 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 147:
#line 893 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 148:
#line 897 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 149:
#line 903 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 904 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 905 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 906 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 907 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 908 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 909 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 910 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 911 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 912 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 913 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 914 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 161:
#line 915 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 162:
#line 919 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 923 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 927 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 931 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 935 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 167:
#line 943 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 168:
#line 944 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 169:
#line 945 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 170:
#line 946 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 171:
#line 947 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 172:
#line 951 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 173:
#line 955 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 174:
#line 959 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 175:
#line 963 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 176:
#line 967 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 177:
#line 971 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 178:
#line 975 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 179:
#line 979 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 180:
#line 983 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 181:
#line 987 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 182:
#line 991 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 183:
#line 998 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 184:
#line 999 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 185:
#line 1000 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 186:
#line 1001 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 187:
#line 1002 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 188:
#line 1003 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 189:
#line 1004 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 190:
#line 1006 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 191:
#line 1007 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 192:
#line 1011 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: self should come at the first of the arguments list"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Error: self should come at the first of the arguments list","");
									;}
    break;

  case 193:
#line 1015 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 194:
#line 1016 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 195:
#line 1017 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 196:
#line 1018 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 197:
#line 1021 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 198:
#line 1027 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 199:
#line 1031 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 200:
#line 1035 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 201:
#line 1042 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 202:
#line 1043 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 203:
#line 1044 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 204:
#line 1048 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 205:
#line 1054 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 206:
#line 1055 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 207:
#line 1061 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 208:
#line 1065 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 209:
#line 1069 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 210:
#line 1075 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 211:
#line 1076 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 212:
#line 1077 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 213:
#line 1081 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 214:
#line 1085 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected 'end' ","");			 
				;}
    break;

  case 215:
#line 1089 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Expected 'end' ","");			 
				;}
    break;

  case 216:
#line 1096 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 217:
#line 1097 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 218:
#line 1100 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 219:
#line 1101 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 220:
#line 1102 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 221:
#line 1103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 222:
#line 1104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 223:
#line 1105 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 224:
#line 1106 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 225:
#line 1107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 226:
#line 1118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
								;}
    break;

  case 227:
#line 1124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<(yyvsp[-2].r.lineNum)<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Error: illegal start of expression ","");										
										;}
    break;

  case 228:
#line 1128 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 229:
#line 1134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 230:
#line 1135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 231:
#line 1136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 232:
#line 1139 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 233:
#line 1140 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 234:
#line 1141 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 235:
#line 1145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 236:
#line 1146 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 237:
#line 1149 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 238:
#line 1150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 239:
#line 1151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected statement at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected statement ","");										
											;}
    break;

  case 240:
#line 1157 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 241:
#line 1160 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 242:
#line 1161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 243:
#line 1167 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 244:
#line 1172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 245:
#line 1173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
				;}
    break;

  case 246:
#line 1179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 247:
#line 1182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 248:
#line 1183 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 249:
#line 1184 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 250:
#line 1185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 251:
#line 1186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 252:
#line 1187 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 253:
#line 1188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 254:
#line 1192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 255:
#line 1196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 256:
#line 1200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 257:
#line 1204 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 258:
#line 1208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 259:
#line 1212 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 260:
#line 1216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 261:
#line 1223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 262:
#line 1224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 263:
#line 1225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 264:
#line 1226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 265:
#line 1227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 266:
#line 1228 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 267:
#line 1229 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 268:
#line 1230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 269:
#line 1234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 270:
#line 1235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 271:
#line 1239 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 272:
#line 1240 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 273:
#line 1241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 274:
#line 1242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 275:
#line 1243 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 276:
#line 1244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 277:
#line 1247 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 278:
#line 1248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 279:
#line 1251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 280:
#line 1254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 281:
#line 1255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 282:
#line 1258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 283:
#line 1259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 284:
#line 1262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 285:
#line 1263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 286:
#line 1264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 287:
#line 1266 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 288:
#line 1267 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 289:
#line 1268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 290:
#line 1269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 291:
#line 1270 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 292:
#line 1271 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 293:
#line 1272 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 294:
#line 1273 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 295:
#line 1274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 296:
#line 1275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 297:
#line 1278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 298:
#line 1279 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 299:
#line 1281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 300:
#line 1282 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 301:
#line 1283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 302:
#line 1284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 303:
#line 1287 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 304:
#line 1288 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";
																	(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,true);
																	v=(yyval.var);
																	temp_id="";
																;}
    break;

  case 305:
#line 1293 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 306:
#line 1294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 307:
#line 1295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 308:
#line 1296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
																	;}
    break;

  case 309:
#line 1308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 310:
#line 1309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 311:
#line 1310 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 312:
#line 1311 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 313:
#line 1312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";;}
    break;

  case 314:
#line 1313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 315:
#line 1314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 316:
#line 1315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 317:
#line 1316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 318:
#line 1319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 319:
#line 1320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 320:
#line 1323 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 321:
#line 1326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 322:
#line 1327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 323:
#line 1328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 324:
#line 1329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 325:
#line 1333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 326:
#line 1338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 327:
#line 1339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 328:
#line 1345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 329:
#line 1346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 330:
#line 1349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 331:
#line 1350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 332:
#line 1351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 333:
#line 1352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 334:
#line 1356 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 335:
#line 1362 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 336:
#line 1363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 337:
#line 1364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 338:
#line 1369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 339:
#line 1370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 340:
#line 1371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 341:
#line 1372 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 342:
#line 1373 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 343:
#line 1374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 344:
#line 1375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 345:
#line 1376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 346:
#line 1379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 347:
#line 1380 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 348:
#line 1384 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 349:
#line 1385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 350:
#line 1386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 351:
#line 1387 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 352:
#line 1390 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 353:
#line 1391 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 354:
#line 1394 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 355:
#line 1395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 356:
#line 1396 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 357:
#line 1397 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 358:
#line 1398 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 359:
#line 1401 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 360:
#line 1402 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 361:
#line 1403 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 362:
#line 1404 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 363:
#line 1405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 364:
#line 1408 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 365:
#line 1409 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 366:
#line 1411 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 367:
#line 1412 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 368:
#line 1413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 369:
#line 1415 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 370:
#line 1418 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 371:
#line 1419 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 372:
#line 1420 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 373:
#line 1424 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 374:
#line 1428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 375:
#line 1432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 376:
#line 1439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 377:
#line 1440 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 378:
#line 1443 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 379:
#line 1446 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 380:
#line 1449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 381:
#line 1450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 382:
#line 1453 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 383:
#line 1457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 384:
#line 1458 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 385:
#line 1462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 386:
#line 1463 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 387:
#line 1464 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 388:
#line 1476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 389:
#line 1487 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 390:
#line 1488 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 391:
#line 1489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 392:
#line 1490 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 393:
#line 1491 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 394:
#line 1492 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 395:
#line 1494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id=temp_id+(yyvsp[0].r.strVal);
							;}
    break;

  case 396:
#line 1497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";temp_id=temp_id+"."+(yyvsp[0].r.strVal);;}
    break;

  case 397:
#line 1506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,false);
										v=(yyval.var);
										temp_id="";
								;}
    break;

  case 398:
#line 1511 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"expr:	self.id()\n";
										p->insert_func_Call(t,(yyvsp[-1].r.strVal),yylval.r.lineNum, yylval.r.colNum);
										//cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 399:
#line 1516 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 400:
#line 1517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 401:
#line 1518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 402:
#line 1519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 403:
#line 1520 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"expr:	self.id\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 404:
#line 1528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 405:
#line 1529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 406:
#line 1530 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 407:
#line 1531 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 408:
#line 1532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 409:
#line 1533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 410:
#line 1534 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5423 "yacc.cpp"

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


#line 1536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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

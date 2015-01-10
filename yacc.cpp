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
     stmt_8 = 337,
     MULTI = 338
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
#define MULTI 338




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

	bool ss=false;
	bool ff=false;
	bool pp=true;

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
#line 60 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 322 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 334 "yacc.cpp"

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
#define YYLAST   2722

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  393
/* YYNRULES -- Number of states. */
#define YYNSTATES  800

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    19,    22,    24,
      27,    30,    34,    38,    42,    47,    52,    58,    64,    69,
      74,    80,    86,    93,   100,   105,   110,   116,   122,   128,
     134,   140,   146,   152,   158,   163,   169,   175,   181,   188,
     195,   203,   211,   218,   225,   233,   241,   250,   259,   266,
     273,   281,   289,   297,   305,   313,   321,   329,   337,   343,
     350,   357,   364,   372,   380,   389,   398,   406,   414,   423,
     432,   442,   452,   460,   468,   477,   486,   495,   504,   513,
     522,   531,   540,   543,   547,   550,   554,   556,   560,   562,
     566,   568,   571,   575,   578,   582,   585,   589,   593,   596,
     599,   601,   603,   606,   609,   612,   615,   619,   623,   628,
     633,   635,   640,   645,   650,   656,   662,   669,   676,   680,
     684,   688,   693,   698,   704,   710,   714,   719,   724,   730,
     736,   742,   748,   755,   762,   770,   778,   784,   790,   797,
     804,   812,   820,   827,   834,   842,   850,   855,   859,   862,
     866,   870,   874,   879,   884,   889,   894,   900,   906,   912,
     918,   925,   932,   939,   946,   953,   960,   965,   970,   974,
     979,   984,   989,   994,   999,  1004,  1006,  1008,  1012,  1016,
    1020,  1024,  1028,  1030,  1033,  1037,  1041,  1046,  1050,  1052,
    1057,  1062,  1066,  1071,  1077,  1084,  1090,  1093,  1097,  1100,
    1103,  1107,  1111,  1114,  1116,  1118,  1120,  1122,  1124,  1126,
    1128,  1131,  1134,  1137,  1142,  1151,  1162,  1165,  1170,  1175,
    1179,  1185,  1189,  1192,  1195,  1198,  1201,  1205,  1208,  1211,
    1215,  1218,  1223,  1228,  1235,  1242,  1247,  1252,  1258,  1264,
    1270,  1276,  1281,  1286,  1291,  1296,  1300,  1304,  1308,  1314,
    1320,  1326,  1334,  1336,  1340,  1346,  1350,  1356,  1360,  1366,
    1370,  1372,  1378,  1384,  1387,  1390,  1394,  1397,  1402,  1404,
    1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,
    1426,  1428,  1431,  1436,  1438,  1440,  1442,  1444,  1448,  1452,
    1459,  1465,  1471,  1474,  1479,  1482,  1488,  1496,  1502,  1508,
    1516,  1522,  1524,  1527,  1529,  1532,  1535,  1540,  1544,  1549,
    1552,  1555,  1559,  1561,  1563,  1566,  1571,  1576,  1582,  1584,
    1586,  1588,  1592,  1598,  1602,  1606,  1612,  1616,  1618,  1620,
    1624,  1628,  1630,  1632,  1634,  1636,  1638,  1640,  1642,  1644,
    1646,  1648,  1650,  1652,  1654,  1656,  1658,  1660,  1663,  1667,
    1671,  1674,  1676,  1680,  1684,  1687,  1690,  1693,  1697,  1701,
    1705,  1708,  1712,  1716,  1718,  1721,  1726,  1731,  1736,  1742,
    1744,  1746,  1750,  1752,  1756,  1760,  1764,  1768,  1772,  1776,
    1780,  1782,  1786,  1788,  1791,  1796,  1803,  1808,  1810,  1812,
    1814,  1816,  1818,  1820
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      85,     0,    -1,    86,     3,    -1,    86,    88,    -1,    88,
      -1,     4,    92,    60,    -1,     4,    92,     1,    -1,    87,
      89,    -1,    89,    -1,    90,    94,    -1,     5,     6,    -1,
     134,     5,     6,    -1,    52,     5,     6,    -1,    51,     5,
       6,    -1,    52,    51,     5,     6,    -1,    51,    52,     5,
       6,    -1,    52,     1,    52,     5,     6,    -1,    51,     1,
      51,     5,     6,    -1,    52,   134,     5,     6,    -1,    51,
     134,     5,     6,    -1,    52,    51,   134,     5,     6,    -1,
      51,    52,   134,     5,     6,    -1,    52,     1,    52,   134,
       5,     6,    -1,    51,     1,    51,   134,     5,     6,    -1,
     134,    52,     5,     6,    -1,   134,    51,     5,     6,    -1,
     134,    52,    51,     5,     6,    -1,   134,    51,    52,     5,
       6,    -1,   134,    52,    52,     5,     6,    -1,   134,    51,
      51,     5,     6,    -1,    51,   134,    52,     5,     6,    -1,
      52,   134,    51,     5,     6,    -1,    51,   134,    51,     5,
       6,    -1,    52,   134,    52,     5,     6,    -1,     5,     6,
      64,     8,    -1,   134,     5,     6,    64,     8,    -1,    52,
       5,     6,    64,     8,    -1,    51,     5,     6,    64,     8,
      -1,    52,    51,     5,     6,    64,     8,    -1,    51,    52,
       5,     6,    64,     8,    -1,    52,     1,    52,     5,     6,
      64,     8,    -1,    51,     1,    51,     5,     6,    64,     8,
      -1,    52,   134,     5,     6,    64,     8,    -1,    51,   134,
       5,     6,    64,     8,    -1,    52,    51,   134,     5,     6,
      64,     8,    -1,    51,    52,   134,     5,     6,    64,     8,
      -1,    52,     1,    52,   134,     5,     6,    64,     8,    -1,
      51,     1,    51,   134,     5,     6,    64,     8,    -1,   134,
      52,     5,     6,    64,     8,    -1,   134,    51,     5,     6,
      64,     8,    -1,   134,    52,    51,     5,     6,    64,     8,
      -1,   134,    51,    52,     5,     6,    64,     8,    -1,   134,
      52,    52,     5,     6,    64,     8,    -1,   134,    51,    51,
       5,     6,    64,     8,    -1,    52,   134,    51,     5,     6,
      64,     8,    -1,    51,   134,    52,     5,     6,    64,     8,
      -1,    52,   134,    52,     5,     6,    64,     8,    -1,    51,
     134,    51,     5,     6,    64,     8,    -1,     5,     6,    64,
      92,     8,    -1,   134,     5,     6,    64,    92,     8,    -1,
      52,     5,     6,    64,    92,     8,    -1,    51,     5,     6,
      64,    92,     8,    -1,    52,    51,     5,     6,    64,    92,
       8,    -1,    51,    52,     5,     6,    64,    92,     8,    -1,
      52,     1,    52,     5,     6,    64,    92,     8,    -1,    51,
       1,    51,     5,     6,    64,    92,     8,    -1,    52,   134,
       5,     6,    64,    92,     8,    -1,    51,   134,     5,     6,
      64,    92,     8,    -1,    52,    51,   134,     5,     6,    64,
      92,     8,    -1,    51,    52,   134,     5,     6,    64,    92,
       8,    -1,    52,     1,    52,   134,     5,     6,    64,    92,
       8,    -1,    51,     1,    51,   134,     5,     6,    64,    92,
       8,    -1,   134,    52,     5,     6,    64,    92,     8,    -1,
     134,    51,     5,     6,    64,    92,     8,    -1,   134,    52,
      51,     5,     6,    64,    92,     8,    -1,   134,    51,    52,
       5,     6,    64,    92,     8,    -1,   134,    52,    52,     5,
       6,    64,    92,     8,    -1,   134,    51,    51,     5,     6,
      64,    92,     8,    -1,    51,   134,    52,     5,     6,    64,
      92,     8,    -1,    52,   134,    51,     5,     6,    64,    92,
       8,    -1,    52,   134,    52,     5,     6,    64,    92,     8,
      -1,    51,   134,    51,     5,     6,    64,    92,     8,    -1,
       5,     1,    -1,     6,     1,     6,    -1,     6,     1,    -1,
      91,     9,   151,    -1,   151,    -1,    92,     9,    93,    -1,
      93,    -1,    93,    10,     6,    -1,     6,    -1,     7,    11,
      -1,     7,    95,    11,    -1,     1,    11,    -1,     1,    95,
      11,    -1,     7,     1,    -1,     7,    95,     1,    -1,    95,
      14,    96,    -1,    14,    96,    -1,    97,    60,    -1,    98,
      -1,    89,    -1,    97,     1,    -1,   134,     6,    -1,    52,
       6,    -1,    51,     6,    -1,    52,    51,     6,    -1,    51,
      52,     6,    -1,    52,     1,    52,     6,    -1,    51,     1,
      51,     6,    -1,     6,    -1,   134,     6,    15,   151,    -1,
      52,     6,    15,   151,    -1,    51,     6,    15,   151,    -1,
      52,    51,     6,    15,   151,    -1,    51,    52,     6,    15,
     151,    -1,    52,     1,    52,     6,    15,   151,    -1,    51,
       1,    51,     6,    15,   151,    -1,     6,    15,   151,    -1,
     134,    52,     6,    -1,   134,    51,     6,    -1,   134,    52,
      51,     6,    -1,   134,    51,    52,     6,    -1,   134,    52,
       1,    52,     6,    -1,   134,    51,     1,    51,     6,    -1,
      52,   134,     6,    -1,    52,    51,   134,     6,    -1,    51,
      52,   134,     6,    -1,    52,     1,    52,   134,     6,    -1,
      51,     1,    51,   134,     6,    -1,   134,    52,     6,    15,
     151,    -1,   134,    51,     6,    15,   151,    -1,   134,    52,
      51,     6,    15,   151,    -1,   134,    51,    52,     6,    15,
     151,    -1,   134,    52,     1,    52,     6,    15,   151,    -1,
     134,    51,     1,    51,     6,    15,   151,    -1,    52,   134,
       6,    15,   151,    -1,    51,   134,     6,    15,   151,    -1,
      52,    51,   134,     6,    15,   151,    -1,    51,    52,   134,
       6,    15,   151,    -1,    52,     1,    52,   134,     6,    15,
     151,    -1,    51,     1,    51,   134,     6,    15,   151,    -1,
      52,   134,    51,     6,    15,   151,    -1,    51,   134,    52,
       6,    15,   151,    -1,    52,   134,    52,     1,     6,    15,
     151,    -1,    51,   134,    51,     1,     6,    15,   151,    -1,
     134,     6,     6,     1,    -1,     6,     6,     1,    -1,    99,
     105,    -1,   134,    99,   105,    -1,    52,    99,   105,    -1,
      51,    99,   105,    -1,   134,    52,    99,   105,    -1,   134,
      51,    99,   105,    -1,    52,   134,    99,   105,    -1,    51,
     134,    99,   105,    -1,    52,   134,    51,    99,   105,    -1,
      51,   134,    52,    99,   105,    -1,    52,    51,   134,    99,
     105,    -1,    51,    52,   134,    99,   105,    -1,    51,   134,
      51,     1,    99,   105,    -1,    52,   134,    52,     1,    99,
     105,    -1,    52,    52,     1,   134,    99,   105,    -1,    51,
      51,     1,   134,    99,   105,    -1,   134,    51,     1,    51,
      99,   105,    -1,   134,    52,     1,    52,    99,   105,    -1,
       6,    64,   100,     8,    -1,     6,    64,     6,     8,    -1,
       6,    64,     8,    -1,     1,    64,   100,     8,    -1,     1,
      64,     6,     8,    -1,     6,     1,   100,     8,    -1,     6,
       1,     6,     8,    -1,     6,    64,   100,     1,    -1,     6,
      64,     6,     1,    -1,   101,    -1,   103,    -1,   101,     9,
     103,    -1,   101,     9,   102,    -1,     6,     9,   102,    -1,
     101,     9,     6,    -1,     6,     9,     6,    -1,   102,    -1,
      16,     6,    -1,    16,    16,     6,    -1,     6,    16,     1,
      -1,     6,    16,    16,     1,    -1,   103,     9,   104,    -1,
     104,    -1,   103,     9,   101,     1,    -1,   103,     9,     6,
       1,    -1,     6,    15,   151,    -1,    16,     6,    15,   151,
      -1,    16,    16,     6,    15,   151,    -1,     6,    16,     1,
      16,    15,   151,    -1,     6,    16,     1,    15,   151,    -1,
       7,    11,    -1,     7,   106,    11,    -1,     1,    11,    -1,
       7,     1,    -1,     1,   106,    11,    -1,     7,   106,     1,
      -1,   106,   107,    -1,   107,    -1,   108,    -1,   112,    -1,
     114,    -1,   119,    -1,   122,    -1,   105,    -1,   123,    60,
      -1,   123,     1,    -1,     6,    60,    -1,     6,    10,     6,
      60,    -1,     6,     9,     6,    10,     6,    10,     6,    60,
      -1,     6,    10,     6,     9,     6,    10,     6,    10,     6,
      60,    -1,   110,   107,    -1,   110,   107,    17,   107,    -1,
     110,   107,     1,   107,    -1,   110,   107,   109,    -1,   110,
     107,   109,    17,   107,    -1,   111,   107,   109,    -1,   111,
     107,    -1,   111,     1,    -1,    18,   151,    -1,    19,   151,
      -1,     1,     6,   151,    -1,   113,   107,    -1,    20,   151,
      -1,     1,     6,   151,    -1,   115,   107,    -1,    21,   118,
      22,    91,    -1,    21,   118,    22,   145,    -1,    21,     6,
       9,     6,    22,    91,    -1,    21,     6,     9,     6,    22,
     145,    -1,    21,     6,    22,    91,    -1,    21,     6,    22,
     145,    -1,     6,     1,     6,    22,    91,    -1,     6,     1,
       6,    22,   145,    -1,     6,     1,   118,    22,    91,    -1,
       6,     1,   118,    22,   145,    -1,    21,     6,     1,    91,
      -1,    21,     6,     1,   145,    -1,    21,   118,     1,    91,
      -1,    21,   118,     1,   145,    -1,   116,     9,   117,    -1,
       6,     9,   116,    -1,     6,     9,     6,    -1,     6,     9,
       6,    10,     6,    -1,     6,    10,     6,     9,   116,    -1,
       6,    10,     6,     9,     6,    -1,     6,    10,     6,     9,
       6,    10,     6,    -1,   117,    -1,   117,    10,     6,    -1,
       6,    10,     6,    10,     6,    -1,   118,     9,   135,    -1,
       6,     9,     6,     9,   135,    -1,   118,     9,     6,    -1,
       6,     9,     6,     9,     6,    -1,     6,     9,   135,    -1,
     135,    -1,    23,   107,     7,   121,    11,    -1,    23,   107,
       7,   120,    11,    -1,    24,   105,    -1,    59,   107,    -1,
      59,   151,   107,    -1,    26,   151,    -1,    26,   151,    27,
     135,    -1,    91,    -1,   124,    -1,   126,    -1,    62,    -1,
     127,    -1,   130,    -1,   128,    -1,   129,    -1,   133,    -1,
      67,    -1,    68,    -1,   116,    -1,   131,    -1,    28,   151,
      -1,    28,   151,     9,   151,    -1,    91,    -1,   144,    -1,
     145,    -1,   141,    -1,   118,    15,   125,    -1,   153,    15,
     125,    -1,   153,    38,    91,    39,    15,   125,    -1,   153,
      38,    39,    15,   125,    -1,     6,     9,     6,    15,   125,
      -1,    30,   118,    -1,    30,     6,     9,     6,    -1,    30,
       6,    -1,    30,     6,    38,   151,    39,    -1,    30,     6,
      38,   151,     7,   151,    39,    -1,    30,     6,    38,     7,
      39,    -1,    30,   118,    38,   151,    39,    -1,    30,   118,
      38,   151,     7,   151,    39,    -1,    30,   118,    38,     7,
      39,    -1,    31,    -1,    31,    91,    -1,   148,    -1,    32,
      91,    -1,    32,   118,    -1,    32,    55,    55,    91,    -1,
       6,     1,    91,    -1,     6,    55,    55,    91,    -1,    33,
     132,    -1,    33,     1,    -1,     6,     9,   132,    -1,     6,
      -1,    34,    -1,    34,   151,    -1,    34,   151,     9,   151,
      -1,    34,   151,     9,     1,    -1,     6,     1,   151,     9,
     151,    -1,    35,    -1,    36,    -1,    37,    -1,    64,   118,
       8,    -1,    64,     6,     9,     6,     8,    -1,    64,     6,
       8,    -1,    38,   118,    39,    -1,    38,     6,     9,     6,
      39,    -1,    38,     6,    39,    -1,   136,    -1,   149,    -1,
     137,    10,     6,    -1,     6,    10,     6,    -1,   138,    -1,
     136,    -1,   149,    -1,   150,    -1,   140,    -1,   139,    -1,
      65,    -1,    66,    -1,    69,    -1,    70,    -1,    63,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   141,    -1,
      12,    13,    -1,    12,   142,    13,    -1,   142,     9,   143,
      -1,   142,     9,    -1,   143,    -1,   151,     7,   151,    -1,
      64,    91,     8,    -1,    64,     8,    -1,     1,     8,    -1,
      64,     1,    -1,     1,   151,     8,    -1,    64,    91,     1,
      -1,    38,    91,    39,    -1,    38,    39,    -1,    40,    91,
      40,    -1,    64,   148,     8,    -1,    41,    -1,    41,    91,
      -1,    42,    38,    91,    39,    -1,    42,    38,   101,    39,
      -1,    42,    38,     6,    39,    -1,     1,     6,    38,     6,
      39,    -1,   152,    -1,   139,    -1,   151,   155,   151,    -1,
     154,    -1,     1,   151,   151,    -1,   151,    29,   151,    -1,
     151,    50,   151,    -1,   151,    53,   151,    -1,   151,    54,
     151,    -1,   151,    55,   151,    -1,   151,    56,   151,    -1,
       6,    -1,   153,    10,     6,    -1,   153,    -1,   153,   144,
      -1,   153,    38,   151,    39,    -1,   153,    38,   151,     7,
     151,    39,    -1,   153,    38,     7,    39,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    43,    -1,    45,    -1,
      44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   101,   101,   108,   111,   119,   120,   125,   126,   129,
     132,   137,   143,   149,   155,   161,   167,   170,   173,   179,
     185,   191,   197,   200,   203,   209,   215,   221,   227,   231,
     235,   241,   247,   251,   255,   260,   266,   272,   278,   284,
     290,   293,   296,   302,   308,   314,   320,   323,   326,   332,
     338,   344,   350,   354,   358,   364,   370,   374,   378,   383,
     389,   395,   401,   407,   413,   416,   419,   425,   431,   437,
     443,   446,   449,   455,   461,   467,   473,   477,   481,   487,
     493,   497,   501,   506,   511,   518,   519,   522,   529,   538,
     542,   550,   554,   557,   563,   570,   576,   584,   585,   588,
     589,   590,   591,   597,   603,   604,   605,   606,   607,   611,
     615,   619,   624,   625,   626,   627,   628,   632,   636,   640,
     641,   642,   643,   644,   648,   652,   653,   654,   655,   659,
     663,   664,   665,   666,   667,   671,   675,   676,   677,   678,
     679,   683,   687,   688,   689,   693,   697,   701,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   723,   727,   731,   735,   739,   745,   746,   747,   748,
     752,   756,   760,   764,   768,   774,   775,   776,   778,   779,
     780,   781,   782,   785,   791,   792,   796,   803,   804,   805,
     809,   815,   816,   822,   823,   827,   833,   834,   835,   839,
     843,   847,   853,   854,   857,   858,   859,   860,   861,   862,
     863,   864,   868,   869,   870,   871,   874,   875,   876,   880,
     881,   884,   885,   886,   892,   895,   896,   902,   907,   908,
     914,   917,   918,   919,   920,   921,   922,   923,   927,   931,
     935,   939,   943,   947,   951,   958,   959,   960,   961,   962,
     963,   964,   965,   969,   970,   974,   975,   976,   977,   978,
     979,   982,   983,   986,   989,   990,   993,   994,   997,   998,
     999,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1013,  1014,  1016,  1017,  1018,  1019,  1022,  1023,  1024,
    1025,  1026,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,  1043,  1044,  1047,  1050,  1051,  1052,  1053,  1057,  1062,
    1063,  1069,  1070,  1073,  1074,  1075,  1076,  1080,  1086,  1087,
    1088,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1103,
    1104,  1107,  1108,  1109,  1110,  1113,  1114,  1117,  1118,  1119,
    1120,  1121,  1124,  1125,  1126,  1127,  1128,  1131,  1132,  1134,
    1135,  1136,  1138,  1141,  1142,  1143,  1147,  1151,  1155,  1162,
    1163,  1166,  1169,  1172,  1173,  1176,  1180,  1181,  1182,  1185,
    1186,  1187,  1188,  1189,  1195,  1196,  1197,  1198,  1199,  1200,
    1202,  1203,  1212,  1213,  1214,  1215,  1216,  1220,  1221,  1222,
    1223,  1224,  1225,  1226
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
  "PRINT", "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D",
  "CLOSE_D", "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS",
  "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL", "STATIC", "LESS_THAN",
  "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT",
  "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE",
  "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE", "FLOAT_VALUE",
  "stmt_1_2", "stmt_11", "stmt_10", "stmt_9", "stmt_7", "stmt_6", "stmt_5",
  "stmt_4", "stmt_3", "stmt_2", "stmt_1", "stmt_8", "MULTI", "$accept",
  "programes", "program", "import_stmt", "unit", "class_decl", "class_h",
  "expr_list", "unit_list", "unit_import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "arguments",
  "args_list", "arg", "default_args_list", "default_arg", "block_stmt",
  "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header", "elif_header",
  "while_stmt", "while_header", "for_stmt", "for_header", "import_list",
  "import", "target_list", "try_stmt", "finally_stmt", "except_stmt",
  "with_stmt", "simple_stmt_list", "assert_stmt", "left_assignment_side",
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
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   109,   109,   109,   110,   111,   111,   112,   113,   113,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   140,   140,   141,   141,   142,
     142,   142,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   147,   148,   148,   149,   150,   150,   150,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   155,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     2,     1,     2,
       2,     3,     3,     3,     4,     4,     5,     5,     4,     4,
       5,     5,     6,     6,     4,     4,     5,     5,     5,     5,
       5,     5,     5,     5,     4,     5,     5,     5,     6,     6,
       7,     7,     6,     6,     7,     7,     8,     8,     6,     6,
       7,     7,     7,     7,     7,     7,     7,     7,     5,     6,
       6,     6,     7,     7,     8,     8,     7,     7,     8,     8,
       9,     9,     7,     7,     8,     8,     8,     8,     8,     8,
       8,     8,     2,     3,     2,     3,     1,     3,     1,     3,
       1,     2,     3,     2,     3,     2,     3,     3,     2,     2,
       1,     1,     2,     2,     2,     2,     3,     3,     4,     4,
       1,     4,     4,     4,     5,     5,     6,     6,     3,     3,
       3,     4,     4,     5,     5,     3,     4,     4,     5,     5,
       5,     5,     6,     6,     7,     7,     5,     5,     6,     6,
       7,     7,     6,     6,     7,     7,     4,     3,     2,     3,
       3,     3,     4,     4,     4,     4,     5,     5,     5,     5,
       6,     6,     6,     6,     6,     6,     4,     4,     3,     4,
       4,     4,     4,     4,     4,     1,     1,     3,     3,     3,
       3,     3,     1,     2,     3,     3,     4,     3,     1,     4,
       4,     3,     4,     5,     6,     5,     2,     3,     2,     2,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     4,     8,    10,     2,     4,     4,     3,
       5,     3,     2,     2,     2,     2,     3,     2,     2,     3,
       2,     4,     4,     6,     6,     4,     4,     5,     5,     5,
       5,     4,     4,     4,     4,     3,     3,     3,     5,     5,
       5,     7,     1,     3,     5,     3,     5,     3,     5,     3,
       1,     5,     5,     2,     2,     3,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     2,     4,     2,     5,     7,     5,     5,     7,
       5,     1,     2,     1,     2,     2,     4,     3,     4,     2,
       2,     3,     1,     1,     2,     4,     4,     5,     1,     1,
       1,     3,     5,     3,     3,     5,     3,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       2,     1,     3,     3,     2,     2,     2,     3,     3,     3,
       2,     3,     3,     1,     2,     4,     4,     4,     5,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     2,     4,     6,     4,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   318,   319,   320,     0,     0,     0,
       0,     0,     4,     8,     0,     0,    90,     0,    88,    82,
      10,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     7,     0,     0,     9,     0,     0,     0,
       6,     0,     5,     0,     0,    83,     0,    13,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
      93,     0,     0,    95,    91,     0,    11,     0,     0,     0,
       0,     0,     0,    87,    89,    34,     0,     0,     0,     0,
      15,     0,    19,     0,     0,     0,     0,     0,    14,     0,
      18,     0,     0,     0,   110,     0,     0,   101,    98,     0,
     100,     0,     0,    94,     0,    96,    92,     0,    25,     0,
       0,    24,     0,     0,    58,    17,     0,    37,     0,     0,
      21,     0,    32,    30,    16,     0,    36,     0,     0,    20,
       0,    31,    33,     0,    84,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
     102,    99,     0,     0,   148,   103,     0,     0,     0,    97,
      35,     0,     0,    29,    27,     0,    26,    28,     0,    23,
      61,    39,     0,     0,    43,     0,     0,     0,     0,    22,
      60,    38,     0,     0,    42,     0,     0,     0,     0,     0,
       0,   175,   182,   176,   188,    83,     0,   147,     0,   380,
     341,   337,   338,   339,   340,   370,   118,   369,     0,   372,
       0,   168,     0,     0,     0,     0,     0,   107,     0,   151,
       0,     0,     0,     0,     0,     0,   106,     0,     0,   150,
     125,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   301,     0,     0,   313,     0,
       0,   363,     0,   271,     0,   277,   278,   268,   209,     0,
     203,   204,     0,   205,     0,   206,     0,   279,   252,     0,
     207,   208,     0,   269,   270,   272,   274,   275,   273,   280,
     276,   260,   327,     0,   331,   370,   335,   346,   342,   343,
     344,   345,   303,   328,   334,    86,     0,   199,   196,     0,
       0,     0,     0,   120,     0,     0,     0,   119,     0,     0,
     149,    59,    49,     0,     0,     0,    48,     0,     0,     0,
      41,     0,     0,    63,    45,     0,    67,    57,     0,    55,
       0,    40,     0,     0,    62,    44,     0,    66,    54,     0,
      56,     0,   170,     0,     0,     0,   183,     0,   169,     0,
       0,   172,   171,     0,     0,   391,   393,   392,   387,   388,
     389,   390,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   383,   174,   167,   173,   166,   109,     0,     0,
     113,     0,     0,   127,     0,     0,     0,     0,     0,   155,
     108,     0,   112,     0,   126,     0,     0,     0,     0,     0,
       0,   154,     0,   355,     0,     0,     0,     0,     0,   212,
     347,     0,   351,     0,   224,   228,     0,     0,     0,   336,
       0,   266,   281,   294,   292,   302,     0,   380,     0,   304,
     305,   310,   312,   309,   314,   380,   360,     0,     0,     0,
     364,     0,     0,   380,   354,     0,     0,     0,     0,   200,
     202,     0,   227,   230,     0,     0,     0,     0,   211,   210,
       0,     0,     0,   201,   197,   146,   111,     0,     0,   122,
     153,     0,     0,   121,   152,    73,    53,     0,    51,     0,
      72,    50,     0,    52,     0,    65,    47,     0,    69,    81,
      78,    64,    46,     0,    68,    79,    80,   181,     0,   179,
     191,   185,     0,     0,   184,   180,   178,   177,     0,     0,
     187,   373,   374,   375,   376,   377,   378,   379,   371,     0,
     381,     0,     0,   356,     0,   129,     0,     0,   115,     0,
     159,   137,     0,     0,     0,   157,     0,   128,   114,     0,
     158,     0,   136,     0,   156,     0,     0,     0,     0,   229,
     357,   380,   307,     0,    86,   247,   246,   259,   330,     0,
       0,   348,     0,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,   359,   324,   361,   380,     0,     0,   323,
       0,   358,   353,   321,   362,    85,     0,     0,     0,   219,
       0,     0,   245,   253,   257,   255,     0,     0,   283,   287,
     286,   284,   285,   329,   288,     0,     0,    86,   124,     0,
     131,     0,   123,     0,   130,     0,    77,    75,    74,    76,
      71,    70,     0,   183,     0,     0,     0,   186,   192,     0,
     190,   189,     0,   386,     0,   384,   117,     0,   163,   139,
       0,   160,   143,   116,     0,   138,   162,   142,     0,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   308,   349,   352,   241,   242,     0,   330,   235,   236,
     243,   244,   231,   232,     0,     0,     0,     0,     0,   267,
     282,   293,     0,     0,     0,     0,     0,   306,   311,     0,
     315,     0,   367,   365,   366,     0,     0,   218,   217,   225,
       0,     0,     0,     0,     0,     0,     0,   164,   133,     0,
     165,   132,   185,   184,   195,     0,   193,   180,     0,   141,
     145,   140,   144,   368,   237,   238,   239,   240,   317,   247,
     256,   248,   291,   250,   249,   254,     0,     0,   263,   264,
       0,   262,   261,   297,     0,   295,   300,     0,   298,   325,
     322,   226,   220,     0,   221,     0,   290,     0,   135,   134,
     194,   385,     0,     0,     0,     0,     0,   258,   233,   234,
     265,     0,     0,     0,   289,   247,   248,   250,   254,   251,
     296,   299,     0,     0,   214,     0,   248,   251,   254,   215
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,   257,    17,    18,
      36,    62,    98,    99,   100,   101,   196,   191,   192,   193,
     194,   258,   259,   260,   261,   599,   262,   600,   263,   264,
     265,   266,   267,   268,   269,   270,   686,   687,   271,   272,
     273,   609,   274,   275,   276,   277,   278,   279,   433,   280,
      15,   281,   282,   283,   284,   205,   286,   287,   411,   412,
     288,   289,   290,   291,   292,   293,   294,   295,   207,   208,
     209,   367
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -457
static const short int yypact[] =
{
    1769,    71,   427,    31,  -457,  -457,  -457,   525,   459,   109,
    1733,  1803,  -457,  -457,    85,   170,  -457,    21,   137,  -457,
     161,   248,   244,   283,   134,   277,   255,   324,   240,   314,
    -457,  -457,  -457,  -457,   190,   447,  -457,   333,   332,   357,
    -457,    71,  -457,   393,   350,  -457,   569,   407,   513,   493,
     551,   559,   566,   666,   521,   573,   583,   590,   595,   598,
    -457,   692,   567,  -457,  -457,   506,   552,   629,   638,   644,
     662,   673,   678,   137,  -457,  -457,   383,   683,   700,   446,
     632,   709,   686,   757,   773,   780,   704,   519,   725,   815,
     776,   826,   846,   811,     6,  1628,  1698,  -457,  -457,    15,
    -457,   155,   112,  -457,   692,  -457,  -457,   684,   822,   902,
     905,   881,   941,   951,  -457,   895,   973,  -457,   422,   741,
     934,   769,   937,   945,   948,   975,  -457,   497,   779,   953,
     796,   965,   985,   200,   257,  1026,  1419,   275,   138,    24,
    1050,   760,   155,   273,    78,    26,  1219,  1067,   155,   298,
    -457,  -457,  1410,  1480,  -457,    18,   309,   367,   155,  -457,
    -457,   650,   797,  1011,  1015,   801,  1018,  1023,   802,  1035,
    -457,  -457,   691,   837,  -457,   717,   840,   841,   847,  1047,
    -457,  -457,   727,   866,  -457,   746,   879,   901,   526,   364,
    1089,  1109,  -457,  1112,  -457,   582,  1131,  -457,  1419,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  2666,  -457,   850,  -457,
     426,  -457,   150,  1289,   390,  1419,   587,  1137,   389,  -457,
      41,    48,   625,   155,  1528,  1419,  1142,   647,   587,  -457,
      46,   747,   243,   155,   750,   990,  -457,   503,  1419,  1419,
     676,  1690,  1419,  1419,  2126,  1460,   544,   491,  1460,   668,
    1419,  1460,  1108,  -457,   172,  -457,  -457,  1145,  -457,  1550,
    -457,  -457,  1690,  -457,  1690,  -457,  1690,  1150,  1157,   177,
    -457,  -457,    25,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  1159,  1163,  -457,  1165,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  1173,  -457,  2666,   920,  1340,  -457,  1620,
    1183,  1419,   267,   123,   370,   155,   131,   139,   788,   155,
    -457,  -457,  -457,   816,   916,   917,  -457,   820,   925,   928,
    -457,   827,   931,  -457,  -457,   857,  -457,  -457,   893,  -457,
     947,  -457,   963,   936,  -457,  -457,   969,  -457,  -457,   984,
    -457,   986,  -457,   416,  1419,    49,  1170,  1180,  -457,   451,
     460,  -457,  -457,  2070,  1419,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  1419,  1419,  1419,  1419,  1419,  1419,  1111,  1182,
     474,  1181,  -457,  -457,  -457,  -457,  -457,  1175,   998,   582,
    2666,   545,  1419,   176,   155,  1419,   547,   192,   155,  -457,
    1176,  1001,  2666,  1419,   232,   155,   545,  1419,   238,   155,
     636,  -457,  1872,  -457,  1971,  2136,  2144,  1197,  1158,  -457,
    -457,   437,  -457,  2448,  2666,  2666,  1251,   403,   299,  -457,
    1207,  2578,  2498,   214,    28,  1145,  1251,  1213,  1172,  1145,
    1220,  -457,  1226,  -457,  2526,    20,  -457,    75,   106,    36,
    1145,  1139,    30,  1006,  -457,   492,  1017,  1228,  1419,  -457,
    -457,  1200,  -457,  -457,  1231,  1233,  2182,   351,  -457,  -457,
    1237,   351,   316,  1340,  -457,  -457,  2666,   645,  1419,  1230,
    -457,   656,  1419,  1234,  -457,  -457,  -457,  1033,  -457,  1039,
    -457,  -457,  1054,  -457,  1056,  -457,  -457,  1062,  -457,  -457,
    -457,  -457,  -457,  1065,  -457,  -457,  -457,  1232,   507,  -457,
    2666,  1061,  1252,  1419,  1243,  1069,  -457,  1112,   468,   242,
    -457,  2666,   752,   752,   752,   752,   752,   752,  2666,  2476,
    -457,  1221,  2364,  1489,  1419,  1246,    19,   155,  2666,  1419,
    -457,  2666,   249,   155,  1419,  -457,  1419,  1258,  2666,  1419,
    -457,   155,  2666,  1419,  -457,   269,   155,  2136,  1274,  2666,
    -457,   331,  1145,   401,  2548,   602,  1275,  -457,    51,  1419,
     654,  -457,  1419,  1245,   768,  2192,  1279,   768,   768,   768,
       4,  2225,  1419,  2237,  1209,  1321,  2037,  2270,  1419,  1280,
    1530,  2280,  -457,  -457,  -457,  -457,    39,   120,   128,  -457,
    2313,  -457,  -457,  -457,  -457,  2666,  1760,  1690,  1419,  1282,
    1830,  1287,  1157,  -457,  1295,  -457,  1111,  1349,  1145,  -457,
    -457,  -457,  -457,  -457,  -457,  1277,   143,  2364,   270,   155,
    2666,  1419,   271,   155,  2666,  1419,  -457,  -457,  -457,  -457,
    -457,  -457,    56,  -457,  1300,  1419,  1292,  -457,  2666,  1419,
    -457,  -457,   515,  -457,  1419,  -457,  2666,  1419,  -457,  2666,
    1419,  -457,  2666,  2666,  1419,  2666,  -457,  2666,  1419,  -457,
    2004,  1276,   768,   768,  1419,  2325,  1303,   351,  1307,  1312,
    -457,  1145,  -457,  2666,  1145,  -457,   464,  -457,  1145,  -457,
    1145,  -457,  1145,  -457,   155,  1690,  1308,  1318,  1295,  -457,
    2666,  1086,  1284,  2397,  1291,  2425,  1086,  1145,  -457,  1393,
    2666,   110,  -457,  -457,  -457,   703,  1938,  -457,  -457,  2666,
    1690,  1130,  1270,  1325,   351,  1327,  1419,  -457,  2666,  1419,
    -457,  2666,  -457,  -457,  2666,  1419,  2666,  1232,  2600,  2666,
    2666,  2666,  2666,  -457,  1145,  -457,  1145,  -457,  2666,   610,
    -457,   630,  -457,  1123,  1275,  -457,  2358,   768,  -457,  -457,
    1060,  -457,  -457,  -457,  1419,  -457,  -457,  1419,  -457,  -457,
    -457,  2666,  -457,  1337,  -457,  1334,  -457,   351,  2666,  2666,
    2666,  -457,  1339,  1343,  1347,  1348,  1350,  1295,  1145,  -457,
    -457,  2622,  2644,  1419,  -457,  1125,   630,  1134,  1297,  1156,
    -457,  -457,  1353,  1356,  -457,  1358,  1169,  1169,  1297,  -457
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -457,  -457,  -457,  -457,  1355,    -7,  -457,    97,   508,  1326,
    -457,  1341,  1265,  -457,  -457,   -22,   399,  -333,  -341,  1028,
    1025,   -90,  1236,  -195,  -457,   667,  -457,  -457,  -457,  -457,
    -457,  -457,  -403,   929,  -231,  -457,  -457,  -457,  -457,  -457,
    -457,  -456,  -457,  -457,  -457,  -457,  -457,  -457,   806,  -457,
     626,  -405,  -457,  -457,  -457,  -118,  -457,  -447,  -457,   832,
    -202,  -370,  -457,  -457,  1141,  -457,  -457,  -136,  -457,  -109,
    -457,  -457
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -383
static const short int yytable[] =
{
     206,   557,   499,   556,    33,   614,   372,  -383,   506,   418,
     610,   154,   135,   424,   610,   430,   150,   509,   438,  -383,
     214,   136,    40,   446,   300,  -383,   458,  -383,   684,   581,
      41,   198,    21,   301,   285,   285,   563,   456,   403,   215,
    -356,   225,   214,   296,   296,   448,   420,  -383,   343,   386,
     501,   605,   219,    83,    97,   632,   385,   722,   229,   582,
    -383,   397,   353,   685,   450,   502,   575,   451,   310,   452,
     137,   453,   502,   142,   148,   151,   585,    16,   702,   380,
     158,    42,   137,   137,   448,   459,    34,   612,   137,   392,
     137,   612,    35,   200,   372,   201,   202,    97,   404,   203,
     204,   413,   414,   415,   450,   137,   421,   422,   588,    30,
     137,   670,   434,    93,   583,   456,   285,    37,   155,   746,
     566,   223,   419,   285,  -383,   296,   419,   233,   285,   448,
     224,   285,   296,   389,   305,   309,   285,   642,   468,    48,
    -383,   285,   133,   401,   285,   584,   285,    43,   285,   759,
     296,   375,   448,   296,   472,   296,   152,   296,   376,   703,
     557,   404,   153,   156,   157,   466,   689,   704,   557,     4,
       5,     6,   557,   442,   553,    37,   557,  -383,   443,   285,
     444,   285,   715,   471,   237,   557,   456,   137,   296,   213,
     296,   529,   457,   214,   675,   133,   384,   679,   681,   683,
     388,    60,   133,   137,    61,   395,   188,   534,   500,   399,
     249,   742,   250,   251,   252,   470,   189,   511,   512,   474,
     610,    38,    39,   573,   566,    44,   513,   514,   515,   516,
     517,   518,   519,  -383,   522,   200,   254,   201,   202,   214,
     137,   203,   204,   641,   400,    55,   528,   539,    92,   531,
     214,   642,   574,   543,    45,   611,   137,   538,   766,   611,
     740,   542,   556,   195,   650,   744,   549,   610,   511,   554,
     214,  -383,  -383,   189,    93,     4,     5,     6,    50,   220,
     519,   210,    50,   211,   658,   716,   719,   285,   419,    47,
     576,   189,   735,   737,   530,    46,   137,   612,   535,    93,
     568,   506,   137,    57,   230,   540,   576,    53,   456,   544,
     302,   784,   595,   137,    67,   303,   553,   198,   467,    57,
     610,   569,   199,   521,   221,   222,   617,   404,    51,    52,
      54,   133,   620,   137,   137,   137,   624,    67,   419,    66,
     577,   740,   425,   429,   612,   285,   437,   439,   440,   231,
     232,   445,   606,   662,   296,   615,    16,   199,    75,   527,
      68,   304,    70,   237,   533,    58,    59,   638,   306,   556,
     346,   744,    70,   307,   541,   110,   469,   779,   546,   200,
     347,   201,   202,    68,    69,   203,   204,   353,   646,   607,
      93,   114,    41,   649,    81,   383,   379,   612,   652,    74,
     653,   707,   708,   655,   564,   712,   189,   657,    71,    72,
     456,   660,   565,   566,   200,   371,   201,   202,   308,    72,
     203,   204,   497,   663,   413,   567,   673,   373,    19,   285,
     170,    41,   498,    20,   374,   343,   690,   648,   693,   695,
     511,   344,   345,   651,   700,   619,   560,   419,    63,   623,
     561,   656,    16,   419,   117,   419,   659,   505,    64,   419,
      26,    61,   709,   419,    27,   611,   508,   189,   445,   640,
     576,    79,   419,   746,   566,   198,   189,   343,   285,   285,
     199,   521,   285,   344,   345,   718,   747,   296,   296,   721,
     749,   296,   431,   591,     4,     5,     6,   432,    81,   724,
     592,   448,   552,   726,   198,   180,    41,   105,   728,   199,
      28,   729,   611,   633,   730,   762,   410,   106,   731,    80,
     104,   727,   732,   634,   511,    16,    22,   126,   738,   717,
      23,   498,   190,   720,   342,   343,   212,   200,   587,   201,
     202,   344,   345,   203,   204,   426,    93,   419,    93,   750,
     427,   526,    76,   532,   608,   780,   237,    82,   608,   616,
       4,     5,     6,   353,    83,   611,   200,   285,   201,   202,
     761,    84,   203,   204,    77,   404,   296,    24,   103,    88,
     768,   104,   249,   769,   250,    87,   252,   118,    89,   770,
     351,   343,   285,   285,   748,   127,    90,   344,   345,   428,
      91,   296,   296,    92,     4,     5,     6,   200,   254,   201,
     202,  -383,   666,   203,   204,   161,   107,   667,   781,  -383,
     773,   782,     4,     5,     6,  -258,    93,   172,   419,   175,
      84,   387,   285,    25,    29,   108,   182,    93,   185,  -383,
    -330,   296,   545,   109,   552,  -330,    93,   761,    93,   110,
      49,   618,    89,   394,    56,   198,   671,    93,   311,    41,
     199,   674,   622,  -350,   678,   680,   682,  -350,   111,   426,
     313,    85,    78,   317,   435,   697,   321,   416,   112,    86,
     237,   325,   417,   113,   328,   330,   332,   102,   237,   115,
      16,   336,   160,    93,   339,   341,   119,     2,    94,   323,
      41,     4,     5,     6,   437,   116,   249,   436,   250,   125,
     252,   760,   746,   566,   249,   120,   250,   200,   252,   201,
     202,   143,   149,   203,   204,   326,    41,     4,     5,     6,
     102,   200,   254,   201,   202,   334,    41,   203,   204,   200,
     254,   201,   202,    95,    96,   203,   204,    16,    93,   171,
     121,   234,    91,   398,   337,    41,   402,   153,   403,   734,
     736,   236,   237,   122,   608,    48,   217,   218,   238,   198,
     239,   240,   227,   241,   199,    16,   242,   174,   243,   123,
     244,   245,   246,   247,   248,    16,   124,   181,   249,   128,
     250,   251,   252,   112,   473,     4,     5,     6,   358,   359,
     360,   361,    16,    16,   184,   312,   607,    16,    16,   316,
     320,   608,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   129,   477,   479,   475,    41,   482,   484,   480,    41,
     487,   200,   131,   201,   202,   485,    41,   203,   204,   378,
     130,   493,   381,    16,   778,   324,    16,    16,   327,   329,
     391,   368,   132,    16,   396,   331,  -382,  -382,  -382,  -382,
     369,  -382,  -382,  -382,   608,   488,    41,  -382,  -382,  -382,
    -382,  -382,    16,  -382,   335,   133,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,    16,   162,   338,   370,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,   489,    41,  -382,  -382,  -382,  -382,    16,   163,   340,
    -382,   164,  -382,  -382,   371,  -382,  -382,  -382,  -382,  -382,
    -382,   368,    16,    16,   476,   478,  -382,  -382,  -382,  -382,
     369,    16,  -382,   481,    16,   461,   483,    16,  -382,   486,
    -382,  -382,    16,  -382,   492,   165,  -382,   166,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,   490,    41,   167,   462,   168,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,   491,    41,  -382,  -382,  -382,  -382,   494,    41,   169,
    -382,   179,  -382,  -382,   371,  -382,  -382,  -382,  -382,  -382,
    -382,   405,   495,    41,   496,    41,  -380,  -380,   173,   406,
    -380,   176,  -380,   116,   525,  -380,   125,   537,  -380,   177,
    -380,  -380,   178,  -380,   589,   590,  -380,   183,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,   593,   456,   197,  -380,   186,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,   626,    41,  -380,  -380,   408,  -380,   627,    41,   187,
     409,   216,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,   234,   628,    41,   629,    41,   235,   153,   228,   -86,
     630,    41,   237,   631,    41,   314,   635,   636,   238,   315,
     239,   240,   318,   241,   344,   345,   242,   319,   243,   354,
     244,   245,   246,   247,   248,   746,   566,   348,   249,   322,
     250,   251,   252,   355,   356,   357,   358,   359,   360,   361,
     362,   333,   198,   363,   364,   365,   366,   199,   349,   403,
     -86,   350,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   234,  -383,   776,  -383,   792,   402,   153,   403,   352,
     198,   236,   237,  -383,   793,   586,   441,  -223,   238,  -223,
     239,   240,   382,   241,   448,   498,   242,   393,   243,   454,
     244,   245,   246,   247,   248,  -383,   795,   455,   249,  -332,
     250,   251,   252,   460,   200,  -336,   201,   202,  -383,   669,
     203,   204,   523,  -333,   465,   503,   504,   199,   520,   444,
     524,   536,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   596,   200,   558,   201,   202,  -216,  -216,   203,   204,
     198,  -216,  -216,   559,   570,   199,   692,   597,  -216,   598,
    -216,  -216,   577,  -216,    55,   226,  -216,   578,  -216,   456,
    -216,  -216,  -216,  -216,  -216,   579,   594,   601,  -216,   603,
    -216,  -216,  -216,   613,   200,   621,   201,   202,   632,   625,
     203,   204,   198,   637,     4,     5,     6,   563,   639,   403,
     643,   647,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,   763,   200,   654,   201,   202,  -222,  -222,   203,   204,
     661,  -222,  -222,   548,  -383,   677,   432,  -222,  -222,   598,
    -222,  -222,   714,  -222,    77,   377,  -222,   713,  -222,   710,
    -222,  -222,  -222,  -222,  -222,   566,   723,   725,  -222,   741,
    -222,  -222,  -222,   743,   200,   733,   201,   202,   745,   751,
     203,   204,   198,   753,     4,     5,     6,   199,   694,   752,
     756,   765,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
    -222,  -383,   767,   783,   669,   785,  -383,  -383,   403,   786,
     198,  -383,  -383,   787,   788,   199,   789,  -383,  -383,   796,
    -383,  -383,   797,  -383,   798,    32,  -383,    73,  -383,   159,
    -383,  -383,  -383,  -383,  -383,   510,    65,   507,  -383,   764,
    -383,  -383,  -383,   602,   200,   698,   201,   202,   436,   299,
     203,   204,   672,     0,   198,   447,     0,     0,     0,   199,
       0,     0,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,   234,   200,     0,   201,   202,   235,   153,   203,   204,
     198,   236,   237,     0,     0,   199,     0,     0,   238,     0,
     239,   240,     0,   241,     0,     0,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,  -316,     0,     0,   200,     0,   201,   202,
       0,  -383,   203,   204,     0,     0,   199,     0,     0,     0,
       0,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   297,   200,     0,   201,   202,   235,   153,   203,   204,
    -383,   298,   237,     0,     0,  -383,     0,     0,   238,     0,
     239,   240,     0,   241,     0,     0,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,   200,     0,   201,   202,     0,     0,   203,
     204,   699,     0,    85,   390,     0,   199,     0,     0,     0,
       0,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   234,  -383,     0,  -383,  -383,   235,   153,  -383,  -383,
       0,   449,   237,     4,     5,     6,     0,     0,   238,     0,
     239,   240,     0,   241,     0,     0,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,   200,     0,   201,   202,     0,     0,   203,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   463,     0,     0,     0,     0,   235,   153,     0,   138,
       0,   464,   237,    23,   139,     0,     0,     0,   238,     0,
     239,   240,     0,   241,     0,     0,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,     4,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   234,     0,     0,     0,     0,   235,   153,     0,   144,
       0,     0,   237,    27,   145,     0,     0,     0,   238,     0,
     239,   240,     0,   241,     0,     0,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,     4,     5,     6,    31,     1,     2,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     147,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   234,     0,     0,     0,     0,   706,   153,     4,     5,
       6,     0,   237,     1,     2,     3,     0,     0,   238,     0,
     239,   240,     0,   241,     7,     8,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,     0,     4,     5,     6,     0,     2,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,   253,   200,   254,   201,   202,   255,   256,   203,
     204,   711,     0,     0,     0,     0,   235,   153,     4,     5,
       6,     0,   237,     0,     0,     0,     0,     0,   238,     0,
     239,   240,     0,   241,     7,     8,   242,     0,   243,     0,
     244,   245,   246,   247,   248,     0,     0,     0,   249,     0,
     250,   251,   252,   547,     0,     0,     0,     0,   199,     0,
    -380,   406,  -380,     0,     0,     0,     0,  -380,     0,     0,
       0,     0,   253,   200,   254,   201,   202,   255,   256,   203,
     204,  -380,     0,     0,     0,     0,     0,     0,     0,     0,
     548,     0,     0,     0,     0,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,     0,     0,  -380,  -380,   408,  -380,     0,
       0,     0,   409,     0,     0,   200,  -380,   201,   202,   547,
       0,   203,   204,     0,   199,     0,     0,   406,  -380,     0,
       0,     0,     0,  -380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -380,     0,     0,
       0,     0,   198,     0,     0,     0,  -380,   199,     0,   550,
     -86,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,     0,
       0,  -380,  -380,   408,  -380,     0,     0,     0,   409,     0,
     354,   200,  -380,   201,   202,   198,     0,   203,   204,     0,
     199,     0,     0,   664,   355,   356,   357,   358,   359,   360,
     361,   362,     0,     0,   363,   364,   365,   366,     0,     0,
       0,   -86,     0,   354,   200,     0,   201,   202,   198,     0,
     203,   204,     0,   199,     0,   550,     0,   355,   356,   357,
     358,   359,   360,   361,   362,     0,     0,   363,   364,   365,
     366,     0,     0,     0,   -86,     0,   354,   200,     0,   201,
     202,   198,     0,   203,   204,     0,   199,     0,     0,     0,
     355,   356,   357,   358,   359,   360,   361,   362,     0,     0,
     363,   364,   365,   366,     0,     0,     0,     0,     0,   354,
     200,     0,   201,   202,     0,     0,   203,   204,     0,     0,
       0,     0,     0,   355,   356,   357,   358,   359,   360,   361,
     362,     0,     0,   363,   364,   365,   366,   416,     0,     0,
       0,     0,   423,   200,     0,   201,   202,   426,   237,   203,
     204,     0,   551,     0,     0,   416,     0,     0,   237,     0,
     555,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,   249,     0,   250,     0,   252,     0,
       0,     0,     0,     0,   249,     0,   250,     0,   252,     0,
       0,     0,   249,   416,   250,     0,   252,     0,   604,   200,
     254,   201,   202,   416,   237,   203,   204,     0,   676,   200,
     254,   201,   202,     0,   237,   203,   204,   200,   254,   201,
     202,     0,     0,   203,   204,     0,     0,     0,     0,     0,
     249,     0,   250,     0,   252,     0,   416,     0,     0,     0,
     249,   688,   250,     0,   252,     0,     0,   237,   416,     0,
       0,     0,     0,   691,     0,   200,   254,   201,   202,   237,
       0,   203,   204,     0,     0,   200,   254,   201,   202,     0,
       0,   203,   204,   249,     0,   250,     0,   252,     0,     0,
       0,   416,     0,     0,     0,   249,   696,   250,     0,   252,
       0,   416,   237,     0,     0,     0,   701,     0,   200,   254,
     201,   202,   237,     0,   203,   204,     0,     0,     0,     0,
     200,   254,   201,   202,     0,     0,   203,   204,   249,     0,
     250,     0,   252,     0,   416,     0,     0,     0,   249,   705,
     250,     0,   252,     0,     0,   237,   416,     0,     0,     0,
       0,   739,     0,   200,   254,   201,   202,   237,     0,   203,
     204,     0,     0,   200,   254,   201,   202,     0,     0,   203,
     204,   249,     0,   250,     0,   252,     0,     0,     0,   416,
       0,     0,     0,   249,   777,   250,     0,   252,     0,     0,
     237,   644,     0,     0,     0,     0,   200,   254,   201,   202,
       0,     0,   203,   204,     0,     0,     0,     0,   200,   254,
     201,   202,     0,   354,   203,   204,   249,     0,   250,     0,
     252,     0,     0,   645,   754,     0,     0,   355,   356,   357,
     358,   359,   360,   361,   362,     0,     0,   363,   364,   365,
     366,   200,   254,   201,   202,     0,   354,   203,   204,     0,
       0,     0,   757,     0,     0,     0,   755,     0,     0,     0,
     355,   356,   357,   358,   359,   360,   361,   362,     0,     0,
     363,   364,   365,   366,   354,   562,     0,     0,     0,     0,
       0,     0,     0,     0,   758,     0,     0,     0,   355,   356,
     357,   358,   359,   360,   361,   362,     0,   354,   363,   364,
     365,   366,     0,     0,   550,     0,     0,     0,     0,     0,
       0,   355,   356,   357,   358,   359,   360,   361,   362,     0,
       0,   363,   364,   365,   366,   354,     0,   572,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   354,     0,   363,
     364,   365,   366,     0,     0,   580,     0,     0,     0,     0,
       0,   355,   356,   357,   358,   359,   360,   361,   362,     0,
       0,   363,   364,   365,   366,   354,     0,   664,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   354,     0,   363,
     364,   365,   366,     0,     0,     0,     0,     0,     0,     0,
       0,   355,   356,   357,   358,   359,   360,   361,   362,     0,
       0,   363,   364,   365,   366,   571,     0,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   354,
       0,   363,   364,   365,   366,     0,     0,     0,     0,   771,
       0,     0,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   354,     0,   363,   364,   365,   366,     0,     0,     0,
       0,   790,     0,     0,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   354,     0,   363,   364,   365,   366,     0,
       0,     0,     0,   791,     0,     0,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   354,     0,   363,   364,   365,
     366,     0,     0,     0,     0,     0,     0,     0,     0,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,   363,
     364,   365,   366
};

static const short int yycheck[] =
{
     136,   406,   343,   406,    11,   461,   208,     1,   349,   240,
     457,   101,     6,   244,   461,   246,     1,   350,   249,     1,
       1,    15,     1,   254,     6,     1,     1,     1,    24,     9,
       9,     1,     1,    15,   152,   153,     6,     9,     8,    15,
      10,    15,     1,   152,   153,     9,   241,     1,     9,     1,
       1,   456,   142,     5,    61,    16,    15,     1,   148,    39,
       9,    15,   198,    59,   259,    16,    38,   262,   158,   264,
      64,   266,    16,    95,    96,    60,    40,     6,    39,   215,
     102,    60,    64,    64,     9,    60,     1,   457,    64,   225,
      64,   461,     7,    63,   296,    65,    66,   104,   234,    69,
      70,   237,   238,   239,   299,    64,   242,   243,   441,     0,
      64,    60,   248,     1,    39,     9,   234,     5,     6,     9,
      10,   143,   240,   241,     1,   234,   244,   149,   246,     9,
      52,   249,   241,   223,   156,   157,   254,     9,    15,     5,
       1,   259,    64,   233,   262,    39,   264,    10,   266,    39,
     259,     1,     9,   262,    15,   264,     1,   266,     8,    39,
     565,   297,     7,    51,    52,   301,   571,    39,   573,    35,
      36,    37,   577,     1,   405,     5,   581,     1,     6,   297,
       8,   299,    39,    52,    12,   590,     9,    64,   297,    51,
     299,    15,    15,     1,   564,    64,   218,   567,   568,   569,
     222,    11,    64,    64,    14,   227,     6,    15,   344,   231,
      38,   667,    40,    41,    42,   305,    16,   353,   354,   309,
     667,    51,    52,     9,    10,    64,   362,   363,   364,   365,
     366,   367,   368,     1,   370,    63,    64,    65,    66,     1,
      64,    69,    70,     1,     1,     5,   382,    15,     5,   385,
       1,     9,    38,    15,     6,   457,    64,   393,   714,   461,
     665,   397,   665,     6,    15,   668,   402,   714,   404,   405,
       1,     1,     1,    16,     1,    35,    36,    37,     5,     6,
     416,     6,     5,     8,    15,    15,    15,   405,   406,     6,
     426,    16,   662,   663,   384,    51,    64,   667,   388,     1,
       1,   642,    64,     5,     6,   395,   442,    52,     9,   399,
       1,   767,   448,    64,     5,     6,   547,     1,    51,     5,
     767,    22,     6,     7,    51,    52,   462,   463,    51,    52,
       6,    64,   468,    64,    64,    64,   472,     5,   456,     6,
       9,   746,   245,   246,   714,   463,   249,   250,   251,    51,
      52,   254,     1,    22,   463,    39,     6,     6,     8,   381,
      51,    52,     5,    12,   386,    51,    52,   503,     1,   772,
       6,   774,     5,     6,   396,     5,     6,   747,   400,    63,
      16,    65,    66,    51,    52,    69,    70,   523,   524,    38,
       1,     8,     9,   529,     5,     6,     6,   767,   534,     6,
     536,   596,   597,   539,     1,   600,    16,   543,    51,    52,
       9,   547,     9,    10,    63,    64,    65,    66,    51,    52,
      69,    70,     6,    22,   560,    22,   562,     1,     1,   547,
       8,     9,    16,     6,     8,     9,   572,   527,   574,   575,
     576,    15,    16,   533,   580,   467,     9,   565,     1,   471,
      13,   541,     6,   571,     8,   573,   546,     6,    11,   577,
       1,    14,   598,   581,     5,   667,     6,    16,   371,     1,
     606,    64,   590,     9,    10,     1,    16,     9,   596,   597,
       6,     7,   600,    15,    16,   621,    22,   596,   597,   625,
     685,   600,     1,     1,    35,    36,    37,     6,     5,   635,
       8,     9,   405,   639,     1,     8,     9,     1,   644,     6,
      51,   647,   714,     6,   650,   710,    13,    11,   654,     6,
      14,     6,   658,    16,   660,     6,     1,     8,   664,   619,
       5,    16,   133,   623,     8,     9,   137,    63,   441,    65,
      66,    15,    16,    69,    70,     1,     1,   665,     1,   685,
       6,     6,    44,     6,   457,   750,    12,     6,   461,   462,
      35,    36,    37,   699,     5,   767,    63,   685,    65,    66,
     706,     5,    69,    70,     5,   711,   685,    52,    11,     6,
     716,    14,    38,   719,    40,    64,    42,    79,     5,   725,
       8,     9,   710,   711,   684,    87,     6,    15,    16,    55,
       5,   710,   711,     5,    35,    36,    37,    63,    64,    65,
      66,     9,    10,    69,    70,   107,    64,    15,   754,     9,
      10,   757,    35,    36,    37,    15,     1,   119,   746,   121,
       5,     6,   750,     7,     8,     6,   128,     1,   130,     9,
      10,   750,     6,     5,   547,    15,     1,   783,     1,     5,
      24,     6,     5,     6,    28,     1,   559,     1,     8,     9,
       6,   564,     6,     9,   567,   568,   569,    13,     6,     1,
     162,     5,    46,   165,     6,   578,   168,     1,     5,    53,
      12,   173,     6,     5,   176,   177,   178,    61,    12,     6,
       6,   183,     8,     1,   186,   187,    64,     5,     6,     8,
       9,    35,    36,    37,   607,     5,    38,    39,    40,     5,
      42,     8,     9,    10,    38,     6,    40,    63,    42,    65,
      66,    95,    96,    69,    70,     8,     9,    35,    36,    37,
     104,    63,    64,    65,    66,     8,     9,    69,    70,    63,
      64,    65,    66,    51,    52,    69,    70,     6,     1,     8,
      64,     1,     5,     6,     8,     9,     6,     7,     8,   662,
     663,    11,    12,     6,   667,     5,     6,   141,    18,     1,
      20,    21,   146,    23,     6,     6,    26,     8,    28,     6,
      30,    31,    32,    33,    34,     6,     6,     8,    38,    64,
      40,    41,    42,     5,     6,    35,    36,    37,    46,    47,
      48,    49,     6,     6,     8,     8,    38,     6,     6,     8,
       8,   714,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     6,   314,   315,     8,     9,   318,   319,     8,     9,
     322,    63,     6,    65,    66,     8,     9,    69,    70,   213,
      64,   333,   216,     6,   747,     8,     6,     6,     8,     8,
     224,     1,     6,     6,   228,     8,     6,     7,     8,     9,
      10,    11,    12,    13,   767,     8,     9,    17,    18,    19,
      20,    21,     6,    23,     8,    64,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     6,    64,     8,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     8,     9,    53,    54,    55,    56,     6,     6,     8,
      60,     6,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,     6,     6,     8,     8,     6,     7,     8,     9,
      10,     6,    12,     8,     6,    15,     8,     6,    18,     8,
      20,    21,     6,    23,     8,    64,    26,     6,    28,    29,
      30,    31,    32,    33,    34,     8,     9,     6,    38,    64,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     8,     9,    53,    54,    55,    56,     8,     9,     6,
      60,     6,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,     8,     9,     8,     9,     6,     7,    64,     9,
      10,    64,    12,     5,     6,    15,     5,     6,    18,    64,
      20,    21,    64,    23,     8,     9,    26,    64,    28,    29,
      30,    31,    32,    33,    34,     8,     9,     1,    38,    64,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     8,     9,    53,    54,    55,    56,     8,     9,    64,
      60,     1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,     8,     9,     8,     9,     6,     7,     1,     9,
       8,     9,    12,     8,     9,    64,    15,    16,    18,    64,
      20,    21,    64,    23,    15,    16,    26,    64,    28,    29,
      30,    31,    32,    33,    34,     9,    10,     8,    38,    64,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    64,     1,    53,    54,    55,    56,     6,     9,     8,
      60,     9,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,     9,    10,     9,    10,     6,     7,     8,     8,
       1,    11,    12,     9,    10,     6,    38,    17,    18,    19,
      20,    21,    15,    23,     9,    16,    26,    15,    28,     9,
      30,    31,    32,    33,    34,     9,    10,    10,    38,    10,
      40,    41,    42,    10,    63,    10,    65,    66,     9,    10,
      69,    70,     1,    10,     1,    15,     6,     6,     6,     8,
      15,    15,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    63,     6,    65,    66,     6,     7,    69,    70,
       1,    11,    12,    55,     7,     6,     7,    17,    18,    19,
      20,    21,     9,    23,     5,     6,    26,    55,    28,     9,
      30,    31,    32,    33,    34,     9,     8,     6,    38,     6,
      40,    41,    42,     6,    63,    15,    65,    66,    16,    15,
      69,    70,     1,     1,    35,    36,    37,     6,    15,     8,
      39,    15,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    63,    15,    65,    66,     6,     7,    69,    70,
       6,    11,    12,    38,     9,     6,     6,    17,    18,    19,
      20,    21,    15,    23,     5,     6,    26,    10,    28,    17,
      30,    31,    32,    33,    34,    10,     6,    15,    38,     6,
      40,    41,    42,     6,    63,    39,    65,    66,     6,    11,
      69,    70,     1,    39,    35,    36,    37,     6,     7,    11,
      39,     6,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    15,     6,    10,     6,     6,     7,     8,     6,
       1,    11,    12,     6,     6,     6,     6,    60,    18,     6,
      20,    21,     6,    23,     6,    10,    26,    41,    28,   104,
      30,    31,    32,    33,    34,   350,    35,   349,    38,   712,
      40,    41,    42,   454,    63,   579,    65,    66,    39,   153,
      69,    70,   560,    -1,     1,   254,    -1,    -1,    -1,     6,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    63,    -1,    65,    66,     6,     7,    69,    70,
       1,    11,    12,    -1,    -1,     6,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    60,    -1,    -1,    63,    -1,    65,    66,
      -1,     1,    69,    70,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    63,    -1,    65,    66,     6,     7,    69,    70,
       1,    11,    12,    -1,    -1,     6,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    63,    -1,    65,    66,    -1,    -1,    69,
      70,     1,    -1,     5,     6,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    63,    -1,    65,    66,     6,     7,    69,    70,
      -1,    11,    12,    35,    36,    37,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    63,    -1,    65,    66,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     1,
      -1,    11,    12,     5,     6,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     1,
      -1,    -1,    12,     5,     6,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    35,    36,    37,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    -1,    -1,    -1,    -1,     6,     7,    35,    36,
      37,    -1,    12,     4,     5,     6,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    51,    52,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,    -1,    35,    36,    37,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,    -1,    -1,    -1,    -1,     6,     7,    35,    36,
      37,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    23,    51,    52,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    42,     1,    -1,    -1,    -1,    -1,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    66,     1,
      -1,    69,    70,    -1,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    38,     6,    -1,     8,
       9,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    60,    -1,
      29,    63,    64,    65,    66,     1,    -1,    69,    70,    -1,
       6,    -1,    -1,     9,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    -1,
      -1,    60,    -1,    29,    63,    -1,    65,    66,     1,    -1,
      69,    70,    -1,     6,    -1,     8,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    -1,    29,    63,    -1,    65,
      66,     1,    -1,    69,    70,    -1,     6,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    29,
      63,    -1,    65,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,     1,    -1,    -1,
      -1,    -1,     6,    63,    -1,    65,    66,     1,    12,    69,
      70,    -1,     6,    -1,    -1,     1,    -1,    -1,    12,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    38,     1,    40,    -1,    42,    -1,     6,    63,
      64,    65,    66,     1,    12,    69,    70,    -1,     6,    63,
      64,    65,    66,    -1,    12,    69,    70,    63,    64,    65,
      66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    42,    -1,     1,    -1,    -1,    -1,
      38,     6,    40,    -1,    42,    -1,    -1,    12,     1,    -1,
      -1,    -1,    -1,     6,    -1,    63,    64,    65,    66,    12,
      -1,    69,    70,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    69,    70,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    38,     6,    40,    -1,    42,
      -1,     1,    12,    -1,    -1,    -1,     6,    -1,    63,    64,
      65,    66,    12,    -1,    69,    70,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    38,    -1,
      40,    -1,    42,    -1,     1,    -1,    -1,    -1,    38,     6,
      40,    -1,    42,    -1,    -1,    12,     1,    -1,    -1,    -1,
      -1,     6,    -1,    63,    64,    65,    66,    12,    -1,    69,
      70,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,
      70,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    38,     6,    40,    -1,    42,    -1,    -1,
      12,     7,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    29,    69,    70,    38,    -1,    40,    -1,
      42,    -1,    -1,    39,     7,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    63,    64,    65,    66,    -1,    29,    69,    70,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    29,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    29,    53,    54,
      55,    56,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    29,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    29,    -1,    53,
      54,    55,    56,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    29,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    29,    -1,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    29,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    29,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    29,    -1,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    29,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    35,    36,    37,    51,    52,    85,
      86,    87,    88,    89,    90,   134,     6,    92,    93,     1,
       6,     1,     1,     5,    52,   134,     1,     5,    51,   134,
       0,     3,    88,    89,     1,     7,    94,     5,    51,    52,
       1,     9,    60,    10,    64,     6,    51,     6,     5,   134,
       5,    51,    52,    52,     6,     5,   134,     5,    51,    52,
      11,    14,    95,     1,    11,    95,     6,     5,    51,    52,
       5,    51,    52,    93,     6,     8,    92,     5,   134,    64,
       6,     5,     6,     5,     5,     5,   134,    64,     6,     5,
       6,     5,     5,     1,     6,    51,    52,    89,    96,    97,
      98,    99,   134,    11,    14,     1,    11,    64,     6,     5,
       5,     6,     5,     5,     8,     6,     5,     8,    92,    64,
       6,    64,     6,     6,     6,     5,     8,    92,    64,     6,
      64,     6,     6,    64,     1,     6,    15,    64,     1,     6,
      51,    52,    99,   134,     1,     6,    51,    52,    99,   134,
       1,    60,     1,     7,   105,     6,    51,    52,    99,    96,
       8,    92,    64,     6,     6,    64,     6,     6,    64,     6,
       8,     8,    92,    64,     8,    92,    64,    64,    64,     6,
       8,     8,    92,    64,     8,    92,    64,    64,     6,    16,
     100,   101,   102,   103,   104,     6,   100,     1,     1,     6,
      63,    65,    66,    69,    70,   139,   151,   152,   153,   154,
       6,     8,   100,    51,     1,    15,     1,     6,   134,   105,
       6,    51,    52,    99,    52,    15,     6,   134,     1,   105,
       6,    51,    52,    99,     1,     6,    11,    12,    18,    20,
      21,    23,    26,    28,    30,    31,    32,    33,    34,    38,
      40,    41,    42,    62,    64,    67,    68,    91,   105,   106,
     107,   108,   110,   112,   113,   114,   115,   116,   117,   118,
     119,   122,   123,   124,   126,   127,   128,   129,   130,   131,
     133,   135,   136,   137,   138,   139,   140,   141,   144,   145,
     146,   147,   148,   149,   150,   151,   153,     1,    11,   106,
       6,    15,     1,     6,    52,    99,     1,     6,    51,    99,
     105,     8,     8,    92,    64,    64,     8,    92,    64,    64,
       8,    92,    64,     8,     8,    92,     8,     8,    92,     8,
      92,     8,    92,    64,     8,     8,    92,     8,     8,    92,
       8,    92,     8,     9,    15,    16,     6,    16,     8,     9,
       9,     8,     8,   151,    29,    43,    44,    45,    46,    47,
      48,    49,    50,    53,    54,    55,    56,   155,     1,    10,
      38,    64,   144,     1,     8,     1,     8,     6,   134,     6,
     151,   134,    15,     6,    99,    15,     1,     6,    99,   105,
       6,   134,   151,    15,     6,    99,   134,    15,     6,    99,
       1,   105,     6,     8,   151,     1,     9,    10,    55,    60,
      13,   142,   143,   151,   151,   151,     1,     6,   118,   139,
     107,   151,   151,     6,   118,    91,     1,     6,    55,    91,
     118,     1,     6,   132,   151,     6,    39,    91,   118,    91,
      91,    38,     1,     6,     8,    91,   118,   148,     9,    11,
     107,   107,   107,   107,     9,    10,     9,    15,     1,    60,
      10,    15,    38,     1,    11,     1,   151,    51,    15,     6,
     105,    52,    15,     6,   105,     8,     8,    92,     8,    92,
       8,     8,    92,     8,    92,     8,     8,    92,     8,     8,
       8,     8,     8,    92,     8,     8,     8,     6,    16,   102,
     151,     1,    16,    15,     6,     6,   102,   103,     6,   101,
     104,   151,   151,   151,   151,   151,   151,   151,   151,   151,
       6,     7,   151,     1,    15,     6,     6,    99,   151,    15,
     105,   151,     6,    99,    15,   105,    15,     6,   151,    15,
     105,    99,   151,    15,   105,     6,    99,     1,    38,   151,
       8,     6,    91,   118,   151,     6,   116,   135,     6,    55,
       9,    13,     7,     6,     1,     9,    10,    22,     1,    22,
       7,    27,     9,     9,    38,    38,   151,     9,    55,     9,
       9,     9,    39,    39,    39,    40,     6,    91,   101,     8,
       9,     1,     8,     8,     8,   151,     1,    17,    19,   109,
     111,     6,   117,     6,     6,   135,     1,    38,    91,   125,
     141,   144,   145,     6,   125,    39,    91,   151,     6,    99,
     151,    15,     6,    99,   151,    15,     8,     8,     8,     8,
       8,     8,    16,     6,    16,    15,    16,     1,   151,    15,
       1,     1,     9,    39,     7,    39,   151,    15,   105,   151,
      15,   105,   151,   151,    15,   151,   105,   151,    15,   105,
     151,     6,    22,    22,     9,     9,    10,    15,     9,    10,
      60,    91,   143,   151,    91,   145,     6,     6,    91,   145,
      91,   145,    91,   145,    24,    59,   120,   121,     6,   135,
     151,     6,     7,   151,     7,   151,     6,    91,   132,     1,
     151,     6,    39,    39,    39,     6,     6,   107,   107,   151,
      17,     1,   107,    10,    15,    39,    15,   105,   151,    15,
     105,   151,     1,     6,   151,    15,   151,     6,   151,   151,
     151,   151,   151,    39,    91,   145,    91,   145,   151,     6,
     135,     6,   125,     6,   116,     6,     9,    22,   105,   107,
     151,    11,    11,    39,     7,    39,    39,     7,    39,    39,
       8,   151,   107,     1,   109,     6,   125,    15,   151,   151,
     151,    39,     9,    10,     9,    10,    10,     6,    91,   145,
     107,   151,   151,     6,   125,     6,     6,     6,     6,     6,
      39,    39,    10,    10,    60,    10,     6,     6,     6,    60
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
#line 101 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 108 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 111 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 120 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 149 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 167 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 17:
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 18:
#line 173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 23:
#line 200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 24:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 215 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 221 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 29:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 30:
#line 235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 32:
#line 247 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 33:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 34:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 35:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 266 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 272 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 40:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 293 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 42:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 47:
#line 323 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 48:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 52:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 53:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 54:
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 56:
#line 370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 57:
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 58:
#line 378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 59:
#line 383 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 60:
#line 389 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 61:
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 62:
#line 401 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 63:
#line 407 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 64:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 416 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 66:
#line 419 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 425 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 431 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 70:
#line 443 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 71:
#line 446 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 72:
#line 449 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 73:
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-5].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 74:
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 75:
#line 467 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 76:
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 77:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 78:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 79:
#line 487 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-6].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 80:
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 81:
#line 497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
										   ;}
    break;

  case 82:
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 83:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 84:
#line 511 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 85:
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 86:
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 87:
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 88:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 89:
#line 538 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 90:
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 91:
#line 550 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 92:
#line 554 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 93:
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 563 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 95:
#line 570 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 576 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 97:
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 98:
#line 585 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 99:
#line 588 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 589 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 590 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 591 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 597 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID\n";;}
    break;

  case 105:
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID\n";;}
    break;

  case 106:
#line 605 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";;}
    break;

  case 107:
#line 606 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";;}
    break;

  case 108:
#line 607 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 611 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 615 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 619 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 112:
#line 624 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";;}
    break;

  case 113:
#line 625 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";;}
    break;

  case 114:
#line 626 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 115:
#line 627 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 116:
#line 628 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 117:
#line 632 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 118:
#line 636 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 119:
#line 640 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";;}
    break;

  case 120:
#line 641 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";;}
    break;

  case 121:
#line 642 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";;}
    break;

  case 122:
#line 643 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";;}
    break;

  case 123:
#line 644 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 124:
#line 648 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 125:
#line 652 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";;}
    break;

  case 126:
#line 653 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";;}
    break;

  case 127:
#line 654 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";;}
    break;

  case 128:
#line 655 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 129:
#line 659 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 663 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";;}
    break;

  case 131:
#line 664 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 132:
#line 665 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 133:
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 134:
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 135:
#line 671 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 136:
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";;}
    break;

  case 137:
#line 676 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";;}
    break;

  case 138:
#line 677 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";;}
    break;

  case 139:
#line 678 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";;}
    break;

  case 140:
#line 679 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 141:
#line 683 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 142:
#line 687 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 143:
#line 688 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 144:
#line 689 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 145:
#line 693 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 146:
#line 697 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 147:
#line 701 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 148:
#line 707 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 149:
#line 708 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";;}
    break;

  case 150:
#line 709 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";;}
    break;

  case 151:
#line 710 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";;}
    break;

  case 152:
#line 711 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";;}
    break;

  case 153:
#line 712 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";;}
    break;

  case 154:
#line 713 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";;}
    break;

  case 155:
#line 714 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";;}
    break;

  case 156:
#line 715 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";;}
    break;

  case 157:
#line 716 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";;}
    break;

  case 158:
#line 717 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";;}
    break;

  case 159:
#line 718 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";;}
    break;

  case 160:
#line 719 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 161:
#line 723 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 162:
#line 727 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 731 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 735 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 739 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 745 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";;}
    break;

  case 167:
#line 746 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 168:
#line 747 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";;}
    break;

  case 169:
#line 748 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 170:
#line 752 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 171:
#line 756 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 172:
#line 760 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 173:
#line 764 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 174:
#line 768 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 175:
#line 774 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 176:
#line 775 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 177:
#line 776 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 178:
#line 778 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 179:
#line 779 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 180:
#line 780 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 181:
#line 781 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 182:
#line 782 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 183:
#line 785 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 184:
#line 791 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";;}
    break;

  case 185:
#line 792 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 186:
#line 796 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 187:
#line 803 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 188:
#line 804 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 189:
#line 805 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 190:
#line 809 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 191:
#line 815 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";;}
    break;

  case 192:
#line 816 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 193:
#line 822 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";;}
    break;

  case 194:
#line 823 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 195:
#line 827 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 196:
#line 833 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 197:
#line 834 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 198:
#line 835 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 199:
#line 839 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'end' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected 'end' ","");			 
						;}
    break;

  case 200:
#line 843 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected ':' ","");			 
									;}
    break;

  case 201:
#line 847 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
									;}
    break;

  case 202:
#line 853 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 203:
#line 854 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 204:
#line 857 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 205:
#line 858 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 206:
#line 859 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 207:
#line 860 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 208:
#line 861 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 209:
#line 862 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 210:
#line 863 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 211:
#line 864 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 212:
#line 868 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 213:
#line 869 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 214:
#line 870 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 215:
#line 871 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 216:
#line 874 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 217:
#line 875 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 218:
#line 876 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 219:
#line 880 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 220:
#line 881 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 221:
#line 884 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 222:
#line 885 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 223:
#line 886 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected statement at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected statement ","");										
											;}
    break;

  case 224:
#line 892 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 225:
#line 895 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 226:
#line 896 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 227:
#line 902 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 228:
#line 907 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 229:
#line 908 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 230:
#line 914 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 231:
#line 917 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 232:
#line 918 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 233:
#line 919 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 234:
#line 920 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 235:
#line 921 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 236:
#line 922 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 237:
#line 923 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 238:
#line 927 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 239:
#line 931 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 240:
#line 935 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 241:
#line 939 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 242:
#line 943 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 243:
#line 947 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 244:
#line 951 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 245:
#line 958 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 246:
#line 959 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 247:
#line 960 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 248:
#line 961 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 249:
#line 962 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 250:
#line 963 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 251:
#line 964 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 252:
#line 965 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 253:
#line 969 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 254:
#line 970 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 255:
#line 974 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 256:
#line 975 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 257:
#line 976 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 258:
#line 977 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 259:
#line 978 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 260:
#line 979 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 261:
#line 982 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 262:
#line 983 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 263:
#line 986 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 264:
#line 989 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 265:
#line 990 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 266:
#line 993 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 267:
#line 994 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 268:
#line 997 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 269:
#line 998 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 270:
#line 999 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 271:
#line 1001 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 272:
#line 1002 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 273:
#line 1003 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 274:
#line 1004 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 275:
#line 1005 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 276:
#line 1006 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 277:
#line 1007 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 278:
#line 1008 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 279:
#line 1009 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 280:
#line 1010 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 281:
#line 1013 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 282:
#line 1014 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 283:
#line 1016 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 284:
#line 1017 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 285:
#line 1018 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 286:
#line 1019 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 287:
#line 1022 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 288:
#line 1023 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 289:
#line 1024 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 290:
#line 1025 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 291:
#line 1026 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 292:
#line 1032 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 293:
#line 1033 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 294:
#line 1034 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 295:
#line 1035 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 296:
#line 1036 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";;}
    break;

  case 297:
#line 1037 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 298:
#line 1038 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 299:
#line 1039 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 300:
#line 1040 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 301:
#line 1043 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 302:
#line 1044 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 303:
#line 1047 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 304:
#line 1050 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 305:
#line 1051 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 306:
#line 1052 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 307:
#line 1053 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 308:
#line 1057 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 309:
#line 1062 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 310:
#line 1063 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 311:
#line 1069 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 312:
#line 1070 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 313:
#line 1073 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 314:
#line 1074 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 315:
#line 1075 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 316:
#line 1076 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 317:
#line 1080 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 318:
#line 1086 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 319:
#line 1087 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 320:
#line 1088 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 321:
#line 1093 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 322:
#line 1094 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 323:
#line 1095 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 324:
#line 1096 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 325:
#line 1097 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 326:
#line 1098 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 327:
#line 1099 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 328:
#line 1100 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 329:
#line 1103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 330:
#line 1104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 331:
#line 1107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 332:
#line 1108 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 333:
#line 1109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 334:
#line 1110 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 335:
#line 1113 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 336:
#line 1114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 337:
#line 1117 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 338:
#line 1118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 339:
#line 1119 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 340:
#line 1120 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 341:
#line 1121 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 342:
#line 1124 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 343:
#line 1125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 344:
#line 1126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 345:
#line 1127 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 346:
#line 1128 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 347:
#line 1131 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 348:
#line 1132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 349:
#line 1134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 350:
#line 1135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 351:
#line 1136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 352:
#line 1138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 353:
#line 1141 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 354:
#line 1142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 355:
#line 1143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 356:
#line 1147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 357:
#line 1151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 358:
#line 1155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 359:
#line 1162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 360:
#line 1163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 361:
#line 1166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 362:
#line 1169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 363:
#line 1172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 364:
#line 1173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 365:
#line 1176 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 366:
#line 1180 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 367:
#line 1181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 368:
#line 1182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 369:
#line 1185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 370:
#line 1186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 371:
#line 1187 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 372:
#line 1188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 373:
#line 1189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 374:
#line 1195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 375:
#line 1196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 376:
#line 1197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 377:
#line 1198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 378:
#line 1199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 379:
#line 1200 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 380:
#line 1202 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";;}
    break;

  case 381:
#line 1203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";;}
    break;

  case 382:
#line 1212 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";;}
    break;

  case 383:
#line 1213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 384:
#line 1214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 385:
#line 1215 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 386:
#line 1216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 387:
#line 1220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 388:
#line 1221 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 389:
#line 1222 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 390:
#line 1223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 391:
#line 1224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 392:
#line 1225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 393:
#line 1226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5020 "yacc.cpp"

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


#line 1228 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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

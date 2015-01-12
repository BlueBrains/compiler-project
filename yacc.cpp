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
#line 3 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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
#line 63 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#define YYLAST   2808

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  73
/* YYNRULES -- Number of rules. */
#define YYNRULES  401
/* YYNRULES -- Number of states. */
#define YYNSTATES  810

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
    1016,  1020,  1024,  1028,  1030,  1032,  1036,  1040,  1044,  1048,
    1051,  1055,  1059,  1064,  1068,  1070,  1075,  1080,  1084,  1089,
    1095,  1102,  1108,  1111,  1115,  1118,  1121,  1123,  1125,  1127,
    1129,  1131,  1133,  1135,  1138,  1141,  1146,  1149,  1153,  1157,
    1162,  1171,  1182,  1185,  1190,  1195,  1199,  1205,  1209,  1212,
    1215,  1218,  1222,  1225,  1228,  1232,  1235,  1240,  1245,  1252,
    1259,  1264,  1269,  1275,  1281,  1287,  1293,  1298,  1303,  1308,
    1313,  1317,  1321,  1325,  1331,  1337,  1343,  1351,  1353,  1357,
    1363,  1367,  1373,  1377,  1383,  1387,  1389,  1395,  1401,  1404,
    1407,  1411,  1414,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1448,  1453,  1455,
    1457,  1459,  1461,  1465,  1469,  1476,  1482,  1488,  1494,  1497,
    1502,  1505,  1511,  1519,  1525,  1531,  1539,  1545,  1547,  1550,
    1552,  1555,  1558,  1563,  1567,  1572,  1575,  1578,  1582,  1584,
    1586,  1589,  1594,  1599,  1605,  1607,  1609,  1611,  1615,  1621,
    1625,  1629,  1635,  1639,  1641,  1643,  1647,  1651,  1653,  1655,
    1657,  1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,
    1677,  1679,  1681,  1683,  1686,  1690,  1694,  1697,  1699,  1703,
    1707,  1710,  1713,  1716,  1720,  1724,  1728,  1731,  1735,  1739,
    1741,  1744,  1749,  1754,  1759,  1761,  1763,  1767,  1771,  1776,
    1780,  1782,  1786,  1790,  1794,  1798,  1802,  1806,  1810,  1812,
    1816,  1818,  1821,  1826,  1833,  1838,  1840,  1842,  1844,  1846,
    1848,  1850
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      88,     0,    -1,    89,     3,    -1,    89,    91,    -1,    91,
      -1,     4,    95,    63,    -1,     4,    95,     1,    -1,    90,
      92,    -1,    92,    -1,    93,    97,    -1,     5,     6,    -1,
     138,     5,     6,    -1,    54,     5,     6,    -1,    53,     5,
       6,    -1,    54,    53,     5,     6,    -1,    53,    54,     5,
       6,    -1,    54,     1,    54,     5,     6,    -1,    53,     1,
      53,     5,     6,    -1,    54,   138,     5,     6,    -1,    53,
     138,     5,     6,    -1,    54,    53,   138,     5,     6,    -1,
      53,    54,   138,     5,     6,    -1,    54,     1,    54,   138,
       5,     6,    -1,    53,     1,    53,   138,     5,     6,    -1,
     138,    54,     5,     6,    -1,   138,    53,     5,     6,    -1,
     138,    54,    53,     5,     6,    -1,   138,    53,    54,     5,
       6,    -1,   138,    54,    54,     5,     6,    -1,   138,    53,
      53,     5,     6,    -1,    54,   138,    53,     5,     6,    -1,
      53,   138,    53,     5,     6,    -1,    54,   138,    54,     5,
       6,    -1,     5,     6,    67,     8,    -1,   138,     5,     6,
      67,     8,    -1,    54,     5,     6,    67,     8,    -1,    53,
       5,     6,    67,     8,    -1,    54,    53,     5,     6,    67,
       8,    -1,    53,    54,     5,     6,    67,     8,    -1,    54,
       1,    54,     5,     6,    67,     8,    -1,    53,     1,    53,
       5,     6,    67,     8,    -1,    54,   138,     5,     6,    67,
       8,    -1,    53,   138,     5,     6,    67,     8,    -1,    54,
      53,   138,     5,     6,    67,     8,    -1,    53,    54,   138,
       5,     6,    67,     8,    -1,    54,     1,    54,   138,     5,
       6,    67,     8,    -1,    53,     1,    53,   138,     5,     6,
      67,     8,    -1,   138,    54,     5,     6,    67,     8,    -1,
     138,    53,     5,     6,    67,     8,    -1,   138,    54,    53,
       5,     6,    67,     8,    -1,   138,    53,    54,     5,     6,
      67,     8,    -1,   138,    54,    54,     5,     6,    67,     8,
      -1,   138,    53,    53,     5,     6,    67,     8,    -1,    54,
     138,    53,     5,     6,    67,     8,    -1,    53,   138,    54,
       5,     6,    67,     8,    -1,    54,   138,    54,     5,     6,
      67,     8,    -1,    53,   138,    53,     5,     6,    67,     8,
      -1,     5,     6,    67,    95,     8,    -1,   138,     5,     6,
      67,    95,     8,    -1,    54,     5,     6,    67,    95,     8,
      -1,    53,     5,     6,    67,    95,     8,    -1,    54,    53,
       5,     6,    67,    95,     8,    -1,    53,    54,     5,     6,
      67,    95,     8,    -1,    54,     1,    54,     5,     6,    67,
      95,     8,    -1,    53,     1,    53,     5,     6,    67,    95,
       8,    -1,    54,   138,     5,     6,    67,    95,     8,    -1,
      53,   138,     5,     6,    67,    95,     8,    -1,    54,    53,
     138,     5,     6,    67,    95,     8,    -1,    53,    54,   138,
       5,     6,    67,    95,     8,    -1,    54,     1,    54,   138,
       5,     6,    67,    95,     8,    -1,    53,     1,    53,   138,
       5,     6,    67,    95,     8,    -1,   138,    54,     5,     6,
      67,    95,     8,    -1,   138,    53,     5,     6,    67,    95,
       8,    -1,   138,    54,    53,     5,     6,    67,    95,     8,
      -1,   138,    53,    54,     5,     6,    67,    95,     8,    -1,
     138,    54,    54,     5,     6,    67,    95,     8,    -1,   138,
      53,    53,     5,     6,    67,    95,     8,    -1,    53,   138,
      54,     5,     6,    67,    95,     8,    -1,    54,   138,    53,
       5,     6,    67,    95,     8,    -1,    54,   138,    54,     5,
       6,    67,    95,     8,    -1,    53,   138,    53,     5,     6,
      67,    95,     8,    -1,     5,     1,    -1,     6,     1,     6,
      -1,     6,     1,    -1,    94,     9,   155,    -1,   155,    -1,
      95,     9,    96,    -1,    96,    -1,    96,    10,     6,    -1,
       6,    -1,     7,    11,    -1,     7,    98,    11,    -1,     1,
      11,    -1,     1,    98,    11,    -1,     7,     1,    -1,     7,
      98,     1,    -1,    98,    14,    99,    -1,    14,    99,    -1,
      99,    -1,   100,    63,    -1,   101,    -1,    92,    -1,   100,
       1,    -1,   138,     6,    -1,    54,     6,    -1,    53,     6,
      -1,    54,    53,     6,    -1,    53,    54,     6,    -1,    54,
       1,    54,     6,    -1,    53,     1,    53,     6,    -1,     6,
      -1,    53,   138,     6,    -1,    54,   138,     6,    -1,   138,
       6,    15,   155,    -1,    54,     6,    15,   155,    -1,    53,
       6,    15,   155,    -1,    54,    53,     6,    15,   155,    -1,
      53,    54,     6,    15,   155,    -1,    54,     1,    54,     6,
      15,   155,    -1,    53,     1,    53,     6,    15,   155,    -1,
       6,    15,   155,    -1,   138,    54,     6,    -1,   138,    53,
       6,    -1,   138,    54,    53,     6,    -1,   138,    53,    54,
       6,    -1,   138,    54,     1,    54,     6,    -1,   138,    53,
       1,    53,     6,    -1,    54,    53,   138,     6,    -1,    53,
      54,   138,     6,    -1,    54,     1,    54,   138,     6,    -1,
      53,     1,    53,   138,     6,    -1,   138,    54,     6,    15,
     155,    -1,   138,    53,     6,    15,   155,    -1,   138,    54,
      53,     6,    15,   155,    -1,   138,    53,    54,     6,    15,
     155,    -1,   138,    54,     1,    54,     6,    15,   155,    -1,
     138,    53,     1,    53,     6,    15,   155,    -1,    54,   138,
       6,    15,   155,    -1,    53,   138,     6,    15,   155,    -1,
      54,    53,   138,     6,    15,   155,    -1,    53,    54,   138,
       6,    15,   155,    -1,    54,     1,    54,   138,     6,    15,
     155,    -1,    53,     1,    53,   138,     6,    15,   155,    -1,
      54,   138,    53,     6,    15,   155,    -1,    53,   138,    54,
       6,    15,   155,    -1,    54,   138,    54,     1,     6,    15,
     155,    -1,    53,   138,    53,     1,     6,    15,   155,    -1,
     138,     6,     6,     1,    -1,     6,     6,     1,    -1,   102,
     109,    -1,   138,   102,   109,    -1,    54,   102,   109,    -1,
      53,   102,   109,    -1,   138,    54,   102,   109,    -1,   138,
      53,   102,   109,    -1,    54,   138,   102,   109,    -1,    53,
     138,   102,   109,    -1,    54,   138,    53,   102,   109,    -1,
      53,   138,    54,   102,   109,    -1,    54,    53,   138,   102,
     109,    -1,    53,    54,   138,   102,   109,    -1,    53,   138,
      53,     1,   102,   109,    -1,    54,   138,    54,     1,   102,
     109,    -1,    54,    54,     1,   138,   102,   109,    -1,    53,
      53,     1,   138,   102,   109,    -1,   138,    53,     1,    53,
     102,   109,    -1,   138,    54,     1,    54,   102,   109,    -1,
       6,    67,    55,     8,    -1,     6,    67,   103,     8,    -1,
       6,    67,     8,    -1,     1,    67,   103,     8,    -1,     1,
      67,     6,     8,    -1,     6,     1,   103,     8,    -1,     6,
       1,     6,     8,    -1,     6,    67,   103,     1,    -1,     6,
      67,     6,     1,    -1,   104,    -1,   107,    -1,   104,     9,
     107,    -1,   104,     9,   106,    -1,     6,     9,   106,    -1,
     104,     9,     6,    -1,     6,     9,     6,    -1,   106,    -1,
     105,    -1,    55,     9,   104,    -1,    55,     9,     6,    -1,
     104,     9,    55,    -1,     6,     9,    55,    -1,    16,     6,
      -1,    16,    16,     6,    -1,     6,    16,     1,    -1,     6,
      16,    16,     1,    -1,   107,     9,   108,    -1,   108,    -1,
     107,     9,   104,     1,    -1,   107,     9,     6,     1,    -1,
       6,    15,   155,    -1,    16,     6,    15,   155,    -1,    16,
      16,     6,    15,   155,    -1,     6,    16,     1,    16,    15,
     155,    -1,     6,    16,     1,    15,   155,    -1,     7,    11,
      -1,     7,   110,    11,    -1,     1,    11,    -1,   110,   111,
      -1,   111,    -1,   112,    -1,   116,    -1,   118,    -1,   123,
      -1,   126,    -1,   109,    -1,   127,    63,    -1,   127,     1,
      -1,    55,    10,     6,    63,    -1,     6,    63,    -1,    54,
       6,    63,    -1,    53,     6,    63,    -1,     6,    10,     6,
      63,    -1,     6,     9,     6,    10,     6,    10,     6,    63,
      -1,     6,    10,     6,     9,     6,    10,     6,    10,     6,
      63,    -1,   114,   111,    -1,   114,   111,    17,   111,    -1,
     114,   111,     1,   111,    -1,   114,   111,   113,    -1,   114,
     111,   113,    17,   111,    -1,   115,   111,   113,    -1,   115,
     111,    -1,    18,   155,    -1,    19,   155,    -1,     1,     6,
     155,    -1,   117,   111,    -1,    20,   155,    -1,     6,     1,
     155,    -1,   119,   111,    -1,    21,   122,    22,    94,    -1,
      21,   122,    22,   149,    -1,    21,     6,     9,     6,    22,
      94,    -1,    21,     6,     9,     6,    22,   149,    -1,    21,
       6,    22,    94,    -1,    21,     6,    22,   149,    -1,     6,
       1,     6,    22,    94,    -1,     6,     1,     6,    22,   149,
      -1,     6,     1,   122,    22,    94,    -1,     6,     1,   122,
      22,   149,    -1,    21,     6,     1,    94,    -1,    21,     6,
       1,   149,    -1,    21,   122,     1,    94,    -1,    21,   122,
       1,   149,    -1,   120,     9,   121,    -1,     6,     9,   120,
      -1,     6,     9,     6,    -1,     6,     9,     6,    10,     6,
      -1,     6,    10,     6,     9,   120,    -1,     6,    10,     6,
       9,     6,    -1,     6,    10,     6,     9,     6,    10,     6,
      -1,   121,    -1,   121,    10,     6,    -1,     6,    10,     6,
      10,     6,    -1,   122,     9,   139,    -1,     6,     9,     6,
       9,   139,    -1,   122,     9,     6,    -1,     6,     9,     6,
       9,     6,    -1,     6,     9,   139,    -1,   139,    -1,    23,
     111,     7,   125,    11,    -1,    23,   111,     7,   124,    11,
      -1,    24,   109,    -1,    62,   111,    -1,    62,   155,   111,
      -1,    26,   155,    -1,    26,   155,    27,   139,    -1,    94,
      -1,   128,    -1,   130,    -1,    65,    -1,   131,    -1,   134,
      -1,   132,    -1,   133,    -1,   137,    -1,    70,    -1,    71,
      -1,   120,    -1,   135,    -1,    28,   155,    -1,    28,   155,
       9,   155,    -1,    94,    -1,   148,    -1,   149,    -1,   145,
      -1,   122,    15,   129,    -1,   157,    15,   129,    -1,   157,
      40,    94,    41,    15,   129,    -1,   157,    40,    41,    15,
     129,    -1,     6,     9,     6,    15,   129,    -1,    55,    10,
       6,    15,   129,    -1,    30,   122,    -1,    30,     6,     9,
       6,    -1,    30,     6,    -1,    30,     6,    40,   155,    41,
      -1,    30,     6,    40,   155,     7,   155,    41,    -1,    30,
       6,    40,     7,    41,    -1,    30,   122,    40,   155,    41,
      -1,    30,   122,    40,   155,     7,   155,    41,    -1,    30,
     122,    40,     7,    41,    -1,    31,    -1,    31,    94,    -1,
     152,    -1,    32,    94,    -1,    32,   122,    -1,    32,    58,
      58,    94,    -1,     6,     1,    94,    -1,     6,    58,    58,
      94,    -1,    33,   136,    -1,    33,     1,    -1,     6,     9,
     136,    -1,     6,    -1,    36,    -1,    36,   155,    -1,    36,
     155,     9,   155,    -1,    36,   155,     9,     1,    -1,     6,
       1,   155,     9,   155,    -1,    37,    -1,    38,    -1,    39,
      -1,    67,   122,     8,    -1,    67,     6,     9,     6,     8,
      -1,    67,     6,     8,    -1,    40,   122,    41,    -1,    40,
       6,     9,     6,    41,    -1,    40,     6,    41,    -1,   140,
      -1,   153,    -1,   141,    10,     6,    -1,     6,    10,     6,
      -1,   142,    -1,   140,    -1,   153,    -1,   154,    -1,   144,
      -1,   143,    -1,    68,    -1,    69,    -1,    72,    -1,    73,
      -1,    66,    -1,   148,    -1,   149,    -1,   150,    -1,   151,
      -1,   145,    -1,    12,    13,    -1,    12,   146,    13,    -1,
     146,     9,   147,    -1,   146,     9,    -1,   147,    -1,   155,
       7,   155,    -1,    67,    94,     8,    -1,    67,     8,    -1,
       1,     8,    -1,    67,     1,    -1,     1,   155,     8,    -1,
      67,    94,     1,    -1,    40,    94,    41,    -1,    40,    41,
      -1,    42,    94,    42,    -1,    67,   152,     8,    -1,    43,
      -1,    43,    94,    -1,    44,    40,    94,    41,    -1,    44,
      40,   104,    41,    -1,    44,    40,     6,    41,    -1,   156,
      -1,   143,    -1,   155,   159,   155,    -1,    55,    10,     6,
      -1,    55,    10,     6,   148,    -1,    55,    10,    55,    -1,
     158,    -1,   155,     1,   155,    -1,   155,    29,   155,    -1,
     155,    52,   155,    -1,   155,    56,   155,    -1,   155,    57,
     155,    -1,   155,    58,   155,    -1,   155,    59,   155,    -1,
       6,    -1,   157,    10,     6,    -1,   157,    -1,   157,   148,
      -1,   157,    40,   155,    41,    -1,   157,    40,   155,     7,
     155,    41,    -1,   157,    40,     7,    41,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    45,    -1,    47,    -1,
      46,    -1
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
     946,   950,   954,   958,   962,   966,   972,   973,   974,   976,
     977,   978,   979,   980,   981,   984,   985,   986,   987,   989,
     995,   999,  1003,  1010,  1011,  1012,  1016,  1022,  1023,  1029,
    1033,  1037,  1043,  1044,  1045,  1056,  1057,  1060,  1061,  1062,
    1063,  1064,  1065,  1066,  1067,  1071,  1078,  1084,  1088,  1094,
    1095,  1096,  1099,  1100,  1101,  1105,  1106,  1109,  1110,  1117,
    1120,  1121,  1127,  1132,  1137,  1143,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1156,  1160,  1164,  1168,  1172,  1176,  1180,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1198,  1199,
    1203,  1204,  1205,  1206,  1207,  1208,  1211,  1212,  1215,  1218,
    1219,  1222,  1223,  1226,  1227,  1228,  1230,  1231,  1232,  1233,
    1234,  1235,  1236,  1237,  1238,  1239,  1242,  1243,  1245,  1246,
    1247,  1248,  1251,  1252,  1257,  1258,  1259,  1260,  1272,  1273,
    1274,  1275,  1276,  1277,  1278,  1279,  1280,  1283,  1284,  1287,
    1290,  1291,  1292,  1293,  1297,  1302,  1303,  1309,  1310,  1313,
    1314,  1315,  1316,  1320,  1326,  1327,  1328,  1333,  1334,  1335,
    1336,  1337,  1338,  1339,  1340,  1343,  1344,  1347,  1348,  1349,
    1350,  1353,  1354,  1357,  1358,  1359,  1360,  1361,  1364,  1365,
    1366,  1367,  1368,  1371,  1372,  1374,  1375,  1376,  1378,  1381,
    1382,  1383,  1387,  1391,  1395,  1402,  1403,  1406,  1409,  1412,
    1413,  1416,  1420,  1421,  1425,  1426,  1427,  1428,  1434,  1439,
    1443,  1448,  1454,  1455,  1456,  1457,  1458,  1459,  1461,  1464,
    1473,  1478,  1479,  1480,  1481,  1484,  1485,  1486,  1487,  1488,
    1489,  1490
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
  "method_declaration", "method_h", "arguments", "args_list", "paraself",
  "arg", "default_args_list", "default_arg", "block_stmt", "stmt_list",
  "stmt", "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
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
     104,   104,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   106,   106,   107,   107,   107,   107,   108,   108,   108,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   114,
     115,   115,   116,   117,   117,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   129,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     141,   142,   142,   143,   143,   143,   143,   143,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   147,   148,
     148,   148,   148,   148,   148,   149,   149,   150,   151,   152,
     152,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159
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
       3,     3,     3,     1,     1,     3,     3,     3,     3,     2,
       3,     3,     4,     3,     1,     4,     4,     3,     4,     5,
       6,     5,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     2,     3,     3,     4,
       8,    10,     2,     4,     4,     3,     5,     3,     2,     2,
       2,     3,     2,     2,     3,     2,     4,     4,     6,     6,
       4,     4,     5,     5,     5,     5,     4,     4,     4,     4,
       3,     3,     3,     5,     5,     5,     7,     1,     3,     5,
       3,     5,     3,     5,     3,     1,     5,     5,     2,     2,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       1,     1,     3,     3,     6,     5,     5,     5,     2,     4,
       2,     5,     7,     5,     5,     7,     5,     1,     2,     1,
       2,     2,     4,     3,     4,     2,     2,     3,     1,     1,
       2,     4,     4,     5,     1,     1,     1,     3,     5,     3,
       3,     5,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     2,     1,     3,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     3,     1,
       2,     4,     4,     4,     1,     1,     3,     3,     4,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     2,     4,     6,     4,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   324,   325,   326,     0,     0,     0,
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
       0,     0,     0,     0,   176,   184,   183,   177,   194,    82,
       0,   148,   388,     0,   347,   343,   344,   345,   346,   375,
     120,   374,     0,   380,     0,   169,     0,     0,     0,     0,
       0,     0,   107,     0,   152,   111,     0,     0,     0,     0,
       0,   106,     0,     0,   151,   112,     0,     0,     0,    96,
     204,     0,     0,   202,     0,     0,     0,     0,     0,     0,
       0,     0,   307,     0,     0,   319,     0,     0,   369,     0,
       0,     0,     0,   276,     0,   282,   283,   273,   212,     0,
     206,   207,     0,   208,     0,   209,     0,   284,   257,     0,
     210,   211,     0,   274,   275,   277,   279,   280,   278,   285,
     281,   265,   333,     0,   337,   375,   341,   352,   348,   349,
     350,   351,   309,   334,   340,     0,     0,     0,     0,     0,
     122,     0,     0,     0,   121,     0,     0,   150,    34,     0,
       0,    29,    27,     0,    26,    28,     0,    23,    60,    38,
       0,     0,    42,     0,     0,     0,     0,    22,    59,    37,
       0,     0,    41,     0,     0,     0,   171,     0,     0,     0,
     189,     0,     0,   170,     0,     0,   173,   172,     0,     0,
       0,   399,   401,   400,   395,   396,   397,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,   175,
     167,   174,   168,   109,     0,     0,   115,     0,     0,   128,
       0,     0,     0,     0,     0,   156,   108,     0,   114,     0,
     127,     0,     0,     0,     0,     0,     0,   155,   361,     0,
       0,     0,     0,     0,   216,   353,     0,   357,     0,   229,
     233,     0,     0,   342,     0,   271,   286,   300,   298,   308,
     388,     0,   310,   311,   316,   318,   315,   320,   388,   366,
       0,     0,     0,   370,     0,     0,     0,     0,   362,   388,
     360,     0,     0,     0,     0,   203,   205,     0,   232,   235,
       0,     0,     0,     0,   214,   213,     0,     0,     0,   147,
     113,     0,     0,   124,   154,     0,     0,   123,   153,    58,
      48,     0,     0,     0,    47,     0,     0,     0,    40,     0,
       0,    62,    44,     0,    66,    56,     0,    54,     0,    39,
       0,     0,    61,    43,     0,    65,    53,     0,    55,     0,
     182,     0,   188,   180,   197,   191,     0,     0,   190,   186,
     185,   181,   187,   179,   178,     0,     0,   193,     0,   379,
       0,   382,   383,   384,   385,   386,   387,     0,   389,     0,
       0,   362,     0,   130,     0,     0,   117,     0,   160,   138,
       0,     0,     0,   158,     0,   129,   116,     0,   159,     0,
     137,     0,   157,     0,     0,   363,   388,   313,     0,   234,
     252,   251,   264,   336,     0,   356,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   365,   330,   367,   388,
       0,     0,     0,   218,   217,     0,   329,     0,   364,   359,
     327,   368,    84,     0,     0,     0,   225,     0,     0,   250,
     258,   262,   260,     0,   288,   292,   291,   289,   290,   335,
     293,     0,     0,     0,   126,     0,   132,     0,   125,     0,
     131,     0,    72,    52,     0,    50,     0,    71,    49,     0,
      51,     0,    64,    46,     0,    68,    80,    77,    63,    45,
       0,    67,    78,    79,     0,   189,     0,     0,     0,   192,
     198,     0,     0,   196,   195,   378,   394,     0,   392,   119,
       0,   164,   140,     0,   161,   144,   118,     0,   139,   163,
     143,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   314,   355,     0,   246,   247,     0,   336,   240,
     241,   248,   249,   236,   237,     0,     0,     0,     0,     0,
     272,   287,   299,     0,     0,     0,     0,     0,   312,   317,
     322,   321,     0,   373,   371,   372,     0,   215,     0,     0,
     224,   223,     0,     0,     0,     0,     0,     0,     0,   165,
     134,     0,   166,   133,    76,    74,    73,    75,    70,    69,
     191,   190,   201,     0,   199,   181,     0,   142,   146,   141,
     145,   242,   243,   244,   245,   323,   252,   261,   253,   296,
     255,   254,   259,     0,     0,   268,   269,     0,   267,   266,
     303,     0,   301,   306,     0,   304,   331,   297,   328,   231,
     226,     0,   227,     0,   295,     0,   136,   135,   200,   393,
       0,     0,     0,     0,     0,   263,   238,   239,     0,   270,
       0,     0,     0,   294,   252,   253,   255,   259,   256,     0,
     302,   305,     0,     0,   220,     0,   253,   256,   259,   221
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    66,    14,   237,    17,    18,
      36,    67,    68,    69,    70,    71,   170,   164,   165,   166,
     167,   168,   238,   239,   240,   241,   586,   242,   587,   243,
     244,   245,   246,   247,   248,   249,   250,   687,   688,   251,
     252,   253,   595,   254,   255,   256,   257,   258,   259,   406,
     260,    72,   261,   262,   263,   264,   179,   266,   267,   386,
     387,   268,   269,   270,   271,   272,   273,   274,   275,   181,
     182,   183,   343
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -427
static const short int yypact[] =
{
    1937,    24,   575,    57,  -427,  -427,  -427,  1682,  1901,    53,
     272,  1974,  -427,  -427,   531,    42,  -427,   176,   111,  -427,
      79,   149,   196,   221,   163,   175,   216,   291,   449,   191,
    -427,  -427,  -427,  -427,  1755,  1828,  -427,   313,   200,   204,
    -427,    24,  -427,   329,   548,  -427,   640,   276,   358,   382,
     424,   402,   442,   737,   389,   461,   470,   471,   487,   525,
     483,    20,  -427,   443,   552,  1609,  -427,   153,  -427,    17,
    -427,   539,   299,   483,  -427,   501,   521,   589,   594,   602,
     604,   621,   630,   111,  -427,  -427,   559,   632,   664,   571,
     618,   697,   649,   726,   733,   758,   745,   614,   710,   788,
     766,   830,   852,   278,   331,   864,   453,    82,  -427,   375,
      37,   895,   317,   539,   361,   -13,    48,  1620,   934,   539,
     560,  -427,   443,  -427,  -427,   943,  1747,  -427,    33,   638,
     655,   539,  -427,  -427,   727,   902,   972,   999,   941,  1021,
    1026,  -427,   975,  1045,  -427,   738,   801,  1011,   844,  1031,
    1048,  1050,  1075,  -427,   749,   867,  1062,   887,  1064,  1085,
     754,   406,  1145,  1174,  1167,  -427,  -427,  1176,  -427,   853,
    1182,  -427,  -427,  1217,  -427,  -427,  -427,  -427,  -427,  -427,
    2749,  -427,   772,  -427,   569,  -427,   779,   316,  1693,   344,
     453,   894,  1187,   661,  -427,    49,    76,   675,   539,  1758,
     453,  1210,   805,   894,  -427,    50,   904,   225,   539,  -427,
    -427,   365,  1090,  -427,   396,   453,   453,   581,  1893,   453,
     453,  2112,   453,   148,   636,   453,  2059,   453,   453,  1204,
    1249,  1257,  1237,  -427,   628,  -427,  -427,  1266,  -427,  1820,
    -427,  -427,  1893,  -427,  1893,  -427,  1893,  1268,  1248,   534,
    -427,  -427,    22,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  1288,  1290,  -427,  1307,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  1318,  -427,  1163,  1236,  1330,   453,   379,
      59,   881,   539,   228,    74,   977,   539,  -427,  -427,  1047,
     900,  1269,  1283,   960,  1304,  1306,   973,  1331,  -427,  -427,
    1116,   998,  -427,  1119,  1013,  1014,  1025,  1332,  -427,  -427,
    1142,  1033,  -427,  1157,  1046,  1071,  -427,   345,   453,   192,
    1333,  1391,   369,  -427,   385,   388,  -427,  -427,    36,   453,
     453,  -427,  -427,  -427,  -427,  -427,  -427,  -427,   453,   453,
     453,   453,   453,   453,   528,  1395,   658,    70,  -427,  -427,
    -427,  -427,  -427,  1389,  1162,   853,  2749,   687,   453,    96,
     539,   453,   760,   119,   539,  -427,  1392,  1168,  2749,   453,
     143,   539,   687,   453,   146,   539,   848,  -427,  -427,  2538,
    2103,  2147,  1400,  1351,  -427,  -427,   307,  -427,  2571,  2749,
    2749,   608,   515,  -427,  1409,  2597,  2630,   368,   349,  1266,
    1408,  1361,  1266,  1411,  -427,  1412,  -427,  2656,   142,  -427,
     157,   210,     1,  1266,   683,  1379,  1380,   116,   528,  1169,
    -427,   713,  1171,  1415,   453,  -427,  -427,  1601,  -427,  -427,
    1438,  1440,  2156,     0,  -427,  -427,  1451,     0,   324,  -427,
    2749,   850,   453,  1443,  -427,   875,   453,  1444,  -427,  -427,
    -427,  1179,  1086,  1087,  -427,  1189,  1095,  1098,  -427,  1192,
    1101,  -427,  -427,  1215,  -427,  -427,  1230,  -427,  1232,  -427,
    1241,  1106,  -427,  -427,  1244,  -427,  -427,  1252,  -427,  1262,
    1447,   413,  -427,  -427,  2749,  1258,  1459,   453,  1450,   469,
    1457,  1281,  -427,  -427,  1176,   744,   290,  -427,   871,  -427,
     944,   898,   898,   898,   898,   898,   898,  1017,  -427,  1427,
    2427,  -427,   453,  1454,    12,   539,  2749,   453,  -427,  2749,
     155,   539,   453,  -427,   453,  1456,  2749,   453,  -427,   539,
    2749,   453,  -427,   158,   539,  -427,   373,  1266,   401,  2368,
     642,  1457,  -427,    19,   453,   453,  -427,   453,   273,  2191,
    1464,   273,   273,   273,    21,  2200,   453,  2235,   668,   699,
    2244,   453,  1466,   193,  2279,  -427,  -427,  -427,  -427,   202,
    1302,   255,   260,  -427,  -427,  1309,  -427,  2288,  -427,  -427,
    -427,  -427,  2749,  1966,  1893,   453,  1460,  1893,  1469,  1248,
    -427,  1470,  -427,   791,  1266,  -427,  -427,  -427,  -427,  -427,
    -427,  1467,   274,  2401,   174,   539,  2749,   453,   180,   539,
    2749,   453,  -427,  -427,  1305,  -427,  1311,  -427,  -427,  1314,
    -427,  1317,  -427,  -427,  1325,  -427,  -427,  -427,  -427,  -427,
    1335,  -427,  -427,  -427,   230,  -427,  1468,   453,  1474,  -427,
    2749,   453,   429,  -427,  -427,  -427,  -427,   453,  -427,  2749,
     453,  -427,  2749,   453,  -427,  2749,  2749,   453,  2749,  -427,
    2749,   453,  -427,   273,   273,   453,  2323,  1484,     0,  1486,
    1487,  -427,  1266,  -427,  2453,  1266,  -427,   564,  -427,  1266,
    -427,  1266,  -427,  1266,  -427,   539,  1893,  1483,  1485,  1470,
    -427,  2749,  1337,  1475,  2486,  1476,  2512,  1337,  1266,  -427,
    -427,  2749,    52,  -427,  -427,  -427,     0,  -427,   950,  2039,
    -427,  -427,  1528,  1893,  1674,  1509,     0,  1504,   453,  -427,
    2749,   453,  -427,  2749,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  2749,   453,  2749,  1447,  2682,  2749,  2749,  2749,
    2749,  1266,  -427,  1266,  -427,  2749,   702,  -427,   838,  -427,
    1360,  1457,  -427,  2332,   273,  -427,  -427,  1455,  -427,  -427,
    -427,   453,  -427,  -427,   453,  -427,  -427,  -427,  -427,  2749,
    -427,  1524,  -427,  1521,  -427,     0,  2749,  2749,  2749,  -427,
    1526,  1527,  1530,  1531,  1532,  1470,  1266,  -427,   365,  -427,
    2708,  2734,   453,  -427,  1375,   838,  1377,  1478,  1383,  1382,
    -427,  -427,  1533,  1536,  -427,  1537,  1386,  1386,  1478,  -427
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -427,  -427,  -427,  -427,  1534,    46,  -427,    80,   414,  1506,
    -427,  1510,    40,  -427,  -427,   -28,   397,  -308,  -427,  -315,
    1226,  1227,    -1,  -427,  -215,  -427,   839,  -427,  -427,  -427,
    -427,  -427,  -427,  -377,  1125,  -201,  -427,  -427,  -427,  -427,
    -427,  -427,  -418,  -427,  -427,  -427,  -427,  -427,  -427,  1000,
    -427,   499,  -373,  -427,  -427,  -427,   -94,  -427,  -426,  -427,
    1018,  -177,  -280,  -427,  -427,  1354,  -427,  -427,  -106,  -427,
    -111,  -427,  -427
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -391
static const short int yytable[] =
{
     180,   344,   483,   394,   541,   348,   172,   596,   542,   493,
     424,   596,   214,   189,   490,   276,   392,   496,   123,   600,
     398,  -391,   403,   434,   426,   411,   105,   427,  -391,   428,
      16,   429,   265,   422,  -391,   106,   113,   119,  -391,   277,
     593,   199,   498,   568,   131,   685,    13,    37,   278,  -391,
    -391,  -391,   190,    30,   103,   173,    13,    33,    21,   592,
    -391,   753,   550,   200,   361,   373,   174,   347,   175,   176,
     127,   511,   177,   178,   442,  -391,   172,   362,   420,   107,
     124,    93,   671,   686,   356,   435,   198,   107,   184,   446,
     185,   499,   208,   766,   368,    38,    39,  -391,   161,   348,
     107,   282,   286,   108,   107,   379,   572,   276,   388,   389,
     390,   517,   194,   395,   396,   107,   107,   107,   204,   407,
     189,    43,   575,   393,   265,   173,   107,   393,   276,   265,
     287,   276,   265,   276,   522,   276,   174,   186,   175,   176,
     265,   107,   177,   178,  -391,   265,    44,   189,   265,   344,
     265,   564,   265,   598,   400,    45,   189,   598,   527,   189,
     214,   531,   209,   107,   121,   360,   424,   122,    48,   364,
     653,   499,   440,   661,   371,  -391,   542,    40,   375,   538,
      50,  -391,   690,   565,   542,    41,   107,   542,   226,   718,
     227,   542,   229,   485,   700,   721,    57,   365,   566,   172,
       4,     5,     6,   173,   542,    77,   401,   377,   486,    80,
     107,   317,   484,   107,   174,   234,   175,   176,   634,   432,
     177,   178,   107,   500,   501,   107,   376,    47,    51,    52,
     102,   730,   502,   503,   504,   505,   506,   507,   379,    42,
     510,   107,   596,   703,    58,    59,   486,   107,   173,    46,
     749,   567,   516,    78,    79,   519,   597,    81,    82,   174,
     597,   175,   176,   526,   424,   177,   178,   530,   676,   642,
      53,   680,   682,   684,   539,    31,     1,     2,     3,   172,
     596,   444,   445,   424,   160,   448,   265,   393,   767,   541,
     596,   644,   751,   747,   161,   103,   704,    54,   774,   642,
      60,   705,   399,   402,    37,   128,   410,   412,   413,     4,
       5,     6,   379,   593,   421,   717,   545,   351,   582,    76,
     546,   645,    48,   192,   352,     7,     8,   493,   173,   515,
     172,   509,   603,   162,   521,    84,   606,   169,   393,   174,
     610,   175,   176,    89,   529,   177,   178,   161,   534,   596,
     355,   480,   129,   130,     4,     5,     6,   793,   432,   518,
     161,   481,    60,   523,    90,   601,    50,   195,   710,   711,
     528,   172,   714,   378,   532,   489,   210,   557,   550,   173,
     747,   640,   560,   742,   744,   481,   162,    91,   598,   559,
     174,   491,   175,   176,   495,   663,   177,   178,   645,   162,
     482,   161,   172,   541,   161,   751,   649,    93,   558,   385,
     432,   652,   320,   605,   196,   197,   655,   609,   656,   635,
     173,   658,   321,   664,   162,   660,   598,   421,   188,   636,
      92,   174,   441,   175,   176,   735,   598,   177,   178,   388,
     492,   674,   103,   162,    60,   481,   103,    94,     2,    61,
     691,   173,   694,   696,    55,   393,    97,   701,    86,   172,
     537,   393,   174,   393,   175,   176,   393,    98,   177,   178,
     393,   756,   276,   276,   787,    99,   276,   100,  -391,   712,
       4,     5,     6,   393,   492,   634,     4,     5,     6,   265,
     265,   597,   101,   265,   571,   598,    64,    65,   770,    15,
     163,   720,   132,   145,   187,   723,    25,    29,   173,    15,
      15,   154,   133,   594,   651,   122,   552,   594,   602,   174,
     654,   175,   176,    49,   432,   177,   178,    56,   659,   597,
     102,   732,    34,   662,   172,   734,   378,   553,    35,   597,
     125,   736,   789,   432,   737,    88,   126,   738,   289,   433,
     103,   739,    96,   109,    16,   740,    85,    23,   110,   745,
     300,    60,   303,   114,   120,    57,   205,   141,    41,   310,
     349,   313,   393,   753,   550,   276,    19,    16,   317,   144,
     757,    20,   344,   173,   318,   319,   754,   391,   134,     4,
       5,     6,   265,   214,   174,   135,   175,   176,   597,   136,
     177,   178,   276,   769,   719,   111,   112,   137,   722,   548,
     138,   193,   776,   206,   207,   777,   202,   549,   550,   265,
      16,   226,   153,   227,   672,   229,   139,   778,   675,   418,
     551,   679,   681,   683,   419,   140,   420,   404,   142,   279,
     214,   698,   405,    77,   280,    87,   276,   174,   234,   175,
     176,  -391,   667,   177,   178,   790,   283,   668,   791,   393,
      80,   284,    60,   265,   172,   509,    91,   359,   226,   143,
     227,   228,   229,   410,   172,   693,    60,     4,     5,     6,
      94,   363,   799,   173,   755,   146,   769,   354,    60,   569,
     357,    78,   281,   514,   174,   234,   175,   176,   367,   481,
     177,   178,   372,   147,   451,   172,   695,   455,   285,    82,
     459,  -391,   781,   173,   578,   463,   148,  -263,   466,   468,
     470,   579,   424,   173,   174,   474,   175,   176,   477,   479,
     177,   178,   149,    16,   174,   288,   175,   176,   570,   150,
     177,   178,    95,   741,   743,   643,   298,    41,   594,   174,
     152,   175,   176,   317,   173,   177,   178,   308,    41,   318,
     319,    60,   316,   317,   151,   174,   520,   175,   176,   318,
     319,   177,   178,   344,     4,     5,     6,   155,  -390,  -390,
    -390,  -390,   345,  -390,  -390,  -390,   594,   350,   322,  -390,
    -390,  -390,  -390,  -390,   156,  -390,   594,   172,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,    60,    16,  -390,   299,
      99,   370,   346,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,   409,   157,   786,  -390,   158,  -390,  -390,   347,
    -390,  -390,  -390,  -390,  -390,  -390,   173,  -391,  -336,    60,
      16,    60,   302,  -336,   533,   594,   604,   174,   159,   175,
     176,   326,   317,   177,   178,   171,   614,   616,   318,   319,
     619,   621,   344,    16,   624,   309,    60,  -377,  -377,  -377,
    -377,   608,  -377,  -377,  -377,   630,   137,   443,  -377,  -377,
    -377,  -377,  -377,    16,  -377,   312,   191,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,    60,    16,  -377,   450,   101,
     374,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,     4,     5,     6,  -377,   203,  -377,  -377,   347,  -377,
    -377,  -377,  -377,  -377,  -377,   329,   334,   335,   336,   337,
    -381,  -381,  -381,  -381,   210,  -381,  -381,  -381,   768,   753,
     550,  -381,  -381,  -381,  -381,  -381,    16,  -381,   454,   290,
    -381,  -381,  -381,   330,  -381,  -381,  -381,  -381,   291,    16,
    -381,   458,   139,   447,  -381,  -381,  -381,  -381,  -381,   331,
     332,   333,   334,   335,   336,   337,   338,  -381,  -381,  -381,
     339,   340,   341,   342,    16,   292,   462,  -381,   293,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,   329,    16,
      16,   465,   467,  -376,  -376,  -376,  -376,   294,  -376,  -376,
    -376,    16,   295,   469,  -376,  -376,  -376,  -376,  -376,    16,
    -376,   473,   296,  -376,  -376,  -376,   330,  -376,  -376,  -376,
    -376,   297,    16,  -376,   476,   449,    41,  -376,  -376,  -376,
    -376,  -376,   331,   332,   333,   334,   335,   336,   337,   338,
    -376,  -376,  -376,   339,   340,   341,   342,    16,   301,   478,
    -376,   307,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,   380,    16,    16,   613,   615,  -388,  -388,   304,   381,
    -388,    16,  -388,   618,    16,  -388,   620,    16,  -388,   623,
    -388,  -388,    16,  -388,   629,   305,  -388,   306,  -388,  -388,
    -388,  -388,  -388,  -388,   461,    41,  -388,   464,    41,   311,
    -388,   314,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,   383,  -388,
     472,    41,   315,   384,   322,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,   329,   475,    41,   143,   513,   -85,
     -85,   -85,   -85,   152,   525,   -85,   324,   576,   577,   580,
     432,   -85,   323,   -85,   -85,   325,   -85,   612,    41,   -85,
     327,   -85,   330,   -85,   -85,   -85,   -85,   617,    41,   -85,
     622,    41,   358,   -85,   -85,   -85,   -85,   -85,   331,   332,
     333,   334,   335,   336,   337,   338,   -85,   -85,   -85,   339,
     340,   341,   342,   625,    41,   369,   -85,   328,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   344,   626,    41,
     627,    41,  -390,  -390,   414,  -390,   345,   417,  -390,   628,
      41,   437,   631,    41,  -390,   415,  -390,  -390,   431,  -390,
     632,    41,  -390,   416,  -390,  -390,  -390,  -390,  -390,  -390,
     633,    41,  -390,   637,   638,   424,   438,   430,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,   318,   319,  -338,  -390,
     436,  -390,  -390,   347,  -390,  -390,  -390,  -390,  -390,  -390,
     344,   322,   328,   724,    41,  -377,  -377,  -342,  -377,   725,
      41,  -377,   726,    41,   706,   727,    41,  -377,  -339,  -377,
    -377,   439,  -377,   728,    41,  -377,   452,  -377,  -377,  -377,
    -377,  -377,  -377,   729,    41,  -377,   753,   550,   487,  -377,
     453,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -391,
     784,   456,   707,   457,  -377,  -377,   347,  -377,  -377,  -377,
    -377,  -377,  -377,   329,  -391,   802,  -391,   803,  -381,  -381,
     535,  -381,  -391,   805,  -381,  -391,   670,   488,   460,   471,
    -381,   508,  -381,  -381,   512,  -381,   543,   524,  -381,   544,
    -381,   330,  -381,  -381,  -381,  -381,   554,   560,  -381,   561,
     432,   562,  -381,   581,  -381,  -381,  -381,   331,   332,   333,
     334,   335,   336,   337,   338,  -381,  -381,  -381,   339,   340,
     341,   342,   573,   574,   588,  -381,   590,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,   788,   599,   607,   611,
     639,   212,   126,   634,   -85,   641,  -391,   214,   646,   650,
     678,   657,   405,   215,   731,   216,   217,   713,   218,   715,
     550,   219,   716,   220,   330,   221,   222,   223,   224,   733,
     748,   225,   750,   752,   758,   226,   759,   227,   228,   229,
     331,   332,   333,   334,   335,   336,   337,   338,   230,   231,
     232,   339,   340,   341,   342,   773,   760,   763,   -85,   775,
     233,   174,   234,   175,   176,   235,   236,   177,   178,   329,
     792,   670,   794,   795,  -230,  -230,   796,   797,   798,   806,
    -230,  -391,   807,   808,    32,    75,  -230,    83,  -230,  -230,
     494,  -230,   497,   772,  -230,   589,  -230,   330,  -230,  -230,
    -230,  -230,   699,   673,  -230,     0,     0,     0,  -230,     0,
    -230,  -230,  -230,   331,   332,   333,   334,   335,   336,   337,
     338,  -230,  -230,  -230,   339,   340,   341,   342,   423,     0,
       0,     0,     0,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,   583,     0,     0,     0,     0,  -222,  -222,     0,
     115,     0,  -222,  -222,    27,   116,     0,     0,   584,  -222,
     585,  -222,  -222,     0,  -222,    55,   201,  -222,     0,  -222,
       0,  -222,  -222,  -222,  -222,     0,     0,  -222,     0,     0,
       0,  -222,     0,  -222,  -222,  -222,     4,     5,     6,     0,
       0,     0,     0,     0,  -222,  -222,  -222,     4,     5,     6,
       0,     0,   117,   118,     0,     0,  -222,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,  -222,   771,     0,     0,     0,     0,
    -228,  -228,     0,    22,     0,  -228,  -228,    23,     0,     0,
       0,  -228,  -228,   585,  -228,  -228,     0,  -228,    87,   353,
    -228,     0,  -228,     0,  -228,  -228,  -228,  -228,     0,     0,
    -228,     0,     0,     0,  -228,     0,  -228,  -228,  -228,     4,
       5,     6,     0,     0,     0,     0,     0,  -228,  -228,  -228,
       4,     5,     6,     0,     0,     0,    24,     0,     0,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   211,     0,
       0,     0,     0,   212,   126,     0,    60,     0,   213,   214,
       2,    61,     0,    95,   366,   215,    62,   216,   217,    63,
     218,     0,     0,   219,     0,   220,     0,   221,   222,   223,
     224,     0,     0,   225,     0,     0,     0,   226,     0,   227,
     228,   229,     4,     5,     6,     4,     5,     6,     0,     0,
     230,   231,   232,     0,     0,     0,     0,     0,    64,    65,
       0,     0,   233,   174,   234,   175,   176,   235,   236,   177,
     178,   211,     0,     0,     0,     0,   212,   126,     0,    73,
       0,   425,   214,     2,    61,     0,     0,     0,   215,    74,
     216,   217,    63,   218,     0,     0,   219,     0,   220,     0,
     221,   222,   223,   224,     0,     0,   225,     0,     0,     0,
     226,     0,   227,   228,   229,     4,     5,     6,     0,     0,
       0,     0,     0,   230,   231,   232,     0,     0,     0,     0,
       0,    64,    65,     0,     0,   233,   174,   234,   175,   176,
     235,   236,   177,   178,   211,     0,     0,     0,     0,   212,
     126,     0,    26,     0,     0,   214,    27,     0,     0,     0,
       0,   215,     0,   216,   217,     0,   218,     0,     0,   219,
       0,   220,     0,   221,   222,   223,   224,     0,     0,   225,
       0,     0,     0,   226,     0,   227,   228,   229,     4,     5,
       6,     1,     2,     3,     0,     0,   230,   231,   232,     0,
       0,     0,     0,     0,    28,     0,     0,     0,   233,   174,
     234,   175,   176,   235,   236,   177,   178,   211,     0,     0,
       0,     0,   709,   126,     4,     5,     6,     0,   214,     2,
       3,     0,     0,     0,   215,     0,   216,   217,     0,   218,
       7,     8,   219,     0,   220,     0,   221,   222,   223,   224,
       0,     0,   225,     0,     0,     0,   226,     0,   227,   228,
     229,     4,     5,     6,     0,     0,     0,     0,     0,   230,
     231,   232,     0,     0,     0,     0,     0,     7,     8,     0,
       0,   233,   174,   234,   175,   176,   235,   236,   177,   178,
     380,     0,     0,     0,     0,   172,     0,     0,   381,  -388,
       0,     0,     0,     0,  -388,     0,     0,     0,     0,     0,
     344,     0,     0,     0,     0,   408,     0,     0,  -388,     0,
       0,   214,     0,     0,     0,     0,     0,     0,     0,  -388,
       0,     0,     0,     0,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,     0,     0,   173,  -388,  -388,   383,  -388,   226,
     409,   227,   384,   229,   344,   174,  -388,   175,   176,   536,
       0,   177,   178,   344,   173,   214,     0,     0,   397,     0,
       0,     0,     0,     0,   214,   174,   234,   175,   176,     0,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,   227,     0,   229,   344,     0,
       0,     0,   226,   540,   227,     0,   229,   344,   173,   214,
       0,     0,   591,     0,     0,     0,     0,     0,   214,   174,
     234,   175,   176,     0,     0,   177,   178,     0,   174,   234,
     175,   176,     0,     0,   177,   178,     0,   226,     0,   227,
       0,   229,   344,     0,     0,     0,   226,   677,   227,     0,
     229,   344,     0,   214,     0,     0,   689,     0,     0,     0,
       0,     0,   214,   174,   234,   175,   176,     0,     0,   177,
     178,     0,   174,   234,   175,   176,     0,     0,   177,   178,
       0,   226,     0,   227,     0,   229,   344,     0,     0,     0,
     226,   692,   227,     0,   229,   344,     0,   214,     0,     0,
     697,     0,     0,     0,     0,     0,   214,   174,   234,   175,
     176,     0,     0,   177,   178,     0,   174,   234,   175,   176,
       0,     0,   177,   178,     0,   226,     0,   227,     0,   229,
     344,     0,     0,     0,   226,   702,   227,     0,   229,   344,
       0,   214,     0,     0,   708,     0,     0,     0,     0,     0,
     214,   174,   234,   175,   176,     0,     0,   177,   178,     0,
     174,   234,   175,   176,     0,     0,   177,   178,     0,   226,
       0,   227,     0,   229,   344,     0,     0,     0,   226,   746,
     227,     0,   229,   344,     0,   214,     0,     0,   785,     0,
       0,     0,     0,     0,   214,   174,   234,   175,   176,     0,
       0,   177,   178,     0,   174,   234,   175,   176,     0,     0,
     177,   178,     0,   226,     0,   227,     0,   229,     0,  -391,
       0,     0,   226,     0,   227,     0,   229,   665,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
     234,   175,   176,     0,     0,   177,   178,   330,   174,   234,
     175,   176,   329,     0,   177,   178,     0,     0,   647,     0,
     -85,     0,     0,   331,   332,   333,   334,   335,   336,   337,
     338,     0,     0,     0,   339,   340,   341,   342,   329,     0,
     330,   -85,     0,     0,   647,     0,     0,     0,     0,     0,
       0,     0,   648,     0,     0,     0,   331,   332,   333,   334,
     335,   336,   337,   338,   329,     0,   330,   339,   340,   341,
     342,     0,  -358,     0,     0,     0,  -358,     0,   648,     0,
       0,     0,   331,   332,   333,   334,   335,   336,   337,   338,
       0,     0,   330,   339,   340,   341,   342,   329,     0,     0,
       0,     0,     0,   761,     0,     0,     0,     0,   331,   332,
     333,   334,   335,   336,   337,   338,     0,     0,     0,   339,
     340,   341,   342,   329,     0,   330,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,   331,   332,   333,   334,   335,   336,   337,   338,   329,
       0,   330,   339,   340,   341,   342,   535,     0,     0,     0,
       0,     0,     0,   765,     0,     0,     0,   331,   332,   333,
     334,   335,   336,   337,   338,     0,     0,   330,   339,   340,
     341,   342,   329,     0,     0,     0,     0,     0,   547,     0,
       0,     0,     0,   331,   332,   333,   334,   335,   336,   337,
     338,     0,     0,     0,   339,   340,   341,   342,  -391,     0,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   332,   333,   334,
     335,   336,   337,   338,   555,     0,   330,   339,   340,   341,
     342,  -391,     0,     0,     0,     0,     0,     0,     0,   556,
       0,     0,   331,   332,   333,   334,   335,   336,   337,   338,
       0,     0,     0,   339,   340,   341,   342,  -391,     0,   330,
       0,     0,     0,     0,     0,   563,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,   332,   333,   334,   335,
     336,   337,   338,   329,     0,   330,   339,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,   332,   333,   334,   335,   336,   337,   338,   329,
       0,   330,   339,   340,   341,   342,     0,     0,     0,     0,
       0,     0,     0,   779,     0,     0,     0,   331,   332,   333,
     334,   335,   336,   337,   338,   329,     0,   330,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,   800,
    -391,     0,     0,   331,   332,   333,   334,   335,   336,   337,
     338,     0,     0,   330,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,   801,     0,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,     0,     0,     0,
     339,   340,   341,   342,   331,   332,   333,   334,   335,   336,
     337,   338,     0,     0,     0,   339,   340,   341,   342
};

static const short int yycheck[] =
{
     106,     1,   317,   218,   381,   182,     6,   433,   381,   324,
       9,   437,    12,     1,   322,   126,   217,   325,     1,   437,
     221,     1,   223,     1,   239,   226,     6,   242,     9,   244,
       6,   246,   126,   234,     1,    15,    64,    65,     1,     6,
      40,    54,     6,    42,    72,    24,     0,     5,    15,     1,
       1,     1,    15,     0,    67,    55,    10,    11,     1,   432,
       1,     9,    10,    15,    15,    15,    66,    67,    68,    69,
      71,     1,    72,    73,    15,     1,     6,     1,     8,    67,
      63,     5,    63,    62,   190,    63,   114,    67,     6,    15,
       8,    55,   120,    41,   200,    53,    54,     1,    16,   276,
      67,   129,   130,    63,    67,   211,   414,   218,   214,   215,
     216,    15,   113,   219,   220,    67,    67,    67,   119,   225,
       1,    10,     6,   217,   218,    55,    67,   221,   239,   223,
     131,   242,   226,   244,    15,   246,    66,    55,    68,    69,
     234,    67,    72,    73,     1,   239,    67,     1,   242,     1,
     244,     9,   246,   433,     6,     6,     1,   437,    15,     1,
      12,    15,   122,    67,    11,   193,     9,    14,     5,   197,
      15,    55,   278,    15,   202,     1,   549,     1,   206,   380,
       5,     1,   555,    41,   557,     9,    67,   560,    40,    15,
      42,   564,    44,     1,     1,    15,     5,   198,    41,     6,
      37,    38,    39,    55,   577,     5,    58,   208,    16,     5,
      67,     9,   318,    67,    66,    67,    68,    69,    16,     9,
      72,    73,    67,   329,   330,    67,     1,     6,    53,    54,
       5,     1,   338,   339,   340,   341,   342,   343,   344,    63,
     346,    67,   668,    41,    53,    54,    16,    67,    55,    53,
     668,    41,   358,    53,    54,   361,   433,    53,    54,    66,
     437,    68,    69,   369,     9,    72,    73,   373,   548,     9,
      54,   551,   552,   553,   380,     3,     4,     5,     6,     6,
     706,   282,    54,     9,     6,   286,   380,   381,   706,   666,
     716,     1,   669,   666,    16,    67,    41,     6,   716,     9,
       1,    41,   222,   223,     5,     6,   226,   227,   228,    37,
      38,    39,   418,    40,   234,    41,     9,     1,   424,     6,
      13,   498,     5,     6,     8,    53,    54,   642,    55,   357,
       6,     7,   438,    55,   362,     6,   442,     6,   432,    66,
     446,    68,    69,    67,   372,    72,    73,    16,   376,   775,
       6,     6,    53,    54,    37,    38,    39,   775,     9,   360,
      16,    16,     1,   364,     6,    41,     5,     6,   583,   584,
     371,     6,   587,     8,   375,     6,    11,     9,    10,    55,
     753,   487,     9,   663,   664,    16,    55,     5,   668,    40,
      66,     6,    68,    69,     6,    22,    72,    73,   575,    55,
      55,    16,     6,   780,    16,   782,   512,     5,    40,    13,
       9,   517,     6,   441,    53,    54,   522,   445,   524,     6,
      55,   527,    16,    22,    55,   531,   706,   347,    53,    16,
       6,    66,    53,    68,    69,     6,   716,    72,    73,   545,
      55,   547,    67,    55,     1,    16,    67,     5,     5,     6,
     556,    55,   558,   559,     5,   549,    67,   563,    44,     6,
     380,   555,    66,   557,    68,    69,   560,     6,    72,    73,
     564,   686,   583,   584,   754,     5,   587,     6,     9,   585,
      37,    38,    39,   577,    55,    16,    37,    38,    39,   583,
     584,   668,     5,   587,   414,   775,    53,    54,   713,     0,
     103,   607,     1,    89,   107,   611,     7,     8,    55,    10,
      11,    97,    11,   433,   515,    14,     1,   437,   438,    66,
     521,    68,    69,    24,     9,    72,    73,    28,   529,   706,
       5,   637,     1,   534,     6,   641,     8,    22,     7,   716,
       1,   647,   757,     9,   650,    46,     7,   653,   134,    15,
      67,   657,    53,     1,     6,   661,     8,     5,     6,   665,
     146,     1,   148,    64,    65,     5,     6,     8,     9,   155,
       1,   157,   666,     9,    10,   686,     1,     6,     9,     8,
     686,     6,     1,    55,    15,    16,    22,     6,    67,    37,
      38,    39,   686,    12,    66,     6,    68,    69,   775,     5,
      72,    73,   713,   709,   605,    53,    54,     5,   609,     1,
       6,   112,   718,    53,    54,   721,   117,     9,    10,   713,
       6,    40,     8,    42,   544,    44,     5,   733,   548,     1,
      22,   551,   552,   553,     6,     5,     8,     1,     6,     1,
      12,   561,     6,     5,     6,     5,   757,    66,    67,    68,
      69,     9,    10,    72,    73,   761,     1,    15,   764,   753,
       5,     6,     1,   757,     6,     7,     5,     6,    40,     5,
      42,    43,    44,   593,     6,     7,     1,    37,    38,    39,
       5,     6,   788,    55,   685,    67,   792,   188,     1,     6,
     191,    53,    54,     6,    66,    67,    68,    69,   199,    16,
      72,    73,   203,     6,   290,     6,     7,   293,    53,    54,
     296,     9,    10,    55,     1,   301,    67,    15,   304,   305,
     306,     8,     9,    55,    66,   311,    68,    69,   314,   315,
      72,    73,     6,     6,    66,     8,    68,    69,    55,     6,
      72,    73,     5,   663,   664,     1,     8,     9,   668,    66,
       5,    68,    69,     9,    55,    72,    73,     8,     9,    15,
      16,     1,     8,     9,     6,    66,     6,    68,    69,    15,
      16,    72,    73,     1,    37,    38,    39,    67,     6,     7,
       8,     9,    10,    11,    12,    13,   706,     8,     9,    17,
      18,    19,    20,    21,     6,    23,   716,     6,    26,    27,
      28,    29,    30,    31,    32,    33,     1,     6,    36,     8,
       5,     6,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    41,    67,   754,    63,     6,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    55,     9,    10,     1,
       6,     1,     8,    15,     6,   775,     6,    66,     6,    68,
      69,     8,     9,    72,    73,     1,   452,   453,    15,    16,
     456,   457,     1,     6,   460,     8,     1,     6,     7,     8,
       9,     6,    11,    12,    13,   471,     5,     6,    17,    18,
      19,    20,    21,     6,    23,     8,     1,    26,    27,    28,
      29,    30,    31,    32,    33,     1,     6,    36,     8,     5,
       6,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    37,    38,    39,    63,     1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    48,    49,    50,    51,
       6,     7,     8,     9,    11,    11,    12,    13,     8,     9,
      10,    17,    18,    19,    20,    21,     6,    23,     8,    67,
      26,    27,    28,    29,    30,    31,    32,    33,     6,     6,
      36,     8,     5,     6,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     6,     6,     8,    63,    67,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,     6,
       6,     8,     8,     6,     7,     8,     9,     6,    11,    12,
      13,     6,     6,     8,    17,    18,    19,    20,    21,     6,
      23,     8,    67,    26,    27,    28,    29,    30,    31,    32,
      33,     6,     6,    36,     8,     8,     9,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     6,    67,     8,
      63,     6,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,     6,     6,     8,     8,     6,     7,    67,     9,
      10,     6,    12,     8,     6,    15,     8,     6,    18,     8,
      20,    21,     6,    23,     8,    67,    26,    67,    28,    29,
      30,    31,    32,    33,     8,     9,    36,     8,     9,    67,
      40,    67,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       8,     9,    67,    63,     9,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,     8,     9,     5,     6,     6,
       7,     8,     9,     5,     6,    12,     9,     8,     9,     8,
       9,    18,     8,    20,    21,     9,    23,     8,     9,    26,
       8,    28,    29,    30,    31,    32,    33,     8,     9,    36,
       8,     9,    15,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     8,     9,    15,    63,    10,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,     8,     9,
       8,     9,     6,     7,    40,     9,    10,    10,    12,     8,
       9,    15,     8,     9,    18,     6,    20,    21,    10,    23,
       8,     9,    26,     6,    28,    29,    30,    31,    32,    33,
       8,     9,    36,    15,    16,     9,    40,     9,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    15,    16,    10,    63,
      10,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,     9,    10,     8,     9,     6,     7,    10,     9,     8,
       9,    12,     8,     9,    15,     8,     9,    18,    10,    20,
      21,     1,    23,     8,     9,    26,    67,    28,    29,    30,
      31,    32,    33,     8,     9,    36,     9,    10,    15,    40,
      67,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     9,
      10,    67,    63,    67,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     1,     9,    10,     9,    10,     6,     7,
       8,     9,     9,    10,    12,     9,    10,     6,    67,    67,
      18,     6,    20,    21,    15,    23,     6,    15,    26,    58,
      28,    29,    30,    31,    32,    33,     7,     9,    36,    58,
       9,     9,    40,     8,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    63,    63,     6,    63,     6,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,     6,    15,    15,
       1,     6,     7,    16,     9,    15,     9,    12,    41,    15,
       6,    15,     6,    18,     6,    20,    21,    17,    23,    10,
      10,    26,    15,    28,    29,    30,    31,    32,    33,    15,
       6,    36,     6,     6,    11,    40,    11,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     6,    41,    41,    63,    15,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     1,
       6,    10,     6,     6,     6,     7,     6,     6,     6,     6,
      12,    63,     6,     6,    10,    35,    18,    41,    20,    21,
     324,    23,   325,   714,    26,   430,    28,    29,    30,    31,
      32,    33,   562,   545,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   234,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       1,    -1,    11,    12,     5,     6,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    23,     5,     6,    26,    -1,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    37,    38,    39,
      -1,    -1,    53,    54,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,
       6,     7,    -1,     1,    -1,    11,    12,     5,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,     5,     6,
      26,    -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      37,    38,    39,    -1,    -1,    -1,    54,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     1,    -1,
      -1,    -1,    -1,     6,     7,    -1,     1,    -1,    11,    12,
       5,     6,    -1,     5,     6,    18,    11,    20,    21,    14,
      23,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    37,    38,    39,    37,    38,    39,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     1,
      -1,    11,    12,     5,     6,    -1,    -1,    -1,    18,    11,
      20,    21,    14,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,     1,    -1,    -1,    12,     5,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    23,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    37,    38,
      39,     4,     5,     6,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    -1,     6,     7,    37,    38,    39,    -1,    12,     5,
       6,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,
      53,    54,    26,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    29,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    40,
      41,    42,    63,    44,     1,    66,    67,    68,    69,     6,
      -1,    72,    73,     1,    55,    12,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    44,     1,    -1,
      -1,    -1,    40,     6,    42,    -1,    44,     1,    55,    12,
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
      -1,    42,    -1,    44,     1,    -1,    -1,    -1,    40,     6,
      42,    -1,    44,     1,    -1,    12,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    12,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    40,    -1,    42,    -1,    44,    -1,     1,
      -1,    -1,    40,    -1,    42,    -1,    44,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    -1,    72,    73,    29,    66,    67,
      68,    69,     1,    -1,    72,    73,    -1,    -1,     7,    -1,
       9,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59,     1,    -1,
      29,    63,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,     1,    -1,    29,    56,    57,    58,
      59,    -1,     9,    -1,    -1,    -1,    13,    -1,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    29,    56,    57,    58,    59,     1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    58,    59,     1,    -1,    29,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,     1,
      -1,    29,    56,    57,    58,    59,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    29,    56,    57,
      58,    59,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    58,    59,     1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    27,    -1,    29,    56,    57,    58,
      59,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    56,    57,    58,    59,     1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,     1,    -1,    29,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,     1,
      -1,    29,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,     1,    -1,    29,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
       1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    29,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    29,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    58,    59,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,     6,    37,    38,    39,    53,    54,    88,
      89,    90,    91,    92,    93,   138,     6,    95,    96,     1,
       6,     1,     1,     5,    54,   138,     1,     5,    53,   138,
       0,     3,    91,    92,     1,     7,    97,     5,    53,    54,
       1,     9,    63,    10,    67,     6,    53,     6,     5,   138,
       5,    53,    54,    54,     6,     5,   138,     5,    53,    54,
       1,     6,    11,    14,    53,    54,    92,    98,    99,   100,
     101,   102,   138,     1,    11,    98,     6,     5,    53,    54,
       5,    53,    54,    96,     6,     8,    95,     5,   138,    67,
       6,     5,     6,     5,     5,     5,   138,    67,     6,     5,
       6,     5,     5,    67,     1,     6,    15,    67,    99,     1,
       6,    53,    54,   102,   138,     1,     6,    53,    54,   102,
     138,    11,    14,     1,    63,     1,     7,   109,     6,    53,
      54,   102,     1,    11,    67,     6,     5,     5,     6,     5,
       5,     8,     6,     5,     8,    95,    67,     6,    67,     6,
       6,     6,     5,     8,    95,    67,     6,    67,     6,     6,
       6,    16,    55,   103,   104,   105,   106,   107,   108,     6,
     103,     1,     6,    55,    66,    68,    69,    72,    73,   143,
     155,   156,   157,   158,     6,     8,    55,   103,    53,     1,
      15,     1,     6,   138,   109,     6,    53,    54,   102,    54,
      15,     6,   138,     1,   109,     6,    53,    54,   102,    99,
      11,     1,     6,    11,    12,    18,    20,    21,    23,    26,
      28,    30,    31,    32,    33,    36,    40,    42,    43,    44,
      53,    54,    55,    65,    67,    70,    71,    94,   109,   110,
     111,   112,   114,   116,   117,   118,   119,   120,   121,   122,
     123,   126,   127,   128,   130,   131,   132,   133,   134,   135,
     137,   139,   140,   141,   142,   143,   144,   145,   148,   149,
     150,   151,   152,   153,   154,   155,   157,     6,    15,     1,
       6,    54,   102,     1,     6,    53,   102,   109,     8,    95,
      67,     6,     6,    67,     6,     6,    67,     6,     8,     8,
      95,    67,     8,    95,    67,    67,    67,     6,     8,     8,
      95,    67,     8,    95,    67,    67,     8,     9,    15,    16,
       6,    16,     9,     8,     9,     9,     8,     8,    10,     1,
      29,    45,    46,    47,    48,    49,    50,    51,    52,    56,
      57,    58,    59,   159,     1,    10,    40,    67,   148,     1,
       8,     1,     8,     6,   138,     6,   155,   138,    15,     6,
     102,    15,     1,     6,   102,   109,     6,   138,   155,    15,
       6,   102,   138,    15,     6,   102,     1,   109,     8,   155,
       1,     9,    10,    58,    63,    13,   146,   147,   155,   155,
     155,     6,   122,   143,   111,   155,   155,     6,   122,    94,
       6,    58,    94,   122,     1,     6,   136,   155,     6,    41,
      94,   122,    94,    94,    40,     6,     6,    10,     1,     6,
       8,    94,   122,   152,     9,    11,   111,   111,   111,   111,
       9,    10,     9,    15,     1,    63,    10,    15,    40,     1,
     155,    53,    15,     6,   109,    54,    15,     6,   109,     8,
       8,    95,    67,    67,     8,    95,    67,    67,     8,    95,
      67,     8,     8,    95,     8,     8,    95,     8,    95,     8,
      95,    67,     8,     8,    95,     8,     8,    95,     8,    95,
       6,    16,    55,   106,   155,     1,    16,    15,     6,     6,
     104,     6,    55,   106,   107,     6,   104,   108,     6,    55,
     155,   155,   155,   155,   155,   155,   155,   155,     6,     7,
     155,     1,    15,     6,     6,   102,   155,    15,   109,   155,
       6,   102,    15,   109,    15,     6,   155,    15,   109,   102,
     155,    15,   109,     6,   102,     8,     6,    94,   122,   155,
       6,   120,   139,     6,    58,     9,    13,     7,     1,     9,
      10,    22,     1,    22,     7,    27,     9,     9,    40,    40,
       9,    58,     9,     9,     9,    41,    41,    41,    42,     6,
      55,    94,   104,    63,    63,     6,     8,     9,     1,     8,
       8,     8,   155,     1,    17,    19,   113,   115,     6,   121,
       6,     6,   139,    40,    94,   129,   145,   148,   149,     6,
     129,    41,    94,   155,     6,   102,   155,    15,     6,   102,
     155,    15,     8,     8,    95,     8,    95,     8,     8,    95,
       8,    95,     8,     8,    95,     8,     8,     8,     8,     8,
      95,     8,     8,     8,    16,     6,    16,    15,    16,     1,
     155,    15,     9,     1,     1,   148,    41,     7,    41,   155,
      15,   109,   155,    15,   109,   155,   155,    15,   155,   109,
     155,    15,   109,    22,    22,     9,     9,    10,    15,     9,
      10,    63,    94,   147,   155,    94,   149,     6,     6,    94,
     149,    94,   149,    94,   149,    24,    62,   124,   125,     6,
     139,   155,     6,     7,   155,     7,   155,     6,    94,   136,
       1,   155,     6,    41,    41,    41,    15,    63,     6,     6,
     111,   111,   155,    17,   111,    10,    15,    41,    15,   109,
     155,    15,   109,   155,     8,     8,     8,     8,     8,     8,
       1,     6,   155,    15,   155,     6,   155,   155,   155,   155,
     155,    94,   149,    94,   149,   155,     6,   139,     6,   129,
       6,   120,     6,     9,    22,   109,   111,   155,    11,    11,
      41,     7,    41,    41,     7,    41,    41,   129,     8,   155,
     111,     1,   113,     6,   129,    15,   155,   155,   155,    41,
       9,    10,     9,    10,    10,     6,    94,   149,     1,   111,
     155,   155,     6,   129,     6,     6,     6,     6,     6,   155,
      41,    41,    10,    10,    63,    10,     6,     6,     6,    63
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
#line 104 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 112 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 115 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 123 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 124 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  ;}
    break;

  case 7:
#line 129 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 8:
#line 130 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 9:
#line 133 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 10:
#line 136 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 11:
#line 141 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 12:
#line 147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 153 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 159 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 15:
#line 165 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 16:
#line 171 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 17:
#line 178 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 18:
#line 185 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 19:
#line 191 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 20:
#line 197 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 21:
#line 203 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 22:
#line 209 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 23:
#line 216 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 24:
#line 223 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 25:
#line 229 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 26:
#line 235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
							(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 27:
#line 241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 28:
#line 247 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 255 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 263 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 31:
#line 269 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 277 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 285 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
										acc_mod="";
								;}
    break;

  case 34:
#line 291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 35:
#line 297 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 36:
#line 303 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 37:
#line 309 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 38:
#line 315 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 39:
#line 321 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 40:
#line 324 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 41:
#line 327 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 42:
#line 333 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 43:
#line 339 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 44:
#line 345 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 45:
#line 351 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 46:
#line 358 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 47:
#line 365 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 48:
#line 371 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-2].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 49:
#line 377 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 50:
#line 383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 51:
#line 389 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 397 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 405 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
								(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 54:
#line 411 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-3].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 55:
#line 417 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 425 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 433 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
												(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
												acc_mod="";
											;}
    break;

  case 58:
#line 439 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 59:
#line 445 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 60:
#line 451 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 61:
#line 457 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 62:
#line 463 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 63:
#line 469 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 64:
#line 472 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-6].r.colNum)-strlength((yyvsp[-6].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-7].r.lineNum),(yyvsp[-6].r.colNum)-strlen((yyvsp[-6].r.strVal)),"repeated modifier ","");
								;}
    break;

  case 65:
#line 475 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 66:
#line 481 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 67:
#line 487 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 68:
#line 493 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 69:
#line 499 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 70:
#line 506 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-7].r.colNum)-strlength((yyvsp[-7].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-8].r.lineNum),(yyvsp[-7].r.colNum)-strlen((yyvsp[-7].r.strVal)),"repeated modifier ","");
								(yyval.type)=p->createType((yyvsp[-7].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 71:
#line 513 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 72:
#line 519 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-6].r.lineNum),(yyvsp[-2].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 73:
#line 525 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 74:
#line 531 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 75:
#line 537 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 545 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 554 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 78:
#line 560 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-7].r.lineNum),(yyvsp[-3].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
													acc_mod="";
											;}
    break;

  case 79:
#line 566 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 574 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 582 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 82:
#line 587 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 83:
#line 592 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 84:
#line 599 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 85:
#line 600 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 86:
#line 603 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 87:
#line 610 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 88:
#line 619 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 89:
#line 623 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 90:
#line 631 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 91:
#line 635 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 92:
#line 638 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 93:
#line 644 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 94:
#line 651 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 95:
#line 657 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  ;}
    break;

  case 96:
#line 665 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 97:
#line 666 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 98:
#line 667 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected 'def' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
						err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'def' ","");									
						;}
    break;

  case 99:
#line 673 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 100:
#line 674 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 101:
#line 675 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 102:
#line 676 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 103:
#line 682 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 104:
#line 688 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
							;}
    break;

  case 105:
#line 693 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
								;}
    break;

  case 106:
#line 698 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 107:
#line 703 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									;}
    break;

  case 108:
#line 708 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 109:
#line 712 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 110:
#line 716 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 111:
#line 720 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 112:
#line 726 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
											;}
    break;

  case 113:
#line 732 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 114:
#line 737 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";;}
    break;

  case 115:
#line 738 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";;}
    break;

  case 116:
#line 739 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";;}
    break;

  case 117:
#line 740 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";;}
    break;

  case 118:
#line 741 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 119:
#line 745 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 120:
#line 749 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 121:
#line 753 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
											;}
    break;

  case 122:
#line 759 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
											;}
    break;

  case 123:
#line 766 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 124:
#line 772 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 125:
#line 778 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 126:
#line 782 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 127:
#line 787 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=(yyval.var);
												acc_mod="";
												;}
    break;

  case 128:
#line 793 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													
													;}
    break;

  case 129:
#line 800 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 130:
#line 804 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 131:
#line 808 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 132:
#line 815 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
														v=(yyval.var);
														acc_mod="";
													;}
    break;

  case 133:
#line 821 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 134:
#line 827 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 135:
#line 833 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 136:
#line 837 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 137:
#line 841 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 138:
#line 847 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
															v=(yyval.var);
															acc_mod="";
														;}
    break;

  case 139:
#line 853 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=(yyval.var);
																	acc_mod="";
																;}
    break;

  case 140:
#line 859 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
																;}
    break;

  case 141:
#line 865 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 142:
#line 869 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-5].r.colNum)-strlength((yyvsp[-5].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-5].r.colNum)-strlen((yyvsp[-5].r.strVal)),"repeated modifier ","");									
								  ;}
    break;

  case 143:
#line 873 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";
															;}
    break;

  case 144:
#line 879 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																(yyval.var)=p->addVariableToCurrentScope((yyvsp[-4].r.strVal),acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=(yyval.var);
																acc_mod="";	
															;}
    break;

  case 145:
#line 885 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 146:
#line 889 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-6].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																;}
    break;

  case 147:
#line 893 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 148:
#line 897 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 149:
#line 903 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 150:
#line 904 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 151:
#line 905 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 152:
#line 906 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 153:
#line 907 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 154:
#line 908 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 155:
#line 909 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 156:
#line 910 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 157:
#line 911 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 158:
#line 912 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 159:
#line 913 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 160:
#line 914 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;;}
    break;

  case 161:
#line 915 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																		;}
    break;

  case 162:
#line 919 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 163:
#line 923 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 164:
#line 927 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlen((yyvsp[-4].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 165:
#line 931 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 166:
#line 935 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
																		err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"repeated modifier ","");
																			;}
    break;

  case 167:
#line 943 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back("self");testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 168:
#line 944 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 169:
#line 945 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;;}
    break;

  case 170:
#line 946 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 171:
#line 950 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 172:
#line 954 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 173:
#line 958 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 174:
#line 962 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 175:
#line 966 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 176:
#line 972 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 177:
#line 973 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 178:
#line 974 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 179:
#line 976 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 180:
#line 977 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 181:
#line 978 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 182:
#line 979 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 183:
#line 980 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 184:
#line 981 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: paraself \n";;}
    break;

  case 185:
#line 984 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	SELF COMMA args_list\n";parameters.push_back("self");;}
    break;

  case 186:
#line 985 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	SELF COMMA ID \n"; parameters.push_back("self"); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 187:
#line 986 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	args_list COMMA SELF \n"; parameters.push_back("self");;}
    break;

  case 188:
#line 987 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"paraself:	ID COMMA SELF \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back("self");;}
    break;

  case 189:
#line 989 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 190:
#line 995 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 191:
#line 999 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 192:
#line 1003 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 193:
#line 1010 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 194:
#line 1011 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 195:
#line 1012 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 196:
#line 1016 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 197:
#line 1022 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 198:
#line 1023 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 199:
#line 1029 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 200:
#line 1033 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 201:
#line 1037 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 202:
#line 1043 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 203:
#line 1044 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 204:
#line 1045 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 205:
#line 1056 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 206:
#line 1057 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 207:
#line 1060 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 208:
#line 1061 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 209:
#line 1062 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 210:
#line 1063 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 211:
#line 1064 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 212:
#line 1065 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 213:
#line 1066 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 214:
#line 1067 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),yylval.r.colNum," Expected ';' ","");										
									;}
    break;

  case 215:
#line 1071 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 216:
#line 1078 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
								;}
    break;

  case 217:
#line 1084 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<(yyvsp[-2].r.lineNum)<<endl;
										err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum,"Error: illegal start of expression ","");										
										;}
    break;

  case 218:
#line 1088 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																		v=(yyval.var);
																		acc_mod="";
										;}
    break;

  case 219:
#line 1094 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 220:
#line 1095 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 221:
#line 1096 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 222:
#line 1099 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 223:
#line 1100 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 224:
#line 1101 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Expected 'else' ","");										
									;}
    break;

  case 225:
#line 1105 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 226:
#line 1106 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 227:
#line 1109 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 228:
#line 1110 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 229:
#line 1117 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 230:
#line 1120 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 231:
#line 1121 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 232:
#line 1127 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 233:
#line 1132 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 234:
#line 1137 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 235:
#line 1143 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 236:
#line 1146 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 237:
#line 1147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 238:
#line 1148 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 239:
#line 1149 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 240:
#line 1150 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 241:
#line 1151 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 242:
#line 1152 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 243:
#line 1156 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 244:
#line 1160 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 245:
#line 1164 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 246:
#line 1168 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 247:
#line 1172 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 248:
#line 1176 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 249:
#line 1180 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected reserved word 'in' ","");
								;}
    break;

  case 250:
#line 1187 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 251:
#line 1188 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 252:
#line 1189 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 253:
#line 1190 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 254:
#line 1191 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 255:
#line 1192 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 256:
#line 1193 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 257:
#line 1194 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 258:
#line 1198 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 259:
#line 1199 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 260:
#line 1203 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 261:
#line 1204 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 262:
#line 1205 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 263:
#line 1206 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 264:
#line 1207 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 265:
#line 1208 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 266:
#line 1211 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 267:
#line 1212 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 268:
#line 1215 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 269:
#line 1218 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 270:
#line 1219 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 271:
#line 1222 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 272:
#line 1223 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 273:
#line 1226 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 274:
#line 1227 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 275:
#line 1228 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 276:
#line 1230 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 277:
#line 1231 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 278:
#line 1232 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 279:
#line 1233 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 280:
#line 1234 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 281:
#line 1235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 282:
#line 1236 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 283:
#line 1237 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 284:
#line 1238 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 285:
#line 1239 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 286:
#line 1242 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 287:
#line 1243 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 288:
#line 1245 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 289:
#line 1246 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 290:
#line 1247 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 291:
#line 1248 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 292:
#line 1251 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 293:
#line 1252 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";
																	(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,true);
																	v=(yyval.var);
																	temp_id="";
																;}
    break;

  case 294:
#line 1257 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 295:
#line 1258 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";;}
    break;

  case 296:
#line 1259 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 297:
#line 1260 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=(yyval.var);
																		acc_mod="";
																	;}
    break;

  case 298:
#line 1272 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 299:
#line 1273 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 300:
#line 1274 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 301:
#line 1275 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";;}
    break;

  case 302:
#line 1276 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";;}
    break;

  case 303:
#line 1277 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 304:
#line 1278 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";;}
    break;

  case 305:
#line 1279 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 306:
#line 1280 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";;}
    break;

  case 307:
#line 1283 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 308:
#line 1284 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 309:
#line 1287 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 310:
#line 1290 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 311:
#line 1291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 312:
#line 1292 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 313:
#line 1293 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 314:
#line 1297 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 315:
#line 1302 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 316:
#line 1303 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 317:
#line 1309 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 318:
#line 1310 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 319:
#line 1313 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 320:
#line 1314 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 321:
#line 1315 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 322:
#line 1316 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 323:
#line 1320 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 324:
#line 1326 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 325:
#line 1327 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 326:
#line 1328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 327:
#line 1333 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 328:
#line 1334 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 329:
#line 1335 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 330:
#line 1336 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 331:
#line 1337 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 332:
#line 1338 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 333:
#line 1339 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 334:
#line 1340 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 335:
#line 1343 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 336:
#line 1344 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 337:
#line 1347 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 338:
#line 1348 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 339:
#line 1349 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 340:
#line 1350 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 341:
#line 1353 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 342:
#line 1354 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 343:
#line 1357 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 344:
#line 1358 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 345:
#line 1359 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 346:
#line 1360 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 347:
#line 1361 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 348:
#line 1364 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 349:
#line 1365 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 350:
#line 1366 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 351:
#line 1367 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 352:
#line 1368 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 353:
#line 1371 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 354:
#line 1372 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 355:
#line 1374 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 356:
#line 1375 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 357:
#line 1376 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 358:
#line 1378 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 359:
#line 1381 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 360:
#line 1382 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 361:
#line 1383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 362:
#line 1387 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 363:
#line 1391 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 364:
#line 1395 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 365:
#line 1402 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 366:
#line 1403 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 367:
#line 1406 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 368:
#line 1409 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 369:
#line 1412 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 370:
#line 1413 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 371:
#line 1416 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 372:
#line 1420 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 373:
#line 1421 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 374:
#line 1425 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 375:
#line 1426 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 376:
#line 1427 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 377:
#line 1428 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	self.id\n";
									(yyval.var)=p->checkVariable((yyvsp[0].r.strVal),t, yylval.r.lineNum, yylval.r.colNum,false,true);
																		v=(yyval.var);
																		acc_mod="";
									;}
    break;

  case 378:
#line 1434 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"expr:	self.id()\n";
										p->insert_func_Call(t,(yyvsp[-1].r.strVal),yylval.r.lineNum, yylval.r.colNum);
										cout<<"hhhhhhhhh"<<endl;
									;}
    break;

  case 379:
#line 1439 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: unExpected self at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"unExpected self ","");
									;}
    break;

  case 380:
#line 1443 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"expr:	long_id\n";
									
									;}
    break;

  case 381:
#line 1448 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 382:
#line 1454 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 383:
#line 1455 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 384:
#line 1456 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 385:
#line 1457 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 386:
#line 1458 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 387:
#line 1459 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 388:
#line 1461 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";
								temp_id=temp_id+(yyvsp[0].r.strVal);
							;}
    break;

  case 389:
#line 1464 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";temp_id=temp_id+"."+(yyvsp[0].r.strVal);;}
    break;

  case 390:
#line 1473 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";
										(yyval.var)=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum,false);
										v=(yyval.var);
										temp_id="";
								;}
    break;

  case 391:
#line 1478 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 392:
#line 1479 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";;}
    break;

  case 393:
#line 1480 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";;}
    break;

  case 394:
#line 1481 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";;}
    break;

  case 395:
#line 1484 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 396:
#line 1485 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 397:
#line 1486 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 398:
#line 1487 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 399:
#line 1488 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 400:
#line 1489 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 401:
#line 1490 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5331 "yacc.cpp"

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


#line 1492 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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

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
     PASS = 280,
     NONLOCAL = 281,
     PLUS_EQUAL = 282,
     MINUS_EQUAL = 283,
     DIV_EQUAL = 284,
     MOD_EQUAL = 285,
     AND_EQUAL = 286,
     OR_EQUAL = 287,
     SHAPOO_EQUAL = 288,
     LESS_THAN_2_EQUAL = 289,
     MORE_THAN_2_EQUAL = 290,
     STAR_2_EQUAL = 291,
     DIV_2_EQUAL = 292,
     MORE_LESS = 293,
     FALSE = 294,
     TRUE = 295,
     STAR_2 = 296,
     NUMBER_INT = 297,
     NUMBER_LONG = 298,
     NUMBER_FLOAT = 299,
     NAME = 300,
     DOT_3 = 301,
     EXPECT = 302,
     WITH = 303,
     AS = 304,
     ASSERT = 305,
     EQUAL = 306,
     DEL = 307,
     RETURN = 308,
     PRINT = 309,
     GLOBAL = 310,
     STAR_EQUAL = 311,
     LESS_THAN_2 = 312,
     RAISE = 313,
     PRIVATE = 314,
     PUBLIC = 315,
     PROTECTED = 316,
     YIELD = 317,
     MORE_THAN_2 = 318,
     STRING = 319,
     NONE = 320,
     IS = 321,
     DIV_2 = 322,
     LESS_OR_EQUAL = 323,
     MORE_OR_EQUAL = 324,
     EXCEPT = 325,
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
#define PASS 280
#define NONLOCAL 281
#define PLUS_EQUAL 282
#define MINUS_EQUAL 283
#define DIV_EQUAL 284
#define MOD_EQUAL 285
#define AND_EQUAL 286
#define OR_EQUAL 287
#define SHAPOO_EQUAL 288
#define LESS_THAN_2_EQUAL 289
#define MORE_THAN_2_EQUAL 290
#define STAR_2_EQUAL 291
#define DIV_2_EQUAL 292
#define MORE_LESS 293
#define FALSE 294
#define TRUE 295
#define STAR_2 296
#define NUMBER_INT 297
#define NUMBER_LONG 298
#define NUMBER_FLOAT 299
#define NAME 300
#define DOT_3 301
#define EXPECT 302
#define WITH 303
#define AS 304
#define ASSERT 305
#define EQUAL 306
#define DEL 307
#define RETURN 308
#define PRINT 309
#define GLOBAL 310
#define STAR_EQUAL 311
#define LESS_THAN_2 312
#define RAISE 313
#define PRIVATE 314
#define PUBLIC 315
#define PROTECTED 316
#define YIELD 317
#define MORE_THAN_2 318
#define STRING 319
#define NONE 320
#define IS 321
#define DIV_2 322
#define LESS_OR_EQUAL 323
#define MORE_OR_EQUAL 324
#define EXCEPT 325
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
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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
	stack<string> temp_id1;
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pp=true;
	bool is_list=false;
	bool is_dic=false;
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
#line 66 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
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
#line 336 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 348 "yacc.cpp"

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1588

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  100
/* YYNRULES -- Number of rules. */
#define YYNRULES  381
/* YYNRULES -- Number of states. */
#define YYNSTATES  682

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,     0,     3,     6,    10,    12,    17,    24,    32,    38,
      46,    55,    58,    65,    73,    78,    84,    92,   100,   106,
     112,   121,   130,   137,   144,   153,   162,   169,   176,   186,
     196,   204,   212,   221,   230,   237,   244,   254,   264,   272,
     280,   290,   300,   308,   316,   320,   323,   325,   327,   330,
     332,   334,   336,   338,   340,   342,   344,   346,   350,   352,
     355,   359,   362,   364,   367,   369,   372,   374,   378,   381,
     384,   387,   390,   392,   394,   396,   398,   400,   402,   404,
     406,   408,   410,   412,   414,   416,   418,   420,   422,   425,
     428,   430,   432,   434,   436,   438,   440,   443,   445,   447,
     450,   453,   457,   459,   462,   464,   468,   470,   473,   476,
     480,   483,   487,   490,   494,   497,   501,   503,   505,   507,
     509,   511,   513,   516,   521,   527,   532,   538,   546,   555,
     560,   568,   575,   585,   590,   598,   606,   613,   617,   622,
     625,   629,   634,   640,   642,   646,   648,   651,   656,   658,
     661,   664,   666,   668,   674,   677,   681,   683,   686,   689,
     693,   695,   698,   701,   703,   706,   710,   712,   715,   717,
     719,   721,   723,   725,   727,   729,   731,   734,   736,   739,
     742,   745,   749,   751,   754,   757,   761,   763,   766,   769,
     773,   775,   778,   781,   784,   788,   792,   794,   797,   800,
     803,   807,   811,   813,   816,   819,   822,   825,   828,   832,
     836,   840,   844,   846,   849,   852,   855,   858,   860,   862,
     865,   867,   870,   875,   879,   881,   884,   887,   891,   894,
     897,   901,   905,   907,   910,   914,   918,   922,   927,   932,
     937,   942,   948,   954,   959,   964,   970,   976,   982,   988,
     990,   992,   994,   996,   998,  1000,  1002,  1004,  1006,  1009,
    1012,  1016,  1020,  1023,  1025,  1028,  1031,  1035,  1038,  1040,
    1043,  1046,  1050,  1053,  1057,  1061,  1064,  1067,  1071,  1073,
    1076,  1079,  1083,  1085,  1087,  1090,  1094,  1098,  1103,  1106,
    1109,  1113,  1115,  1118,  1121,  1124,  1128,  1132,  1134,  1137,
    1139,  1142,  1145,  1149,  1152,  1156,  1159,  1163,  1165,  1168,
    1171,  1175,  1180,  1186,  1189,  1193,  1198,  1202,  1207,  1212,
    1218,  1221,  1223,  1226,  1229,  1233,  1236,  1240,  1245,  1250,
    1255,  1261,  1267,  1273,  1279,  1286,  1293,  1299,  1305,  1312,
    1319,  1326,  1333,  1339,  1346,  1349,  1353,  1356,  1360,  1362,
    1364,  1367,  1370,  1376,  1380,  1384,  1389,  1396,  1399,  1402,
    1405,  1409,  1413,  1417,  1424,  1429,  1434,  1440,  1448,  1452,
    1455,  1459,  1462,  1466,  1470,  1472,  1475,  1477,  1479,  1484,
    1490,  1493
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     111,     0,    -1,   112,     3,    -1,   134,    98,   113,    -1,
     113,    -1,     5,    45,    99,   156,    -1,     5,    45,    89,
     100,    99,   156,    -1,     5,    45,    89,   202,   100,    99,
     156,    -1,   126,     5,    45,    99,   156,    -1,   126,     5,
      45,    89,   100,    99,   156,    -1,   126,     5,    45,    89,
     202,   100,    99,   156,    -1,   115,   156,    -1,    15,    45,
     116,    24,   157,    99,    -1,    15,   126,    45,   116,    24,
     157,    99,    -1,    15,    45,   116,    99,    -1,    15,   126,
      45,   116,    99,    -1,    15,    13,    45,   116,    24,   157,
      99,    -1,    15,    12,    45,   116,    24,   157,    99,    -1,
      15,    13,    45,   116,    99,    -1,    15,    12,    45,   116,
      99,    -1,    15,    13,    12,    45,   116,    24,   157,    99,
      -1,    15,    12,    13,    45,   116,    24,   157,    99,    -1,
      15,    13,    12,    45,   116,    99,    -1,    15,    12,    13,
      45,   116,    99,    -1,    15,    12,   126,    45,   116,    24,
     157,    99,    -1,    15,    13,   126,    45,   116,    24,   157,
      99,    -1,    15,    13,   126,    45,   116,    99,    -1,    15,
      12,   126,    45,   116,    99,    -1,    15,    13,    12,   126,
      45,   116,    24,   157,    99,    -1,    15,    12,    13,   126,
      45,   116,    24,   157,    99,    -1,    15,    13,    12,   126,
      45,   116,    99,    -1,    15,    12,    13,   126,    45,   116,
      99,    -1,    15,   126,    13,    45,   116,    24,   157,    99,
      -1,    15,   126,    12,    45,   116,    24,   157,    99,    -1,
      15,   126,    13,    45,   116,    99,    -1,    15,   126,    12,
      45,   116,    99,    -1,    15,   126,    13,    12,    45,   116,
      24,   157,    99,    -1,    15,   126,    12,    13,    45,   116,
      24,   157,    99,    -1,    15,   126,    13,    12,    45,   116,
      99,    -1,    15,   126,    12,    13,    45,   116,    99,    -1,
      15,    13,   126,    12,    45,   116,    24,   157,    99,    -1,
      15,    12,   126,    13,    45,   116,    24,   157,    99,    -1,
      15,    13,   126,    12,    45,   116,    99,    -1,    15,    12,
     126,    13,    45,   116,    99,    -1,    89,   202,   100,    -1,
      89,   100,    -1,   118,    -1,   144,    -1,   119,    98,    -1,
     120,    -1,   128,    -1,   129,    -1,   130,    -1,   134,    -1,
     142,    -1,   143,    -1,   127,    -1,   122,   125,   194,    -1,
     122,    -1,   122,   121,    -1,   101,   122,   121,    -1,   101,
     122,    -1,   124,    -1,   124,    88,    -1,    88,    -1,   157,
     124,    -1,   157,    -1,   166,   124,    88,    -1,   166,    88,
      -1,    88,   157,    -1,    88,   166,    -1,   124,   123,    -1,
     123,    -1,    27,    -1,    28,    -1,    56,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    59,    -1,    60,    -1,
      61,    -1,    54,   192,    -1,    52,   192,    -1,    25,    -1,
     131,    -1,   132,    -1,   133,    -1,    72,    -1,    73,    -1,
      53,   194,    -1,    53,    -1,   135,    -1,     4,   137,    -1,
      88,   138,    -1,   136,    88,   138,    -1,   138,    -1,   138,
     136,    -1,   139,    -1,   139,    49,    45,    -1,    45,    -1,
      45,   140,    -1,   102,    45,    -1,   140,   102,    45,    -1,
      88,    45,    -1,   141,    88,    45,    -1,    55,    45,    -1,
      55,    45,   141,    -1,    26,    45,    -1,    26,    45,   141,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   152,
      -1,   114,    -1,    15,   198,    -1,    18,   157,    99,   156,
      -1,   145,    18,   157,    99,   156,    -1,    17,   157,    99,
     156,    -1,    17,   157,    99,   156,   145,    -1,    17,   157,
      99,   156,    16,    99,   156,    -1,    17,   157,    99,   156,
     145,    16,    99,   156,    -1,    19,   157,    99,   156,    -1,
      19,   157,    99,   156,    16,    99,   156,    -1,    20,   192,
      21,   194,    99,   156,    -1,    20,   192,    21,   194,    99,
     156,    16,    99,   156,    -1,    22,    99,   156,   150,    -1,
      22,    99,   156,   150,    16,    99,   156,    -1,    22,    99,
     156,   150,    23,    99,   156,    -1,    22,    99,   156,    23,
      99,   156,    -1,   154,    99,   156,    -1,   150,   154,    99,
     156,    -1,    88,   153,    -1,   151,    88,   153,    -1,    48,
     153,    99,   156,    -1,    48,   153,   151,    99,   156,    -1,
     157,    -1,   157,    49,   168,    -1,    70,    -1,    70,   157,
      -1,    70,   157,    49,    45,    -1,   117,    -1,   117,   155,
      -1,   155,     6,    -1,     6,    -1,   159,    -1,   159,    17,
     159,    16,   157,    -1,     8,   161,    -1,   158,     8,   161,
      -1,   161,    -1,   161,   158,    -1,     9,   162,    -1,   160,
       9,   162,    -1,   162,    -1,   162,   160,    -1,    10,   162,
      -1,   164,    -1,   165,   168,    -1,   163,   165,   168,    -1,
     168,    -1,   168,   163,    -1,    91,    -1,    92,    -1,    51,
      -1,    69,    -1,    68,    -1,    38,    -1,    11,    -1,    21,
      -1,    10,    21,    -1,    66,    -1,    66,    10,    -1,    95,
     168,    -1,   103,   170,    -1,   167,   103,   170,    -1,   170,
      -1,   170,   167,    -1,   104,   172,    -1,   169,   104,   172,
      -1,   172,    -1,   172,   169,    -1,   105,   174,    -1,   171,
     105,   174,    -1,   174,    -1,   174,   171,    -1,    57,   176,
      -1,    63,   176,    -1,   173,    57,   176,    -1,   173,    63,
     176,    -1,   176,    -1,   176,   173,    -1,    93,   178,    -1,
      94,   178,    -1,   175,    93,   178,    -1,   175,    94,   178,
      -1,   178,    -1,   178,   175,    -1,    95,   179,    -1,    96,
     179,    -1,    97,   179,    -1,    67,   179,    -1,   177,    95,
     179,    -1,   177,    96,   179,    -1,   177,    97,   179,    -1,
     177,    67,   179,    -1,   179,    -1,   179,   177,    -1,    93,
     179,    -1,    94,   179,    -1,   106,   179,    -1,   181,    -1,
     186,    -1,   180,   186,    -1,   183,    -1,   183,   180,    -1,
     183,   180,    41,   179,    -1,   183,    41,   179,    -1,    64,
      -1,   182,    64,    -1,    89,   100,    -1,    89,   185,   100,
      -1,    90,   107,    -1,   108,   109,    -1,    90,   185,   107,
      -1,   108,   197,   109,    -1,    45,    -1,    15,    45,    -1,
      15,   126,    45,    -1,    15,    13,    45,    -1,    15,    12,
      45,    -1,    15,    13,    12,    45,    -1,    15,    12,    13,
      45,    -1,    15,    13,   126,    45,    -1,    15,    12,   126,
      45,    -1,    15,    13,    12,   126,    45,    -1,    15,    12,
      13,   126,    45,    -1,    15,   126,    13,    45,    -1,    15,
     126,    12,    45,    -1,    15,   126,    13,    12,    45,    -1,
      15,   126,    12,    13,    45,    -1,    15,    13,   126,    12,
      45,    -1,    15,    12,   126,    13,    45,    -1,    42,    -1,
      44,    -1,    43,    -1,    71,    -1,   182,    -1,    46,    -1,
      65,    -1,    40,    -1,    39,    -1,    88,   157,    -1,    88,
     166,    -1,   184,    88,   157,    -1,   184,    88,   166,    -1,
     157,   208,    -1,   157,    -1,   157,   184,    -1,   157,    88,
      -1,   157,   184,    88,    -1,   166,   208,    -1,   166,    -1,
     166,   184,    -1,   166,    88,    -1,   166,   184,    88,    -1,
      89,   100,    -1,    89,   202,   100,    -1,    90,   188,   107,
      -1,   102,    45,    -1,    88,   189,    -1,   187,    88,   189,
      -1,   189,    -1,   189,   187,    -1,   189,    88,    -1,   189,
     187,    88,    -1,   157,    -1,    99,    -1,   157,    99,    -1,
     157,    99,   157,    -1,   157,    99,   190,    -1,   157,    99,
     157,   190,    -1,    99,   157,    -1,    99,   190,    -1,    99,
     157,   190,    -1,    99,    -1,    99,   157,    -1,    88,   168,
      -1,    88,   166,    -1,   191,    88,   168,    -1,   191,    88,
     166,    -1,   168,    -1,   168,   191,    -1,   166,    -1,   166,
     191,    -1,   168,    88,    -1,   168,   191,    88,    -1,   166,
      88,    -1,   166,   191,    88,    -1,    88,   157,    -1,    88,
     157,   193,    -1,   157,    -1,   157,   193,    -1,   157,    88,
      -1,   157,   193,    88,    -1,    88,   157,    99,   157,    -1,
     195,    88,   157,    99,   157,    -1,    88,   157,    -1,   196,
      88,   157,    -1,   157,    99,   157,   208,    -1,   157,    99,
     157,    -1,   157,    99,   157,    88,    -1,   157,    99,   157,
     195,    -1,   157,    99,   157,   195,    88,    -1,   157,   208,
      -1,   157,    -1,   157,    88,    -1,   157,   196,    -1,   157,
     196,    88,    -1,   199,   156,    -1,     5,    45,    99,    -1,
       5,   126,    45,    99,    -1,     5,    13,    45,    99,    -1,
       5,    12,    45,    99,    -1,     5,    13,    12,    45,    99,
      -1,     5,    12,    13,    45,    99,    -1,     5,    12,   126,
      45,    99,    -1,     5,    13,   126,    45,    99,    -1,     5,
      13,    12,   126,    45,    99,    -1,     5,    12,    13,   126,
      45,    99,    -1,     5,   126,    13,    45,    99,    -1,     5,
     126,    12,    45,    99,    -1,     5,   126,    13,    12,    45,
      99,    -1,     5,   126,    12,    13,    45,    99,    -1,     5,
      13,   126,    12,    45,    99,    -1,     5,    12,   126,    13,
      45,    99,    -1,     5,    45,    89,   100,    99,    -1,     5,
      45,    89,   202,   100,    99,    -1,   206,    88,    -1,   200,
     206,    88,    -1,    88,   206,    -1,   201,    88,   206,    -1,
     206,    -1,   205,    -1,   206,    88,    -1,    95,   157,    -1,
      95,   157,    88,    41,   157,    -1,    95,   157,   201,    -1,
      95,   157,   203,    -1,    95,   157,   201,   203,    -1,    95,
     157,   201,    88,    41,   157,    -1,    41,   157,    -1,   200,
     206,    -1,   200,   205,    -1,   200,   204,   205,    -1,   200,
     206,    88,    -1,   200,    95,   157,    -1,   200,    95,   157,
      88,    41,   157,    -1,   200,    95,   157,   201,    -1,   200,
      95,   157,   203,    -1,   200,    95,   157,   201,   203,    -1,
     200,    95,   157,   201,    88,    41,   157,    -1,   200,    41,
     157,    -1,    88,   205,    -1,   203,    88,   205,    -1,   205,
      88,    -1,   204,   205,    88,    -1,   157,   101,   157,    -1,
     157,    -1,   157,   208,    -1,   208,    -1,   209,    -1,    20,
     192,    21,   159,    -1,    20,   192,    21,   159,   207,    -1,
      17,   159,    -1,    17,   159,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   106,   106,   109,   110,   113,   114,   115,   116,   117,
     118,   125,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   161,   162,   165,   166,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   180,   181,   182,
     185,   186,   189,   190,   191,   192,   193,   194,   195,   198,
     199,   202,   203,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   219,   220,   221,   223,   224,
     227,   230,   231,   232,   235,   238,   241,   242,   246,   249,
     252,   253,   255,   256,   260,   261,   264,   265,   268,   269,
     272,   273,   276,   277,   280,   281,   284,   285,   286,   287,
     288,   289,   290,   293,   294,   297,   298,   299,   300,   303,
     304,   307,   308,   311,   312,   313,   314,   317,   318,   321,
     322,   325,   326,   329,   330,   333,   334,   335,   338,   339,
     342,   343,   346,   347,   350,   351,   354,   355,   358,   359,
     362,   363,   366,   367,   370,   371,   374,   375,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   391,
     394,   395,   397,   398,   401,   402,   405,   406,   409,   410,
     413,   414,   417,   418,   419,   420,   423,   424,   427,   428,
     429,   430,   433,   434,   437,   438,   439,   440,   441,   442,
     443,   444,   447,   448,   451,   452,   453,   454,   457,   458,
     461,   462,   463,   464,   467,   468,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   505,   506,
     507,   508,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   523,   524,   525,   526,   529,   530,   533,   534,
     535,   536,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   550,   551,   554,   555,   556,   557,   560,   561,   562,
     563,   564,   565,   566,   567,   570,   571,   574,   575,   576,
     577,   580,   581,   583,   584,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   598,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   620,   621,   624,   625,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   651,
     652,   655,   656,   659,   661,   662,   666,   667,   670,   671,
     674,   675
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
  "ARROW", "PASS", "NONLOCAL", "PLUS_EQUAL", "MINUS_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "AND_EQUAL", "OR_EQUAL", "SHAPOO_EQUAL",
  "LESS_THAN_2_EQUAL", "MORE_THAN_2_EQUAL", "STAR_2_EQUAL", "DIV_2_EQUAL",
  "MORE_LESS", "FALSE", "TRUE", "STAR_2", "NUMBER_INT", "NUMBER_LONG",
  "NUMBER_FLOAT", "NAME", "DOT_3", "EXPECT", "WITH", "AS", "ASSERT",
  "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL", "STAR_EQUAL", "LESS_THAN_2",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "YIELD", "MORE_THAN_2",
  "STRING", "NONE", "IS", "DIV_2", "LESS_OR_EQUAL", "MORE_OR_EQUAL",
  "EXCEPT", "CHAR_VALUE", "BREAK", "CONTINUE", "stmt_14", "stmt_13",
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
  "comp_for", "comp_if", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,    44,    40,
      91,    60,    62,    43,    45,    42,    47,    37,    59,    58,
      41,    61,    46,   124,    94,    38,   126,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   110,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   118,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   128,
     129,   130,   130,   130,   131,   132,   133,   133,   134,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   176,   176,   177,   177,   177,   177,   177,   177,
     177,   177,   178,   178,   179,   179,   179,   179,   180,   180,
     181,   181,   181,   181,   182,   182,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   187,   187,   188,   188,
     188,   188,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   194,   194,   194,
     194,   195,   195,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   198,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   201,   201,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   206,   206,   207,   207,   208,   208,
     209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     1,     4,     6,     7,     5,     7,
       8,     2,     6,     7,     4,     5,     7,     7,     5,     5,
       8,     8,     6,     6,     8,     8,     6,     6,     9,     9,
       7,     7,     8,     8,     6,     6,     9,     9,     7,     7,
       9,     9,     7,     7,     3,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     2,     1,     2,     1,     2,     1,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     2,     2,     3,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     4,     5,     4,     5,     7,     8,     4,
       7,     6,     9,     4,     7,     7,     6,     3,     4,     2,
       3,     4,     5,     1,     3,     1,     2,     4,     1,     2,
       2,     1,     1,     5,     2,     3,     1,     2,     2,     3,
       1,     2,     2,     1,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     3,     1,     2,     2,     3,     1,     2,     2,     3,
       1,     2,     2,     2,     3,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     1,     1,     2,
       1,     2,     4,     3,     1,     2,     2,     3,     2,     2,
       3,     3,     1,     2,     3,     3,     3,     4,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     2,     1,     2,     2,     3,     2,     1,     2,
       2,     3,     2,     3,     3,     2,     2,     3,     1,     2,
       2,     3,     1,     1,     2,     3,     3,     4,     2,     2,
       3,     1,     2,     2,     2,     3,     3,     1,     2,     1,
       2,     2,     3,     2,     3,     2,     3,     1,     2,     2,
       3,     4,     5,     2,     3,     4,     3,     4,     4,     5,
       2,     1,     2,     2,     3,     2,     3,     4,     4,     4,
       5,     5,     5,     5,     6,     6,     5,     5,     6,     6,
       6,     6,     5,     6,     2,     3,     2,     3,     1,     1,
       2,     2,     5,     3,     3,     4,     6,     2,     2,     2,
       3,     3,     3,     6,     4,     4,     5,     7,     3,     2,
       3,     2,     3,     3,     1,     2,     1,     1,     4,     5,
       2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,    85,    86,    87,     0,     0,     4,     0,
       0,    98,   106,    99,   102,   104,     0,     1,     2,     0,
       0,     0,   107,     0,   103,     0,     0,     0,     0,     3,
     108,     0,   100,     0,   105,     0,     0,   257,   256,     0,
     249,   251,   250,   232,   254,   224,   255,   252,     0,     0,
       0,     0,     0,     0,     0,     0,   374,   152,   156,   160,
     163,   166,   182,   186,   190,   196,   202,   212,   217,   253,
     220,     0,     0,   349,   348,   151,     0,     0,     0,     0,
       0,    90,     0,     0,     0,    97,     0,     0,    94,    95,
      64,     0,   121,     0,   148,    46,     0,    49,    58,    72,
      62,    56,    50,    51,    52,    91,    92,    93,    53,    54,
      55,    47,   116,   117,   118,   119,   120,     0,     5,    66,
       0,     0,     0,   109,   101,   162,     0,     0,   233,     0,
     357,   226,   263,   268,     0,   228,     0,   214,   215,   351,
       0,   216,   229,   321,     0,     0,     0,   375,     0,     0,
     157,     0,   161,     0,   174,   175,   173,   170,   177,   172,
     171,   168,   169,   167,     0,     0,   183,     0,   187,     0,
     191,     0,     0,   197,     0,     0,   203,     0,     0,     0,
       0,   213,   225,     0,     0,     0,     0,   221,   218,     0,
       0,     0,   359,   358,     0,   344,     0,     0,     0,   233,
       0,   122,     0,     0,     0,   299,   297,     0,     0,   114,
       0,   143,    89,   307,    96,    88,   112,    69,    70,   179,
      11,   149,    48,    73,    74,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    75,     0,    59,     0,    63,    71,
     150,     0,    65,    68,     0,     0,     0,     8,     0,   236,
       0,     0,   235,     0,     0,     0,   234,   265,   264,   262,
     270,   269,   267,   227,   230,     0,   353,   354,     6,   322,
       0,   323,   320,   231,     0,   373,     0,   154,     0,   158,
       0,   176,   178,     0,   164,   180,     0,   184,     0,   188,
       0,   192,   193,     0,     0,   198,   199,     0,     0,   207,
     204,   205,   206,     0,     0,     0,     0,   223,   272,     0,
     283,   282,     0,   278,   275,     0,   219,   368,   362,     0,
     360,   371,   345,     0,     0,     0,     0,     0,     0,   236,
       0,     0,   235,     0,     0,     0,     0,     0,   234,   325,
       0,     0,   303,   300,   301,   298,     0,     0,     0,   115,
       0,     0,     0,     0,   309,   308,   113,    61,    57,    67,
       0,     0,   238,     0,     0,   240,   237,     0,     0,   239,
       0,   244,     0,   243,   258,   259,   266,   271,     0,   369,
     346,     0,   355,     0,   313,   316,   324,     0,     0,   155,
     159,   165,   181,   185,   189,   194,   195,   200,   201,   211,
     208,   209,   210,   273,   291,   288,   289,   284,   274,   280,
     279,   222,     0,   364,   365,   372,     7,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,     0,   238,     0,
       0,     0,   240,   237,     0,     0,     0,   239,    45,     0,
       0,    14,     0,   244,     0,   243,     0,   125,   129,   294,
     293,   304,   302,     0,     0,   145,   133,     0,   110,     0,
     139,   141,     0,     0,   144,   305,   310,    60,     9,     0,
     242,   248,   241,   247,   246,   245,   260,   261,   352,     0,
     347,   370,   317,   318,   315,   314,   378,   153,   292,   290,
     285,   286,   276,   281,     0,     0,   366,     0,     0,   329,
       0,     0,     0,     0,   328,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,   242,     0,    19,   248,     0,
       0,   241,     0,    18,   247,     0,    44,     0,   246,     0,
     245,     0,     0,    15,     0,     0,   126,     0,   296,   295,
       0,     0,   146,     0,     0,     0,     0,   111,   140,   142,
       0,   306,    10,   356,     0,   319,     0,   379,   376,   377,
     287,   277,   363,     0,   331,     0,     0,   332,   330,     0,
       0,   333,   342,     0,     0,   337,     0,   336,     0,    23,
       0,     0,     0,     0,    27,     0,    22,     0,     0,     0,
       0,    26,    12,     0,     0,    35,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   131,   136,     0,     0,     0,
       0,   137,     0,     0,   380,   367,   335,   341,   334,   340,
     343,   339,   338,     0,     0,    31,    17,     0,    43,     0,
       0,     0,    30,    16,     0,    42,     0,     0,    39,     0,
       0,    38,     0,    13,   127,     0,     0,     0,   130,     0,
     147,   134,   135,   138,   311,     0,   381,    21,     0,     0,
      24,    20,     0,     0,    25,     0,    33,     0,    32,   123,
     128,     0,     0,   312,    29,    41,    28,    40,    37,    36,
     124,   132
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     6,     7,     8,    92,    93,   335,    94,    95,    96,
      97,   236,    98,    99,   100,   237,     9,   101,   102,   103,
     104,   105,   106,   107,   108,    11,    24,    13,    14,    15,
      22,   349,   109,   110,   111,   536,   112,   113,   114,   115,
     456,   352,   116,   210,   457,   117,   118,   119,   150,    57,
     152,    58,    59,   163,    60,   164,   120,   166,    61,   168,
      62,   170,    63,   173,    64,   176,    65,   181,    66,    67,
     187,    68,    69,    70,   258,   134,   188,   410,   312,   313,
     406,   343,   207,   355,   214,   483,   271,   144,   201,   202,
      71,   266,    72,   267,   191,    73,    74,   557,   558,   559
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -390
static const short int yypact[] =
{
     193,     4,     8,  -390,  -390,  -390,   113,   170,  -390,    56,
      81,  -390,    78,  -390,   115,   155,   218,  -390,  -390,   162,
     177,   176,   120,     4,   136,   205,   769,   611,   286,  -390,
    -390,   261,  -390,     4,  -390,  1409,   187,  -390,  -390,  1409,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,   991,  1029,
    1480,  1480,  1409,   220,  1480,   729,     1,   329,   322,   350,
    -390,    25,   263,   294,   295,   238,   -10,   307,  -390,   327,
     112,  1067,   312,  -390,   325,  -390,   214,  1409,  1409,  1442,
     316,  -390,   371,  1409,  1442,  1409,  1442,   373,  -390,  -390,
    1143,  1480,  -390,   611,   670,  -390,   319,  -390,   157,  -390,
     336,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,   413,  -390,   340,
     343,   839,   611,  -390,  -390,  -390,   222,   204,  -390,   217,
    -390,  -390,    22,    23,   333,  -390,   337,  -390,  -390,   352,
     611,  -390,  -390,    19,   339,  1442,  1409,  -390,  1409,  1409,
     437,  1409,   440,   425,  -390,  -390,  -390,  -390,   441,  -390,
    -390,  -390,  -390,    25,  1480,  1480,   347,  1480,   348,  1480,
     349,  1480,  1480,   247,  1480,  1480,    -4,  1480,  1480,  1480,
    1480,   313,  -390,  1480,   877,  1181,   410,   116,  -390,  1409,
    1409,  1409,   369,   370,   360,   362,   196,   227,   278,   374,
     309,  -390,   611,   367,   375,   383,   384,   439,   611,   385,
     -20,   412,  -390,   387,  -390,  -390,   385,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  1105,  -390,  1409,  1143,  -390,
    -390,  1143,   340,  1143,   388,   381,   377,  -390,   308,  -390,
      52,   311,  -390,    32,    58,   165,  -390,  1143,   393,  -390,
    1143,   394,  -390,  -390,  -390,  1219,   395,   397,  -390,  1409,
    1409,   398,  -390,  -390,   449,  -390,   471,  -390,  1409,  -390,
    1409,  -390,  -390,  1480,  -390,  -390,  1480,  -390,  1480,  -390,
    1480,  -390,  -390,  1480,  1480,  -390,  -390,  1480,  1480,  -390,
    -390,  -390,  -390,  1480,  1480,  1480,  1480,  -390,  -390,   389,
    1257,   392,   386,   400,  -390,  1480,  -390,  -390,   404,   396,
     406,  -390,   401,   611,   232,   304,   288,   328,   334,   374,
     121,   361,   374,   264,   915,     6,   215,   273,   374,  -390,
     611,   611,  1442,   414,  1442,   415,  1409,    18,   453,   417,
    1409,   611,   206,  1480,  1409,   419,   417,   407,  -390,  1143,
     611,   416,  -390,   466,   468,  -390,  -390,   469,   472,  -390,
     473,  -390,   474,  -390,  -390,  -390,  1143,  1143,  1409,  -390,
    -390,  1295,   397,  1409,  -390,    27,  1409,  1409,  1409,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  1409,   421,  -390,  1257,  -390,  1181,
     428,  -390,  1333,   433,   397,  -390,  -390,   378,   423,   302,
     382,   424,   287,   953,  -390,   331,   290,   426,   374,   481,
      10,   482,   374,   374,   483,    13,   485,   374,  -390,   431,
    1409,  -390,   487,   374,   488,   374,    26,   366,   518,  -390,
    -390,  1442,  1442,   436,   442,  1409,    57,   444,  -390,   491,
    -390,  -390,  1409,   611,  -390,   456,  -390,  -390,  -390,   611,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  1409,
    -390,  -390,  1409,   457,  -390,  -390,   341,  -390,  -390,  -390,
     421,  -390,  -390,  1181,  1409,  1371,   397,   450,   505,  -390,
     506,   454,   455,   510,  -390,   511,   459,   461,   462,   516,
     464,   520,   467,  -390,    30,   374,  1409,  -390,   374,    31,
      34,   374,  1409,  -390,   374,    42,  -390,   470,   374,    61,
     374,    62,  1409,  -390,   475,  1409,   372,   476,  -390,  -390,
     611,   611,   521,   477,   479,   480,   611,  -390,  -390,  -390,
    1409,  -390,  -390,  -390,   490,  1409,  1409,  -390,  -390,  -390,
    -390,  -390,  -390,  1409,  -390,   493,   494,  -390,  -390,   495,
     497,  -390,  -390,   500,   501,  -390,   503,  -390,  1409,  -390,
      63,   504,    72,  1409,  -390,  1409,  -390,    76,   507,    77,
    1409,  -390,  -390,    82,  1409,  -390,    84,  1409,  -390,   508,
     611,   513,   514,  1409,   611,   551,  -390,   527,   611,   611,
     611,  -390,  1409,   517,   341,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,   519,  1409,  -390,  -390,  1409,  -390,   523,
     524,  1409,  -390,  -390,  1409,  -390,   525,  1409,  -390,   526,
    1409,  -390,   528,  -390,  -390,   611,   611,   533,  -390,   535,
    -390,  -390,  -390,  -390,  -390,  1409,  -390,  -390,   536,   539,
    -390,  -390,   540,   541,  -390,   542,  -390,   543,  -390,  -390,
    -390,   611,   611,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -390,  -390,  -390,   553,  -390,  -390,    67,  -390,  -390,  -390,
    -390,   223,   346,   -90,   -95,  -390,   -28,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,   587,  -390,  -390,  -390,    91,  -390,
    -390,   403,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -343,   134,   549,   -62,   -26,  -390,  -145,
    -390,  -140,   -29,  -390,  -390,   484,    88,  -390,   -17,  -390,
    -154,  -390,  -153,  -390,  -151,  -390,  -144,  -390,  -142,   -35,
    -390,  -390,  -390,  -390,   512,   555,   465,  -390,  -390,  -389,
    -367,   438,   -14,   181,  -220,  -390,  -390,  -390,  -390,  -390,
    -390,   330,  -109,  -262,  -390,   -70,   -69,    35,   -51,  -390
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -362
static const short int yytable[] =
{
      56,   192,   193,   276,   382,   147,   125,   460,   129,   277,
     239,   285,   246,   130,   287,   137,   138,   358,   289,   141,
     492,   145,   132,   132,   242,   244,   139,   291,   292,   143,
     440,   220,   295,   296,   516,   153,   154,   522,   489,   145,
     491,   454,   145,   145,   368,    56,   155,   145,   200,    12,
     532,   203,   204,    16,   578,   583,   414,   211,   585,   213,
     247,    19,   206,   156,   217,   364,   590,   206,   350,   206,
     212,   370,   215,   543,   219,   309,   157,   369,   268,   351,
     544,   259,   262,   174,   175,   594,   597,   624,   455,   297,
     298,   158,   272,   159,   160,    56,   627,   365,   250,   253,
     631,   634,   146,   371,   561,   441,   637,   269,   640,   517,
     257,   260,   523,    17,    32,   482,   161,   162,   270,   548,
     275,   320,   279,   560,   124,   533,   453,   455,   206,   579,
     584,   274,   392,   586,   431,   393,   133,   133,   389,   394,
     339,   591,   299,   300,   301,   302,   347,   284,   307,   395,
     396,   496,   239,   183,   239,   397,   398,   315,    56,   311,
     595,   598,   625,   317,   318,   319,   432,   205,   327,   330,
     333,   628,   205,    18,   205,   632,   635,   372,   218,    20,
      21,   638,     2,   641,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   379,   380,     1,     2,   126,
     127,   184,   185,    23,    25,   184,   185,    28,   324,   325,
     373,   213,   217,   234,   186,   217,   251,   217,   186,   196,
     363,    30,    31,   367,    33,   439,   197,   198,   442,   254,
     255,   374,   128,   205,   374,   248,     3,     4,     5,    56,
     328,   326,   486,   384,   385,   417,     3,     4,     5,   252,
      34,   390,     3,     4,     5,     3,     4,     5,   235,   199,
     443,   416,   256,     3,     4,     5,   391,   249,   399,   400,
     401,   402,   329,     3,     4,     5,   436,   418,   447,   448,
     411,     3,     4,     5,   405,   444,     3,     4,     5,   461,
     331,     3,     4,     5,   462,   171,   419,   422,   468,   505,
     429,   172,   511,   434,   293,   463,   123,    26,    56,   437,
     294,   379,   480,   481,   508,   500,   420,    27,   445,   140,
     213,   336,   337,   332,   211,   450,   218,   450,   465,   218,
     149,   218,   506,   217,   484,   512,   464,     3,     4,     5,
     425,   426,   379,   380,   509,   375,   148,   501,   375,   421,
     476,   476,   478,   362,   338,    56,   366,   319,   556,   151,
     485,   145,   487,     3,     4,     5,   165,     3,     4,     5,
       3,     4,     5,   427,   177,   121,   510,   423,   488,   428,
     303,   490,   534,   311,   535,   122,    56,   424,   602,   498,
     603,   182,   503,     3,     4,     5,   430,    56,   167,   435,
     169,   549,   178,   179,   180,   446,   433,   552,   304,   305,
     306,   614,   194,   195,   527,   208,   209,   222,   216,   240,
       3,     4,     5,   497,   238,   379,   480,   502,   241,   542,
     449,   243,   449,   263,   539,   539,   211,     3,     4,     5,
     265,     3,     4,     5,   264,   278,   281,   218,   273,   280,
     286,   282,   288,   553,   290,   314,   554,   321,   322,   323,
     346,   353,  -350,   334,   477,   477,   340,   311,   562,    56,
     387,   342,   344,   348,   341,   354,   359,   361,   605,   606,
     360,   376,   377,   381,   611,   383,   386,   388,   409,   403,
     581,   407,   412,   408,   415,   514,   588,   146,   458,   519,
     520,  -361,   451,   452,   525,   459,   599,   466,   235,   601,
     529,   470,   531,   471,   472,   469,   493,   473,   474,   475,
     404,   495,   499,   504,   465,   513,   515,   518,   521,   613,
     524,   526,   528,   530,   537,   540,   547,   615,   644,   538,
     538,   541,   648,   546,  -362,   555,   651,   652,   653,   564,
     565,   566,   623,   567,   568,   569,   570,   629,   571,   630,
     572,   574,   573,   575,   636,   576,   577,   649,   639,   592,
     607,   642,   650,    29,   600,   604,   608,   647,   609,   610,
     467,   357,   580,   669,   670,   582,   654,    10,   587,   612,
     545,   589,   616,   617,   618,   593,   619,   596,   658,   620,
     621,   659,   622,   626,   136,   662,   633,   643,   663,   680,
     681,   665,   645,   646,   667,     1,   655,    75,   657,   356,
       0,    35,   660,   661,   664,   666,    76,   668,    77,   673,
      78,    79,   671,    80,   672,   674,    81,    82,   675,   676,
     677,   678,   679,   221,   345,   261,   551,   283,   413,   656,
      37,    38,   316,    40,    41,    42,    43,    44,     0,    83,
       0,     0,     0,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     1,    45,    46,     0,     0,     0,
      35,     0,    47,    88,    89,    76,     0,    77,     0,    78,
      79,     0,    80,     0,     0,    81,    82,     0,     0,    90,
      48,    49,     0,     0,    50,    51,    91,     0,     0,    37,
      38,     0,    40,    41,    42,    43,    44,    54,    83,    55,
       0,     0,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,     0,     0,     0,    35,
       0,    47,    88,    89,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    48,
      49,     0,     0,    50,    51,    91,     0,     0,    37,    38,
       0,    40,    41,    42,    43,    44,    54,     0,    55,    35,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,    48,    49,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    54,     0,    55,   142,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    36,     0,     0,     0,    48,    49,
       0,     0,    50,    51,    52,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,    54,     0,    55,    37,    38,
      39,    40,    41,    42,    43,    44,     0,    35,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    35,     0,     0,    48,    49,
      36,     0,    50,    51,    52,     0,     0,     0,     0,   245,
       0,    45,    46,     0,     0,    54,     0,    55,    47,     0,
       0,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    35,     0,     0,    48,    49,    36,     0,
      50,    51,    52,     0,     0,     0,     0,   308,     0,    45,
      46,     0,     0,    54,     0,    55,    47,     0,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    35,     0,     0,    48,    49,    36,     0,    50,    51,
      52,     0,     0,     0,     0,   438,     0,    45,    46,     0,
       0,    54,     0,    55,    47,     0,     0,     0,     0,     0,
      37,    38,     0,    40,    41,    42,    43,    44,     0,    35,
       0,     0,    48,    49,    36,     0,    50,    51,    52,     0,
       0,     0,     0,   507,     0,    45,    46,     0,     0,    54,
       0,    55,    47,     0,     0,     0,     0,     0,    37,    38,
       0,    40,    41,    42,    43,    44,     0,    35,     0,     0,
      48,    49,    36,     0,    50,    51,    91,     0,     0,     0,
       0,   131,     0,    45,    46,     0,     0,    54,     0,    55,
      47,     0,     0,     0,     0,     0,    37,    38,   189,    40,
      41,    42,    43,    44,     0,    35,     0,     0,    48,    49,
      36,     0,    50,    51,    91,     0,     0,     0,     0,     0,
       0,    45,    46,     0,     0,    54,   135,    55,    47,     0,
       0,     0,     0,     0,    37,    38,     0,    40,    41,    42,
      43,    44,     0,    35,     0,     0,    48,    49,    36,     0,
      50,    51,   190,     0,     0,     0,     0,     0,     0,    45,
      46,     0,     0,    54,     0,    55,    47,     0,     0,     0,
       0,     0,    37,    38,     0,    40,    41,    42,    43,    44,
       0,    35,     0,    90,    48,    49,    36,     0,    50,    51,
      91,     0,     0,     0,     0,     0,     0,    45,    46,     0,
       0,    54,     0,    55,    47,     0,     0,     0,     0,     0,
      37,    38,     0,    40,    41,    42,    43,    44,     0,    35,
       0,     0,    48,    49,    36,     0,    50,    51,    91,     0,
       0,     0,     0,     0,     0,    45,    46,     0,     0,    54,
       0,    55,    47,     0,     0,     0,     0,     0,    37,    38,
     378,    40,    41,    42,    43,    44,     0,    35,     0,     0,
      48,    49,    36,     0,    50,    51,     0,     0,     0,     0,
     310,     0,     0,    45,    46,     0,     0,    54,     0,    55,
      47,     0,     0,     0,     0,     0,    37,    38,     0,    40,
      41,    42,    43,    44,     0,    35,     0,     0,    48,    49,
      36,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    45,    46,     0,     0,    54,     0,    55,    47,     0,
       0,     0,     0,     0,    37,    38,   479,    40,    41,    42,
      43,    44,     0,    35,     0,     0,    48,    49,    36,     0,
      50,    51,     0,     0,     0,     0,   404,     0,     0,    45,
      46,     0,     0,    54,     0,    55,    47,     0,     0,     0,
       0,     0,    37,    38,   494,    40,    41,    42,    43,    44,
       0,    35,     0,     0,    48,    49,    36,     0,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    45,    46,     0,
       0,    54,     0,    55,    47,     0,     0,     0,     0,     0,
      37,    38,   563,    40,    41,    42,    43,    44,     0,    35,
       0,     0,    48,    49,    36,     0,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    45,    46,     0,     0,    54,
       0,    55,    47,     0,     0,     0,     0,     0,    37,    38,
       0,    40,    41,    42,    43,    44,     0,    36,     0,     0,
      48,    49,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    45,    46,     0,     0,    54,     0,    55,
      47,    37,    38,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,    36,     0,     0,    48,    49,
       0,     0,    50,    51,     0,     0,    45,    46,     0,     0,
       0,     0,     0,    47,     0,    54,     0,    55,     0,    37,
      38,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,    48,    49,     0,     0,    50,    51,    91,     0,     0,
       0,     0,     0,     0,    45,    46,     0,     0,    54,     0,
      55,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,    55
};

static const short int yycheck[] =
{
      26,    71,    71,   148,   266,    56,    35,   350,    36,   149,
     100,   165,   121,    39,   167,    50,    51,   237,   169,    54,
     409,    20,    48,    49,   119,   120,    52,   171,   172,    55,
      24,    93,   174,   175,    24,    10,    11,    24,   405,    20,
     407,    23,    20,    20,    12,    71,    21,    20,    76,    45,
      24,    77,    78,    45,    24,    24,   318,    83,    24,    85,
     122,     5,    79,    38,    90,    13,    24,    84,    88,    86,
      84,    13,    86,    16,    91,   184,    51,    45,   140,    99,
      23,   132,   133,    93,    94,    24,    24,    24,    70,    93,
      94,    66,   143,    68,    69,   121,    24,    45,   126,   127,
      24,    24,   101,    45,   493,    99,    24,    88,    24,    99,
      88,    88,    99,     0,    23,    88,    91,    92,    99,   462,
     146,   191,   151,   490,    33,    99,   346,    70,   145,    99,
      99,   145,   286,    99,    13,   288,    48,    49,   278,   290,
     202,    99,   177,   178,   179,   180,   208,   164,   183,   293,
     294,   413,   242,    41,   244,   297,   298,    41,   184,   185,
      99,    99,    99,   189,   190,   191,    45,    79,   196,   197,
     198,    99,    84,     3,    86,    99,    99,    12,    90,    98,
     102,    99,     5,    99,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   265,   265,     4,     5,    12,
      13,    89,    90,    88,    49,    89,    90,    45,    12,    13,
      45,   237,   238,    56,   102,   241,    12,   243,   102,     5,
     248,    45,   102,   251,    88,   334,    12,    13,    13,    12,
      13,   257,    45,   145,   260,    13,    59,    60,    61,   265,
      13,    45,   387,   269,   270,    13,    59,    60,    61,    45,
      45,   280,    59,    60,    61,    59,    60,    61,   101,    45,
      45,   323,    45,    59,    60,    61,   283,    45,   303,   304,
     305,   306,    45,    59,    60,    61,    12,    45,   340,   341,
     315,    59,    60,    61,   310,    12,    59,    60,    61,   351,
      12,    59,    60,    61,    88,    57,   324,   325,   360,    12,
     328,    63,    12,   331,    57,    99,    45,    89,   334,    45,
      63,   381,   381,   383,   423,    13,    12,    99,    45,    99,
     346,    12,    13,    45,   350,   342,   238,   344,   354,   241,
       8,   243,    45,   359,   385,    45,   353,    59,    60,    61,
      12,    13,   412,   412,    13,   257,    17,    45,   260,    45,
     376,   377,   378,    45,    45,   381,    45,   383,    17,     9,
     386,    20,   388,    59,    60,    61,   103,    59,    60,    61,
      59,    60,    61,    45,    67,    89,    45,    89,   404,    45,
      67,   407,    16,   409,    18,    99,   412,    99,    16,   417,
      18,    64,   420,    59,    60,    61,   329,   423,   104,   332,
     105,   463,    95,    96,    97,   338,    45,   469,    95,    96,
      97,   556,   100,    88,   440,    99,    45,    98,    45,     6,
      59,    60,    61,    45,    88,   495,   495,    45,    88,   455,
     342,    88,   344,   100,   451,   452,   462,    59,    60,    61,
      88,    59,    60,    61,   107,     8,    21,   359,   109,     9,
     103,    10,   104,   479,   105,    45,   482,    88,    88,    99,
      21,    49,   100,    89,   376,   377,    99,   493,   494,   495,
      21,    88,    88,    88,    99,    88,    88,   100,   540,   541,
      99,    88,    88,    88,   546,    88,    88,    16,    88,   100,
     516,    99,    88,   107,    88,   428,   522,   101,    45,   432,
     433,   100,    88,    88,   437,    88,   532,    88,   101,   535,
     443,    45,   445,    45,    45,    99,    88,    45,    45,    45,
      99,    88,    99,    99,   550,    99,    45,    45,    45,   555,
      45,   100,    45,    45,    16,    99,    45,   563,   600,   451,
     452,    99,   604,    99,    88,    88,   608,   609,   610,    99,
      45,    45,   578,    99,    99,    45,    45,   583,    99,   585,
      99,    45,   100,    99,   590,    45,    99,    16,   594,    99,
      49,   597,    45,    20,    99,    99,    99,   603,    99,    99,
     357,   235,   515,   645,   646,   518,   612,     0,   521,    99,
     456,   524,    99,    99,    99,   528,    99,   530,   624,    99,
      99,   627,    99,    99,    49,   631,    99,    99,   634,   671,
     672,   637,    99,    99,   640,     4,    99,     6,    99,   216,
      -1,    10,    99,    99,    99,    99,    15,    99,    17,   655,
      19,    20,    99,    22,    99,    99,    25,    26,    99,    99,
      99,    99,    99,    94,   206,   133,   465,   163,   318,   614,
      39,    40,   187,    42,    43,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    64,    65,    -1,    -1,    -1,
      10,    -1,    71,    72,    73,    15,    -1,    17,    -1,    19,
      20,    -1,    22,    -1,    -1,    25,    26,    -1,    -1,    88,
      89,    90,    -1,    -1,    93,    94,    95,    -1,    -1,    39,
      40,    -1,    42,    43,    44,    45,    46,   106,    48,   108,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    10,
      -1,    71,    72,    73,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    93,    94,    95,    -1,    -1,    39,    40,
      -1,    42,    43,    44,    45,    46,   106,    -1,   108,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    89,    90,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,   106,    -1,   108,   109,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    89,    90,
      -1,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    10,    -1,    -1,    89,    90,
      15,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,   100,
      -1,    64,    65,    -1,    -1,   106,    -1,   108,    71,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,
      93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,    64,
      65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,    94,
      95,    -1,    -1,    -1,    -1,   100,    -1,    64,    65,    -1,
      -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    42,    43,    44,    45,    46,    -1,    10,
      -1,    -1,    89,    90,    15,    -1,    93,    94,    95,    -1,
      -1,    -1,    -1,   100,    -1,    64,    65,    -1,    -1,   106,
      -1,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,    43,    44,    45,    46,    -1,    10,    -1,    -1,
      89,    90,    15,    -1,    93,    94,    95,    -1,    -1,    -1,
      -1,   100,    -1,    64,    65,    -1,    -1,   106,    -1,   108,
      71,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    10,    -1,    -1,    89,    90,
      15,    -1,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,   106,   107,   108,    71,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,    43,    44,
      45,    46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    42,    43,    44,    45,    46,
      -1,    10,    -1,    88,    89,    90,    15,    -1,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    42,    43,    44,    45,    46,    -1,    10,
      -1,    -1,    89,    90,    15,    -1,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,   106,
      -1,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    10,    -1,    -1,
      89,    90,    15,    -1,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    64,    65,    -1,    -1,   106,    -1,   108,
      71,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,
      43,    44,    45,    46,    -1,    10,    -1,    -1,    89,    90,
      15,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,   106,    -1,   108,    71,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    10,    -1,    -1,    89,    90,    15,    -1,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    64,
      65,    -1,    -1,   106,    -1,   108,    71,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    10,    -1,    -1,    89,    90,    15,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,   106,    -1,   108,    71,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    10,
      -1,    -1,    89,    90,    15,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,   106,
      -1,   108,    71,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,    43,    44,    45,    46,    -1,    15,    -1,    -1,
      89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,   106,    -1,   108,
      71,    39,    40,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    89,    90,
      -1,    -1,    93,    94,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    71,    -1,   106,    -1,   108,    -1,    39,
      40,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    -1,   106,    -1,
     108,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,     5,    59,    60,    61,   111,   112,   113,   126,
     134,   135,    45,   137,   138,   139,    45,     0,     3,     5,
      98,   102,   140,    88,   136,    49,    89,    99,    45,   113,
      45,   102,   138,    88,    45,    10,    15,    39,    40,    41,
      42,    43,    44,    45,    46,    64,    65,    71,    89,    90,
      93,    94,    95,   100,   106,   108,   157,   159,   161,   162,
     164,   168,   170,   172,   174,   176,   178,   179,   181,   182,
     183,   200,   202,   205,   206,     6,    15,    17,    19,    20,
      22,    25,    26,    48,    52,    53,    54,    55,    72,    73,
      88,    95,   114,   115,   117,   118,   119,   120,   122,   123,
     124,   127,   128,   129,   130,   131,   132,   133,   134,   142,
     143,   144,   146,   147,   148,   149,   152,   155,   156,   157,
     166,    89,    99,    45,   138,   162,    12,    13,    45,   126,
     157,   100,   157,   166,   185,   107,   185,   179,   179,   157,
      99,   179,   109,   157,   197,    20,   101,   208,    17,     8,
     158,     9,   160,    10,    11,    21,    38,    51,    66,    68,
      69,    91,    92,   163,   165,   103,   167,   104,   169,   105,
     171,    57,    63,   173,    93,    94,   175,    67,    95,    96,
      97,   177,    64,    41,    89,    90,   102,   180,   186,    41,
      95,   204,   205,   206,   100,    88,     5,    12,    13,    45,
     126,   198,   199,   157,   157,   166,   168,   192,    99,    45,
     153,   157,   192,   157,   194,   192,    45,   157,   166,   168,
     156,   155,    98,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    56,   101,   121,   125,    88,   123,
       6,    88,   124,    88,   124,   100,   202,   156,    13,    45,
     126,    12,    45,   126,    12,    13,    45,    88,   184,   208,
      88,   184,   208,   100,   107,    88,   201,   203,   156,    88,
      99,   196,   208,   109,   192,   157,   159,   161,     8,   162,
       9,    21,    10,   165,   168,   170,   103,   172,   104,   174,
     105,   176,   176,    57,    63,   178,   178,    93,    94,   179,
     179,   179,   179,    67,    95,    96,    97,   179,   100,   202,
      99,   157,   188,   189,    45,    41,   186,   157,   157,   157,
     205,    88,    88,    99,    12,    13,    45,   126,    13,    45,
     126,    12,    45,   126,    89,   116,    12,    13,    45,   156,
      99,    99,    88,   191,    88,   191,    21,   156,    88,   141,
      88,    99,   151,    49,    88,   193,   141,   122,   194,    88,
      99,   100,    45,   126,    13,    45,    45,   126,    12,    45,
      13,    45,    12,    45,   157,   166,    88,    88,    41,   205,
     206,    88,   203,    88,   157,   157,    88,    21,    16,   161,
     162,   168,   170,   172,   174,   176,   176,   178,   178,   179,
     179,   179,   179,   100,    99,   157,   190,    99,   107,    88,
     187,   179,    88,   201,   203,    88,   156,    13,    45,   126,
      12,    45,   126,    89,    99,    12,    13,    45,    45,   126,
     116,    13,    45,    45,   126,   116,    12,    45,   100,   202,
      24,    99,    13,    45,    12,    45,   116,   156,   156,   166,
     168,    88,    88,   194,    23,    70,   150,   154,    45,    88,
     153,   156,    88,    99,   168,   157,    88,   121,   156,    99,
      45,    45,    45,    45,    45,    45,   157,   166,   157,    41,
     206,   205,    88,   195,   208,   157,   159,   157,   157,   190,
     157,   190,   189,    88,    41,    88,   203,    45,   126,    99,
      13,    45,    45,   126,    99,    12,    45,   100,   202,    13,
      45,    12,    45,    99,   116,    45,    24,    99,    45,   116,
     116,    45,    24,    99,    45,   116,   100,   157,    45,   116,
      45,   116,    24,    99,    16,    18,   145,    16,   166,   168,
      99,    99,   157,    16,    23,   154,    99,    45,   153,   156,
      88,   193,   156,   157,   157,    88,    17,   207,   208,   209,
     190,   189,   157,    41,    99,    45,    45,    99,    99,    45,
      45,    99,    99,   100,    45,    99,    45,    99,    24,    99,
     116,   157,   116,    24,    99,    24,    99,   116,   157,   116,
      24,    99,    99,   116,    24,    99,   116,    24,    99,   157,
      99,   157,    16,    18,    99,   156,   156,    49,    99,    99,
      99,   156,    99,   157,   159,   157,    99,    99,    99,    99,
      99,    99,    99,   157,    24,    99,    99,    24,    99,   157,
     157,    24,    99,    99,    24,    99,   157,    24,    99,   157,
      24,    99,   157,    99,   156,    99,    99,   157,   156,    16,
      45,   156,   156,   156,   157,    99,   207,    99,   157,   157,
      99,    99,   157,   157,    99,   157,    99,   157,    99,   156,
     156,    99,    99,   157,    99,    99,    99,    99,    99,    99,
     156,   156
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
#line 106 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"file_input: program ENDMARKER\n";Streams::verbose().flush();;}
    break;

  case 3:
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : import_stmt ';' temp2 \n";;}
    break;

  case 4:
#line 110 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"program : temp2 \n";;}
    break;

  case 5:
#line 113 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2:  CLASS NAME ':' suite \n";;}
    break;

  case 6:
#line 114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: CLASS NAME '(' ')' ':' suite \n";;}
    break;

  case 7:
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trmp2: CLASS NAME '(' arglist ')' ':' suite \n";;}
    break;

  case 8:
#line 116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: access CLASS NAME ':' suite \n";;}
    break;

  case 9:
#line 117 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"temp2: access CLASS NAME '(' ')' ':' suite \n";;}
    break;

  case 10:
#line 118 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"access CLASS NAME '(' arglist ')' ':' suite \n";;}
    break;

  case 11:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcdef:	funcheader suite \n";;}
    break;

  case 12:
#line 127 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";;}
    break;

  case 13:
#line 128 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";;}
    break;

  case 14:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";;}
    break;

  case 15:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";;}
    break;

  case 16:
#line 131 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";;}
    break;

  case 17:
#line 132 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 18:
#line 133 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";;}
    break;

  case 19:
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";;}
    break;

  case 20:
#line 135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";;}
    break;

  case 21:
#line 136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 22:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";;}
    break;

  case 23:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";;}
    break;

  case 24:
#line 139 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";;}
    break;

  case 25:
#line 140 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 26:
#line 141 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";;}
    break;

  case 27:
#line 142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";;}
    break;

  case 28:
#line 143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";;}
    break;

  case 29:
#line 144 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";;}
    break;

  case 30:
#line 145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";;}
    break;

  case 31:
#line 146 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";;}
    break;

  case 32:
#line 147 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 33:
#line 148 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 34:
#line 149 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";;}
    break;

  case 35:
#line 150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";;}
    break;

  case 36:
#line 151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 37:
#line 152 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 38:
#line 153 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";;}
    break;

  case 39:
#line 154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";;}
    break;

  case 40:
#line 155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";;}
    break;

  case 41:
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";;}
    break;

  case 42:
#line 157 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";;}
    break;

  case 43:
#line 158 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";;}
    break;

  case 44:
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' arglist ')'\n";;}
    break;

  case 45:
#line 162 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"parameters:'(' ')'\n";;}
    break;

  case 46:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt:	simple_stmt \n";;}
    break;

  case 47:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"stmt: compound_stmt\n";;}
    break;

  case 48:
#line 168 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";;}
    break;

  case 49:
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: expr_stmt \n";;}
    break;

  case 50:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: del_stmt \n";;}
    break;

  case 51:
#line 172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: pass_stmt \n";;}
    break;

  case 52:
#line 173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: flow_stmt \n";;}
    break;

  case 53:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: import_stmt \n";;}
    break;

  case 54:
#line 175 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: global_stmt \n";;}
    break;

  case 55:
#line 176 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";;}
    break;

  case 56:
#line 177 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"small_stmt: print_stmt \n";;}
    break;

  case 57:
#line 180 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";;}
    break;

  case 58:
#line 181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";;}
    break;

  case 59:
#line 182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";;}
    break;

  case 60:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";;}
    break;

  case 61:
#line 186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";;}
    break;

  case 62:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";;}
    break;

  case 63:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";;}
    break;

  case 64:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' \n";;}
    break;

  case 65:
#line 192 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";;}
    break;

  case 66:
#line 193 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: test \n";;}
    break;

  case 67:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";;}
    break;

  case 68:
#line 195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";;}
    break;

  case 69:
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' test \n";;}
    break;

  case 70:
#line 199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star : ',' star_expr \n";;}
    break;

  case 71:
#line 202 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";;}
    break;

  case 72:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";;}
    break;

  case 73:
#line 205 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";;}
    break;

  case 74:
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";;}
    break;

  case 75:
#line 207 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_EQUAL \n";;}
    break;

  case 76:
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_EQUAL \n";;}
    break;

  case 77:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MOD_EQUAL \n";;}
    break;

  case 78:
#line 210 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	AND_EQUAL \n";;}
    break;

  case 79:
#line 211 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	OR_EQUAL \n";;}
    break;

  case 80:
#line 212 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";;}
    break;

  case 81:
#line 213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";;}
    break;

  case 82:
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";;}
    break;

  case 83:
#line 215 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";;}
    break;

  case 84:
#line 216 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";;}
    break;

  case 85:
#line 219 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 86:
#line 220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 87:
#line 221 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 88:
#line 223 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"print_stmt: PRINT exprlist \n";;}
    break;

  case 89:
#line 224 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"del_stmt:   DEL exprlist \n";;}
    break;

  case 90:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"pass_stmt:	PASS \n";;}
    break;

  case 91:
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt:	break_stmt \n";;}
    break;

  case 92:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: continue_stmt\n";;}
    break;

  case 93:
#line 232 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"flow_stmt: return_stmt\n";;}
    break;

  case 94:
#line 235 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"break_stmt: BREAK \n";;}
    break;

  case 95:
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"continue_stmt:	CONTINUE \n";;}
    break;

  case 96:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN testlist \n";;}
    break;

  case 97:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"return_stmt:	RETURN \n";;}
    break;

  case 98:
#line 246 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_stmt: import_name \n";;}
    break;

  case 99:
#line 249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";;}
    break;

  case 100:
#line 252 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";;}
    break;

  case 101:
#line 253 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";;}
    break;

  case 102:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";;}
    break;

  case 103:
#line 256 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";;}
    break;

  case 104:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name \n";;}
    break;

  case 105:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";;}
    break;

  case 106:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME \n";;}
    break;

  case 107:
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";;}
    break;

  case 108:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name_seq: '.' NAME \n";;}
    break;

  case 109:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";;}
    break;

  case 110:
#line 272 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	',' NAME \n";;}
    break;

  case 111:
#line 273 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";;}
    break;

  case 112:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";;}
    break;

  case 113:
#line 277 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";;}
    break;

  case 114:
#line 280 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";;}
    break;

  case 115:
#line 281 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";;}
    break;

  case 116:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt:  if_stmt \n";;}
    break;

  case 117:
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: while_stmt\n";;}
    break;

  case 118:
#line 286 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: for_stmt\n";;}
    break;

  case 119:
#line 287 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: try_stmt\n";;}
    break;

  case 120:
#line 288 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: with_stmt\n";;}
    break;

  case 121:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: funcdef\n";;}
    break;

  case 122:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"compound_stmt: DEF classdef\n";;}
    break;

  case 123:
#line 293 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";;}
    break;

  case 124:
#line 294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";;}
    break;

  case 125:
#line 297 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";;}
    break;

  case 126:
#line 298 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";;}
    break;

  case 127:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";;}
    break;

  case 128:
#line 300 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";;}
    break;

  case 129:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";;}
    break;

  case 130:
#line 304 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";;}
    break;

  case 131:
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";;}
    break;

  case 132:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";;}
    break;

  case 133:
#line 311 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";;}
    break;

  case 134:
#line 312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";;}
    break;

  case 135:
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";;}
    break;

  case 136:
#line 314 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";;}
    break;

  case 137:
#line 317 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";;}
    break;

  case 138:
#line 318 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";;}
    break;

  case 139:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq:	',' with_item \n";;}
    break;

  case 140:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";;}
    break;

  case 141:
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";;}
    break;

  case 142:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";;}
    break;

  case 143:
#line 329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<" with_item:  test\n";;}
    break;

  case 144:
#line 330 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"with_item: test AS expr\n";;}
    break;

  case 145:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT \n";;}
    break;

  case 146:
#line 334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test\n";;}
    break;

  case 147:
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";;}
    break;

  case 148:
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt\n";;}
    break;

  case 149:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";;}
    break;

  case 150:
#line 342 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	list_stmt END\n";;}
    break;

  case 151:
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"suite:	END\n";;}
    break;

  case 152:
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"test:	or_test\n";;}
    break;

  case 153:
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test IF or_test ELSE test\n";;}
    break;

  case 154:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq:	OR and_test \n";;}
    break;

  case 155:
#line 351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_seq: or_seq OR and_test \n";;}
    break;

  case 156:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test\n";;}
    break;

  case 157:
#line 355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_test:	and_test or_seq\n";;}
    break;

  case 158:
#line 358 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: AND not_test \n";;}
    break;

  case 159:
#line 359 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_seq: and_seq AND not_test \n";;}
    break;

  case 160:
#line 362 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test:	not_test\n";;}
    break;

  case 161:
#line 363 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_test: not_test and_seq \n";;}
    break;

  case 162:
#line 366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	NOT not_test\n";;}
    break;

  case 163:
#line 367 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"not_test:	comparison\n";;}
    break;

  case 164:
#line 370 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op expr \n";;}
    break;

  case 165:
#line 371 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";;}
    break;

  case 166:
#line 374 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr\n";}
    break;

  case 167:
#line 375 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comparison: expr comp_op_seq\n";}
    break;

  case 168:
#line 378 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '<' \n";;}
    break;

  case 169:
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: '>' \n";;}
    break;

  case 170:
#line 380 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: EQUAL \n";;}
    break;

  case 171:
#line 381 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";;}
    break;

  case 172:
#line 382 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";;}
    break;

  case 173:
#line 383 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: MORE_LESS \n";;}
    break;

  case 174:
#line 384 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT_EQUAL \n";;}
    break;

  case 175:
#line 385 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IN \n";;}
    break;

  case 176:
#line 386 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: NOT IN \n";;}
    break;

  case 177:
#line 387 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS \n";;}
    break;

  case 178:
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_op: IS NOT \n";;}
    break;

  case 179:
#line 391 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"star_expr: '*' expr \n";;}
    break;

  case 180:
#line 394 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";;}
    break;

  case 181:
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";;}
    break;

  case 182:
#line 397 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr\n";}
    break;

  case 183:
#line 398 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";;}
    break;

  case 184:
#line 401 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";;}
    break;

  case 185:
#line 402 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";;}
    break;

  case 186:
#line 405 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr\n";}
    break;

  case 187:
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";;}
    break;

  case 188:
#line 409 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";;}
    break;

  case 189:
#line 410 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";;}
    break;

  case 190:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr\n";}
    break;

  case 191:
#line 414 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";;}
    break;

  case 192:
#line 417 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";;}
    break;

  case 193:
#line 418 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";;}
    break;

  case 194:
#line 419 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";;}
    break;

  case 195:
#line 420 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";;}
    break;

  case 196:
#line 423 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr\n";}
    break;

  case 197:
#line 424 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";}
    break;

  case 198:
#line 427 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '+' term \n";;}
    break;

  case 199:
#line 428 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : '-' term \n";;}
    break;

  case 200:
#line 429 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '+' term \n";;}
    break;

  case 201:
#line 430 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term_seq : term_seq '-' term \n";;}
    break;

  case 202:
#line 433 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term\n";}
    break;

  case 203:
#line 434 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arith_expr: term term_seq\n";}
    break;

  case 204:
#line 437 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '*' factor \n";;}
    break;

  case 205:
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '/' factor \n";;}
    break;

  case 206:
#line 439 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: '%' factor \n";;}
    break;

  case 207:
#line 440 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: DIV_2 factor \n";;}
    break;

  case 208:
#line 441 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";;}
    break;

  case 209:
#line 442 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";;}
    break;

  case 210:
#line 443 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";;}
    break;

  case 211:
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";;}
    break;

  case 212:
#line 447 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor\n";}
    break;

  case 213:
#line 448 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"term: 	factor factor_seq\n";}
    break;

  case 214:
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '+' factor \n";;}
    break;

  case 215:
#line 452 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '-' factor \n";;}
    break;

  case 216:
#line 453 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: '~' factor \n";;}
    break;

  case 217:
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"factor: power\n";}
    break;

  case 218:
#line 457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer \n";;}
    break;

  case 219:
#line 458 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";;}
    break;

  case 220:
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power:	atom\n";}
    break;

  case 221:
#line 462 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq \n";;}
    break;

  case 222:
#line 463 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";;}
    break;

  case 223:
#line 464 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"power: atom STAR_2 factor \n";;}
    break;

  case 224:
#line 467 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	STRING \n";;}
    break;

  case 225:
#line 468 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"str_seq:	str_seq STRING \n";;}
    break;

  case 226:
#line 471 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' ')' \n";;}
    break;

  case 227:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";;}
    break;

  case 228:
#line 473 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom:	'[' ']' \n";;}
    break;

  case 229:
#line 474 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 230:
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' '}' \n";;}
    break;

  case 231:
#line 476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";;}
    break;

  case 232:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NAME\n";}
    break;

  case 233:
#line 478 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF NAME\n";}
    break;

  case 234:
#line 479 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access NAME\n";}
    break;

  case 235:
#line 480 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC NAME\n";}
    break;

  case 236:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL NAME\n";}
    break;

  case 237:
#line 482 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";}
    break;

  case 238:
#line 483 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";}
    break;

  case 239:
#line 484 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access NAME\n";}
    break;

  case 240:
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access NAME\n";}
    break;

  case 241:
#line 486 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";}
    break;

  case 242:
#line 487 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";}
    break;

  case 243:
#line 488 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC NAME\n";}
    break;

  case 244:
#line 489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL NAME\n";}
    break;

  case 245:
#line 490 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";}
    break;

  case 246:
#line 491 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";}
    break;

  case 247:
#line 492 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";}
    break;

  case 248:
#line 493 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";}
    break;

  case 249:
#line 494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_INT\n";}
    break;

  case 250:
#line 495 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 251:
#line 496 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NUMBER_FLOAT\n";}
    break;

  case 252:
#line 497 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: CHAR_VALUE\n";}
    break;

  case 253:
#line 498 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: str_seq\n";}
    break;

  case 254:
#line 499 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: DOT_3\n";}
    break;

  case 255:
#line 500 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: NONE\n";}
    break;

  case 256:
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: TRUE\n";}
    break;

  case 257:
#line 502 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"atom: FALSE\n";}
    break;

  case 258:
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' test\n";}
    break;

  case 259:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";}
    break;

  case 260:
#line 507 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";}
    break;

  case 261:
#line 508 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";}
    break;

  case 262:
#line 511 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test comp_for\n";}
    break;

  case 263:
#line 512 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test\n";}
    break;

  case 264:
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";}
    break;

  case 265:
#line 514 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 266:
#line 515 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 267:
#line 516 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 268:
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 269:
#line 518 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 270:
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 271:
#line 520 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";}
    break;

  case 272:
#line 523 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'('  ')'\n";}
    break;

  case 273:
#line 524 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'(' arglist ')'\n";}
    break;

  case 274:
#line 525 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";}
    break;

  case 275:
#line 526 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"trailer:	'.' NAME\n";}
    break;

  case 276:
#line 529 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";}
    break;

  case 277:
#line 530 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";}
    break;

  case 278:
#line 533 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript\n";}
    break;

  case 279:
#line 534 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";}
    break;

  case 280:
#line 535 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript  ','\n";}
    break;

  case 281:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";}
    break;

  case 282:
#line 539 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test\n";}
    break;

  case 283:
#line 540 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':'\n";}
    break;

  case 284:
#line 541 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript: test ':'\n";}
    break;

  case 285:
#line 542 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test\n";}
    break;

  case 286:
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
    break;

  case 287:
#line 544 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
    break;

  case 288:
#line 545 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test\n";}
    break;

  case 289:
#line 546 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' sliceop\n";}
    break;

  case 290:
#line 547 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
    break;

  case 291:
#line 550 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':'\n";}
    break;

  case 292:
#line 551 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"sliceop: ':' test\n";}
    break;

  case 293:
#line 554 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";;}
    break;

  case 294:
#line 555 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";;}
    break;

  case 295:
#line 556 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";;}
    break;

  case 296:
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";;}
    break;

  case 297:
#line 560 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr \n";;}
    break;

  case 298:
#line 561 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";;}
    break;

  case 299:
#line 562 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr \n";;}
    break;

  case 300:
#line 563 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";;}
    break;

  case 301:
#line 564 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr ',' \n";;}
    break;

  case 302:
#line 565 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";;}
    break;

  case 303:
#line 566 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr ',' \n";;}
    break;

  case 304:
#line 567 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";;}
    break;

  case 305:
#line 570 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test: ',' test \n";;}
    break;

  case 306:
#line 571 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"',' test comma_test \n";;}
    break;

  case 307:
#line 574 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test \n";;}
    break;

  case 308:
#line 575 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	test comma_test \n";;}
    break;

  case 309:
#line 576 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test ','\n";;}
    break;

  case 310:
#line 577 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"testlist:	 test comma_test ','\n";;}
    break;

  case 311:
#line 580 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";;}
    break;

  case 312:
#line 581 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";;}
    break;

  case 313:
#line 583 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: ',' test \n";;}
    break;

  case 314:
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";;}
    break;

  case 315:
#line 587 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";;}
    break;

  case 316:
#line 588 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test \n";;}
    break;

  case 317:
#line 589 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";;}
    break;

  case 318:
#line 590 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";;}
    break;

  case 319:
#line 591 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";;}
    break;

  case 320:
#line 592 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comp_for\n";;}
    break;

  case 321:
#line 593 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test\n";;}
    break;

  case 322:
#line 594 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 323:
#line 595 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test ','\n";;}
    break;

  case 324:
#line 596 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";;}
    break;

  case 325:
#line 598 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classdef: classheader suite\n";;}
    break;

  case 326:
#line 600 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME ':' \n";;}
    break;

  case 327:
#line 601 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS access NAME ':' \n";;}
    break;

  case 328:
#line 602 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS STATIC NAME ':' \n";;}
    break;

  case 329:
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS FINAL NAME ':' \n";;}
    break;

  case 330:
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS STATIC FINAL NAME ':' \n";;}
    break;

  case 331:
#line 605 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS FINAL STATIC NAME ':' \n";;}
    break;

  case 332:
#line 606 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS FINAL access NAME ':' \n";;}
    break;

  case 333:
#line 607 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS STATIC access NAME ':' \n";;}
    break;

  case 334:
#line 608 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS STATIC FINAL access NAME ':' \n";;}
    break;

  case 335:
#line 609 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS FINAL STATIC access NAME ':' \n";;}
    break;

  case 336:
#line 610 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS access STATIC NAME ':' \n";;}
    break;

  case 337:
#line 611 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS access FINAL NAME ':' \n";;}
    break;

  case 338:
#line 612 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS access STATIC FINAL NAME ':' \n";;}
    break;

  case 339:
#line 613 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS access FINAL STATIC NAME ':' \n";;}
    break;

  case 340:
#line 614 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS STATIC access FINAL NAME ':' \n";;}
    break;

  case 341:
#line 615 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS FINAL access STATIC NAME ':' \n";;}
    break;

  case 342:
#line 616 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' ')' ':' \n";;}
    break;

  case 343:
#line 617 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";;}
    break;

  case 344:
#line 620 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ','\n";;}
    break;

  case 345:
#line 621 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";;}
    break;

  case 346:
#line 624 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	',' argument\n";;}
    break;

  case 347:
#line 625 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";;}
    break;

  case 348:
#line 628 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument\n";;}
    break;

  case 349:
#line 629 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: default_arg\n";;}
    break;

  case 350:
#line 630 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: argument ','\n";;}
    break;

  case 351:
#line 631 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test\n";;}
    break;

  case 352:
#line 632 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";;}
    break;

  case 353:
#line 633 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 354:
#line 634 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 355:
#line 635 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";;}
    break;

  case 356:
#line 636 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";;}
    break;

  case 357:
#line 637 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: STAR_2 test\n";;}
    break;

  case 358:
#line 638 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument\n";;}
    break;

  case 359:
#line 639 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";;}
    break;

  case 360:
#line 640 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";;}
    break;

  case 361:
#line 641 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";;}
    break;

  case 362:
#line 642 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";;}
    break;

  case 363:
#line 643 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";;}
    break;

  case 364:
#line 644 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";;}
    break;

  case 365:
#line 645 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";;}
    break;

  case 366:
#line 646 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";;}
    break;

  case 367:
#line 647 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";;}
    break;

  case 368:
#line 648 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";;}
    break;

  case 369:
#line 651 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";;}
    break;

  case 370:
#line 652 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";;}
    break;

  case 371:
#line 655 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";;}
    break;

  case 372:
#line 656 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";;}
    break;

  case 373:
#line 659 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"default_arg: test '=' test\n";;}
    break;

  case 374:
#line 661 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"argument: 	test\n";;}
    break;

  case 375:
#line 662 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"argument: 	test comp_for\n";;}
    break;

  case 376:
#line 666 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_for\n";;}
    break;

  case 377:
#line 667 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_iter:  comp_if\n";;}
    break;

  case 378:
#line 670 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";;}
    break;

  case 379:
#line 671 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";;}
    break;

  case 380:
#line 674 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test\n";;}
    break;

  case 381:
#line 675 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"
    {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 4115 "yacc.cpp"

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


#line 678 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yaccFinal.y"

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

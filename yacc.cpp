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
     IMPORT = 258,
     CLASS = 259,
     ID = 260,
     COLON = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     END = 265,
     OPEN_C = 266,
     CLOSE_C = 267,
     DEF = 268,
     ASSIGN = 269,
     STAR = 270,
     ELSE = 271,
     IF = 272,
     ELIF = 273,
     WHILE = 274,
     FOR = 275,
     IN = 276,
     TRY = 277,
     FINALLY = 278,
     MULTI = 279,
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
     stmt_8 = 337
   };
#endif
/* Tokens.  */
#define IMPORT 258
#define CLASS 259
#define ID 260
#define COLON 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define END 265
#define OPEN_C 266
#define CLOSE_C 267
#define DEF 268
#define ASSIGN 269
#define STAR 270
#define ELSE 271
#define IF 272
#define ELIF 273
#define WHILE 274
#define FOR 275
#define IN 276
#define TRY 277
#define FINALLY 278
#define MULTI 279
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




/* Copy the first part of user declarations.  */
#line 3 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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
	
	char* i_type;
	char* acc_mod;
	vector<char *>inhertance_list;
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};


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
#line 46 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
/* Line 196 of yacc.c.  */
#line 302 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 314 "yacc.cpp"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1844

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  72
/* YYNRULES -- Number of rules. */
#define YYNRULES  258
/* YYNRULES -- Number of states. */
#define YYNSTATES  472

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

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
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    15,    17,    20,    24,
      29,    34,    37,    42,    48,    51,    55,    58,    62,    64,
      68,    70,    74,    76,    79,    83,    85,    88,    92,    95,
      98,   100,   102,   105,   108,   111,   113,   118,   123,   127,
     131,   135,   141,   147,   154,   161,   166,   170,   173,   177,
     181,   186,   191,   197,   203,   208,   213,   217,   222,   227,
     232,   237,   242,   247,   249,   251,   255,   259,   263,   267,
     271,   273,   276,   280,   284,   289,   293,   295,   300,   305,
     309,   314,   320,   327,   333,   336,   340,   343,   346,   348,
     350,   352,   354,   356,   358,   360,   363,   366,   371,   380,
     391,   394,   399,   403,   409,   413,   416,   419,   422,   425,
     428,   432,   435,   440,   445,   452,   459,   464,   469,   475,
     481,   485,   489,   493,   499,   505,   511,   519,   521,   525,
     531,   535,   541,   545,   551,   555,   557,   561,   565,   568,
     571,   575,   578,   583,   585,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   607,   609,   612,   617,   619,
     621,   623,   625,   629,   633,   639,   642,   647,   650,   652,
     655,   657,   660,   665,   669,   674,   677,   680,   684,   686,
     688,   691,   696,   701,   707,   709,   711,   713,   715,   717,
     721,   727,   731,   735,   741,   745,   747,   749,   753,   757,
     759,   761,   763,   765,   767,   769,   771,   773,   775,   777,
     779,   781,   783,   785,   787,   789,   792,   796,   800,   803,
     805,   809,   813,   816,   819,   822,   826,   830,   834,   837,
     841,   845,   847,   850,   855,   860,   865,   867,   869,   873,
     875,   879,   883,   887,   891,   895,   899,   903,   905,   909,
     911,   914,   916,   918,   920,   922,   924,   926,   928
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      84,     0,    -1,    84,    86,    -1,    86,    -1,     3,    90,
      60,    -1,    85,    87,    -1,    87,    -1,    88,    92,    -1,
     133,    88,    92,    -1,    52,    51,    88,    92,    -1,    51,
      52,    88,    92,    -1,     4,     5,    -1,     4,     5,    64,
       7,    -1,     4,     5,    64,    90,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    89,     8,
     150,    -1,   150,    -1,    90,     8,    91,    -1,    91,    -1,
      91,     9,     5,    -1,     5,    -1,     6,    10,    -1,     6,
      93,    10,    -1,    10,    -1,    93,    10,    -1,    93,    13,
      94,    -1,    13,    94,    -1,    95,    60,    -1,    96,    -1,
      87,    -1,    95,     1,    -1,   132,     5,    -1,   133,     5,
      -1,     5,    -1,   132,     5,    14,   150,    -1,   133,     5,
      14,   150,    -1,     5,    14,   150,    -1,   132,   133,     5,
      -1,   133,   132,     5,    -1,   132,   133,     5,    14,   150,
      -1,   133,   132,     5,    14,   150,    -1,    52,   132,    51,
       5,    14,   150,    -1,    51,   132,    52,     5,    14,   150,
      -1,   132,     5,     5,     1,    -1,     5,     5,     1,    -1,
      97,   103,    -1,   132,    97,   103,    -1,   133,    97,   103,
      -1,   132,   133,    97,   103,    -1,   133,   132,    97,   103,
      -1,    52,   132,    51,    97,   103,    -1,    51,   132,    52,
      97,   103,    -1,     5,    64,    98,     7,    -1,     5,    64,
       5,     7,    -1,     5,    64,     7,    -1,     1,    64,    98,
       7,    -1,     1,    64,     5,     7,    -1,     5,     1,    98,
       7,    -1,     5,     1,     5,     7,    -1,     5,    64,    98,
       1,    -1,     5,    64,     5,     1,    -1,    99,    -1,   101,
      -1,    99,     8,   101,    -1,    99,     8,   100,    -1,     5,
       8,   100,    -1,    99,     8,     5,    -1,     5,     8,     5,
      -1,   100,    -1,    15,     5,    -1,    15,    15,     5,    -1,
       5,    15,     1,    -1,     5,    15,    15,     1,    -1,   101,
       8,   102,    -1,   102,    -1,   101,     8,    99,     1,    -1,
     101,     8,     5,     1,    -1,     5,    14,   150,    -1,    15,
       5,    14,   150,    -1,    15,    15,     5,    14,   150,    -1,
       5,    15,     1,    15,    14,   150,    -1,     5,    15,     1,
      14,   150,    -1,     6,    10,    -1,     6,   104,    10,    -1,
       1,    10,    -1,   104,   105,    -1,   105,    -1,   106,    -1,
     110,    -1,   112,    -1,   117,    -1,   120,    -1,   103,    -1,
     121,    60,    -1,     5,    60,    -1,     5,     9,     5,    60,
      -1,     5,     8,     5,     9,     5,     9,     5,    60,    -1,
       5,     9,     5,     8,     5,     9,     5,     9,     5,    60,
      -1,   108,   105,    -1,   108,   105,    16,   105,    -1,   108,
     105,   107,    -1,   108,   105,   107,    16,   105,    -1,   109,
     105,   107,    -1,   109,   105,    -1,    17,   150,    -1,    18,
     150,    -1,   111,   105,    -1,    19,   150,    -1,     5,     1,
     150,    -1,   113,   105,    -1,    20,   116,    21,    89,    -1,
      20,   116,    21,   144,    -1,    20,     5,     8,     5,    21,
      89,    -1,    20,     5,     8,     5,    21,   144,    -1,    20,
       5,    21,    89,    -1,    20,     5,    21,   144,    -1,     5,
       1,     5,    21,    89,    -1,     5,     1,     5,    21,   144,
      -1,   114,     8,   115,    -1,     5,     8,   114,    -1,     5,
       8,     5,    -1,     5,     8,     5,     9,     5,    -1,     5,
       9,     5,     8,   114,    -1,     5,     9,     5,     8,     5,
      -1,     5,     9,     5,     8,     5,     9,     5,    -1,   115,
      -1,   115,     9,     5,    -1,     5,     9,     5,     9,     5,
      -1,   116,     8,   134,    -1,     5,     8,     5,     8,   134,
      -1,   116,     8,     5,    -1,     5,     8,     5,     8,     5,
      -1,     5,     8,   134,    -1,   134,    -1,    22,   105,   119,
      -1,    22,   105,   118,    -1,    23,   103,    -1,    59,   105,
      -1,    59,   150,   105,    -1,    26,   150,    -1,    26,   150,
      27,   134,    -1,    89,    -1,   122,    -1,   124,    -1,    62,
      -1,   125,    -1,   128,    -1,   126,    -1,   127,    -1,   131,
      -1,    67,    -1,    68,    -1,   114,    -1,   129,    -1,    28,
     150,    -1,    28,   150,     8,   150,    -1,    89,    -1,   143,
      -1,   144,    -1,   140,    -1,   116,    14,   123,    -1,   152,
      14,   123,    -1,     5,     8,     5,    14,   123,    -1,    30,
     116,    -1,    30,     5,     8,     5,    -1,    30,     5,    -1,
      31,    -1,    31,    89,    -1,   147,    -1,    32,    89,    -1,
      32,    55,    55,    89,    -1,     5,     1,    89,    -1,     5,
      55,    55,    89,    -1,    33,   130,    -1,    33,     1,    -1,
       5,     8,   130,    -1,     5,    -1,    34,    -1,    34,   150,
      -1,    34,   150,     8,   150,    -1,    34,   150,     8,     1,
      -1,     5,     1,   150,     8,   150,    -1,    35,    -1,    36,
      -1,    37,    -1,    52,    -1,    51,    -1,    64,   116,     7,
      -1,    64,     5,     8,     5,     7,    -1,    64,     5,     7,
      -1,    38,   116,    39,    -1,    38,     5,     8,     5,    39,
      -1,    38,     5,    39,    -1,   135,    -1,   148,    -1,   136,
       9,     5,    -1,     5,     9,     5,    -1,   137,    -1,   135,
      -1,   148,    -1,   149,    -1,   139,    -1,   138,    -1,    65,
      -1,    66,    -1,    69,    -1,    70,    -1,    63,    -1,   143,
      -1,   144,    -1,   145,    -1,   146,    -1,   140,    -1,    11,
      12,    -1,    11,   141,    12,    -1,   141,     8,   142,    -1,
     141,     8,    -1,   142,    -1,   150,     6,   150,    -1,    64,
      89,     7,    -1,    64,     7,    -1,     1,     7,    -1,    64,
       1,    -1,     1,   150,     7,    -1,    64,    89,     1,    -1,
      38,    89,    39,    -1,    38,    39,    -1,    40,    89,    40,
      -1,    64,   147,     7,    -1,    41,    -1,    41,    89,    -1,
      42,    38,    89,    39,    -1,    42,    38,    99,    39,    -1,
      42,    38,     5,    39,    -1,   151,    -1,   138,    -1,   150,
     154,   150,    -1,   153,    -1,   150,     1,   150,    -1,   150,
      29,   150,    -1,   150,    50,   150,    -1,   150,    53,   150,
      -1,   150,    54,   150,    -1,   150,    55,   150,    -1,   150,
      56,   150,    -1,     5,    -1,   152,     9,     5,    -1,   152,
      -1,   152,   143,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    43,    -1,    45,    -1,    24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    82,    82,    85,    90,    92,    93,    96,    97,    98,
      99,   101,   102,   103,   104,   109,   114,   121,   122,   125,
     126,   129,   130,   134,   135,   136,   142,   150,   151,   154,
     155,   156,   157,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   179,   185,   186,   187,
     188,   189,   190,   191,   194,   195,   196,   197,   201,   205,
     209,   213,   217,   225,   226,   227,   229,   230,   231,   232,
     233,   236,   237,   238,   242,   249,   250,   251,   255,   261,
     262,   263,   264,   268,   274,   275,   276,   283,   284,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     300,   301,   302,   303,   306,   307,   310,   313,   316,   321,
     322,   328,   331,   332,   333,   334,   335,   336,   337,   341,
     348,   349,   350,   351,   352,   353,   354,   355,   359,   360,
     364,   365,   366,   367,   368,   369,   372,   373,   376,   379,
     380,   383,   384,   387,   388,   389,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   403,   404,   406,   407,
     408,   409,   412,   413,   414,   420,   421,   422,   425,   426,
     429,   432,   433,   434,   438,   443,   444,   450,   451,   454,
     455,   456,   457,   461,   467,   468,   469,   471,   472,   474,
     475,   476,   477,   478,   479,   480,   481,   484,   485,   488,
     489,   490,   491,   494,   495,   498,   499,   500,   501,   502,
     505,   506,   507,   508,   509,   512,   513,   515,   516,   517,
     519,   522,   523,   524,   528,   532,   536,   543,   544,   547,
     550,   553,   554,   557,   561,   562,   566,   567,   568,   569,
     570,   576,   577,   578,   579,   580,   581,   583,   584,   593,
     594,   597,   598,   599,   600,   601,   602,   603,   604
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "COLON",
  "CLOSE_S", "COMMA", "DOT", "END", "OPEN_C", "CLOSE_C", "DEF", "ASSIGN",
  "STAR", "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY",
  "MULTI", "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN",
  "PRINT", "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D",
  "CLOSE_D", "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS",
  "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL", "STATIC", "LESS_THAN",
  "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT",
  "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE",
  "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE", "FLOAT_VALUE",
  "stmt_1_2", "stmt_11", "stmt_10", "stmt_9", "stmt_7", "stmt_6", "stmt_5",
  "stmt_4", "stmt_3", "stmt_2", "stmt_1", "stmt_8", "$accept", "program",
  "import_stmt", "unit", "class_decl", "class_h", "expr_list", "unit_list",
  "unit_import", "class_body", "dm_list", "dm", "var_declaration",
  "method_declaration", "method_h", "arguments", "args_list", "arg",
  "default_args_list", "default_arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "import_list", "import",
  "target_list", "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "left_assignment_side",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "storage_modef",
  "target", "attributeref", "primary", "atom", "literal", "enclosure",
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
     335,   336,   337
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    83,    84,    84,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   107,   107,   108,   109,   110,   111,
     111,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   131,   131,   132,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   135,   136,
     136,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     142,   143,   143,   143,   143,   143,   143,   144,   144,   145,
     146,   147,   147,   148,   149,   149,   150,   150,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   154,   154
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     3,     2,     1,     2,     3,     4,
       4,     2,     4,     5,     2,     3,     2,     3,     1,     3,
       1,     3,     1,     2,     3,     1,     2,     3,     2,     2,
       1,     1,     2,     2,     2,     1,     4,     4,     3,     3,
       3,     5,     5,     6,     6,     4,     3,     2,     3,     3,
       4,     4,     5,     5,     4,     4,     3,     4,     4,     4,
       4,     4,     4,     1,     1,     3,     3,     3,     3,     3,
       1,     2,     3,     3,     4,     3,     1,     4,     4,     3,
       4,     5,     6,     5,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     8,    10,
       2,     4,     3,     5,     3,     2,     2,     2,     2,     2,
       3,     2,     4,     4,     6,     6,     4,     4,     5,     5,
       3,     3,     3,     5,     5,     5,     7,     1,     3,     5,
       3,     5,     3,     5,     3,     1,     3,     3,     2,     2,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       1,     1,     3,     3,     5,     2,     4,     2,     1,     2,
       1,     2,     4,     3,     4,     2,     2,     3,     1,     1,
       2,     4,     4,     5,     1,     1,     1,     1,     1,     3,
       5,     3,     3,     5,     3,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     2,     1,
       3,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       3,     1,     2,     4,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   188,   187,     0,     0,     3,     6,
       0,     0,    22,     0,    20,    14,    11,    16,     0,     0,
       1,     2,     5,     0,    25,     0,     7,     0,     0,     0,
       4,     0,     0,    15,     0,     0,    23,     0,     0,    35,
     184,   185,   186,   188,   187,    31,    28,     0,    30,     0,
       0,     0,    26,     0,     8,    19,    21,    12,     0,    10,
       9,    24,     0,    16,     0,     0,     0,     0,     0,    32,
      29,     0,     0,    47,    33,   188,   187,     0,     0,    34,
       0,     0,    27,    13,     0,     0,     0,    63,    70,    64,
      76,    15,     0,    46,   247,   209,   205,   206,   207,   208,
     237,    38,   236,     0,   239,     0,    56,     0,     0,     0,
      86,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,   168,     0,     0,   179,     0,     0,   231,     0,
     146,     0,   152,   153,   143,    94,     0,    88,    89,     0,
      90,     0,    91,     0,   154,   127,     0,    92,    93,     0,
     144,   145,   147,   149,   150,   148,   155,   151,   135,   195,
       0,   199,   237,   203,   214,   210,   211,   212,   213,   170,
     196,   202,     0,     0,     0,     0,     0,    48,    39,     0,
       0,    49,    40,     0,    58,     0,     0,     0,    71,     0,
      57,     0,     0,    60,    59,     0,   257,     0,   255,   258,
     256,   251,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,    62,    55,    61,    54,     0,
       0,     0,     0,   223,     0,     0,     0,     0,     0,    96,
     215,     0,   219,     0,   106,   109,     0,     0,   204,     0,
     141,     0,   167,   165,   169,     0,   171,   176,   178,   175,
       0,   247,   228,     0,     0,     0,   232,     0,   224,   247,
     222,     0,     0,     0,     0,    85,    87,   100,   108,   111,
       0,     0,     0,     0,    95,     0,     0,     0,    45,    36,
       0,    50,    37,     0,    51,    69,     0,    67,    79,    73,
       0,     0,    72,    68,    66,    65,     0,     0,    75,     0,
     241,   242,   243,   244,   245,   246,     0,   248,   224,     0,
      53,     0,    52,   225,   247,   173,   110,   122,   121,   134,
     198,     0,   218,   216,     0,     0,     0,     0,     0,     0,
       0,   137,   136,     0,     0,     0,     0,     0,     0,     0,
     194,   227,   192,   229,   247,     0,     0,   191,     0,   226,
     221,   189,   230,    17,     0,     0,   102,     0,     0,   120,
     128,   132,   130,     0,   158,   162,   161,   159,   160,   197,
     163,    41,    42,     0,    71,     0,     0,     0,    74,    80,
       0,    78,    77,     0,    44,    43,     0,     0,     0,     0,
       0,     0,     0,    97,   174,   217,     0,     0,   198,   116,
     117,   112,   113,   138,   139,     0,     0,   142,     0,   166,
     172,   177,   182,     0,     0,   235,   233,   234,     0,   101,
       0,     0,   105,     0,    73,    72,    83,     0,    81,    68,
     118,   119,     0,   122,   131,   198,   164,   125,   124,   129,
       0,     0,     0,   140,   193,   190,   103,   104,     0,    82,
       0,     0,     0,     0,     0,   133,   114,   115,     0,   122,
     198,   125,   129,   126,     0,     0,    98,     0,   123,   126,
     129,    99
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,   134,    13,    14,    26,
      27,    46,    47,    48,    49,    92,    87,    88,    89,    90,
     135,   136,   137,   138,   356,   139,   357,   140,   141,   142,
     143,   144,   145,   146,   147,   331,   332,   148,   149,   150,
     365,   151,   152,   153,   154,   155,   156,   249,   157,    50,
      11,   158,   159,   160,   161,   100,   163,   164,   231,   232,
     165,   166,   167,   168,   169,   170,   171,   172,   102,   103,
     104,   210
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -272
static const short int yypact[] =
{
     396,    -4,   128,     9,   -34,   -21,   179,   466,  -272,  -272,
     652,   374,  -272,    -1,   101,  -272,   117,   200,   374,   374,
    -272,  -272,  -272,   176,  -272,  1002,  -272,   571,   652,    -4,
    -272,   256,   217,  -272,   652,   652,  -272,   708,   222,    21,
    -272,  -272,  -272,   596,   541,  -272,  -272,    22,  -272,   148,
     152,  1113,  -272,  1002,  -272,   101,  -272,  -272,   548,  -272,
    -272,  -272,   107,   248,   193,  1206,   230,    79,   258,  -272,
    -272,   316,   994,  -272,    27,  -272,  -272,   148,   296,    26,
     148,   362,  -272,  -272,   688,   253,   333,   341,  -272,   360,
    -272,   758,   382,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  1788,  -272,   364,  -272,   925,  -272,   226,   454,   524,
    -272,   185,   574,  -272,   282,  1206,  1206,   266,  1134,  1206,
    1206,  1216,  1206,   255,   560,  1206,  1180,  1206,  1206,   378,
    -272,  1172,  -272,  -272,   417,  -272,  1064,  -272,  -272,  1134,
    -272,  1134,  -272,  1134,   428,   440,   233,  -272,  -272,   409,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   477,
     486,  -272,   510,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
     531,  -272,   644,   714,   257,   512,  1206,  -272,    43,   148,
    1206,  -272,    44,   148,  -272,   261,  1206,   124,   621,   557,
    -272,   280,   308,  -272,  -272,  1206,  -272,  1206,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  1206,  1206,  1206,  1206,  1206,
    1206,   291,   649,   173,  -272,  -272,  -272,  -272,  -272,    73,
     148,   112,   148,  -272,  1689,  1285,  1228,   662,   592,  -272,
    -272,   587,  -272,  1722,  1788,  1788,    59,   130,  -272,     6,
    1755,  1441,   578,   593,   417,   614,   417,  -272,   663,  -272,
    1474,    75,  -272,    88,   126,    39,   417,   143,   291,   603,
    -272,   414,   618,   674,  1206,  -272,  -272,   523,  -272,  -272,
     696,   700,  1262,    98,  -272,   711,    98,   758,  -272,  1788,
    1206,  -272,  1788,  1206,  -272,   702,   322,  -272,  1788,   642,
     723,  1206,   725,   665,  -272,   360,   645,   345,  -272,   434,
     295,   295,   295,   295,   295,   295,   504,  -272,  -272,  1206,
    -272,  1206,  -272,  -272,   716,   417,  1507,   350,   724,  -272,
       4,  1206,  1206,  -272,  1206,  1273,   730,   977,   977,   148,
    1134,  -272,  -272,  1307,  1206,  1318,  1206,   736,    32,  1352,
    -272,  -272,  -272,  -272,   108,   180,   189,  -272,  1363,  -272,
    -272,  -272,  -272,  1788,  1134,  1206,   735,  1134,   744,   440,
    -272,   762,  -272,  1046,   417,  -272,  -272,  -272,  -272,  -272,
    -272,  1788,  1788,   201,  -272,   770,  1206,   774,  -272,  1788,
    1206,  -272,  -272,   323,  1788,  1788,   977,  1206,  1397,   793,
      98,   794,   795,  -272,   417,  -272,  1656,   202,  -272,   417,
    -272,   417,  -272,  -272,  -272,   854,   762,  -272,  1540,   718,
     417,  -272,  -272,  1573,    96,  -272,  -272,  -272,   499,  -272,
     924,  1134,   787,   797,  -272,  -272,  1788,  1206,  1788,   702,
     417,  -272,  1606,   429,  -272,    40,  -272,   721,   724,  -272,
    1408,   977,   185,  -272,  -272,  -272,  -272,  -272,   798,  1788,
     804,   806,   814,   815,   816,   762,   417,  -272,   784,   741,
      40,   778,   763,   785,   830,   831,  -272,   836,   788,   788,
     763,  -272
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -272,  -272,  -272,   837,    36,   263,  -107,   810,   827,   457,
     822,   805,  -272,  -272,   999,   547,  -188,  -182,   666,   669,
     -24,  -272,  -105,  -272,   441,  -272,  -272,  -272,  -272,  -272,
    -272,  -218,   594,   186,  -272,  -272,  -272,  -272,  -272,  -272,
    -271,  -272,  -272,  -272,  -272,  -272,  -272,   529,  -272,   546,
      67,  -148,  -272,  -272,  -272,   -55,  -272,  -262,  -272,   545,
    -101,  -234,  -272,  -272,   737,  -272,  -272,   -65,  -272,   -66,
    -272,  -272
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -250
static const short int yytable[] =
{
     101,    12,   214,   287,   297,   370,   173,    29,   318,   294,
      17,   366,  -250,   239,   366,   244,   246,   162,    18,   253,
     255,   256,  -250,    69,   261,    73,    64,  -250,  -250,   329,
      19,   266,   175,   412,   267,    65,   268,    94,   269,   368,
     180,   176,   368,    22,  -250,  -250,   224,   264,  -250,   233,
     234,   235,   173,   177,   240,   241,   181,   280,   283,    30,
     250,    45,   238,   162,   393,   330,   238,   325,   326,   346,
     173,   162,   214,   173,   174,   173,   162,   173,   319,   343,
     327,   162,    70,   339,   162,    66,   162,   309,   162,    45,
      66,    66,    51,   400,   402,    95,   264,    96,    97,   211,
    -123,    98,    99,    94,   440,   326,   261,    66,    66,   114,
      31,   279,    84,   174,   340,   282,   185,    78,   315,   436,
      51,   288,    85,   373,   362,   289,   311,   341,   366,    15,
     299,   108,   300,    16,   272,   444,   363,    66,   272,   290,
     301,   302,   303,   304,   305,   306,   224,   415,   344,    71,
     345,   328,   431,    38,    72,   281,   368,    74,   286,   284,
     316,    95,   213,    96,    97,   342,   364,    98,    99,   364,
     318,   238,   367,   438,   308,   367,    66,   319,    94,    20,
     260,    32,     1,     2,     3,   407,    36,   319,   264,    25,
      94,   319,   223,   224,    93,   110,   310,   383,   312,   353,
     319,   294,   424,    75,    76,    33,    95,   457,    96,    97,
     440,   326,    98,    99,   394,   371,   290,   238,   372,   416,
     399,   401,    12,   441,    57,   404,   379,   217,   417,   410,
       4,     5,   318,   218,   438,   105,    95,   106,    96,    97,
     434,   272,    98,    99,   384,    85,   385,   273,    95,   419,
      96,    97,   422,    91,    98,    99,   253,   233,   188,   396,
      94,    56,   277,    85,   173,   405,   285,   211,   189,   408,
     238,   236,    85,   413,    28,   162,   286,   114,   238,   430,
     238,    34,    35,   364,   238,   293,    62,    94,   173,   367,
     420,   173,   434,   238,   230,    85,    94,    38,   223,   162,
     443,   178,   162,   237,   126,   403,   127,   243,   129,   109,
     245,   426,   254,   296,    28,   428,   446,   262,    95,   196,
      96,    97,   432,    85,    98,    99,   110,   374,   429,    95,
     131,    96,    97,   238,   456,    98,    99,   375,   286,   173,
     190,   201,   202,   203,   204,    95,   382,    96,    97,   191,
     162,    98,    99,   383,    95,   173,    96,    97,  -250,   389,
      98,    99,   449,    38,   390,   211,   162,   182,   192,  -249,
    -249,  -249,  -249,   212,  -249,  -249,  -249,   458,     2,     3,
    -249,  -249,  -249,  -249,  -249,   238,  -249,  -249,  -249,   194,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,     1,
       2,     3,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,   349,   257,  -249,  -249,  -249,
    -249,   350,   264,  -249,  -249,   264,  -249,  -249,   213,  -249,
    -249,  -249,  -249,  -249,  -249,   195,   270,  -250,   451,  -240,
    -240,  -240,  -240,  -133,  -240,  -240,  -240,     4,     5,   271,
    -240,  -240,  -240,  -240,  -240,    38,  -240,  -240,   196,   219,
    -240,  -240,  -240,   197,  -240,  -240,  -240,  -240,  -240,   274,
       2,     3,  -240,  -240,  -240,  -240,  -240,   198,   199,   200,
     201,   202,   203,   204,   205,    54,  -200,   206,   207,   208,
     209,    59,    60,  -240,  -240,   275,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,   195,   445,   440,   326,  -238,
    -238,  -238,  -238,   278,  -238,  -238,  -238,     4,     5,  -204,
    -238,  -238,  -238,  -238,  -238,    38,  -238,  -238,   196,   221,
    -238,  -238,  -238,   197,  -238,  -238,  -238,  -238,  -238,   354,
    -201,   355,  -238,  -238,  -238,  -238,  -238,   198,   199,   200,
     201,   202,   203,   204,   205,    83,    29,   206,   207,   208,
     209,   247,   292,  -238,  -238,   248,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,   225,    40,    41,    42,  -247,
    -247,    52,   226,  -247,    53,  -247,   335,   326,  -247,    67,
      68,  -247,    19,  -247,  -247,   322,  -247,    81,  -247,   323,
    -247,   272,  -247,  -247,  -247,  -247,  -247,  -247,  -247,    86,
     347,   348,  -247,   107,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,   351,   272,  -247,  -247,   228,
    -247,    40,    41,    42,   229,   291,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,   195,   381,   321,    18,   -18,
     -18,   -18,   -18,   185,   307,   -18,   376,   377,    23,   186,
     187,   -18,    24,   -18,   -18,    25,   -18,   320,   196,   336,
     -18,   337,   -18,   197,   -18,   -18,   -18,   -18,   -18,   186,
     187,   352,   -18,   -18,   -18,   -18,   -18,   198,   199,   200,
     201,   202,   203,   204,   205,   184,   185,   206,   207,   208,
     209,   358,   186,   187,   -18,   360,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   211,   369,   373,    61,  -249,
    -249,    53,  -249,   212,   378,  -249,   440,   326,   276,  -250,
     454,  -249,  -250,  -249,  -249,   398,  -249,   386,  -249,   380,
    -249,   248,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -250,
     464,   421,  -249,   423,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,   193,   185,  -249,  -249,  -249,
    -249,   326,   186,   187,  -249,   425,  -249,  -249,   213,  -249,
    -249,  -249,  -249,  -249,  -249,   195,  -250,   465,   427,  -240,
    -240,   313,  -240,  -250,   467,  -240,  -250,   392,   435,   437,
     439,  -240,   448,  -240,  -240,   355,  -240,   392,   196,   459,
    -240,   460,  -240,   197,  -240,  -240,  -240,  -240,  -240,   461,
     462,   463,  -240,  -250,  -240,  -240,  -240,   198,   199,   200,
     201,   202,   203,   204,   205,   468,   469,   206,   207,   208,
     209,   470,    58,    21,  -240,    37,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,   442,    55,   295,    82,   112,
      72,   298,   -18,   447,   359,   114,   411,   395,   263,     0,
       0,   115,     0,   116,   117,     0,   118,     0,   196,     0,
     119,     0,   120,   197,   121,   122,   123,   124,   125,     0,
       0,     0,   126,     0,   127,   128,   129,   198,   199,   200,
     201,   202,   203,   204,   205,     0,     0,   206,   207,   208,
     209,     0,     0,     0,   -18,     0,   130,    95,   131,    96,
      97,   132,   133,    98,    99,   195,   215,     0,     0,  -107,
    -107,     0,   216,   185,     0,  -107,     0,     0,     0,   186,
     187,  -107,     0,  -107,  -107,     0,  -107,     0,   196,     0,
    -107,     0,  -107,   197,  -107,  -107,  -107,  -107,  -107,     0,
       0,     0,  -107,     0,  -107,  -107,  -107,   198,   199,   200,
     201,   202,   203,   204,   205,     0,     0,   206,   207,   208,
     209,     0,    94,     0,     0,     0,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,   111,     0,     0,     0,   112,
      72,     0,     0,    38,   113,   114,     2,    39,     0,     0,
       0,   115,     0,   116,   117,   363,   118,     0,     0,     0,
     119,     0,   120,     0,   121,   122,   123,   124,   125,     0,
       0,     0,   126,     0,   127,   128,   129,    40,    41,    42,
      95,     0,    96,    97,     0,     0,    98,    99,     0,    77,
      80,    94,     0,    43,    44,     0,   130,    95,   131,    96,
      97,   132,   133,    98,    99,   111,     0,     0,     0,   112,
      72,     0,     0,     0,   265,   114,     0,   179,     0,     0,
     183,   115,     0,   116,   117,   252,   118,     0,     0,     0,
     119,     0,   120,     0,   121,   122,   123,   124,   125,     0,
       0,     0,   126,     0,   127,   128,   129,   220,   222,    95,
       0,    96,    97,     0,    38,    98,    99,     2,    79,     0,
       0,     0,     0,     0,     0,     0,   130,    95,   131,    96,
      97,   132,   133,    98,    99,   111,     0,     0,     0,   112,
      72,     0,     0,     0,     0,   114,     0,     0,    40,    41,
      42,   115,     0,   116,   117,     0,   118,     0,     0,     0,
     119,     0,   120,     0,   121,   122,   123,   124,   125,     0,
       0,     0,   126,   258,   127,   128,   129,   259,     0,   260,
       0,   211,     0,   114,     0,   251,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,   130,    95,   131,    96,
      97,   132,   133,    98,    99,     0,     0,     0,     0,     0,
     126,    94,   127,   128,   129,     0,     0,   211,   126,   252,
     127,   242,   129,     0,     0,     0,     0,   114,     0,   211,
       0,     0,     0,   317,     0,    95,   131,    96,    97,   114,
       0,    98,    99,    95,   131,    96,    97,     0,     0,    98,
      99,     0,     0,     0,   126,     0,   127,     0,   129,     0,
       0,     0,     0,   211,     0,     0,   126,   361,   127,    95,
     129,    96,    97,   114,   211,    98,    99,     0,   397,    95,
     131,    96,    97,     0,   114,    98,    99,     0,     0,     0,
     314,    95,   131,    96,    97,     0,     0,    98,    99,     0,
     126,     0,   127,     0,   129,     0,     0,     0,   211,     0,
       0,   126,   406,   127,     0,   129,     0,     0,   114,   211,
       0,     0,     0,   409,     0,    95,   131,    96,    97,   114,
       0,    98,    99,     0,     0,     0,    95,   131,    96,    97,
       0,     0,    98,    99,     0,   126,     0,   127,    95,   129,
      96,    97,     0,   211,    98,    99,   126,   414,   127,     0,
     129,     0,     0,   114,   211,     0,     0,     0,   418,     0,
      95,   131,    96,    97,   114,     0,    98,    99,     0,     0,
       0,    95,   131,    96,    97,     0,     0,    98,    99,     0,
     126,     0,   127,     0,   129,     0,     0,     0,   211,     0,
       0,   126,   433,   127,     0,   129,     0,     0,   114,   211,
       0,     0,     0,   455,     0,    95,   131,    96,    97,   114,
       0,    98,    99,     0,     0,     0,    95,   131,    96,    97,
       0,     0,    98,    99,     0,   126,     0,   127,     0,   129,
       0,     0,   195,     0,     0,     0,   126,     0,   127,   334,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,   131,    96,    97,     0,   196,    98,    99,     0,     0,
     197,    95,   131,    96,    97,   195,     0,    98,    99,     0,
       0,     0,   338,     0,   198,   199,   200,   201,   202,   203,
     204,   205,     0,     0,   206,   207,   208,   209,   196,     0,
       0,  -156,     0,   197,     0,     0,     0,     0,  -250,     0,
       0,     0,     0,     0,     0,   387,     0,   198,   199,   200,
     201,   202,   203,   204,   205,     0,     0,   206,   207,   208,
     209,   196,     0,     0,  -180,     0,   197,     0,     0,     0,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
     198,   199,   200,   201,   202,   203,   204,   205,     0,     0,
     206,   207,   208,   209,   196,     0,     0,   -18,     0,   197,
       0,     0,     0,     0,   195,     0,     0,     0,     0,     0,
       0,     0,     0,   198,   199,   200,   201,   202,   203,   204,
     205,     0,     0,   206,   207,   208,   209,   196,     0,     0,
    -157,     0,   197,     0,     0,     0,     0,   195,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   199,   200,   201,
     202,   203,   204,   205,     0,     0,   206,   207,   208,   209,
     196,     0,     0,  -181,     0,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
     199,   200,   201,   202,   203,   204,   205,   195,     0,   206,
     207,   208,   209,     0,  -220,     0,  -183,     0,  -220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,   197,     0,     0,     0,     0,
     195,     0,     0,     0,     0,     0,   313,     0,     0,   198,
     199,   200,   201,   202,   203,   204,   205,     0,     0,   206,
     207,   208,   209,   196,     0,     0,     0,     0,   197,     0,
       0,     0,     0,   195,     0,     0,     0,     0,   324,     0,
       0,     0,   198,   199,   200,   201,   202,   203,   204,   205,
       0,     0,   206,   207,   208,   209,   196,     0,     0,     0,
       0,   197,     0,     0,     0,     0,  -250,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   199,   200,   201,   202,
     203,   204,   205,     0,     0,   206,   207,   208,   209,   196,
       0,     0,   333,     0,   197,     0,     0,     0,     0,  -250,
       0,     0,     0,     0,     0,     0,     0,     0,   198,   199,
     200,   201,   202,   203,   204,   205,     0,     0,   206,   207,
     208,   209,   196,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,   199,   200,   201,   202,   203,   204,   205,     0,
       0,   206,   207,   208,   209
};

static const short int yycheck[] =
{
      65,     5,   103,   185,   192,   276,    72,     8,   226,   191,
       1,   273,     8,   118,   276,   122,   123,    72,    52,   126,
     127,   128,     1,     1,   131,    49,     5,     1,     1,    23,
      51,   136,     5,     1,   139,    14,   141,     5,   143,   273,
      14,    14,   276,     7,     1,     1,   111,     8,     8,   114,
     115,   116,   118,    77,   119,   120,    80,    14,    14,    60,
     125,    25,   117,   118,    60,    59,   121,     8,     9,   257,
     136,   126,   173,   139,     1,   141,   131,   143,   226,    40,
      21,   136,    60,     8,   139,    64,   141,    14,   143,    53,
      64,    64,    25,   327,   328,    63,     8,    65,    66,     1,
      60,    69,    70,     5,     8,     9,   213,    64,    64,    11,
       9,   176,     5,     1,    39,   180,     8,    50,   225,   390,
      53,   186,    15,    15,   272,     1,    14,    39,   390,     1,
     195,    52,   197,     5,     8,    39,    38,    64,     8,    15,
     205,   206,   207,   208,   209,   210,   211,    39,     5,     1,
     257,    21,   386,     1,     6,   179,   390,     5,    15,   183,
     225,    63,    64,    65,    66,    39,   273,    69,    70,   276,
     388,   226,   273,   391,     1,   276,    64,   325,     5,     0,
       7,    64,     3,     4,     5,   333,    10,   335,     8,    13,
       5,   339,     7,   258,     1,    10,   220,     8,   222,   264,
     348,   383,     1,    51,    52,     5,    63,   441,    65,    66,
       8,     9,    69,    70,   321,   280,    15,   272,   283,    39,
     327,   328,     5,    21,     7,   330,   291,     1,    39,   336,
      51,    52,   450,     7,   452,     5,    63,     7,    65,    66,
     388,     8,    69,    70,   309,    15,   311,    14,    63,   354,
      65,    66,   357,     5,    69,    70,   363,   322,     5,   324,
       5,     5,     5,    15,   330,   330,     5,     1,    15,   334,
     325,     5,    15,   338,    11,   330,    15,    11,   333,   386,
     335,    18,    19,   390,   339,     5,    64,     5,   354,   390,
     355,   357,   440,   348,    12,    15,     5,     1,     7,   354,
     405,     5,   357,   117,    38,   329,    40,   121,    42,    51,
      55,   376,   126,     5,    51,   380,   421,   131,    63,    24,
      65,    66,   387,    15,    69,    70,    10,     5,     5,    63,
      64,    65,    66,   388,   441,    69,    70,    15,    15,   405,
       7,    46,    47,    48,    49,    63,     1,    65,    66,     8,
     405,    69,    70,     8,    63,   421,    65,    66,     8,     9,
      69,    70,   427,     1,    14,     1,   421,     5,     8,     5,
       6,     7,     8,     9,    10,    11,    12,   442,     4,     5,
      16,    17,    18,    19,    20,   440,    22,    23,    24,     7,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
       4,     5,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     1,    38,    53,    54,    55,
      56,     7,     8,    59,    60,     8,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     8,     8,     9,     5,
       6,     7,     8,    14,    10,    11,    12,    51,    52,     9,
      16,    17,    18,    19,    20,     1,    22,    23,    24,     5,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    60,
       4,     5,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    28,     9,    53,    54,    55,
      56,    34,    35,    59,    60,     9,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     7,     8,     9,     5,
       6,     7,     8,     1,    10,    11,    12,    51,    52,     9,
      16,    17,    18,    19,    20,     1,    22,    23,    24,     5,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    16,
       9,    18,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     7,     8,    53,    54,    55,
      56,     1,     5,    59,    60,     5,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    35,    36,    37,     5,
       6,    10,     8,     9,    13,    11,     8,     9,    14,    43,
      44,    17,    51,    19,    20,     8,    22,    51,    24,    12,
      26,     8,    28,    29,    30,    31,    32,    33,    34,    62,
       7,     8,    38,    66,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     7,     8,    53,    54,    55,
      56,    35,    36,    37,    60,    14,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     1,    55,    52,     5,
       6,     7,     8,     8,     5,    11,    14,    15,     6,    14,
      15,    17,    10,    19,    20,    13,    22,     5,    24,    55,
      26,     8,    28,    29,    30,    31,    32,    33,    34,    14,
      15,     7,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     7,     8,    53,    54,    55,
      56,     5,    14,    15,    60,     5,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     5,    15,    10,     5,
       6,    13,     8,     9,     1,    11,     8,     9,    14,     8,
       9,    17,     8,    19,    20,     5,    22,    21,    24,    14,
      26,     5,    28,    29,    30,    31,    32,    33,    34,     8,
       9,    16,    38,     9,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     7,     8,    53,    54,    55,
      56,     9,    14,    15,    60,     5,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     8,     9,    14,     5,
       6,     7,     8,     8,     9,    11,     8,     9,     5,     5,
       5,    17,     5,    19,    20,    18,    22,     9,    24,     5,
      26,     5,    28,    29,    30,    31,    32,    33,    34,     5,
       5,     5,    38,    60,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     5,     5,    53,    54,    55,
      56,     5,    32,     6,    60,    23,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    29,   191,    53,     5,
       6,   192,     8,   422,   270,    11,   337,   322,   131,    -1,
      -1,    17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,     1,    -1,    -1,     5,
       6,    -1,     7,     8,    -1,    11,    -1,    -1,    -1,    14,
      15,    17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,     5,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    -1,    -1,    -1,     5,
       6,    -1,    -1,     1,    10,    11,     4,     5,    -1,    -1,
      -1,    17,    -1,    19,    20,    38,    22,    -1,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,    35,    36,    37,
      63,    -1,    65,    66,    -1,    -1,    69,    70,    -1,    50,
      51,     5,    -1,    51,    52,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    -1,    -1,    -1,     5,
       6,    -1,    -1,    -1,    10,    11,    -1,    78,    -1,    -1,
      81,    17,    -1,    19,    20,    39,    22,    -1,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,   108,   109,    63,
      -1,    65,    66,    -1,     1,    69,    70,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     1,    -1,    -1,    -1,     5,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    35,    36,
      37,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,     1,    40,    41,    42,     5,    -1,     7,
      -1,     1,    -1,    11,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      38,     5,    40,    41,    42,    -1,    -1,     1,    38,    39,
      40,     5,    42,    -1,    -1,    -1,    -1,    11,    -1,     1,
      -1,    -1,    -1,     5,    -1,    63,    64,    65,    66,    11,
      -1,    69,    70,    63,    64,    65,    66,    -1,    -1,    69,
      70,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    38,     5,    40,    63,
      42,    65,    66,    11,     1,    69,    70,    -1,     5,    63,
      64,    65,    66,    -1,    11,    69,    70,    -1,    -1,    -1,
       5,    63,    64,    65,    66,    -1,    -1,    69,    70,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,     1,    -1,
      -1,    38,     5,    40,    -1,    42,    -1,    -1,    11,     1,
      -1,    -1,    -1,     5,    -1,    63,    64,    65,    66,    11,
      -1,    69,    70,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    69,    70,    -1,    38,    -1,    40,    63,    42,
      65,    66,    -1,     1,    69,    70,    38,     5,    40,    -1,
      42,    -1,    -1,    11,     1,    -1,    -1,    -1,     5,    -1,
      63,    64,    65,    66,    11,    -1,    69,    70,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    -1,    69,    70,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,     1,    -1,
      -1,    38,     5,    40,    -1,    42,    -1,    -1,    11,     1,
      -1,    -1,    -1,     5,    -1,    63,    64,    65,    66,    11,
      -1,    69,    70,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    69,    70,    -1,    38,    -1,    40,    -1,    42,
      -1,    -1,     1,    -1,    -1,    -1,    38,    -1,    40,     8,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    24,    69,    70,    -1,    -1,
      29,    63,    64,    65,    66,     1,    -1,    69,    70,    -1,
      -1,    -1,     8,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    24,    -1,
      -1,    60,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    24,    -1,    -1,    60,    -1,    29,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    24,    -1,    -1,    60,    -1,    29,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,
      60,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      24,    -1,    -1,    60,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,     1,    -1,    53,
      54,    55,    56,    -1,     8,    -1,    60,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    51,    52,    84,    85,    86,    87,
      88,   133,     5,    90,    91,     1,     5,     1,    52,    51,
       0,    86,    87,     6,    10,    13,    92,    93,    88,     8,
      60,     9,    64,     5,    88,    88,    10,    93,     1,     5,
      35,    36,    37,    51,    52,    87,    94,    95,    96,    97,
     132,   133,    10,    13,    92,    91,     5,     7,    90,    92,
      92,    10,    64,     1,     5,    14,    64,   132,   132,     1,
      60,     1,     6,   103,     5,    51,    52,    97,   133,     5,
      97,   132,    94,     7,     5,    15,    98,    99,   100,   101,
     102,     5,    98,     1,     5,    63,    65,    66,    69,    70,
     138,   150,   151,   152,   153,     5,     7,    98,    52,    51,
      10,     1,     5,    10,    11,    17,    19,    20,    22,    26,
      28,    30,    31,    32,    33,    34,    38,    40,    41,    42,
      62,    64,    67,    68,    89,   103,   104,   105,   106,   108,
     110,   111,   112,   113,   114,   115,   116,   117,   120,   121,
     122,   124,   125,   126,   127,   128,   129,   131,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   149,   150,   152,     1,     5,    14,   103,     5,    97,
      14,   103,     5,    97,     7,     8,    14,    15,     5,    15,
       7,     8,     8,     7,     7,     1,    24,    29,    43,    44,
      45,    46,    47,    48,    49,    50,    53,    54,    55,    56,
     154,     1,     9,    64,   143,     1,     7,     1,     7,     5,
      97,     5,    97,     7,   150,     1,     8,     9,    55,    60,
      12,   141,   142,   150,   150,   150,     5,   116,   138,   105,
     150,   150,     5,   116,    89,    55,    89,     1,     5,   130,
     150,     5,    39,    89,   116,    89,    89,    38,     1,     5,
       7,    89,   116,   147,     8,    10,   105,   105,   105,   105,
       8,     9,     8,    14,    60,     9,    14,     5,     1,   150,
      14,   103,   150,    14,   103,     5,    15,   100,   150,     1,
      15,    14,     5,     5,   100,   101,     5,    99,   102,   150,
     150,   150,   150,   150,   150,   150,   150,     5,     1,    14,
     103,    14,   103,     7,     5,    89,   150,     5,   114,   134,
       5,    55,     8,    12,     6,     8,     9,    21,    21,    23,
      59,   118,   119,    27,     8,     8,    55,     8,     8,     8,
      39,    39,    39,    40,     5,    89,    99,     7,     8,     1,
       7,     7,     7,   150,    16,    18,   107,   109,     5,   115,
       5,     5,   134,    38,    89,   123,   140,   143,   144,     5,
     123,   150,   150,    15,     5,    15,    14,    15,     1,   150,
      14,     1,     1,     8,   150,   150,    21,     8,     8,     9,
      14,     8,     9,    60,    89,   142,   150,     5,     5,    89,
     144,    89,   144,   103,   105,   150,     5,   134,   150,     5,
      89,   130,     1,   150,     5,    39,    39,    39,     5,   105,
     150,    16,   105,     9,     1,     5,   150,    14,   150,     5,
      89,   144,   150,     5,   134,     5,   123,     5,   114,     5,
       8,    21,     1,   105,    39,     7,   105,   107,     5,   150,
       8,     9,     8,     9,     9,     5,    89,   144,   150,     5,
       5,     5,     5,     5,     9,     9,    60,     9,     5,     5,
       5,    60
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
#line 82 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 3:
#line 85 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 4:
#line 90 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 5:
#line 92 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 6:
#line 93 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 7:
#line 96 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 8:
#line 97 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: storage modef class_h class_body\n"; ;}
    break;

  case 9:
#line 98 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: STATIC FINAL class_h class_body\n"; ;}
    break;

  case 10:
#line 99 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_decl: FINAL STATIC class_h class_body\n"; ;}
    break;

  case 11:
#line 101 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 12:
#line 102 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); ;}
    break;

  case 13:
#line 103 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));;}
    break;

  case 14:
#line 104 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 15:
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 16:
#line 114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 17:
#line 121 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 18:
#line 122 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 19:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";;}
    break;

  case 20:
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_list:	unit_import\n";;}
    break;

  case 21:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: unit_import DOT ID\n";;}
    break;

  case 22:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"unit_import: ID\n";;}
    break;

  case 23:
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();;}
    break;

  case 24:
#line 135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();;}
    break;

  case 25:
#line 136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 26:
#line 142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 27:
#line 150 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 28:
#line 151 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 29:
#line 154 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 30:
#line 155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 31:
#line 156 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 32:
#line 157 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 33:
#line 163 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID\n";;}
    break;

  case 34:
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID\n";;}
    break;

  case 35:
#line 165 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";;}
    break;

  case 36:
#line 166 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";;}
    break;

  case 37:
#line 167 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID ASSIGN expr\n";;}
    break;

  case 38:
#line 168 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";;}
    break;

  case 39:
#line 169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID\n";;}
    break;

  case 40:
#line 170 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID\n";;}
    break;

  case 41:
#line 171 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID ASSIGN expr\n";;}
    break;

  case 42:
#line 172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID ASSIGN expr\n";;}
    break;

  case 43:
#line 173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 44:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 45:
#line 175 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 46:
#line 179 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 47:
#line 185 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 48:
#line 186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";;}
    break;

  case 49:
#line 187 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef method_h block_stmt\n";;}
    break;

  case 50:
#line 188 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef storage_modef method_h block_stmt\n";;}
    break;

  case 51:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef access_modef method_h block_stmt\n";;}
    break;

  case 52:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";;}
    break;

  case 53:
#line 191 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";;}
    break;

  case 54:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";;}
    break;

  case 55:
#line 195 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 56:
#line 196 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";;}
    break;

  case 57:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 58:
#line 201 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 59:
#line 205 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 60:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 61:
#line 213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 62:
#line 217 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 63:
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 64:
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 65:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 66:
#line 229 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 67:
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n";;}
    break;

  case 68:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n";;}
    break;

  case 69:
#line 232 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n";;}
    break;

  case 70:
#line 233 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 71:
#line 236 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID \n";;}
    break;

  case 72:
#line 237 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";;}
    break;

  case 73:
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 74:
#line 242 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 75:
#line 249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 76:
#line 250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 77:
#line 251 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 78:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 79:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";;}
    break;

  case 80:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR ID ASSIGN expr \n";;}
    break;

  case 81:
#line 263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";;}
    break;

  case 82:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 83:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 84:
#line 274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 85:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 86:
#line 276 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 87:
#line 283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 88:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 89:
#line 287 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 90:
#line 288 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 91:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 92:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 93:
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 94:
#line 292 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 95:
#line 293 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 96:
#line 294 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 97:
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 98:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 99:
#line 297 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 100:
#line 300 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 101:
#line 301 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 102:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 103:
#line 303 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 104:
#line 306 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 105:
#line 307 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 106:
#line 310 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 107:
#line 313 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 108:
#line 316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 109:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 110:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 111:
#line 328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 112:
#line 331 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 113:
#line 332 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 114:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 115:
#line 334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 116:
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 117:
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 118:
#line 337 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 119:
#line 341 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 120:
#line 348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 121:
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 122:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 123:
#line 351 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 124:
#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 125:
#line 353 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 126:
#line 354 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 127:
#line 355 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 128:
#line 359 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 129:
#line 360 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 130:
#line 364 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 131:
#line 365 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 132:
#line 366 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 133:
#line 367 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 134:
#line 368 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 135:
#line 369 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 136:
#line 372 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 137:
#line 373 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 138:
#line 376 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 139:
#line 379 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 140:
#line 380 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 141:
#line 383 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 142:
#line 384 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 143:
#line 387 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 144:
#line 388 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 145:
#line 389 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 146:
#line 391 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 147:
#line 392 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 148:
#line 393 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 149:
#line 394 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 150:
#line 395 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 151:
#line 396 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 152:
#line 397 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 153:
#line 398 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 154:
#line 399 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 155:
#line 400 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 156:
#line 403 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 157:
#line 404 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 158:
#line 406 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 159:
#line 407 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 160:
#line 408 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 161:
#line 409 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 162:
#line 412 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 163:
#line 413 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 164:
#line 414 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 165:
#line 420 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 166:
#line 421 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 167:
#line 422 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 168:
#line 425 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 169:
#line 426 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 170:
#line 429 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 171:
#line 432 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 172:
#line 433 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 173:
#line 434 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 174:
#line 438 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 175:
#line 443 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 176:
#line 444 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 177:
#line 450 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 178:
#line 451 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 179:
#line 454 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 180:
#line 455 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 181:
#line 456 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 182:
#line 457 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 183:
#line 461 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 184:
#line 467 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";;}
    break;

  case 185:
#line 468 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";;}
    break;

  case 186:
#line 469 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";;}
    break;

  case 187:
#line 471 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"storage_modef: STATIC\n";;}
    break;

  case 188:
#line 472 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"storage_modef: FINAL\n";;}
    break;

  case 189:
#line 474 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 190:
#line 475 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 191:
#line 476 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 192:
#line 477 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 193:
#line 478 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 194:
#line 479 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 195:
#line 480 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 196:
#line 481 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 197:
#line 484 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 198:
#line 485 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 199:
#line 488 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 200:
#line 489 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 201:
#line 490 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 202:
#line 491 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 203:
#line 494 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 204:
#line 495 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 205:
#line 498 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 206:
#line 499 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 207:
#line 500 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 208:
#line 501 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 209:
#line 502 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 210:
#line 505 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 211:
#line 506 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 212:
#line 507 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 213:
#line 508 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 214:
#line 509 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 215:
#line 512 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 216:
#line 513 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 217:
#line 515 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 218:
#line 516 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 219:
#line 517 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 220:
#line 519 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 221:
#line 522 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 222:
#line 523 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 223:
#line 524 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 224:
#line 528 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 225:
#line 532 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 226:
#line 536 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 227:
#line 543 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 228:
#line 544 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 229:
#line 547 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 230:
#line 550 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 231:
#line 553 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 232:
#line 554 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 233:
#line 557 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 234:
#line 561 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 235:
#line 562 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 236:
#line 566 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 237:
#line 567 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 238:
#line 568 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 239:
#line 569 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 240:
#line 570 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 241:
#line 576 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 242:
#line 577 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 243:
#line 578 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 244:
#line 579 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 245:
#line 580 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 246:
#line 581 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 247:
#line 583 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";;}
    break;

  case 248:
#line 584 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";;}
    break;

  case 249:
#line 593 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";;}
    break;

  case 250:
#line 594 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 251:
#line 597 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 252:
#line 598 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 253:
#line 599 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 254:
#line 600 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 255:
#line 601 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 256:
#line 602 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 257:
#line 603 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 258:
#line 604 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3440 "yacc.cpp"

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


#line 606 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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

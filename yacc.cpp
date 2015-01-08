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
     SELF = 308,
     LESS_THAN = 309,
     LESS_OR_EQUAL = 310,
     MORE_THAN = 311,
     MORE_OR_EQUAL = 312,
     TRUE = 313,
     FALSE = 314,
     EXCEPT = 315,
     SEMICOLON = 316,
     NEW_LINE = 317,
     PASS = 318,
     CHAR_VALUE = 319,
     OPEN_S = 320,
     STRING_VALUE = 321,
     INTEGER_VALUE = 322,
     BREAK = 323,
     CONTINUE = 324,
     LONG_VALUE = 325,
     FLOAT_VALUE = 326,
     stmt_1_2 = 327,
     stmt_9 = 328,
     stmt_8 = 329,
     stmt_7 = 330,
     stmt_6 = 331,
     stmt_5 = 332,
     stmt_4 = 333,
     stmt_3 = 334,
     stmt_2 = 335,
     stmt_1 = 336
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
#define SELF 308
#define LESS_THAN 309
#define LESS_OR_EQUAL 310
#define MORE_THAN 311
#define MORE_OR_EQUAL 312
#define TRUE 313
#define FALSE 314
#define EXCEPT 315
#define SEMICOLON 316
#define NEW_LINE 317
#define PASS 318
#define CHAR_VALUE 319
#define OPEN_S 320
#define STRING_VALUE 321
#define INTEGER_VALUE 322
#define BREAK 323
#define CONTINUE 324
#define LONG_VALUE 325
#define FLOAT_VALUE 326
#define stmt_1_2 327
#define stmt_9 328
#define stmt_8 329
#define stmt_7 330
#define stmt_6 331
#define stmt_5 332
#define stmt_4 333
#define stmt_3 334
#define stmt_2 335
#define stmt_1 336




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
	#include "c:\users\amer-hy\source\repos\compiler-project - Copy - Copy\compilerproject\myparser.h"
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
	vector<char *>inhertance_list;
	vector<char *>ID_list;
	Variable* v;
	Type* t;
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
#line 53 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
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
#line 311 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 323 "yacc.cpp"

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1781

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  66
/* YYNRULES -- Number of rules. */
#define YYNRULES  252
/* YYNRULES -- Number of states. */
#define YYNSTATES  450

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    17,    22,    25,
      28,    34,    37,    40,    44,    49,    55,    61,    68,    71,
      75,    78,    82,    84,    88,    90,    94,    96,    99,   103,
     105,   108,   112,   115,   118,   120,   122,   125,   128,   132,
     136,   140,   143,   147,   150,   155,   159,   164,   168,   171,
     174,   176,   181,   185,   190,   194,   197,   203,   209,   214,
     219,   224,   228,   234,   240,   245,   250,   256,   262,   268,
     274,   278,   282,   286,   290,   292,   295,   299,   304,   307,
     311,   314,   317,   319,   321,   323,   325,   327,   329,   331,
     334,   337,   342,   351,   362,   367,   374,   377,   382,   386,
     392,   396,   399,   402,   405,   408,   411,   415,   418,   423,
     430,   435,   441,   445,   449,   453,   459,   465,   471,   479,
     481,   485,   491,   495,   501,   505,   511,   515,   517,   521,
     525,   528,   531,   535,   538,   543,   545,   547,   549,   551,
     553,   555,   557,   559,   561,   563,   565,   567,   569,   572,
     577,   581,   587,   591,   595,   601,   605,   608,   613,   616,
     618,   621,   623,   626,   631,   635,   640,   643,   646,   650,
     652,   654,   657,   662,   667,   673,   675,   677,   679,   683,
     689,   693,   697,   703,   707,   709,   711,   715,   719,   721,
     723,   725,   727,   729,   731,   733,   735,   737,   739,   741,
     743,   745,   747,   749,   751,   754,   758,   762,   765,   767,
     771,   775,   778,   781,   784,   788,   792,   796,   800,   804,
     806,   809,   814,   819,   824,   829,   834,   836,   838,   842,
     844,   848,   852,   856,   860,   864,   868,   872,   874,   878,
     883,   888,   892,   898,   905,   912,   914,   916,   918,   920,
     922,   924,   926
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      83,     0,    -1,    84,     9,    -1,    84,    85,    -1,    85,
      -1,     3,    89,    86,    -1,    86,    -1,     3,    89,    51,
      86,    -1,    51,    86,    -1,    52,    86,    -1,     3,    89,
      52,    51,    86,    -1,    87,    91,    -1,     4,     5,    -1,
     127,     4,     5,    -1,     4,     5,    65,     7,    -1,   127,
       4,     5,    65,     7,    -1,     4,     5,    65,    89,     7,
      -1,   127,     4,     5,    65,    89,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    88,     8,
     144,    -1,   144,    -1,    89,     8,    90,    -1,    90,    -1,
      90,     9,     5,    -1,     5,    -1,     6,    10,    -1,     6,
      92,    10,    -1,    10,    -1,    92,    10,    -1,    92,    13,
      93,    -1,    13,    93,    -1,    94,    61,    -1,    95,    -1,
      86,    -1,    51,    86,    -1,    52,    86,    -1,    51,    52,
      86,    -1,    52,    51,    86,    -1,    52,    94,    61,    -1,
      52,    95,    -1,    51,    94,    61,    -1,    51,    95,    -1,
      52,    51,    94,    61,    -1,    52,    51,    95,    -1,    51,
      52,    94,    61,    -1,    51,    52,    95,    -1,    94,     1,
      -1,   127,     5,    -1,     5,    -1,   127,     5,    14,   144,
      -1,     5,    14,   144,    -1,   127,     5,     5,     1,    -1,
       5,     5,     1,    -1,    96,    99,    -1,   127,     5,    65,
      97,     7,    -1,   127,     5,    65,     5,     7,    -1,     5,
      65,    97,     7,    -1,     5,    65,     5,     7,    -1,   127,
       5,    65,     7,    -1,     5,    65,     7,    -1,   127,     1,
      65,    97,     7,    -1,   127,     1,    65,     5,     7,    -1,
       1,    65,    97,     7,    -1,     1,    65,     5,     7,    -1,
     127,     5,     1,    97,     7,    -1,   127,     5,     1,     5,
       7,    -1,   127,     5,    65,    97,     1,    -1,   127,     5,
      65,     5,     1,    -1,    97,     8,    98,    -1,     5,     8,
      98,    -1,    97,     8,     5,    -1,     5,     8,     5,    -1,
      98,    -1,    15,     5,    -1,     5,    14,   144,    -1,    15,
       5,    14,   144,    -1,     6,    10,    -1,     6,   100,    10,
      -1,     1,    10,    -1,   100,   101,    -1,   101,    -1,   102,
      -1,   106,    -1,   108,    -1,   113,    -1,   116,    -1,    99,
      -1,   117,    61,    -1,     5,    61,    -1,     5,     9,     5,
      61,    -1,     5,     8,     5,     9,     5,     9,     5,    61,
      -1,     5,     9,     5,     8,     5,     9,     5,     9,     5,
      61,    -1,    53,     9,     5,    61,    -1,    53,     9,     5,
      14,    88,    61,    -1,   104,   101,    -1,   104,   101,    16,
     101,    -1,   104,   101,   103,    -1,   104,   101,   103,    16,
     101,    -1,   105,   101,   103,    -1,   105,   101,    -1,    17,
     144,    -1,    18,   144,    -1,   107,   101,    -1,    19,   144,
      -1,     5,     1,   144,    -1,   109,   101,    -1,    20,   112,
      21,    88,    -1,    20,     5,     8,     5,    21,    88,    -1,
      20,     5,    21,    88,    -1,     5,     1,     5,    21,    88,
      -1,   110,     8,   111,    -1,     5,     8,   110,    -1,     5,
       8,     5,    -1,     5,     8,     5,     9,     5,    -1,     5,
       9,     5,     8,   110,    -1,     5,     9,     5,     8,     5,
      -1,     5,     9,     5,     8,     5,     9,     5,    -1,   111,
      -1,   111,     9,     5,    -1,     5,     9,     5,     9,     5,
      -1,   112,     8,   128,    -1,     5,     8,     5,     8,   128,
      -1,   112,     8,     5,    -1,     5,     8,     5,     8,     5,
      -1,     5,     8,   128,    -1,   128,    -1,    22,   101,   115,
      -1,    22,   101,   114,    -1,    23,    99,    -1,    60,   101,
      -1,    60,   144,   101,    -1,    26,   144,    -1,    26,   144,
      27,   128,    -1,    88,    -1,   118,    -1,   119,    -1,    63,
      -1,   120,    -1,   123,    -1,   121,    -1,   122,    -1,   126,
      -1,    68,    -1,    69,    -1,   110,    -1,   124,    -1,    28,
     144,    -1,    28,   144,     8,   144,    -1,   112,    14,    88,
      -1,     5,     8,     5,    14,    88,    -1,     5,    14,    88,
      -1,   112,    14,   141,    -1,     5,     8,     5,    14,   141,
      -1,     5,    14,   141,    -1,    30,   112,    -1,    30,     5,
       8,     5,    -1,    30,     5,    -1,    31,    -1,    31,    88,
      -1,   141,    -1,    32,    88,    -1,    32,    56,    56,    88,
      -1,     5,     1,    88,    -1,     5,    56,    56,    88,    -1,
      33,   125,    -1,    33,     1,    -1,     5,     8,   125,    -1,
       5,    -1,    34,    -1,    34,   144,    -1,    34,   144,     8,
     144,    -1,    34,   144,     8,     1,    -1,     5,     1,   144,
       8,   144,    -1,    35,    -1,    36,    -1,    37,    -1,    65,
     112,     7,    -1,    65,     5,     8,     5,     7,    -1,    65,
       5,     7,    -1,    38,   112,    39,    -1,    38,     5,     8,
       5,    39,    -1,    38,     5,    39,    -1,   129,    -1,   142,
      -1,   130,     9,     5,    -1,     5,     9,     5,    -1,   131,
      -1,   129,    -1,   142,    -1,   143,    -1,   133,    -1,   132,
      -1,    66,    -1,    67,    -1,    70,    -1,    71,    -1,    64,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,   134,
      -1,    11,    12,    -1,    11,   135,    12,    -1,   135,     8,
     136,    -1,   135,     8,    -1,   136,    -1,   144,     6,   144,
      -1,    65,   144,     7,    -1,    65,     7,    -1,     1,     7,
      -1,    65,     1,    -1,     1,   144,     7,    -1,    65,   144,
       1,    -1,    38,    88,    39,    -1,    40,    88,    40,    -1,
      65,   141,     7,    -1,    41,    -1,    41,    88,    -1,    42,
      38,    88,    39,    -1,     5,    38,    88,    39,    -1,    42,
      38,    97,    39,    -1,    42,    38,     5,    39,    -1,     5,
      38,     5,    39,    -1,   145,    -1,   132,    -1,   144,   147,
     144,    -1,   146,    -1,   144,     1,   144,    -1,   144,    29,
     144,    -1,   144,    50,   144,    -1,   144,    54,   144,    -1,
     144,    55,   144,    -1,   144,    56,   144,    -1,   144,    57,
     144,    -1,     5,    -1,     5,    65,     7,    -1,     5,    65,
      88,     7,    -1,     5,    65,   144,     7,    -1,   146,     9,
       5,    -1,   146,     9,     5,    65,     7,    -1,   146,     9,
       5,    65,    88,     7,    -1,   146,     9,     5,    65,   144,
       7,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      43,    -1,    45,    -1,    24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    91,    91,    98,   101,   109,   110,   111,   115,   119,
     124,   127,   132,   137,   143,   148,   154,   159,   165,   170,
     175,   182,   183,   186,   193,   202,   206,   214,   218,   221,
     227,   236,   237,   240,   241,   242,   243,   244,   245,   246,
     247,   251,   252,   256,   257,   261,   262,   266,   267,   273,
     279,   283,   288,   292,   296,   302,   306,   307,   308,   309,
     310,   311,   312,   316,   320,   324,   328,   332,   336,   340,
     348,   349,   350,   351,   352,   355,   356,   357,   360,   361,
     362,   369,   370,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   389,   396,   397,   398,   399,
     402,   403,   406,   409,   412,   417,   418,   424,   427,   428,
     429,   430,   437,   438,   439,   440,   441,   442,   443,   444,
     448,   449,   453,   454,   455,   456,   457,   458,   461,   462,
     465,   468,   469,   472,   473,   476,   477,   478,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   492,   493,
     496,   497,   498,   499,   500,   501,   504,   505,   506,   509,
     510,   513,   516,   517,   518,   522,   527,   528,   534,   535,
     538,   539,   540,   541,   545,   551,   552,   553,   556,   557,
     558,   559,   560,   561,   562,   563,   566,   567,   570,   571,
     572,   573,   576,   577,   580,   581,   582,   583,   584,   587,
     588,   589,   590,   591,   594,   595,   597,   598,   599,   601,
     604,   605,   606,   610,   614,   618,   625,   628,   631,   634,
     635,   638,   639,   642,   643,   644,   647,   648,   649,   650,
     651,   657,   658,   659,   660,   661,   662,   665,   666,   667,
     668,   669,   670,   671,   672,   675,   676,   677,   678,   679,
     680,   681,   682
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
  "MINUS", "DIV", "MOD", "NOT_EQUAL", "FINAL", "STATIC", "SELF",
  "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL", "TRUE",
  "FALSE", "EXCEPT", "SEMICOLON", "NEW_LINE", "PASS", "CHAR_VALUE",
  "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE",
  "LONG_VALUE", "FLOAT_VALUE", "stmt_1_2", "stmt_9", "stmt_8", "stmt_7",
  "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "$accept",
  "programes", "program", "unit", "class_decl", "class_h", "expr_list",
  "unit_list", "unit_import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "args_list", "arg",
  "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header",
  "elif_header", "while_stmt", "while_header", "for_stmt", "for_header",
  "import_list", "import", "target_list", "try_stmt", "finally_stmt",
  "except_stmt", "with_stmt", "simple_stmt_list", "assert_stmt",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "target",
  "attributeref", "primary", "atom", "literal", "enclosure",
  "dict_display", "key_datum_list", "key_datum", "parenth_form",
  "list_display", "string_conversion", "yield_atom", "yield_expression",
  "subscription", "call", "expr", "condition", "long_id", "op", 0
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
     335,   336
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   105,   106,   107,   107,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     119,   119,   119,   119,   119,   119,   120,   120,   120,   121,
     121,   122,   123,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   135,   136,
     137,   137,   137,   137,   137,   137,   138,   139,   140,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     1,     4,     2,     2,
       5,     2,     2,     3,     4,     5,     5,     6,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     2,     3,     1,
       2,     3,     2,     2,     1,     1,     2,     2,     3,     3,
       3,     2,     3,     2,     4,     3,     4,     3,     2,     2,
       1,     4,     3,     4,     3,     2,     5,     5,     4,     4,
       4,     3,     5,     5,     4,     4,     5,     5,     5,     5,
       3,     3,     3,     3,     1,     2,     3,     4,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     8,    10,     4,     6,     2,     4,     3,     5,
       3,     2,     2,     2,     2,     2,     3,     2,     4,     6,
       4,     5,     3,     3,     3,     5,     5,     5,     7,     1,
       3,     5,     3,     5,     3,     5,     3,     1,     3,     3,
       2,     2,     3,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     3,     3,     5,     3,     2,     4,     2,     1,
       2,     1,     2,     4,     3,     4,     2,     2,     3,     1,
       1,     2,     4,     4,     5,     1,     1,     1,     3,     5,
       3,     3,     5,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     2,     1,     3,
       3,     2,     2,     2,     3,     3,     3,     3,     3,     1,
       2,     4,     4,     4,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     4,
       4,     3,     5,     6,     6,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,   175,   176,   177,     0,     0,     0,
       0,     4,     6,     0,     0,    26,     0,    24,    18,    12,
      20,     8,     9,     1,     2,     3,     0,    29,     0,    11,
       0,     0,     0,     0,     0,     5,     0,     0,    19,    27,
       0,     0,    50,     0,     0,    35,    32,     0,    34,     0,
       0,    30,     0,    13,    23,     7,     0,    25,    14,     0,
      28,     0,     0,     0,     0,     0,    36,     0,    43,     0,
      37,     0,    41,    48,    33,     0,     0,    55,     0,    49,
      31,     0,    10,    16,     0,     0,     0,    74,    54,   237,
     198,   194,   195,   196,   197,   227,    52,   226,   229,     0,
      61,     0,    38,     0,    47,    42,    39,     0,    45,    40,
      80,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,   159,     0,     0,   170,     0,     0,   219,     0,
       0,   138,     0,   144,   145,   135,    88,     0,    82,    83,
       0,    84,     0,    85,     0,   146,   119,     0,    86,    87,
       0,   136,   137,   139,   141,   142,   140,   147,   143,   127,
     184,     0,   188,   227,   192,   203,   199,   200,   201,   202,
     161,   185,   191,     0,     0,     0,     0,     0,     0,    15,
       0,    65,     0,     0,    75,    64,     0,     0,     0,   251,
       0,   249,   252,   250,   245,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,    59,    58,    46,    44,   212,
       0,     0,     0,     0,     0,     0,     0,    90,   204,     0,
     208,     0,   102,   105,     0,     0,     0,   193,     0,   133,
       0,   158,   156,   160,     0,   162,   167,   169,   166,     0,
     237,     0,     0,     0,   220,     0,     0,   213,   237,   211,
       0,     0,     0,     0,    79,    81,    96,   104,   107,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,    53,
      51,     0,    60,     0,    17,    73,    71,    76,     0,    72,
      70,   238,     0,     0,     0,   231,   232,   233,   234,   235,
     236,     0,   241,   214,   237,   164,   106,   114,   113,   126,
     187,   152,   155,   237,     0,     0,   207,   205,     0,     0,
       0,     0,     0,     0,     0,   129,   128,     0,     0,     0,
       0,     0,     0,     0,   183,   216,   181,   217,   237,     0,
       0,     0,   180,     0,   178,   218,   215,   210,    21,     0,
       0,    98,     0,     0,   112,   120,   124,   122,   150,   153,
     186,    63,    62,    67,    66,    69,    57,    68,    56,    77,
     239,   240,     0,     0,     0,     0,     0,     0,     0,     0,
      91,   225,   222,   165,   206,     0,     0,   187,   110,   108,
     130,   131,     0,     0,   134,     0,   157,   163,   168,   173,
       0,     0,   224,   221,   223,     0,    94,     0,    97,     0,
       0,   101,     0,   242,     0,     0,   111,     0,   114,   123,
     187,   151,   154,   117,   116,   121,     0,     0,     0,   132,
     182,     0,   179,    99,   100,     0,   243,   244,     0,     0,
       0,     0,     0,   125,   109,     0,    95,   114,   187,   117,
     121,   118,     0,     0,    92,     0,   115,   118,   121,    93
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,   135,    16,    17,    29,
      30,    46,    47,    48,    49,    86,    87,   136,   137,   138,
     139,   341,   140,   342,   141,   142,   143,   144,   145,   146,
     147,   148,   315,   316,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   238,   158,    14,   159,   160,   161,   162,
      95,   164,   165,   219,   220,   166,   167,   168,   169,   170,
     171,   172,   173,    97,    98,   203
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -211
static const short int yypact[] =
{
    1695,    -1,   168,    60,  -211,  -211,  -211,  1040,  1040,    88,
    1669,  -211,  -211,   651,   117,  -211,  1729,   158,  -211,   120,
     211,  -211,  -211,  -211,  -211,  -211,   335,  -211,   864,  -211,
     504,   223,    -1,  1040,   196,  -211,   228,   121,  -211,  -211,
     506,   188,     6,   971,  1267,  -211,  -211,     5,  -211,    23,
     330,  -211,   864,   197,   158,  -211,  1040,  -211,  -211,   138,
    -211,   176,   270,   907,   182,   947,  -211,   224,  -211,   947,
    -211,   231,  -211,  -211,  -211,   320,   856,  -211,   271,    21,
    -211,   295,  -211,  -211,   300,   344,   268,  -211,  -211,   294,
    -211,  -211,  -211,  -211,  -211,  -211,  1668,  -211,   363,   354,
    -211,   403,  -211,   323,  -211,  -211,  -211,   333,  -211,  -211,
    -211,    26,   501,  -211,   139,   907,   907,   112,   998,   907,
     907,   273,   907,    39,   195,   907,  1032,   907,   907,   380,
     435,  -211,   286,  -211,  -211,   426,  -211,   927,  -211,  -211,
     998,  -211,   998,  -211,   998,   443,   446,    32,  -211,  -211,
     406,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
     472,   483,  -211,   495,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,   499,  -211,   572,   208,   212,   510,   907,   498,  -211,
     458,  -211,   237,   907,   508,  -211,   243,   155,   907,  -211,
     907,  -211,  -211,  -211,  -211,  -211,  -211,  -211,   907,   907,
     907,   907,   907,   907,   519,  -211,  -211,  -211,  -211,  -211,
    1547,  1175,  1041,   521,   170,  1196,   482,  -211,  -211,    13,
    -211,  1576,  1668,  1668,   239,    29,    37,  -211,    -5,  1610,
    1286,   222,   520,   426,   484,   426,  -211,   553,  -211,  1315,
     103,    41,    92,    20,   426,   252,   571,   239,    34,  -211,
     529,   577,  1639,   907,  -211,  -211,   427,  -211,  -211,   585,
     588,  1049,   170,  -211,   590,   366,   545,   425,   552,  -211,
    1668,   786,  -211,   481,  -211,   583,  -211,  1668,   907,   583,
    -211,  -211,   567,  1460,   359,   539,   539,   539,   539,   539,
     539,   430,   534,  -211,    -2,   426,  1344,   644,   601,  -211,
       9,   426,  -211,    65,   114,   907,   907,  -211,   907,  1083,
     627,   907,   907,    23,   998,  -211,  -211,  1099,   907,  1117,
     907,   629,    11,  1133,  -211,  -211,  -211,  -211,   149,   126,
     135,    33,  -211,  1151,  -211,  -211,   907,  -211,  1668,   998,
     907,   631,   998,   650,   446,  -211,   109,  -211,   426,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  1668,
    -211,  -211,   840,   907,   907,  1167,   661,   170,   663,   665,
    -211,  -211,  -211,   426,  -211,  1489,   260,  -211,   426,   426,
    -211,  -211,   714,   109,  -211,  1373,   287,   426,  -211,  -211,
    1402,   163,  -211,  -211,  -211,   907,  -211,   186,  -211,   785,
     998,   660,   674,  -211,   574,  1518,   426,  1431,   715,  -211,
      46,   426,  -211,   599,   601,  -211,  1185,   907,    26,  -211,
    -211,    68,  -211,  -211,  -211,   671,  -211,  -211,   689,   690,
     696,   697,   698,   109,   426,   643,  -211,   615,    46,   622,
     655,   637,   700,   712,  -211,   713,   647,   647,   655,  -211
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -211,  -211,  -211,   711,  1257,  -211,  -113,     2,   694,  -211,
     701,   676,   277,   352,  -211,   -59,    53,   -48,  -211,  -110,
    -211,   329,  -211,  -211,  -211,  -211,  -211,  -211,  -210,   473,
     162,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,   414,  -211,   289,  -153,  -211,  -211,  -211,
     -53,  -211,  -211,  -211,   431,  -211,  -211,  -211,  -211,  -129,
    -211,  -211,   -63,  -211,  -211,  -211
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -238
static const short int yytable[] =
{
      96,    77,   298,   251,    15,   101,    73,  -238,   228,   233,
     235,    62,   389,   241,   243,   244,    89,  -238,   313,   363,
      63,   306,  -238,   163,    75,   307,   176,   255,   253,    76,
     256,    89,   257,   209,   258,   177,   110,   309,   310,    59,
     261,   332,   333,   310,    89,   261,   262,   395,   210,   253,
     311,   221,   222,   223,  -238,   314,   229,   230,   312,   299,
     327,    20,   239,   187,   227,   163,    74,   215,   227,   252,
     370,    64,   215,   163,   282,    90,   253,    91,    92,   163,
     325,    93,    94,   180,   163,   302,   178,   163,    23,   163,
      90,   163,    91,    92,   396,   234,    93,    94,   295,   187,
     261,   301,   304,    90,   371,    91,    92,  -115,   347,    93,
      94,   323,   310,   224,   270,   266,   268,   225,   310,   273,
     277,    31,   253,   114,   283,   284,    15,   285,    58,   436,
     187,   326,   329,   349,   253,   286,   287,   288,   289,   290,
     291,   215,   324,   186,    89,    83,    32,   215,   296,   348,
     126,   218,   127,   372,   129,   298,   299,   182,   414,   227,
      89,   210,   281,   183,   384,   393,   299,    36,   187,    18,
     299,   416,   310,    19,   394,    89,    90,   132,    91,    92,
     299,    84,    93,    94,   210,    37,   330,    99,   392,   100,
     338,    85,   373,   422,   416,   310,   236,    85,   378,   379,
     237,   215,   420,    90,   381,    91,    92,   387,   227,    93,
      94,   128,   409,   265,   187,   359,    38,   267,   298,    90,
     414,    91,    92,    85,   215,    93,    94,    85,    53,   398,
     319,   310,   401,    57,    90,   276,    91,    92,   412,   280,
      93,    94,   275,   221,    89,   375,   209,    56,   279,   404,
     406,   382,    85,    61,   411,   385,   227,   328,    85,   390,
     215,   163,    81,   409,   227,   380,   227,    85,   416,   310,
     227,    88,   419,   284,   224,   185,   186,   399,   231,   226,
     227,   417,   421,   232,   114,   105,   163,   247,   242,   163,
     423,   248,   109,   249,   250,   416,   310,   114,   215,   405,
      15,   407,   179,    90,   434,    91,    92,   181,   182,    93,
      94,   126,   227,   127,   183,   129,    90,    50,    91,    92,
      67,    71,    93,    94,   126,   215,   127,   128,   129,   163,
     110,    78,    50,    50,    31,    79,   174,    90,   132,    91,
      92,    50,   103,    93,    94,    39,   107,   163,    28,   184,
      90,   132,    91,    92,    50,   435,    93,    94,    50,   187,
     188,   205,   182,   227,  -230,  -230,  -230,  -230,   183,  -230,
    -230,  -230,   204,   351,   182,  -230,  -230,  -230,  -230,  -230,
     183,  -230,  -230,   189,   207,  -230,  -230,  -230,   190,  -230,
    -230,  -230,  -230,  -230,   208,    68,    72,  -230,  -230,  -230,
    -230,  -230,   191,   192,   193,   194,   195,   196,   197,   198,
     206,   186,  -230,   199,   200,   201,   202,   104,   245,  -230,
    -230,   108,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,   188,   353,   182,   253,  -228,  -228,  -228,  -228,   183,
    -228,  -228,  -228,   339,   246,   340,  -228,  -228,  -228,  -228,
    -228,   259,  -228,  -228,   189,   260,  -228,  -228,  -228,   190,
    -228,  -228,  -228,  -228,  -228,   274,    32,   263,  -228,  -228,
    -228,  -228,  -228,   191,   192,   193,   194,   195,   196,   197,
     198,  -189,   357,  -228,   199,   200,   201,   202,   358,   186,
    -228,  -228,   264,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,   211,   271,  -193,   272,  -237,  -237,  -190,   212,
     213,   269,  -237,    85,    51,   214,    60,    52,  -237,    52,
    -237,  -237,   278,  -237,   292,  -237,   300,  -237,   261,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,   334,   261,   305,   215,
     320,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,   352,   186,  -237,  -237,  -237,   216,  -237,   354,
     186,   321,   217,   189,  -237,  -237,   187,  -237,  -237,  -237,
    -237,  -237,  -237,   188,   360,   253,   331,   -22,   -22,   -22,
     -22,   426,   253,   -22,   335,   194,   195,   196,   197,   -22,
     343,   -22,   -22,   345,   -22,   350,   189,   183,   -22,  -238,
     -22,   190,   -22,   -22,   -22,   -22,   -22,  -238,   432,  -238,
     -22,   -22,   -22,   -22,   -22,   191,   192,   193,   194,   195,
     196,   197,   198,  -238,   442,   -22,   199,   200,   201,   202,
    -238,   443,   377,   -22,   237,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   188,  -238,   445,   400,  -230,  -230,
     293,  -230,  -238,   366,  -230,  -238,   369,    26,   367,   402,
    -230,    27,  -230,  -230,    28,  -230,   410,   189,   413,  -230,
     415,  -230,   190,  -230,  -230,  -230,  -230,  -230,   340,   425,
     369,  -230,   215,  -230,  -230,  -230,   191,   192,   193,   194,
     195,   196,   197,   198,   437,   438,  -230,   199,   200,   201,
     202,   439,   440,   441,  -230,   446,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,   418,  -238,   447,   448,   112,
      76,    25,   -22,  -238,   429,   114,    54,    40,    80,  -125,
     424,   115,   344,   116,   117,   388,   118,   374,   189,     0,
     119,     0,   120,   190,   121,   122,   123,   124,   125,     0,
       0,     0,   126,   215,   127,   128,   129,   191,   192,   193,
     194,   195,   196,   197,   198,     0,     0,   130,   199,   200,
     201,   202,     0,     0,     0,   -22,     0,   131,    90,   132,
      91,    92,   133,   134,    93,    94,   188,   355,     0,     0,
    -103,  -103,     0,   356,   182,     0,  -103,     0,     0,     0,
     183,     0,  -103,     0,  -103,  -103,     0,  -103,     0,   189,
       0,  -103,     0,  -103,   190,  -103,  -103,  -103,  -103,  -103,
       0,     0,     0,  -103,     0,  -103,  -103,  -103,   191,   192,
     193,   194,   195,   196,   197,   198,     0,     0,  -103,   199,
     200,   201,   202,     0,     0,    89,     0,   403,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,   111,     0,     0,
       0,   112,    76,     0,     0,    41,   113,   114,     2,    42,
       0,     0,     0,   115,     0,   116,   117,     0,   118,     0,
       0,     0,   119,     0,   120,     0,   121,   122,   123,   124,
     125,     0,     0,     0,   126,     0,   127,   128,   129,     4,
       5,     6,     0,     0,    90,     0,    91,    92,     0,   130,
      93,    94,    89,     0,     0,    43,    44,     0,     0,   131,
      90,   132,    91,    92,   133,   134,    93,    94,   111,     0,
       0,     0,   112,    76,     0,     0,     0,   254,   114,     0,
       0,     0,     0,     0,   115,     0,   116,   117,    41,   118,
       0,     2,    42,   119,     0,   120,     0,   121,   122,   123,
     124,   125,     0,     0,     0,   126,     0,   127,   128,   129,
       0,    90,    41,    91,    92,     2,    42,    93,    94,     0,
     130,     0,     4,     5,     6,     0,     0,     0,     0,     0,
     131,    90,   132,    91,    92,   133,   134,    93,    94,   111,
       0,     0,     0,   112,    76,     0,     4,     5,     6,   114,
       0,     0,     0,     0,     0,   115,     0,   116,   117,     0,
     118,     0,     0,    65,   119,     0,   120,     0,   121,   122,
     123,   124,   125,   224,     0,     0,   126,   240,   127,   128,
     129,     0,   224,   114,     2,     3,   297,     0,     0,     0,
     224,   130,   114,     0,   346,     0,     0,     0,     0,     0,
     114,   131,    90,   132,    91,    92,   133,   134,    93,    94,
     126,     0,   127,     0,   129,     4,     5,     6,     0,   126,
       0,   127,     0,   129,   224,     0,     0,   126,   376,   127,
       0,   129,     0,     0,   114,     0,    90,   132,    91,    92,
     224,     0,    93,    94,   383,    90,   132,    91,    92,     0,
     114,    93,    94,    90,   132,    91,    92,     0,   224,    93,
      94,   126,   386,   127,     0,   129,     0,     0,   114,     0,
       0,     0,     0,     0,   224,     0,     0,   126,   391,   127,
       0,   129,     0,     0,   114,     0,     0,    90,   132,    91,
      92,     0,   224,    93,    94,   126,   397,   127,     0,   129,
       0,     0,   114,    90,   132,    91,    92,     0,   224,    93,
      94,   126,   408,   127,     0,   129,     0,     0,   114,     0,
     294,    90,   132,    91,    92,     0,   224,    93,    94,   126,
     433,   127,     0,   129,     0,     0,   114,    90,   132,    91,
      92,   303,     0,    93,    94,   126,     0,   127,     0,   129,
       0,     0,     0,     0,     0,    90,   132,    91,    92,     0,
       0,    93,    94,   126,     0,   127,     0,   129,     0,     0,
       0,    90,   132,    91,    92,     0,     0,    93,    94,    90,
       0,    91,    92,     0,     0,    93,    94,     0,     0,    90,
     132,    91,    92,     0,     0,    93,    94,     0,     0,     0,
      90,     0,    91,    92,    21,    22,    93,    94,    41,     0,
       0,     2,    42,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,   188,     0,     0,
      55,     0,     0,     0,   318,     0,     0,     0,     0,     0,
      66,    70,     4,     5,     6,     0,     0,     0,     0,    45,
     189,     0,     0,    82,     0,   190,   188,     0,    69,     0,
       0,     0,   102,   322,     0,     0,   106,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,     0,     0,   189,
     199,   200,   201,   202,   190,  -238,     0,  -148,     0,     0,
       0,     0,   364,     0,     0,     0,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,     0,     0,   189,   199,
     200,   201,   202,   190,   188,     0,  -171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,     0,     0,   189,   199,   200,
     201,   202,   190,   188,     0,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,     0,     0,   189,   199,   200,   201,
     202,   190,   188,     0,  -149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,     0,     0,   189,   199,   200,   201,   202,
     190,   188,     0,  -172,     0,     0,     0,   361,   -22,     0,
       0,     0,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,   189,   199,   200,   201,   202,   190,
     188,     0,  -174,     0,     0,     0,     0,  -209,     0,     0,
       0,  -209,     0,   191,   192,   193,   194,   195,   196,   197,
     198,     0,     0,   189,   199,   200,   201,   202,   190,   188,
       0,     0,     0,     0,     0,   427,   -22,     0,     0,     0,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
       0,     0,   189,   199,   200,   201,   202,   190,   188,     0,
       0,     0,     0,     0,   293,     0,     0,     0,     0,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,     0,
       0,   189,   199,   200,   201,   202,   190,   188,     0,     0,
       0,     0,   308,     0,     0,     0,     0,     0,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,     0,     0,
     189,   199,   200,   201,   202,   190,     0,     0,     0,     0,
       0,  -238,     0,     0,     0,     0,     0,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,     0,     0,     0,
     199,   200,   201,   202,   189,     0,     0,   317,     0,   190,
     336,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,     0,     0,   189,   199,   200,   201,   202,   190,  -238,
       0,     0,     1,     2,     3,     0,     0,     0,    24,     0,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
       0,     0,   189,   199,   200,   201,   202,   190,     1,     2,
       3,     0,     0,     0,     4,     5,     6,     0,     0,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,     0,
       7,     8,   199,   200,   201,   202,     0,     0,     0,     0,
       4,     5,     6,     2,     3,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34
};

static const short int yycheck[] =
{
      63,    49,   212,   132,     5,    64,     1,     1,   118,   122,
     123,     5,     1,   126,   127,   128,     5,     8,    23,    21,
      14,     8,     1,    76,     1,    12,     5,   137,     8,     6,
     140,     5,   142,     7,   144,    14,    10,     8,     9,    37,
       8,     7,     8,     9,     5,     8,    14,    14,   111,     8,
      21,   114,   115,   116,     8,    60,   119,   120,    21,   212,
      40,     1,   125,    65,   117,   118,    61,    38,   121,   132,
      61,    65,    38,   126,   187,    64,     8,    66,    67,   132,
      39,    70,    71,    81,   137,   214,    65,   140,     0,   142,
      64,   144,    66,    67,    61,    56,    70,    71,   211,    65,
       8,   214,   215,    64,    39,    66,    67,    61,   261,    70,
      71,     8,     9,     1,   177,   174,   175,     5,     9,   178,
     183,     4,     8,    11,   187,   188,     5,   190,     7,    61,
      65,    39,   245,   262,     8,   198,   199,   200,   201,   202,
     203,    38,    39,     8,     5,     7,     8,    38,   211,   262,
      38,    12,    40,    39,    42,   365,   309,     8,   368,   212,
       5,   224,     7,    14,   317,    39,   319,     9,    65,     1,
     323,     8,     9,     5,    39,     5,    64,    65,    66,    67,
     333,     5,    70,    71,   247,    65,   245,     5,    39,     7,
     253,    15,   305,     7,     8,     9,     1,    15,   311,   312,
       5,    38,    39,    64,   314,    66,    67,   320,   261,    70,
      71,    41,   365,     5,    65,   278,     5,     5,   428,    64,
     430,    66,    67,    15,    38,    70,    71,    15,     5,   339,
       8,     9,   342,     5,    64,   182,    66,    67,   367,   186,
      70,    71,     5,   306,     5,   308,     7,    51,     5,   362,
     363,   314,    15,    65,   367,   318,   309,     5,    15,   322,
      38,   314,    65,   416,   317,   313,   319,    15,     8,     9,
     323,     1,   382,   336,     1,     7,     8,   340,     5,   117,
     333,    21,   395,   121,    11,    61,   339,     1,   126,   342,
     400,     5,    61,     7,   132,     8,     9,    11,    38,   362,
       5,   364,     7,    64,   417,    66,    67,     7,     8,    70,
      71,    38,   365,    40,    14,    42,    64,    28,    66,    67,
      43,    44,    70,    71,    38,    38,    40,    41,    42,   382,
      10,     1,    43,    44,     4,     5,    65,    64,    65,    66,
      67,    52,    65,    70,    71,    10,    69,   400,    13,     5,
      64,    65,    66,    67,    65,   418,    70,    71,    69,    65,
       1,     7,     8,   416,     5,     6,     7,     8,    14,    10,
      11,    12,     9,     7,     8,    16,    17,    18,    19,    20,
      14,    22,    23,    24,    61,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    61,    43,    44,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       7,     8,    53,    54,    55,    56,    57,    65,    38,    60,
      61,    69,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     1,     7,     8,     8,     5,     6,     7,     8,    14,
      10,    11,    12,    16,     9,    18,    16,    17,    18,    19,
      20,     8,    22,    23,    24,     9,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     7,     8,    61,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     9,     1,    53,    54,    55,    56,    57,     7,     8,
      60,    61,     9,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     1,     5,     9,     7,     5,     6,     9,     8,
       9,     1,    11,    15,    10,    14,    10,    13,    17,    13,
      19,    20,    14,    22,     5,    24,     5,    26,     8,    28,
      29,    30,    31,    32,    33,    34,     7,     8,    56,    38,
      56,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     7,     8,    53,    54,    55,    56,    57,     7,
       8,     8,    61,    24,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     1,     7,     8,     5,     5,     6,     7,
       8,     7,     8,    11,     7,    46,    47,    48,    49,    17,
       5,    19,    20,     5,    22,     5,    24,    14,    26,    65,
      28,    29,    30,    31,    32,    33,    34,     8,     9,     8,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     8,     9,    53,    54,    55,    56,    57,
       8,     9,     5,    61,     5,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     1,     8,     9,    16,     5,     6,
       7,     8,     8,     9,    11,     8,     9,     6,    14,     9,
      17,    10,    19,    20,    13,    22,     5,    24,     5,    26,
       5,    28,    29,    30,    31,    32,    33,    34,    18,     5,
       9,    38,    38,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     5,     5,    53,    54,    55,    56,
      57,     5,     5,     5,    61,     5,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     1,    61,     5,     5,     5,
       6,    10,     8,     8,     9,    11,    32,    26,    52,    14,
     401,    17,   259,    19,    20,   321,    22,   306,    24,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    38,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     1,     1,    -1,    -1,
       5,     6,    -1,     7,     8,    -1,    11,    -1,    -1,    -1,
      14,    -1,    17,    -1,    19,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    57,    -1,    -1,     5,    -1,     7,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     1,    -1,    -1,
      -1,     5,     6,    -1,    -1,     1,    10,    11,     4,     5,
      -1,    -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    35,
      36,    37,    -1,    -1,    64,    -1,    66,    67,    -1,    53,
      70,    71,     5,    -1,    -1,    51,    52,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    19,    20,     1,    22,
      -1,     4,     5,    26,    -1,    28,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,    42,
      -1,    64,     1,    66,    67,     4,     5,    70,    71,    -1,
      53,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     1,
      -1,    -1,    -1,     5,     6,    -1,    35,    36,    37,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    -1,
      22,    -1,    -1,    52,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,     1,    -1,    -1,    38,     5,    40,    41,
      42,    -1,     1,    11,     4,     5,     5,    -1,    -1,    -1,
       1,    53,    11,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      11,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      38,    -1,    40,    -1,    42,    35,    36,    37,    -1,    38,
      -1,    40,    -1,    42,     1,    -1,    -1,    38,     5,    40,
      -1,    42,    -1,    -1,    11,    -1,    64,    65,    66,    67,
       1,    -1,    70,    71,     5,    64,    65,    66,    67,    -1,
      11,    70,    71,    64,    65,    66,    67,    -1,     1,    70,
      71,    38,     5,    40,    -1,    42,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    38,     5,    40,
      -1,    42,    -1,    -1,    11,    -1,    -1,    64,    65,    66,
      67,    -1,     1,    70,    71,    38,     5,    40,    -1,    42,
      -1,    -1,    11,    64,    65,    66,    67,    -1,     1,    70,
      71,    38,     5,    40,    -1,    42,    -1,    -1,    11,    -1,
       5,    64,    65,    66,    67,    -1,     1,    70,    71,    38,
       5,    40,    -1,    42,    -1,    -1,    11,    64,    65,    66,
      67,     5,    -1,    70,    71,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    70,    71,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    70,    71,    64,
      -1,    66,    67,    -1,    -1,    70,    71,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,
      64,    -1,    66,    67,     7,     8,    70,    71,     1,    -1,
      -1,     4,     5,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,     1,    -1,    -1,
      33,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      43,    44,    35,    36,    37,    -1,    -1,    -1,    -1,    52,
      24,    -1,    -1,    56,    -1,    29,     1,    -1,    51,    -1,
      -1,    -1,    65,     8,    -1,    -1,    69,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    24,
      54,    55,    56,    57,    29,     1,    -1,    61,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    24,    54,
      55,    56,    57,    29,     1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    24,    54,    55,
      56,    57,    29,     1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    24,    54,    55,    56,
      57,    29,     1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    24,    54,    55,    56,    57,
      29,     1,    -1,    61,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    24,    54,    55,    56,    57,    29,
       1,    -1,    61,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    24,    54,    55,    56,    57,    29,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    24,    54,    55,    56,    57,    29,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    24,    54,    55,    56,    57,    29,     1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      24,    54,    55,    56,    57,    29,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    24,    -1,    -1,    27,    -1,    29,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    24,    54,    55,    56,    57,    29,     1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    24,    54,    55,    56,    57,    29,     3,     4,
       5,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      51,    52,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      35,    36,    37,     4,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    35,    36,    37,    51,    52,    83,
      84,    85,    86,    87,   127,     5,    89,    90,     1,     5,
       1,    86,    86,     0,     9,    85,     6,    10,    13,    91,
      92,     4,     8,    51,    52,    86,     9,    65,     5,    10,
      92,     1,     5,    51,    52,    86,    93,    94,    95,    96,
     127,    10,    13,     5,    90,    86,    51,     5,     7,    89,
      10,    65,     5,    14,    65,    52,    86,    94,    95,    51,
      86,    94,    95,     1,    61,     1,     6,    99,     1,     5,
      93,    65,    86,     7,     5,    15,    97,    98,     1,     5,
      64,    66,    67,    70,    71,   132,   144,   145,   146,     5,
       7,    97,    86,    94,    95,    61,    86,    94,    95,    61,
      10,     1,     5,    10,    11,    17,    19,    20,    22,    26,
      28,    30,    31,    32,    33,    34,    38,    40,    41,    42,
      53,    63,    65,    68,    69,    88,    99,   100,   101,   102,
     104,   106,   107,   108,   109,   110,   111,   112,   113,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   126,   128,
     129,   130,   131,   132,   133,   134,   137,   138,   139,   140,
     141,   142,   143,   144,    65,     1,     5,    14,    65,     7,
      89,     7,     8,    14,     5,     7,     8,    65,     1,    24,
      29,    43,    44,    45,    46,    47,    48,    49,    50,    54,
      55,    56,    57,   147,     9,     7,     7,    61,    61,     7,
     144,     1,     8,     9,    14,    38,    56,    61,    12,   135,
     136,   144,   144,   144,     1,     5,   112,   132,   101,   144,
     144,     5,   112,    88,    56,    88,     1,     5,   125,   144,
       5,    88,   112,    88,    88,    38,     9,     1,     5,     7,
     112,   141,   144,     8,    10,   101,   101,   101,   101,     8,
       9,     8,    14,    61,     9,     5,    97,     5,    97,     1,
     144,     5,     7,    97,     7,     5,    98,   144,    14,     5,
      98,     7,    88,   144,   144,   144,   144,   144,   144,   144,
     144,   144,     5,     7,     5,    88,   144,     5,   110,   128,
       5,    88,   141,     5,    88,    56,     8,    12,     6,     8,
       9,    21,    21,    23,    60,   114,   115,    27,     8,     8,
      56,     8,     8,     8,    39,    39,    39,    40,     5,    88,
      97,     5,     7,     8,     7,     7,     1,     7,   144,    16,
      18,   103,   105,     5,   111,     5,     5,   128,    88,   141,
       5,     7,     7,     7,     7,     1,     7,     1,     7,   144,
       7,     7,    65,    21,     8,     8,     9,    14,     8,     9,
      61,    39,    39,    88,   136,   144,     5,     5,    88,    88,
      99,   101,   144,     5,   128,   144,     5,    88,   125,     1,
     144,     5,    39,    39,    39,    14,    61,     5,   101,   144,
      16,   101,     9,     7,    88,   144,    88,   144,     5,   128,
       5,    88,   141,     5,   110,     5,     8,    21,     1,   101,
      39,    88,     7,   101,   103,     5,     7,     7,     8,     9,
       8,     9,     9,     5,    88,   144,    61,     5,     5,     5,
       5,     5,     9,     9,    61,     9,     5,     5,     5,    61
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
#line 91 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() <<"prgram : program unit\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 98 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();		
					;}
    break;

  case 4:
#line 101 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 109 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list class_decl\n";;}
    break;

  case 6:
#line 110 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 7:
#line 111 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list FINAL class_decl\n";
													t->setIs_final(true);
												t=NULL;
												;}
    break;

  case 8:
#line 115 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: FINAL STATIC class_decl\n";
												t->setIs_final(true);
												t=NULL;
												;}
    break;

  case 9:
#line 119 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"Error: UnExpected static Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
																err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," UnExpected static word","");
												;}
    break;

  case 10:
#line 124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"unit: IMPORT unit_list STATIC FINAL class_decl\n";;}
    break;

  case 11:
#line 127 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"class_decl: class_h class_body\n";
								;}
    break;

  case 12:
#line 132 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 13:
#line 137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 15:
#line 148 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 16:
#line 154 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 17:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 18:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 19:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 20:
#line 175 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 21:
#line 182 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 22:
#line 183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 23:
#line 186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 24:
#line 193 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 25:
#line 202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 26:
#line 206 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";
				
				;}
    break;

  case 27:
#line 214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 28:
#line 218 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 29:
#line 221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 31:
#line 236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 32:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 33:
#line 240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 34:
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration\n";;}
    break;

  case 35:
#line 242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 36:
#line 243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL class_decl\n";;}
    break;

  case 37:
#line 244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC class_decl\n";;}
    break;

  case 38:
#line 245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC class_decl\n";;}
    break;

  case 39:
#line 246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL class_decl\n";;}
    break;

  case 40:
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"dm: STATIC var_declaration SEMICOLON\n";
										v=p->set_storage_modifier(v,1,0);
										;}
    break;

  case 41:
#line 251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC	var_declaration\n";;}
    break;

  case 42:
#line 252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"dm: FINAL var_declaration SEMICOLON\n";
										v=p->set_storage_modifier(v,0,1);
										;}
    break;

  case 43:
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration\n";;}
    break;

  case 44:
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"dm: STATIC FINAL var_declaration SEMICOLON\n";
												v=p->set_storage_modifier(v,1,1);
												;}
    break;

  case 45:
#line 261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:STATIC FINAL var_declaration\n";;}
    break;

  case 46:
#line 262 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"dm: FINAL STATIC var_declaration SEMICOLON\n";
												v=p->set_storage_modifier(v,1,1);
												;}
    break;

  case 47:
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration\n";;}
    break;

  case 48:
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 49:
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 50:
#line 279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 51:
#line 283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 52:
#line 288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 53:
#line 292 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 54:
#line 296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 55:
#line 302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 56:
#line 306 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 57:
#line 307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 58:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 59:
#line 309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 60:
#line 310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S  CLOSE_S \n";;}
    break;

  case 61:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S COLON \n";;}
    break;

  case 62:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 63:
#line 316 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 64:
#line 320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 65:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 66:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 67:
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 68:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 69:
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 70:
#line 348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 71:
#line 349 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n";;}
    break;

  case 72:
#line 350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n";;}
    break;

  case 73:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n";;}
    break;

  case 74:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 75:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID \n";;}
    break;

  case 76:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	ID ASSIGN expr \n";;}
    break;

  case 77:
#line 357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";;}
    break;

  case 78:
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 79:
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"block_stmt:	stmt_list END \n";;}
    break;

  case 80:
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 81:
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 82:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 83:
#line 373 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 84:
#line 374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 85:
#line 375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 86:
#line 376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 87:
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 88:
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 89:
#line 379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 90:
#line 380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 91:
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 92:
#line 382 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 93:
#line 383 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 94:
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration:self.id\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-1].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum,true);
															v=(yyval.var);
															acc_mod="";
									;}
    break;

  case 95:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration:self.id=EXPR\n";
															(yyval.var)=p->addVariableToCurrentScope((yyvsp[-3].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum,true);
															v=(yyval.var);
															acc_mod="";
														;}
    break;

  case 96:
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 97:
#line 397 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 98:
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 99:
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 100:
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 101:
#line 403 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 102:
#line 406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 103:
#line 409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 104:
#line 412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 105:
#line 417 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 106:
#line 418 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 107:
#line 424 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 108:
#line 427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 109:
#line 428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 110:
#line 429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 111:
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 112:
#line 437 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 113:
#line 438 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 114:
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 115:
#line 440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 116:
#line 441 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 117:
#line 442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 118:
#line 443 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 119:
#line 444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 120:
#line 448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 121:
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 122:
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 123:
#line 454 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 124:
#line 455 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 125:
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 126:
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 127:
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 128:
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 129:
#line 462 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 130:
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 131:
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 132:
#line 469 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 133:
#line 472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 134:
#line 473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 135:
#line 476 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 136:
#line 477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 137:
#line 478 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 138:
#line 480 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 139:
#line 481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 140:
#line 482 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 141:
#line 483 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 142:
#line 484 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 143:
#line 485 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 144:
#line 486 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 145:
#line 487 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 146:
#line 488 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 147:
#line 489 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 148:
#line 492 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 149:
#line 493 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 150:
#line 496 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 151:
#line 497 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 152:
#line 498 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN expr_list\n";;}
    break;

  case 153:
#line 499 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN yield_expression\n";;}
    break;

  case 154:
#line 500 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN yield_expression\n";;}
    break;

  case 155:
#line 501 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN yield_expression\n";;}
    break;

  case 156:
#line 504 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 157:
#line 505 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 158:
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 159:
#line 509 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 160:
#line 510 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 161:
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 162:
#line 516 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 163:
#line 517 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 164:
#line 518 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 165:
#line 522 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 166:
#line 527 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 167:
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 168:
#line 534 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 169:
#line 535 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 170:
#line 538 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 171:
#line 539 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 172:
#line 540 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 173:
#line 541 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 174:
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 175:
#line 551 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";;}
    break;

  case 176:
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";;}
    break;

  case 177:
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 178:
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 179:
#line 557 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 180:
#line 558 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 181:
#line 559 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 182:
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 183:
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 184:
#line 562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 185:
#line 563 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 186:
#line 566 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 187:
#line 567 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 188:
#line 570 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 189:
#line 571 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 190:
#line 572 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 191:
#line 573 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 192:
#line 576 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 193:
#line 577 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 194:
#line 580 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 195:
#line 581 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 196:
#line 582 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 197:
#line 583 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 198:
#line 584 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 199:
#line 587 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 200:
#line 588 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 201:
#line 589 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 202:
#line 590 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 203:
#line 591 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 204:
#line 594 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 205:
#line 595 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 206:
#line 597 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 207:
#line 598 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 208:
#line 599 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 209:
#line 601 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 210:
#line 604 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr CLOSE_S\n";;}
    break;

  case 211:
#line 605 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 212:
#line 606 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 213:
#line 610 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 214:
#line 614 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 215:
#line 618 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 216:
#line 625 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 217:
#line 628 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 218:
#line 631 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 219:
#line 634 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 220:
#line 635 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 221:
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 222:
#line 639 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 223:
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 224:
#line 643 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 225:
#line 644 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 226:
#line 647 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 227:
#line 648 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 228:
#line 649 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 229:
#line 650 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 230:
#line 651 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 231:
#line 657 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 232:
#line 658 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 233:
#line 659 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 234:
#line 660 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 235:
#line 661 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 236:
#line 662 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 237:
#line 665 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	\n";;}
    break;

  case 238:
#line 666 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 239:
#line 667 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 240:
#line 668 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 241:
#line 669 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID\n";;}
    break;

  case 242:
#line 670 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 243:
#line 671 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 244:
#line 672 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 245:
#line 675 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 246:
#line 676 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 247:
#line 677 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 248:
#line 678 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 249:
#line 679 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 250:
#line 680 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 251:
#line 681 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 252:
#line 682 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3485 "yacc.cpp"

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


#line 684 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

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

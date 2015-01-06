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
     DEF = 266,
     ASSIGN = 267,
     STAR = 268,
     ELSE = 269,
     IF = 270,
     ELIF = 271,
     WHILE = 272,
     FOR = 273,
     IN = 274,
     TRY = 275,
     FINALLY = 276,
     MULTI = 277,
     EXPECT = 278,
     WITH = 279,
     AS = 280,
     ASSERT = 281,
     EQUAL = 282,
     DEL = 283,
     RETURN = 284,
     PRINT = 285,
     GLOBAL = 286,
     RAISE = 287,
     PRIVATE = 288,
     PUBLIC = 289,
     PROTECTED = 290,
     OPEN_D = 291,
     CLOSE_D = 292,
     RE_COT = 293,
     YIELD = 294,
     PRIMARY = 295,
     OR = 296,
     AND = 297,
     NOT = 298,
     PLUS = 299,
     MINUS = 300,
     DIV = 301,
     MOD = 302,
     NOT_EQUAL = 303,
     FINAL = 304,
     STATIC = 305,
     LESS_THAN = 306,
     LESS_OR_EQUAL = 307,
     MORE_THAN = 308,
     MORE_OR_EQUAL = 309,
     TRUE = 310,
     FALSE = 311,
     EXCEPT = 312,
     SEMICOLON = 313,
     NEW_LINE = 314,
     PASS = 315,
     CHAR_VALUE = 316,
     OPEN_S = 317,
     STRING_VALUE = 318,
     INTEGER_VALUE = 319,
     BREAK = 320,
     CONTINUE = 321,
     LONG_VALUE = 322,
     FLOAT_VALUE = 323,
     stmt_1_2 = 324,
     stmt_9 = 325,
     stmt_8 = 326,
     stmt_7 = 327,
     stmt_6 = 328,
     stmt_5 = 329,
     stmt_4 = 330,
     stmt_3 = 331,
     stmt_2 = 332,
     stmt_1 = 333
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
#define DEF 266
#define ASSIGN 267
#define STAR 268
#define ELSE 269
#define IF 270
#define ELIF 271
#define WHILE 272
#define FOR 273
#define IN 274
#define TRY 275
#define FINALLY 276
#define MULTI 277
#define EXPECT 278
#define WITH 279
#define AS 280
#define ASSERT 281
#define EQUAL 282
#define DEL 283
#define RETURN 284
#define PRINT 285
#define GLOBAL 286
#define RAISE 287
#define PRIVATE 288
#define PUBLIC 289
#define PROTECTED 290
#define OPEN_D 291
#define CLOSE_D 292
#define RE_COT 293
#define YIELD 294
#define PRIMARY 295
#define OR 296
#define AND 297
#define NOT 298
#define PLUS 299
#define MINUS 300
#define DIV 301
#define MOD 302
#define NOT_EQUAL 303
#define FINAL 304
#define STATIC 305
#define LESS_THAN 306
#define LESS_OR_EQUAL 307
#define MORE_THAN 308
#define MORE_OR_EQUAL 309
#define TRUE 310
#define FALSE 311
#define EXCEPT 312
#define SEMICOLON 313
#define NEW_LINE 314
#define PASS 315
#define CHAR_VALUE 316
#define OPEN_S 317
#define STRING_VALUE 318
#define INTEGER_VALUE 319
#define BREAK 320
#define CONTINUE 321
#define LONG_VALUE 322
#define FLOAT_VALUE 323
#define stmt_1_2 324
#define stmt_9 325
#define stmt_8 326
#define stmt_7 327
#define stmt_6 328
#define stmt_5 329
#define stmt_4 330
#define stmt_3 331
#define stmt_2 332
#define stmt_1 333




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
#line 305 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 317 "yacc.cpp"

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1583

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  63
/* YYNRULES -- Number of rules. */
#define YYNRULES  242
/* YYNRULES -- Number of states. */
#define YYNSTATES  430

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    17,    22,    25,
      31,    34,    37,    41,    46,    52,    58,    65,    68,    72,
      75,    79,    81,    85,    87,    91,    93,    96,   100,   102,
     105,   109,   112,   115,   117,   119,   122,   125,   129,   133,
     137,   140,   144,   147,   152,   156,   161,   165,   168,   171,
     173,   178,   182,   187,   191,   194,   200,   206,   211,   216,
     221,   225,   231,   237,   242,   247,   253,   259,   265,   271,
     275,   279,   283,   287,   289,   292,   296,   301,   304,   308,
     311,   314,   316,   318,   320,   322,   324,   326,   328,   331,
     334,   339,   348,   359,   362,   367,   371,   377,   381,   384,
     387,   390,   393,   396,   400,   403,   408,   415,   420,   426,
     430,   434,   438,   444,   450,   456,   464,   466,   470,   476,
     480,   486,   490,   496,   500,   502,   506,   510,   513,   516,
     520,   523,   528,   530,   532,   534,   536,   538,   540,   542,
     544,   546,   548,   550,   552,   554,   557,   562,   566,   572,
     576,   580,   586,   590,   593,   598,   601,   603,   606,   608,
     611,   616,   620,   625,   628,   631,   635,   637,   639,   642,
     647,   652,   658,   660,   662,   664,   668,   674,   678,   682,
     688,   692,   694,   696,   700,   704,   706,   708,   710,   712,
     714,   716,   718,   720,   722,   724,   726,   728,   730,   732,
     734,   738,   741,   744,   747,   751,   755,   759,   763,   767,
     769,   772,   777,   782,   787,   792,   797,   799,   801,   805,
     807,   811,   815,   819,   823,   827,   831,   835,   837,   841,
     846,   851,   855,   861,   868,   875,   877,   879,   881,   883,
     885,   887,   889
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      80,     0,    -1,    81,     9,    -1,    81,    82,    -1,    82,
      -1,     3,    86,    83,    -1,    83,    -1,     3,    86,    49,
      83,    -1,    49,    83,    -1,     3,    86,    50,    49,    83,
      -1,    84,    88,    -1,     4,     5,    -1,   124,     4,     5,
      -1,     4,     5,    62,     7,    -1,   124,     4,     5,    62,
       7,    -1,     4,     5,    62,    86,     7,    -1,   124,     4,
       5,    62,    86,     7,    -1,     4,     1,    -1,     5,     1,
       5,    -1,     5,     1,    -1,    85,     8,   138,    -1,   138,
      -1,    86,     8,    87,    -1,    87,    -1,    87,     9,     5,
      -1,     5,    -1,     6,    10,    -1,     6,    89,    10,    -1,
      10,    -1,    89,    10,    -1,    89,    11,    90,    -1,    11,
      90,    -1,    91,    58,    -1,    92,    -1,    83,    -1,    49,
      83,    -1,    50,    83,    -1,    49,    50,    83,    -1,    50,
      49,    83,    -1,    50,    91,    58,    -1,    50,    92,    -1,
      49,    91,    58,    -1,    49,    92,    -1,    50,    49,    91,
      58,    -1,    50,    49,    92,    -1,    49,    50,    91,    58,
      -1,    49,    50,    92,    -1,    91,     1,    -1,   124,     5,
      -1,     5,    -1,   124,     5,    12,   138,    -1,     5,    12,
     138,    -1,   124,     5,     5,     1,    -1,     5,     5,     1,
      -1,    93,    96,    -1,   124,     5,    62,    94,     7,    -1,
     124,     5,    62,     5,     7,    -1,     5,    62,    94,     7,
      -1,     5,    62,     5,     7,    -1,   124,     5,    62,     7,
      -1,     5,    62,     7,    -1,   124,     1,    62,    94,     7,
      -1,   124,     1,    62,     5,     7,    -1,     1,    62,    94,
       7,    -1,     1,    62,     5,     7,    -1,   124,     5,     1,
      94,     7,    -1,   124,     5,     1,     5,     7,    -1,   124,
       5,    62,    94,     1,    -1,   124,     5,    62,     5,     1,
      -1,    94,     8,    95,    -1,     5,     8,    95,    -1,    94,
       8,     5,    -1,     5,     8,     5,    -1,    95,    -1,    13,
       5,    -1,     5,    12,   138,    -1,    13,     5,    12,   138,
      -1,     6,    10,    -1,     6,    97,    10,    -1,     1,    10,
      -1,    97,    98,    -1,    98,    -1,    99,    -1,   103,    -1,
     105,    -1,   110,    -1,   113,    -1,    96,    -1,   114,    58,
      -1,     5,    58,    -1,     5,     9,     5,    58,    -1,     5,
       8,     5,     9,     5,     9,     5,    58,    -1,     5,     9,
       5,     8,     5,     9,     5,     9,     5,    58,    -1,   101,
      98,    -1,   101,    98,    14,    98,    -1,   101,    98,   100,
      -1,   101,    98,   100,    14,    98,    -1,   102,    98,   100,
      -1,   102,    98,    -1,    15,   138,    -1,    16,   138,    -1,
     104,    98,    -1,    17,   138,    -1,     5,     1,   138,    -1,
     106,    98,    -1,    18,   109,    19,    85,    -1,    18,     5,
       8,     5,    19,    85,    -1,    18,     5,    19,    85,    -1,
       5,     1,     5,    19,    85,    -1,   107,     8,   108,    -1,
       5,     8,   107,    -1,     5,     8,     5,    -1,     5,     8,
       5,     9,     5,    -1,     5,     9,     5,     8,   107,    -1,
       5,     9,     5,     8,     5,    -1,     5,     9,     5,     8,
       5,     9,     5,    -1,   108,    -1,   108,     9,     5,    -1,
       5,     9,     5,     9,     5,    -1,   109,     8,   125,    -1,
       5,     8,     5,     8,   125,    -1,   109,     8,     5,    -1,
       5,     8,     5,     8,     5,    -1,     5,     8,   125,    -1,
     125,    -1,    20,    98,   112,    -1,    20,    98,   111,    -1,
      21,    96,    -1,    57,    98,    -1,    57,   138,    98,    -1,
      24,   138,    -1,    24,   138,    25,   125,    -1,    85,    -1,
     115,    -1,   116,    -1,    60,    -1,   117,    -1,   120,    -1,
     118,    -1,   119,    -1,   123,    -1,    65,    -1,    66,    -1,
     107,    -1,   121,    -1,    26,   138,    -1,    26,   138,     8,
     138,    -1,   109,    12,    85,    -1,     5,     8,     5,    12,
      85,    -1,     5,    12,    85,    -1,   109,    12,   135,    -1,
       5,     8,     5,    12,   135,    -1,     5,    12,   135,    -1,
      28,   109,    -1,    28,     5,     8,     5,    -1,    28,     5,
      -1,    29,    -1,    29,    85,    -1,   135,    -1,    30,    85,
      -1,    30,    53,    53,    85,    -1,     5,     1,    85,    -1,
       5,    53,    53,    85,    -1,    31,   122,    -1,    31,     1,
      -1,     5,     8,   122,    -1,     5,    -1,    32,    -1,    32,
     138,    -1,    32,   138,     8,   138,    -1,    32,   138,     8,
       1,    -1,     5,     1,   138,     8,   138,    -1,    33,    -1,
      34,    -1,    35,    -1,    62,   109,     7,    -1,    62,     5,
       8,     5,     7,    -1,    62,     5,     7,    -1,    36,   109,
      37,    -1,    36,     5,     8,     5,    37,    -1,    36,     5,
      37,    -1,   126,    -1,   136,    -1,   127,     9,     5,    -1,
       5,     9,     5,    -1,   128,    -1,   126,    -1,   136,    -1,
     137,    -1,   130,    -1,   129,    -1,    63,    -1,    64,    -1,
      67,    -1,    68,    -1,    61,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,    62,   138,     7,    -1,    62,     7,
      -1,     1,     7,    -1,    62,     1,    -1,     1,   138,     7,
      -1,    62,   138,     1,    -1,    36,    85,    37,    -1,    38,
      85,    38,    -1,    62,   135,     7,    -1,    39,    -1,    39,
      85,    -1,    40,    36,    85,    37,    -1,     5,    36,    85,
      37,    -1,    40,    36,    94,    37,    -1,    40,    36,     5,
      37,    -1,     5,    36,     5,    37,    -1,   139,    -1,   129,
      -1,   138,   141,   138,    -1,   140,    -1,   138,     1,   138,
      -1,   138,    27,   138,    -1,   138,    48,   138,    -1,   138,
      51,   138,    -1,   138,    52,   138,    -1,   138,    53,   138,
      -1,   138,    54,   138,    -1,     5,    -1,     5,    62,     7,
      -1,     5,    62,    85,     7,    -1,     5,    62,   138,     7,
      -1,   140,     9,     5,    -1,   140,     9,     5,    62,     7,
      -1,   140,     9,     5,    62,    85,     7,    -1,   140,     9,
       5,    62,   138,     7,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    41,    -1,    43,    -1,    22,    -1,    42,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    91,    91,    98,   101,   109,   110,   111,   115,   119,
     122,   127,   132,   138,   143,   149,   154,   160,   165,   170,
     177,   178,   181,   188,   197,   201,   209,   213,   216,   222,
     231,   232,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   256,   262,
     266,   271,   275,   279,   285,   288,   289,   290,   291,   292,
     293,   294,   298,   302,   306,   310,   314,   318,   322,   330,
     331,   332,   333,   334,   337,   338,   339,   342,   343,   344,
     351,   352,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   368,   369,   370,   371,   374,   375,   378,
     381,   384,   389,   390,   396,   399,   400,   401,   402,   409,
     410,   411,   412,   413,   414,   415,   416,   420,   421,   425,
     426,   427,   428,   429,   430,   433,   434,   437,   440,   441,
     444,   445,   448,   449,   450,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   464,   465,   468,   469,   470,
     471,   472,   473,   476,   477,   478,   481,   482,   485,   488,
     489,   490,   494,   499,   500,   506,   507,   510,   511,   512,
     513,   517,   523,   524,   525,   528,   529,   530,   531,   532,
     533,   534,   535,   538,   539,   542,   543,   544,   545,   548,
     549,   552,   553,   554,   555,   556,   559,   560,   561,   562,
     565,   566,   567,   571,   575,   579,   586,   589,   592,   595,
     596,   599,   600,   603,   604,   605,   608,   609,   610,   611,
     612,   618,   619,   620,   621,   622,   623,   626,   627,   628,
     629,   630,   631,   632,   633,   636,   637,   638,   639,   640,
     641,   642,   643
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "COLON",
  "CLOSE_S", "COMMA", "DOT", "END", "DEF", "ASSIGN", "STAR", "ELSE", "IF",
  "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI", "EXPECT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "FINAL", "STATIC", "LESS_THAN", "LESS_OR_EQUAL",
  "MORE_THAN", "MORE_OR_EQUAL", "TRUE", "FALSE", "EXCEPT", "SEMICOLON",
  "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE",
  "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE", "FLOAT_VALUE",
  "stmt_1_2", "stmt_9", "stmt_8", "stmt_7", "stmt_6", "stmt_5", "stmt_4",
  "stmt_3", "stmt_2", "stmt_1", "$accept", "programes", "program", "unit",
  "class_decl", "class_h", "expr_list", "unit_list", "unit_import",
  "class_body", "dm_list", "dm", "var_declaration", "method_declaration",
  "method_h", "args_list", "arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "import_list", "import",
  "target_list", "try_stmt", "finally_stmt", "except_stmt", "with_stmt",
  "simple_stmt_list", "assert_stmt", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "target", "attributeref", "primary",
  "atom", "literal", "enclosure", "parenth_form", "list_display",
  "string_conversion", "yield_atom", "yield_expression", "subscription",
  "call", "expr", "condition", "long_id", "op", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    82,    82,    82,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   104,   105,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   123,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   126,   126,   127,   127,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   130,   130,   130,   130,
     131,   131,   131,   131,   131,   131,   132,   133,   134,   135,
     135,   136,   136,   137,   137,   137,   138,   138,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   141
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     1,     4,     2,     5,
       2,     2,     3,     4,     5,     5,     6,     2,     3,     2,
       3,     1,     3,     1,     3,     1,     2,     3,     1,     2,
       3,     2,     2,     1,     1,     2,     2,     3,     3,     3,
       2,     3,     2,     4,     3,     4,     3,     2,     2,     1,
       4,     3,     4,     3,     2,     5,     5,     4,     4,     4,
       3,     5,     5,     4,     4,     5,     5,     5,     5,     3,
       3,     3,     3,     1,     2,     3,     4,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     8,    10,     2,     4,     3,     5,     3,     2,     2,
       2,     2,     2,     3,     2,     4,     6,     4,     5,     3,
       3,     3,     5,     5,     5,     7,     1,     3,     5,     3,
       5,     3,     5,     3,     1,     3,     3,     2,     2,     3,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     3,     5,     3,
       3,     5,     3,     2,     4,     2,     1,     2,     1,     2,
       4,     3,     4,     2,     2,     3,     1,     1,     2,     4,
       4,     5,     1,     1,     1,     3,     5,     3,     3,     5,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,     0,     0,   172,   173,   174,     0,     0,     0,
       4,     6,     0,     0,    25,     0,    23,    17,    11,    19,
       8,     1,     2,     3,     0,    28,     0,    10,     0,     0,
       0,     0,     0,     5,     0,     0,    18,    26,     0,     0,
      49,     0,     0,    34,    31,     0,    33,     0,     0,    29,
       0,    12,    22,     7,     0,    24,    13,     0,    27,     0,
       0,     0,     0,     0,    35,     0,    42,     0,    36,     0,
      40,    47,    32,     0,     0,    54,     0,    48,    30,     0,
       9,    15,     0,     0,     0,    73,    53,   227,   195,   191,
     192,   193,   194,   217,    51,   216,   219,     0,    60,     0,
      37,     0,    46,    41,    38,     0,    44,    39,    79,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,   167,     0,     0,   209,     0,   135,     0,   141,
     142,   132,    87,     0,    81,    82,     0,    83,     0,    84,
       0,   143,   116,     0,    85,    86,     0,   133,   134,   136,
     138,   139,   137,   144,   140,   124,   181,     0,   185,   217,
     189,   196,   197,   198,   199,   158,   182,   188,     0,     0,
       0,     0,     0,     0,    14,     0,    64,     0,     0,    74,
      63,     0,     0,     0,   241,     0,   239,   242,   240,   235,
     236,   237,   238,     0,     0,     0,     0,     0,     0,     0,
      58,    57,    45,    43,   202,     0,     0,     0,     0,     0,
       0,     0,    89,    99,   102,     0,     0,     0,   190,     0,
     130,     0,   155,   153,   157,     0,   159,   164,   166,   163,
       0,   227,     0,     0,     0,   210,     0,   203,   227,   201,
       0,     0,     0,     0,    78,    80,    93,   101,   104,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    52,
      50,     0,    59,     0,    16,    72,    70,    75,     0,    71,
      69,   228,     0,     0,     0,   221,   222,   223,   224,   225,
     226,     0,   231,   204,   227,   161,   103,   111,   110,   123,
     184,   149,   152,   227,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   125,     0,     0,     0,     0,     0,     0,
       0,   180,   206,   178,   207,   227,     0,     0,   177,     0,
     175,   208,   205,   200,    20,     0,     0,    95,     0,     0,
     109,   117,   121,   119,   147,   150,   183,    62,    61,    66,
      65,    68,    56,    67,    55,    76,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,    90,   215,   212,   162,
       0,   184,   107,   105,   127,   128,     0,     0,   131,     0,
     154,   160,   165,   170,     0,     0,   214,   211,   213,     0,
      94,     0,     0,    98,     0,   232,     0,     0,   108,     0,
     111,   120,   184,   148,   151,   114,   113,   118,     0,     0,
       0,   129,   179,   176,    96,    97,     0,   233,   234,     0,
       0,     0,     0,     0,   122,   106,     0,   111,   184,   114,
     118,   115,     0,     0,    91,     0,   112,   115,   118,    92
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,   131,    15,    16,    27,
      28,    44,    45,    46,    47,    84,    85,   132,   133,   134,
     135,   327,   136,   328,   137,   138,   139,   140,   141,   142,
     143,   144,   302,   303,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   229,   154,    13,   155,   156,   157,   158,
      93,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      95,    96,   198
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -204
static const short int yypact[] =
{
    1534,    33,   122,    30,  -204,  -204,  -204,   501,    41,  1168,
    -204,  -204,   527,    43,  -204,  1524,    48,  -204,    87,   134,
    -204,  -204,  -204,  -204,   289,  -204,   270,  -204,   313,   156,
      33,   501,   125,  -204,   186,   230,  -204,  -204,   321,   140,
      21,   872,  1501,  -204,  -204,     6,  -204,   171,   254,  -204,
     270,   160,    48,  -204,   501,  -204,  -204,   383,  -204,    16,
      91,   227,   394,   263,  -204,   170,  -204,   263,  -204,   180,
    -204,  -204,  -204,   269,   796,  -204,   220,    31,  -204,   244,
    -204,  -204,   596,   287,   430,  -204,  -204,   240,  -204,  -204,
    -204,  -204,  -204,  -204,  1500,  -204,   346,   664,  -204,   482,
    -204,   253,  -204,  -204,  -204,   271,  -204,  -204,  -204,   157,
     456,  -204,   227,   227,    34,   932,   227,   227,   847,   227,
     166,   261,   227,   915,   227,   227,   340,  -204,   245,  -204,
    -204,   384,  -204,   864,  -204,  -204,   932,  -204,   932,  -204,
     932,   392,   402,   302,  -204,  -204,   365,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,   435,   450,  -204,   458,
    -204,  -204,  -204,  -204,  -204,  -204,   463,  -204,   524,    76,
     185,   474,   227,   453,  -204,   504,  -204,   200,   227,   465,
    -204,   204,   136,   227,  -204,   227,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   227,   227,   227,   227,   227,   227,   476,
    -204,  -204,  -204,  -204,  -204,  1411,   674,   968,   486,    89,
     778,   426,  -204,  1500,  1500,   209,   835,    26,  -204,   -15,
    1444,  1187,   307,   485,   384,   460,   384,  -204,   507,  -204,
    1215,    69,    22,    32,     8,   384,  1047,   209,   111,  -204,
     519,   521,  1472,   227,  -204,  -204,   264,  -204,  -204,   535,
     538,   979,    89,  -204,   540,   724,   550,   732,   566,  -204,
    1500,   797,  -204,   462,  -204,   537,  -204,  1500,   227,   537,
    -204,  -204,   572,  1355,   320,   740,   740,   740,   740,   740,
     740,   388,   497,  -204,    -8,   384,  1243,   175,   539,  -204,
       2,   384,  -204,    78,    77,   227,  1013,   576,   227,   227,
     171,   932,  -204,  -204,  1021,   227,  1032,   227,   578,    23,
    1066,  -204,  -204,  -204,  -204,     0,   101,   121,  -204,  1085,
    -204,  -204,   227,  -204,  1500,   932,   227,   582,   932,   597,
     402,  -204,    90,  -204,   384,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  1500,  -204,  -204,   606,   227,
     227,  1100,   610,    89,   612,   622,  -204,  -204,  -204,   384,
     904,  -204,   384,   384,  -204,  -204,   660,    90,  -204,  1271,
     361,   384,  -204,  -204,  1299,    71,  -204,  -204,  -204,   187,
    -204,   728,   932,   635,   644,  -204,   587,  1383,   384,  1327,
     593,  -204,     7,   384,  -204,   617,   539,  -204,  1119,   227,
     157,  -204,  -204,  -204,  -204,  -204,   655,  -204,  -204,   676,
     678,   680,   690,   692,    90,   384,   592,   633,     7,   639,
     651,   654,   705,   710,  -204,   711,   685,   685,   651,  -204
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -204,  -204,  -204,   708,  1143,  -204,  -106,     9,   689,  -204,
     706,   697,   312,   380,  -204,   -57,   141,   -44,  -204,  -113,
    -204,   366,  -204,  -204,  -204,  -204,  -204,  -204,  -203,   502,
      52,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   445,  -204,   118,  -141,  -204,  -204,  -204,
     -65,  -204,  -204,  -204,  -204,  -204,  -127,  -204,  -204,   -61,
    -204,  -204,  -204
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -228
static const short int yytable[] =
{
      94,   241,   219,    75,   288,    99,   300,    71,   177,   159,
    -228,   349,   178,   224,   226,  -228,   243,   232,   234,   235,
     245,    82,  -228,   246,   373,   247,    60,   248,    87,    83,
     243,    19,  -228,    61,   251,   215,   171,   376,    14,   216,
     251,    21,   301,   172,    57,   299,   314,    29,   205,   218,
     159,   213,   214,   218,   182,   220,   221,    34,   159,   312,
     356,   230,   182,   159,    72,  -112,   289,   242,   159,   313,
     123,   159,   124,   159,   126,   159,   272,   310,   297,   398,
     297,   255,   292,    62,    88,   243,    89,    90,   175,    83,
      91,    92,    86,   173,    87,    88,   128,    89,    90,   297,
     285,    91,    92,   291,   294,   210,   311,   210,   402,   243,
     333,   260,   256,   258,   358,   357,   263,   267,   318,   319,
     297,   273,   274,    17,   275,   335,   210,    18,   125,   181,
     316,   182,   276,   277,   278,   279,   280,   281,   377,    36,
     182,    87,   218,   271,    48,   286,   334,   210,   288,    35,
      88,   396,    89,    90,   205,   289,    91,    92,   378,    48,
      48,    51,    87,   368,   204,   289,   217,   108,    48,   289,
     223,    87,    73,   182,    54,   233,   205,    74,   289,   317,
     240,    48,   324,  -228,   352,    48,   218,   353,   365,   359,
     257,    55,   362,   363,   403,   398,   297,    88,    83,    89,
      90,   371,    59,    91,    92,   265,   288,   345,   396,   269,
     391,   210,   380,    83,    87,   383,   204,    83,    88,   225,
      89,    90,    79,   210,    91,    92,   394,    88,   103,    89,
      90,   218,    87,    91,    92,    14,   159,    56,   107,   218,
     366,   218,   386,   388,   369,   218,   237,   393,   374,    14,
     238,   174,   239,   401,   218,    76,   364,   391,    29,    77,
     159,   274,   227,   159,    39,   381,   228,     2,    40,   404,
      88,    39,    89,    90,     2,    40,    91,    92,   325,   108,
     326,   123,   169,   124,   125,   126,   218,   387,    88,   389,
      89,    90,   179,   415,    91,    92,     4,     5,     6,    37,
      26,   159,   182,     4,     5,     6,    88,   128,    89,    90,
     251,   202,    91,    92,   252,   306,   297,   159,   266,    41,
      42,   183,   270,    49,    50,  -220,  -220,  -220,  -220,   203,
    -220,    58,    50,   218,  -220,  -220,  -220,  -220,  -220,   416,
    -220,  -220,   184,   210,  -220,  -220,  -220,   185,  -220,  -220,
    -220,  -220,  -220,    65,    69,   199,  -220,  -220,  -220,  -220,
    -220,   186,   187,   188,   189,   190,   191,   192,   193,   398,
     297,   194,   195,   196,   197,   101,   236,  -220,  -220,   105,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,   183,
      81,    30,   243,  -218,  -218,  -218,  -218,   210,  -218,    97,
     249,    98,  -218,  -218,  -218,  -218,  -218,    83,  -218,  -218,
     184,   250,  -218,  -218,  -218,   185,  -218,  -218,  -218,  -218,
    -218,    66,    70,   253,  -218,  -218,  -218,  -218,  -218,   186,
     187,   188,   189,   190,   191,   192,   193,   180,   181,   194,
     195,   196,   197,   102,  -186,  -218,  -218,   106,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,   206,   261,   254,
     262,  -227,  -227,   343,   207,   208,    83,  -190,   209,   344,
     181,  -227,  -187,  -227,  -227,   259,  -227,   268,  -227,   295,
    -227,   282,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   201,
     181,   290,   210,   251,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,     2,     3,  -227,  -227,   211,
    -227,   264,    30,   307,   212,   308,  -227,  -227,   182,  -227,
    -227,  -227,  -227,  -227,  -227,   183,   320,   251,   321,   -21,
     -21,   -21,   -21,    24,     4,     5,     6,    25,    26,   -21,
     329,   -21,   -21,   331,   -21,   336,   184,  -228,   -21,   178,
     -21,   185,   -21,   -21,   -21,   -21,   -21,   338,   181,  -228,
     -21,   -21,   -21,   -21,   -21,   186,   187,   188,   189,   190,
     191,   192,   193,   340,   181,   194,   195,   196,   197,   346,
     243,   361,   -21,   228,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   183,   407,   243,   382,  -220,  -220,   283,
    -220,  -228,   410,   176,   177,  -122,   384,  -220,   178,  -220,
    -220,    87,  -220,   385,   184,   392,  -220,   395,  -220,   185,
    -220,  -220,  -220,  -220,  -220,  -228,   413,   397,  -220,   210,
    -220,  -220,  -220,   186,   187,   188,   189,   190,   191,   192,
     193,  -228,   422,   194,   195,   196,   197,  -228,   423,   406,
    -220,   326,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,   400,  -228,   425,   355,   110,    74,    88,   -21,    89,
      90,   200,   177,    91,    92,   112,   178,   113,   114,   284,
     115,   417,   184,   418,   116,   419,   117,   185,   118,   119,
     120,   121,   122,  -228,   355,   420,   123,   421,   124,   125,
     126,   186,   187,   188,   189,   190,   191,   192,   193,  -228,
     426,   194,   195,   196,   197,   427,   428,    23,   -21,    52,
     127,    88,   128,    89,    90,   129,   130,    91,    92,   183,
      38,   337,   177,  -100,  -100,    88,   178,    89,    90,   339,
     177,    91,    92,  -100,   178,  -100,  -100,    78,  -100,   405,
     184,   330,  -100,   372,  -100,   185,  -100,  -100,  -100,  -100,
    -100,     0,   184,     0,  -100,     0,  -100,  -100,  -100,   186,
     187,   188,   189,   190,   191,   192,   193,     0,     0,   194,
     195,   196,   197,   293,   189,   190,   191,   192,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   109,   341,     0,
       0,   110,    74,     0,   342,   177,   111,     0,     0,   178,
       0,   112,     0,   113,   114,     0,   115,     0,     0,     0,
     116,     0,   117,     0,   118,   119,   120,   121,   122,     0,
       0,     0,   123,     0,   124,   125,   126,     0,     0,    88,
       0,    89,    90,   296,   297,    91,    92,     0,   215,     0,
       0,     0,   222,     0,   298,     0,   127,    88,   128,    89,
      90,   129,   130,    91,    92,   109,     0,     0,     0,   110,
      74,   210,     0,    39,   244,     0,     2,    40,     0,   112,
       0,   113,   114,   123,   115,   124,     0,   126,   116,     0,
     117,     0,   118,   119,   120,   121,   122,     0,     0,     0,
     123,     0,   124,   125,   126,     4,     5,     6,    88,   128,
      89,    90,   398,   297,    91,    92,   215,     0,     0,     0,
     231,     0,    63,   399,   127,    88,   128,    89,    90,   129,
     130,    91,    92,   109,     0,     0,     0,   110,    74,     0,
     210,     0,     0,     0,     0,     0,     0,   112,     0,   113,
     114,   123,   115,   124,     0,   126,   116,     0,   117,     0,
     118,   119,   120,   121,   122,     0,     0,     0,   123,   215,
     124,   125,   126,   287,     0,     0,    88,   128,    89,    90,
     215,     0,    91,    92,   332,     0,     0,     0,     0,     0,
       0,     0,   127,    88,   128,    89,    90,   129,   130,    91,
      92,     0,     0,     0,   123,     0,   124,     0,   126,     0,
       0,     0,     0,     0,   215,   123,     0,   124,   360,   126,
       0,     0,   215,     0,     0,     0,   367,     0,     0,    88,
     128,    89,    90,   215,     0,    91,    92,   370,     0,     0,
      88,   128,    89,    90,     0,     0,    91,    92,     0,   123,
       0,   124,   315,   126,     0,     0,     0,   123,     0,   124,
      83,   126,     0,     0,     0,     0,     0,   215,   123,     0,
     124,   375,   126,     0,    88,   128,    89,    90,     0,     0,
      91,    92,    88,   128,    89,    90,   215,     0,    91,    92,
     379,     0,     0,    88,   128,    89,    90,     0,     0,    91,
      92,   215,   123,     0,   124,   390,   126,     0,    88,     0,
      89,    90,     0,     0,    91,    92,     0,     0,     0,     0,
     215,   123,     0,   124,   414,   126,     0,    88,   128,    89,
      90,     0,     0,    91,    92,     0,   123,     0,   124,     0,
     126,     0,     0,     0,     0,     0,    88,   128,    89,    90,
      20,     0,    91,    92,     0,   123,     0,   124,    33,   126,
       0,    88,   128,    89,    90,     0,     0,    91,    92,    43,
       0,     1,     2,     3,    53,     0,     0,    22,     0,     0,
      88,   128,    89,    90,    64,    68,    91,    92,   183,     0,
       0,     0,     0,    43,     0,   305,     0,    80,     0,     0,
       0,     4,     5,     6,     0,     0,   100,     0,     0,   184,
     104,     0,     0,     0,   185,     0,   183,     7,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,   186,   187,
     188,   189,   190,   191,   192,   193,     0,   184,   194,   195,
     196,   197,   185,     0,  -228,  -145,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,   186,   187,   188,   189,
     190,   191,   192,   193,     0,   184,   194,   195,   196,   197,
     185,     0,   183,  -168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   187,   188,   189,   190,   191,
     192,   193,     0,   184,   194,   195,   196,   197,   185,     0,
     183,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,   191,   192,   193,
       0,   184,   194,   195,   196,   197,   185,     0,   183,  -146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   187,   188,   189,   190,   191,   192,   193,     0,   184,
     194,   195,   196,   197,   185,     0,   183,  -169,     0,     0,
       0,     0,   347,   -21,     0,     0,     0,     0,   186,   187,
     188,   189,   190,   191,   192,   193,     0,   184,   194,   195,
     196,   197,   185,     0,   183,  -171,     0,     0,     0,     0,
     408,   -21,     0,     0,     0,     0,   186,   187,   188,   189,
     190,   191,   192,   193,     0,   184,   194,   195,   196,   197,
     185,     0,   183,     0,     0,     0,     0,     0,   283,     0,
       0,     0,     0,     0,   186,   187,   188,   189,   190,   191,
     192,   193,     0,   184,   194,   195,   196,   197,   185,     0,
       0,     0,     0,     0,     0,  -228,     0,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,   191,   192,   193,
       0,     0,   194,   195,   196,   197,   184,     0,     0,   304,
       0,   185,     0,   322,     0,     0,     0,     0,     0,   323,
       0,     0,     0,     0,     0,   186,   187,   188,   189,   190,
     191,   192,   193,     0,   184,   194,   195,   196,   197,   185,
       0,  -228,    39,     0,     0,     2,    40,     0,     0,     0,
       0,     0,     0,   186,   187,   188,   189,   190,   191,   192,
     193,     0,   184,   194,   195,   196,   197,   185,     2,     3,
       0,     0,    30,     0,     4,     5,     6,     1,     2,     3,
       0,   186,   187,   188,   189,   190,   191,   192,   193,     0,
      67,   194,   195,   196,   197,     0,     0,     4,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       0,     0,     0,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     7
};

static const short int yycheck[] =
{
      61,   128,   115,    47,   207,    62,    21,     1,     8,    74,
       8,    19,    12,   119,   120,     8,     8,   123,   124,   125,
     133,     5,     1,   136,     1,   138,     5,   140,     5,    13,
       8,     1,     1,    12,     8,     1,     5,    37,     5,     5,
       8,     0,    57,    12,    35,    19,    38,     4,   109,   114,
     115,   112,   113,   118,    62,   116,   117,     9,   123,    37,
      58,   122,    62,   128,    58,    58,   207,   128,   133,    37,
      36,   136,    38,   138,    40,   140,   182,     8,     9,     8,
       9,     5,   209,    62,    61,     8,    63,    64,    79,    13,
      67,    68,     1,    62,     5,    61,    62,    63,    64,     9,
     206,    67,    68,   209,   210,    36,    37,    36,    37,     8,
     251,   172,   169,   170,    37,    37,   173,   178,     7,     8,
       9,   182,   183,     1,   185,   252,    36,     5,    39,     8,
     236,    62,   193,   194,   195,   196,   197,   198,    37,     5,
      62,     5,   207,     7,    26,   206,   252,    36,   351,    62,
      61,   354,    63,    64,   215,   296,    67,    68,    37,    41,
      42,     5,     5,   304,     7,   306,   114,    10,    50,   310,
     118,     5,     1,    62,    49,   123,   237,     6,   319,   236,
     128,    63,   243,     8,     9,    67,   251,    12,   301,   295,
       5,     5,   298,   299,     7,     8,     9,    61,    13,    63,
      64,   307,    62,    67,    68,     5,   409,   268,   411,     5,
     351,    36,   325,    13,     5,   328,     7,    13,    61,    53,
      63,    64,    62,    36,    67,    68,   353,    61,    58,    63,
      64,   296,     5,    67,    68,     5,   301,     7,    58,   304,
     301,   306,   348,   349,   305,   310,     1,   353,   309,     5,
       5,     7,     7,   366,   319,     1,   300,   398,     4,     5,
     325,   322,     1,   328,     1,   326,     5,     4,     5,   382,
      61,     1,    63,    64,     4,     5,    67,    68,    14,    10,
      16,    36,    62,    38,    39,    40,   351,   348,    61,   350,
      63,    64,     5,   399,    67,    68,    33,    34,    35,    10,
      11,   366,    62,    33,    34,    35,    61,    62,    63,    64,
       8,    58,    67,    68,    12,     8,     9,   382,   177,    49,
      50,     1,   181,    10,    11,     5,     6,     7,     8,    58,
      10,    10,    11,   398,    14,    15,    16,    17,    18,   400,
      20,    21,    22,    36,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    41,    42,     9,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     8,
       9,    51,    52,    53,    54,    63,    36,    57,    58,    67,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     1,
       7,     8,     8,     5,     6,     7,     8,    36,    10,     5,
       8,     7,    14,    15,    16,    17,    18,    13,    20,    21,
      22,     9,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    41,    42,    58,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     7,     8,    51,
      52,    53,    54,    63,     9,    57,    58,    67,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     1,     5,     9,
       7,     5,     6,     1,     8,     9,    13,     9,    12,     7,
       8,    15,     9,    17,    18,     1,    20,    12,    22,    53,
      24,     5,    26,    27,    28,    29,    30,    31,    32,     7,
       8,     5,    36,     8,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     4,     5,    51,    52,    53,
      54,     7,     8,    53,    58,     8,    60,    61,    62,    63,
      64,    65,    66,    67,    68,     1,     7,     8,     7,     5,
       6,     7,     8,     6,    33,    34,    35,    10,    11,    15,
       5,    17,    18,     5,    20,     5,    22,     8,    24,    12,
      26,    27,    28,    29,    30,    31,    32,     7,     8,    62,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     7,     8,    51,    52,    53,    54,     7,
       8,     5,    58,     5,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     1,     7,     8,    14,     5,     6,     7,
       8,     8,     9,     7,     8,    12,     9,    15,    12,    17,
      18,     5,    20,     7,    22,     5,    24,     5,    26,    27,
      28,    29,    30,    31,    32,     8,     9,     5,    36,    36,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     8,     9,    51,    52,    53,    54,     8,     9,     5,
      58,    16,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     1,     8,     9,     9,     5,     6,    61,     8,    63,
      64,     7,     8,    67,    68,    15,    12,    17,    18,     5,
      20,     5,    22,     5,    24,     5,    26,    27,    28,    29,
      30,    31,    32,     8,     9,     5,    36,     5,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    58,
       5,    51,    52,    53,    54,     5,     5,     9,    58,    30,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     1,
      24,     7,     8,     5,     6,    61,    12,    63,    64,     7,
       8,    67,    68,    15,    12,    17,    18,    50,    20,   383,
      22,   249,    24,   308,    26,    27,    28,    29,    30,    31,
      32,    -1,    22,    -1,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,     5,    44,    45,    46,    47,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     1,     1,    -1,
      -1,     5,     6,    -1,     7,     8,    10,    -1,    -1,    12,
      -1,    15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    61,
      -1,    63,    64,     8,     9,    67,    68,    -1,     1,    -1,
      -1,    -1,     5,    -1,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,     1,    -1,    -1,    -1,     5,
       6,    36,    -1,     1,    10,    -1,     4,     5,    -1,    15,
      -1,    17,    18,    36,    20,    38,    -1,    40,    24,    -1,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    39,    40,    33,    34,    35,    61,    62,
      63,    64,     8,     9,    67,    68,     1,    -1,    -1,    -1,
       5,    -1,    50,    19,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     1,    -1,    -1,    -1,     5,     6,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,
      18,    36,    20,    38,    -1,    40,    24,    -1,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,     1,
      38,    39,    40,     5,    -1,    -1,    61,    62,    63,    64,
       1,    -1,    67,    68,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,     1,    36,    -1,    38,     5,    40,
      -1,    -1,     1,    -1,    -1,    -1,     5,    -1,    -1,    61,
      62,    63,    64,     1,    -1,    67,    68,     5,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    67,    68,    -1,    36,
      -1,    38,     5,    40,    -1,    -1,    -1,    36,    -1,    38,
      13,    40,    -1,    -1,    -1,    -1,    -1,     1,    36,    -1,
      38,     5,    40,    -1,    61,    62,    63,    64,    -1,    -1,
      67,    68,    61,    62,    63,    64,     1,    -1,    67,    68,
       5,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    67,
      68,     1,    36,    -1,    38,     5,    40,    -1,    61,    -1,
      63,    64,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,
       1,    36,    -1,    38,     5,    40,    -1,    61,    62,    63,
      64,    -1,    -1,    67,    68,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
       7,    -1,    67,    68,    -1,    36,    -1,    38,    15,    40,
      -1,    61,    62,    63,    64,    -1,    -1,    67,    68,    26,
      -1,     3,     4,     5,    31,    -1,    -1,     9,    -1,    -1,
      61,    62,    63,    64,    41,    42,    67,    68,     1,    -1,
      -1,    -1,    -1,    50,    -1,     8,    -1,    54,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    63,    -1,    -1,    22,
      67,    -1,    -1,    -1,    27,    -1,     1,    49,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    22,    51,    52,
      53,    54,    27,    -1,     1,    58,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    22,    51,    52,    53,    54,
      27,    -1,     1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    22,    51,    52,    53,    54,    27,    -1,
       1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    22,    51,    52,    53,    54,    27,    -1,     1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    22,
      51,    52,    53,    54,    27,    -1,     1,    58,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    22,    51,    52,
      53,    54,    27,    -1,     1,    58,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    22,    51,    52,    53,    54,
      27,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    22,    51,    52,    53,    54,    27,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    22,    -1,    -1,    25,
      -1,    27,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    22,    51,    52,    53,    54,    27,
      -1,     1,     1,    -1,    -1,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    22,    51,    52,    53,    54,    27,     4,     5,
      -1,    -1,     8,    -1,    33,    34,    35,     3,     4,     5,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      49,    51,    52,    53,    54,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    33,    34,    35,    49,    80,    81,
      82,    83,    84,   124,     5,    86,    87,     1,     5,     1,
      83,     0,     9,    82,     6,    10,    11,    88,    89,     4,
       8,    49,    50,    83,     9,    62,     5,    10,    89,     1,
       5,    49,    50,    83,    90,    91,    92,    93,   124,    10,
      11,     5,    87,    83,    49,     5,     7,    86,    10,    62,
       5,    12,    62,    50,    83,    91,    92,    49,    83,    91,
      92,     1,    58,     1,     6,    96,     1,     5,    90,    62,
      83,     7,     5,    13,    94,    95,     1,     5,    61,    63,
      64,    67,    68,   129,   138,   139,   140,     5,     7,    94,
      83,    91,    92,    58,    83,    91,    92,    58,    10,     1,
       5,    10,    15,    17,    18,    20,    24,    26,    28,    29,
      30,    31,    32,    36,    38,    39,    40,    60,    62,    65,
      66,    85,    96,    97,    98,    99,   101,   103,   104,   105,
     106,   107,   108,   109,   110,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    62,
       1,     5,    12,    62,     7,    86,     7,     8,    12,     5,
       7,     8,    62,     1,    22,    27,    41,    42,    43,    44,
      45,    46,    47,    48,    51,    52,    53,    54,   141,     9,
       7,     7,    58,    58,     7,   138,     1,     8,     9,    12,
      36,    53,    58,   138,   138,     1,     5,   109,   129,    98,
     138,   138,     5,   109,    85,    53,    85,     1,     5,   122,
     138,     5,    85,   109,    85,    85,    36,     1,     5,     7,
     109,   135,   138,     8,    10,    98,    98,    98,    98,     8,
       9,     8,    12,    58,     9,     5,    94,     5,    94,     1,
     138,     5,     7,    94,     7,     5,    95,   138,    12,     5,
      95,     7,    85,   138,   138,   138,   138,   138,   138,   138,
     138,   138,     5,     7,     5,    85,   138,     5,   107,   125,
       5,    85,   135,     5,    85,    53,     8,     9,    19,    19,
      21,    57,   111,   112,    25,     8,     8,    53,     8,     8,
       8,    37,    37,    37,    38,     5,    85,    94,     7,     8,
       7,     7,     1,     7,   138,    14,    16,   100,   102,     5,
     108,     5,     5,   125,    85,   135,     5,     7,     7,     7,
       7,     1,     7,     1,     7,   138,     7,     7,    62,    19,
       8,     8,     9,    12,     8,     9,    58,    37,    37,    85,
       5,     5,    85,    85,    96,    98,   138,     5,   125,   138,
       5,    85,   122,     1,   138,     5,    37,    37,    37,     5,
      98,   138,    14,    98,     9,     7,    85,   138,    85,   138,
       5,   125,     5,    85,   135,     5,   107,     5,     8,    19,
       1,    98,    37,     7,    98,   100,     5,     7,     7,     8,
       9,     8,     9,     9,     5,    85,   138,     5,     5,     5,
       5,     5,     9,     9,    58,     9,     5,     5,     5,    58
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
    {Streams::verbose()<<"unit: IMPORT unit_list STATIC FINAL class_decl\n";;}
    break;

  case 10:
#line 122 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"class_decl: class_h class_body\n";
								;}
    break;

  case 11:
#line 127 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 12:
#line 132 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 13:
#line 138 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 14:
#line 143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 15:
#line 149 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 16:
#line 154 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 17:
#line 160 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 18:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 19:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 20:
#line 177 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 21:
#line 178 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 22:
#line 181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 23:
#line 188 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 24:
#line 197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 25:
#line 201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";
				
				;}
    break;

  case 26:
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 27:
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 28:
#line 216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 29:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 31:
#line 232 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 32:
#line 235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 33:
#line 236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration\n";;}
    break;

  case 34:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 35:
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL class_decl\n";;}
    break;

  case 36:
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC class_decl\n";;}
    break;

  case 37:
#line 240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC class_decl\n";;}
    break;

  case 38:
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL class_decl\n";;}
    break;

  case 39:
#line 242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC var_declaration SEMICOLON\n";;}
    break;

  case 40:
#line 243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC	var_declaration\n";;}
    break;

  case 41:
#line 244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration SEMICOLON\n";;}
    break;

  case 42:
#line 245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL var_declaration\n";;}
    break;

  case 43:
#line 246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: STATIC FINAL var_declaration SEMICOLON\n";;}
    break;

  case 44:
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm:STATIC FINAL var_declaration\n";;}
    break;

  case 45:
#line 248 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration SEMICOLON\n";;}
    break;

  case 46:
#line 249 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"dm: FINAL STATIC var_declaration\n";;}
    break;

  case 47:
#line 250 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 48:
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 49:
#line 262 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 50:
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 51:
#line 271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 52:
#line 275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 53:
#line 279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 54:
#line 285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 55:
#line 288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 56:
#line 289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 57:
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S args_list CLOSE_S \n";;}
    break;

  case 58:
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";;}
    break;

  case 59:
#line 292 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: access_modef ID OPEN_S  CLOSE_S \n";;}
    break;

  case 60:
#line 293 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S COLON \n";;}
    break;

  case 61:
#line 294 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 62:
#line 298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
												   ;}
    break;

  case 63:
#line 302 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 64:
#line 306 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 65:
#line 310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 66:
#line 314 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 67:
#line 318 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 68:
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 69:
#line 330 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 70:
#line 331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n";;}
    break;

  case 71:
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n";;}
    break;

  case 72:
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n";;}
    break;

  case 73:
#line 334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 74:
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID \n";;}
    break;

  case 75:
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	ID ASSIGN expr \n";;}
    break;

  case 76:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";;}
    break;

  case 77:
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 78:
#line 343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"block_stmt:	stmt_list END \n";;}
    break;

  case 79:
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 80:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 81:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 82:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 83:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 84:
#line 357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 85:
#line 358 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 86:
#line 359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 87:
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 88:
#line 361 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 89:
#line 362 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 90:
#line 363 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 91:
#line 364 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 92:
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 93:
#line 368 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 94:
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 95:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 96:
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 97:
#line 374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 98:
#line 375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 99:
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 100:
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 101:
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 102:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 103:
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 104:
#line 396 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 105:
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 106:
#line 400 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 107:
#line 401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 108:
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 109:
#line 409 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 110:
#line 410 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 111:
#line 411 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 112:
#line 412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 113:
#line 413 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 114:
#line 414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 115:
#line 415 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 116:
#line 416 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 117:
#line 420 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 118:
#line 421 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 119:
#line 425 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 120:
#line 426 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 121:
#line 427 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 122:
#line 428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 123:
#line 429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 124:
#line 430 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 125:
#line 433 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 126:
#line 434 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 127:
#line 437 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 128:
#line 440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 129:
#line 441 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 130:
#line 444 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 131:
#line 445 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 132:
#line 448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 133:
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 134:
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 135:
#line 452 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 136:
#line 453 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 137:
#line 454 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 138:
#line 455 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 139:
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 140:
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 141:
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 142:
#line 459 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 143:
#line 460 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 144:
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 145:
#line 464 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 146:
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 147:
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 148:
#line 469 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 149:
#line 470 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN expr_list\n";;}
    break;

  case 150:
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN yield_expression\n";;}
    break;

  case 151:
#line 472 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN yield_expression\n";;}
    break;

  case 152:
#line 473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID ASSIGN yield_expression\n";;}
    break;

  case 153:
#line 476 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 154:
#line 477 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 155:
#line 478 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 156:
#line 481 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 157:
#line 482 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 158:
#line 485 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 159:
#line 488 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 160:
#line 489 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 161:
#line 490 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 162:
#line 494 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 163:
#line 499 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 164:
#line 500 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 165:
#line 506 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 166:
#line 507 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 167:
#line 510 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 168:
#line 511 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 169:
#line 512 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 170:
#line 513 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 171:
#line 517 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 172:
#line 523 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";;}
    break;

  case 173:
#line 524 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";;}
    break;

  case 174:
#line 525 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 175:
#line 528 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 176:
#line 529 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 177:
#line 530 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 178:
#line 531 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 179:
#line 532 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 180:
#line 533 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 181:
#line 534 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 182:
#line 535 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 183:
#line 538 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 184:
#line 539 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 185:
#line 542 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 186:
#line 543 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 187:
#line 544 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 188:
#line 545 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 189:
#line 548 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 190:
#line 549 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";;}
    break;

  case 191:
#line 552 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 192:
#line 553 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 193:
#line 554 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 194:
#line 555 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 195:
#line 556 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 196:
#line 559 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 197:
#line 560 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 198:
#line 561 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 199:
#line 562 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 200:
#line 565 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr CLOSE_S";;}
    break;

  case 201:
#line 566 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S";;}
    break;

  case 202:
#line 567 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 203:
#line 571 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 204:
#line 575 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 205:
#line 579 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 206:
#line 586 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 207:
#line 589 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 208:
#line 592 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 209:
#line 595 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 210:
#line 596 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 211:
#line 599 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 212:
#line 600 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 213:
#line 603 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 214:
#line 604 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 215:
#line 605 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";;}
    break;

  case 216:
#line 608 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 217:
#line 609 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 218:
#line 610 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 219:
#line 611 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 220:
#line 612 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 221:
#line 618 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 222:
#line 619 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 223:
#line 620 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 224:
#line 621 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 225:
#line 622 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 226:
#line 623 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 227:
#line 626 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	\n";;}
    break;

  case 228:
#line 627 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 229:
#line 628 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 230:
#line 629 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 231:
#line 630 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID\n";;}
    break;

  case 232:
#line 631 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 233:
#line 632 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 234:
#line 633 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 235:
#line 636 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 236:
#line 637 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 237:
#line 638 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 238:
#line 639 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 239:
#line 640 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 240:
#line 641 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 241:
#line 642 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 242:
#line 643 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3352 "yacc.cpp"

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


#line 645 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

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

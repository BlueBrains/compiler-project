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
	#include "MyParser.h"
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
#line 60 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
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
#line 320 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 332 "yacc.cpp"

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1832

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  75
/* YYNRULES -- Number of rules. */
#define YYNRULES  264
/* YYNRULES -- Number of states. */
#define YYNSTATES  488

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
       0,     0,     3,     6,     9,    11,    15,    18,    20,    23,
      27,    32,    37,    40,    44,    49,    55,    61,    68,    71,
      75,    78,    82,    84,    88,    90,    94,    96,    99,   103,
     105,   108,   112,   115,   118,   120,   122,   125,   128,   131,
     133,   138,   143,   147,   151,   155,   161,   167,   174,   181,
     186,   190,   193,   197,   201,   206,   211,   217,   223,   225,
     227,   232,   237,   241,   246,   251,   256,   261,   266,   271,
     273,   275,   279,   283,   287,   291,   295,   297,   300,   304,
     308,   313,   317,   319,   324,   329,   333,   338,   344,   351,
     357,   360,   364,   367,   370,   372,   374,   376,   378,   380,
     382,   384,   387,   390,   395,   404,   415,   418,   423,   427,
     433,   437,   440,   443,   446,   449,   452,   456,   459,   464,
     469,   476,   483,   488,   493,   499,   505,   509,   513,   517,
     523,   529,   535,   543,   545,   549,   555,   559,   565,   569,
     575,   579,   581,   585,   589,   592,   595,   599,   602,   607,
     609,   611,   613,   615,   617,   619,   621,   623,   625,   627,
     629,   631,   633,   636,   641,   643,   645,   647,   649,   653,
     657,   663,   666,   671,   674,   676,   679,   681,   684,   689,
     693,   698,   701,   704,   708,   710,   712,   715,   720,   725,
     731,   733,   735,   737,   739,   741,   745,   751,   755,   759,
     765,   769,   771,   773,   777,   781,   783,   785,   787,   789,
     791,   793,   795,   797,   799,   801,   803,   805,   807,   809,
     811,   813,   816,   820,   824,   827,   829,   833,   837,   840,
     843,   846,   850,   854,   858,   861,   865,   869,   871,   874,
     879,   884,   889,   891,   893,   897,   899,   903,   907,   911,
     915,   919,   923,   927,   929,   933,   935,   938,   940,   942,
     944,   946,   948,   950,   952
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      84,     0,    -1,    85,     9,    -1,    85,    87,    -1,    87,
      -1,     3,    91,    60,    -1,    86,    88,    -1,    88,    -1,
      89,    93,    -1,   136,    89,    93,    -1,    52,    51,    89,
      93,    -1,    51,    52,    89,    93,    -1,     4,     5,    -1,
     135,     4,     5,    -1,     4,     5,    64,     7,    -1,   135,
       4,     5,    64,     7,    -1,     4,     5,    64,    91,     7,
      -1,   135,     4,     5,    64,    91,     7,    -1,     4,     1,
      -1,     5,     1,     5,    -1,     5,     1,    -1,    90,     8,
     153,    -1,   153,    -1,    91,     8,    92,    -1,    92,    -1,
      92,     9,     5,    -1,     5,    -1,     6,    10,    -1,     6,
      94,    10,    -1,    10,    -1,    94,    10,    -1,    94,    13,
      95,    -1,    13,    95,    -1,    96,    60,    -1,    97,    -1,
      88,    -1,    96,     1,    -1,   135,     5,    -1,   136,     5,
      -1,     5,    -1,   135,     5,    14,   153,    -1,   136,     5,
      14,   153,    -1,     5,    14,   153,    -1,   135,   136,     5,
      -1,   136,   135,     5,    -1,   135,   136,     5,    14,   153,
      -1,   136,   135,     5,    14,   153,    -1,    52,   135,    51,
       5,    14,   153,    -1,    51,   135,    52,     5,    14,   153,
      -1,   135,     5,     5,     1,    -1,     5,     5,     1,    -1,
     100,   106,    -1,   135,   100,   106,    -1,   136,   100,   106,
      -1,   135,   136,   100,   106,    -1,   136,   135,   100,   106,
      -1,    98,   135,    51,   100,   106,    -1,    99,   135,    52,
     100,   106,    -1,    52,    -1,    51,    -1,     5,    64,   101,
       7,    -1,     5,    64,     5,     7,    -1,     5,    64,     7,
      -1,     1,    64,   101,     7,    -1,     1,    64,     5,     7,
      -1,     5,     1,   101,     7,    -1,     5,     1,     5,     7,
      -1,     5,    64,   101,     1,    -1,     5,    64,     5,     1,
      -1,   102,    -1,   104,    -1,   102,     8,   104,    -1,   102,
       8,   103,    -1,     5,     8,   103,    -1,   102,     8,     5,
      -1,     5,     8,     5,    -1,   103,    -1,    15,     5,    -1,
      15,    15,     5,    -1,     5,    15,     1,    -1,     5,    15,
      15,     1,    -1,   104,     8,   105,    -1,   105,    -1,   104,
       8,   102,     1,    -1,   104,     8,     5,     1,    -1,     5,
      14,   153,    -1,    15,     5,    14,   153,    -1,    15,    15,
       5,    14,   153,    -1,     5,    15,     1,    15,    14,   153,
      -1,     5,    15,     1,    14,   153,    -1,     6,    10,    -1,
       6,   107,    10,    -1,     1,    10,    -1,   107,   108,    -1,
     108,    -1,   109,    -1,   113,    -1,   115,    -1,   120,    -1,
     123,    -1,   106,    -1,   124,    60,    -1,     5,    60,    -1,
       5,     9,     5,    60,    -1,     5,     8,     5,     9,     5,
       9,     5,    60,    -1,     5,     9,     5,     8,     5,     9,
       5,     9,     5,    60,    -1,   111,   108,    -1,   111,   108,
      16,   108,    -1,   111,   108,   110,    -1,   111,   108,   110,
      16,   108,    -1,   112,   108,   110,    -1,   112,   108,    -1,
      17,   153,    -1,    18,   153,    -1,   114,   108,    -1,    19,
     153,    -1,     5,     1,   153,    -1,   116,   108,    -1,    20,
     119,    21,    90,    -1,    20,   119,    21,   147,    -1,    20,
       5,     8,     5,    21,    90,    -1,    20,     5,     8,     5,
      21,   147,    -1,    20,     5,    21,    90,    -1,    20,     5,
      21,   147,    -1,     5,     1,     5,    21,    90,    -1,     5,
       1,     5,    21,   147,    -1,   117,     8,   118,    -1,     5,
       8,   117,    -1,     5,     8,     5,    -1,     5,     8,     5,
       9,     5,    -1,     5,     9,     5,     8,   117,    -1,     5,
       9,     5,     8,     5,    -1,     5,     9,     5,     8,     5,
       9,     5,    -1,   118,    -1,   118,     9,     5,    -1,     5,
       9,     5,     9,     5,    -1,   119,     8,   137,    -1,     5,
       8,     5,     8,   137,    -1,   119,     8,     5,    -1,     5,
       8,     5,     8,     5,    -1,     5,     8,   137,    -1,   137,
      -1,    22,   108,   122,    -1,    22,   108,   121,    -1,    23,
     106,    -1,    59,   108,    -1,    59,   153,   108,    -1,    26,
     153,    -1,    26,   153,    27,   137,    -1,    90,    -1,   125,
      -1,   127,    -1,    62,    -1,   128,    -1,   131,    -1,   129,
      -1,   130,    -1,   134,    -1,    67,    -1,    68,    -1,   117,
      -1,   132,    -1,    28,   153,    -1,    28,   153,     8,   153,
      -1,    90,    -1,   146,    -1,   147,    -1,   143,    -1,   119,
      14,   126,    -1,   155,    14,   126,    -1,     5,     8,     5,
      14,   126,    -1,    30,   119,    -1,    30,     5,     8,     5,
      -1,    30,     5,    -1,    31,    -1,    31,    90,    -1,   150,
      -1,    32,    90,    -1,    32,    55,    55,    90,    -1,     5,
       1,    90,    -1,     5,    55,    55,    90,    -1,    33,   133,
      -1,    33,     1,    -1,     5,     8,   133,    -1,     5,    -1,
      34,    -1,    34,   153,    -1,    34,   153,     8,   153,    -1,
      34,   153,     8,     1,    -1,     5,     1,   153,     8,   153,
      -1,    35,    -1,    36,    -1,    37,    -1,    52,    -1,    51,
      -1,    64,   119,     7,    -1,    64,     5,     8,     5,     7,
      -1,    64,     5,     7,    -1,    38,   119,    39,    -1,    38,
       5,     8,     5,    39,    -1,    38,     5,    39,    -1,   138,
      -1,   151,    -1,   139,     9,     5,    -1,     5,     9,     5,
      -1,   140,    -1,   138,    -1,   151,    -1,   152,    -1,   142,
      -1,   141,    -1,    65,    -1,    66,    -1,    69,    -1,    70,
      -1,    63,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   143,    -1,    11,    12,    -1,    11,   144,    12,    -1,
     144,     8,   145,    -1,   144,     8,    -1,   145,    -1,   153,
       6,   153,    -1,    64,    90,     7,    -1,    64,     7,    -1,
       1,     7,    -1,    64,     1,    -1,     1,   153,     7,    -1,
      64,    90,     1,    -1,    38,    90,    39,    -1,    38,    39,
      -1,    40,    90,    40,    -1,    64,   150,     7,    -1,    41,
      -1,    41,    90,    -1,    42,    38,    90,    39,    -1,    42,
      38,   102,    39,    -1,    42,    38,     5,    39,    -1,   154,
      -1,   141,    -1,   153,   157,   153,    -1,   156,    -1,   153,
       1,   153,    -1,   153,    29,   153,    -1,   153,    50,   153,
      -1,   153,    53,   153,    -1,   153,    54,   153,    -1,   153,
      55,   153,    -1,   153,    56,   153,    -1,     5,    -1,   155,
       9,     5,    -1,   155,    -1,   155,   146,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    43,    -1,    45,    -1,
      24,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   101,   101,   108,   111,   119,   121,   122,   125,   126,
     127,   128,   131,   136,   142,   147,   153,   158,   164,   169,
     174,   181,   182,   185,   192,   201,   205,   213,   217,   220,
     226,   235,   236,   239,   240,   241,   242,   248,   254,   255,
     259,   264,   265,   269,   270,   271,   272,   273,   274,   275,
     279,   285,   286,   287,   288,   289,   290,   291,   294,   295,
     297,   298,   299,   300,   304,   308,   312,   316,   320,   328,
     329,   330,   332,   333,   334,   335,   336,   339,   345,   349,
     353,   360,   361,   362,   366,   372,   373,   379,   383,   387,
     393,   394,   395,   402,   403,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   419,   420,   421,   422,
     425,   426,   429,   432,   435,   440,   441,   447,   450,   451,
     452,   453,   454,   455,   456,   460,   467,   468,   469,   470,
     471,   472,   473,   474,   478,   479,   483,   484,   485,   486,
     487,   488,   491,   492,   495,   498,   499,   502,   503,   506,
     507,   508,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   522,   523,   525,   526,   527,   528,   531,   532,
     533,   539,   540,   541,   544,   545,   548,   551,   552,   553,
     557,   562,   563,   569,   570,   573,   574,   575,   576,   580,
     586,   587,   588,   592,   593,   595,   596,   597,   598,   599,
     600,   601,   602,   605,   606,   609,   610,   611,   612,   615,
     616,   619,   620,   621,   622,   623,   626,   627,   628,   629,
     630,   633,   634,   636,   637,   638,   640,   643,   644,   645,
     649,   653,   657,   664,   665,   668,   671,   674,   675,   678,
     682,   683,   687,   688,   689,   690,   691,   697,   698,   699,
     700,   701,   702,   704,   705,   714,   715,   718,   719,   720,
     721,   722,   723,   724,   725
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
  "stmt_4", "stmt_3", "stmt_2", "stmt_1", "stmt_8", "$accept", "programes",
  "program", "import_stmt", "unit", "class_decl", "class_h", "expr_list",
  "unit_list", "unit_import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "skipstatic", "skipfinal",
  "method_h", "arguments", "args_list", "arg", "default_args_list",
  "default_arg", "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt",
  "if_header", "elif_header", "while_stmt", "while_header", "for_stmt",
  "for_header", "import_list", "import", "target_list", "try_stmt",
  "finally_stmt", "except_stmt", "with_stmt", "simple_stmt_list",
  "assert_stmt", "left_assignment_side", "assignment_stmt", "del_stmt",
  "return_stmt", "yield_stmt", "print_stmt", "global_stmt", "id_list",
  "raise_stmt", "access_modef", "storage_modef", "target", "attributeref",
  "primary", "atom", "literal", "enclosure", "dict_display",
  "key_datum_list", "key_datum", "parenth_form", "list_display",
  "string_conversion", "yield_atom", "yield_expression", "subscription",
  "call", "expr", "condition", "id_dot", "long_id", "op", 0
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
       0,    83,    84,    85,    85,    86,    87,    87,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    98,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     110,   110,   111,   112,   113,   114,   114,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   120,   120,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   128,   129,   129,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   138,   138,   139,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   144,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   149,   150,   150,   151,
     152,   152,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     2,     1,     2,     3,
       4,     4,     2,     3,     4,     5,     5,     6,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     2,     3,     1,
       2,     3,     2,     2,     1,     1,     2,     2,     2,     1,
       4,     4,     3,     3,     3,     5,     5,     6,     6,     4,
       3,     2,     3,     3,     4,     4,     5,     5,     1,     1,
       4,     4,     3,     4,     4,     4,     4,     4,     4,     1,
       1,     3,     3,     3,     3,     3,     1,     2,     3,     3,
       4,     3,     1,     4,     4,     3,     4,     5,     6,     5,
       2,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     8,    10,     2,     4,     3,     5,
       3,     2,     2,     2,     2,     2,     3,     2,     4,     4,
       6,     6,     4,     4,     5,     5,     3,     3,     3,     5,
       5,     5,     7,     1,     3,     5,     3,     5,     3,     5,
       3,     1,     3,     3,     2,     2,     3,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     1,     1,     1,     3,     3,
       5,     2,     4,     2,     1,     2,     1,     2,     4,     3,
       4,     2,     2,     3,     1,     1,     2,     4,     4,     5,
       1,     1,     1,     1,     1,     3,     5,     3,     3,     5,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     2,     1,     3,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     3,     1,     2,     4,
       4,     4,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   190,   191,   192,   194,   193,     0,
       0,     0,     4,     7,     0,     0,     0,    26,     0,    24,
      18,    12,    20,     0,     0,     1,     2,     3,     6,     0,
      29,     0,     8,     0,     0,     0,     0,     5,     0,     0,
      19,     0,     0,    27,     0,     0,    39,   194,   193,    35,
      32,     0,    34,     0,     0,     0,     0,     0,    30,     0,
      13,     9,    23,    25,    14,     0,    11,    10,    28,     0,
      20,     0,     0,     0,     0,     0,    36,    33,     0,     0,
       0,     0,    51,    37,   194,   193,     0,     0,    38,     0,
       0,    31,     0,    16,     0,     0,     0,    69,    76,    70,
      82,    19,     0,    50,   253,   215,   211,   212,   213,   214,
     243,    42,   242,     0,   245,     0,    62,     0,     0,     0,
       0,     0,    92,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,   174,     0,     0,   185,     0,     0,
     237,     0,   152,     0,   158,   159,   149,   100,     0,    94,
      95,     0,    96,     0,    97,     0,   160,   133,     0,    98,
      99,     0,   150,   151,   153,   155,   156,   154,   161,   157,
     141,   201,     0,   205,   243,   209,   220,   216,   217,   218,
     219,   176,   202,   208,     0,     0,     0,     0,     0,    52,
      43,     0,     0,    53,    44,     0,    15,     0,    64,     0,
       0,     0,    77,     0,    63,     0,     0,    66,    65,     0,
     263,     0,   261,   264,   262,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,    68,
      61,    67,    60,     0,     0,     0,     0,     0,   229,     0,
       0,     0,     0,     0,   102,   221,     0,   225,     0,   112,
     115,     0,     0,   210,     0,   147,     0,   173,   171,   175,
       0,   177,   182,   184,   181,     0,   253,   234,     0,     0,
       0,   238,     0,   230,   253,   228,     0,     0,     0,     0,
      91,    93,   106,   114,   117,     0,     0,     0,     0,   101,
       0,     0,     0,    49,    40,     0,    54,    41,     0,    55,
      17,    75,     0,    73,    85,    79,     0,     0,    78,    74,
      72,    71,     0,     0,    81,     0,   247,   248,   249,   250,
     251,   252,     0,   254,   230,     0,     0,    56,    57,   231,
     253,   179,   116,   128,   127,   140,   204,     0,   224,   222,
       0,     0,     0,     0,     0,     0,     0,   143,   142,     0,
       0,     0,     0,     0,     0,     0,   200,   233,   198,   235,
     253,     0,     0,   197,     0,   232,   227,   195,   236,    21,
       0,     0,   108,     0,     0,   126,   134,   138,   136,     0,
     164,   168,   167,   165,   166,   203,   169,    45,    46,     0,
      77,     0,     0,     0,    80,    86,     0,    84,    83,     0,
      48,    47,     0,     0,     0,     0,     0,     0,     0,   103,
     180,   223,     0,     0,   204,   122,   123,   118,   119,   144,
     145,     0,     0,   148,     0,   172,   178,   183,   188,     0,
       0,   241,   239,   240,     0,   107,     0,     0,   111,     0,
      79,    78,    89,     0,    87,    74,   124,   125,     0,   128,
     137,   204,   170,   131,   130,   135,     0,     0,     0,   146,
     199,   196,   109,   110,     0,    88,     0,     0,     0,     0,
       0,   139,   120,   121,     0,   128,   204,   131,   135,   132,
       0,     0,   104,     0,   129,   132,   135,   105
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,   146,    18,    19,
      32,    33,    50,    51,    52,    53,    54,    55,   102,    97,
      98,    99,   100,   147,   148,   149,   150,   372,   151,   373,
     152,   153,   154,   155,   156,   157,   158,   159,   347,   348,
     160,   161,   162,   381,   163,   164,   165,   166,   167,   168,
     264,   169,    15,    16,   170,   171,   172,   173,   110,   175,
     176,   246,   247,   177,   178,   179,   180,   181,   182,   183,
     184,   112,   113,   114,   224
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -282
static const short int yypact[] =
{
    1630,    18,   141,    60,  -282,  -282,  -282,    21,    46,   172,
    1623,  1116,  -282,  -282,   352,   188,   204,  -282,     9,   246,
    -282,   240,   305,   204,   204,  -282,  -282,  -282,  -282,   356,
    -282,  1011,  -282,   631,   330,   352,    18,  -282,   358,   278,
    -282,   352,   352,  -282,   661,   293,    26,   675,   745,  -282,
    -282,    17,  -282,   491,   491,   424,   166,   154,  -282,  1011,
     323,  -282,   246,  -282,  -282,    36,  -282,  -282,  -282,   126,
     160,   430,  1369,   283,   400,   444,  -282,  -282,   453,   428,
     505,  1003,  -282,    31,  -282,  -282,   424,   345,    69,   424,
     594,  -282,   311,  -282,   837,   169,   543,   566,  -282,   577,
    -282,   858,   580,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  1776,  -282,   373,  -282,   353,  -282,    19,   588,   591,
     463,   463,  -282,  1341,   583,  -282,    37,  1369,  1369,   275,
    1143,  1369,  1369,  1189,  1369,   195,   533,  1369,   182,  1369,
    1369,   570,  -282,  1181,  -282,  -282,   612,  -282,  1073,  -282,
    -282,  1143,  -282,  1143,  -282,  1143,   614,   633,   263,  -282,
    -282,   595,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,   656,   658,  -282,   660,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,   667,  -282,   653,   723,   252,   677,  1369,  -282,
     109,   424,  1369,  -282,   118,   424,  -282,   207,  -282,   314,
    1369,    49,   666,   685,  -282,   338,   383,  -282,  -282,  1369,
    -282,  1369,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  1369,
    1369,  1369,  1369,  1369,  1369,   307,   709,    91,  -282,  -282,
    -282,  -282,  -282,   716,   719,    20,   424,   424,  -282,  1677,
    1377,  1223,   736,   689,  -282,  -282,   578,  -282,  1710,  1776,
    1776,   254,   114,  -282,    -1,  1743,  1429,   449,   738,   612,
     693,   612,  -282,   742,  -282,  1462,     7,  -282,    40,    79,
      86,   612,   286,   307,   471,  -282,   205,   541,   753,  1369,
    -282,  -282,   429,  -282,  -282,   757,   769,  1231,  1053,  -282,
     770,  1053,   858,  -282,  1776,  1369,  -282,  1776,  1369,  -282,
    -282,   780,   419,  -282,  1776,   550,   783,  1369,   789,   604,
    -282,   577,   196,   230,  -282,   443,   279,   279,   279,   279,
     279,   279,   513,  -282,  -282,  1369,  1369,  -282,  -282,  -282,
     776,   612,  1495,   235,   797,  -282,    44,  1369,  1369,  -282,
    1369,  1265,   802,   267,   267,   424,  1143,  -282,  -282,  1273,
    1369,  1307,  1369,   803,   133,  1315,  -282,  -282,  -282,  -282,
     180,   106,   155,  -282,  1349,  -282,  -282,  -282,  -282,  1776,
    1143,  1369,   798,  1143,   800,   633,  -282,   809,  -282,   987,
     612,  -282,  -282,  -282,  -282,  -282,  -282,  1776,  1776,    84,
    -282,   815,  1369,   814,  -282,  1776,  1369,  -282,  -282,   441,
    1776,  1776,   267,  1369,  1357,   824,  1053,   825,   827,  -282,
     612,  -282,  1644,   313,  -282,   612,  -282,   612,  -282,  -282,
    -282,   863,   809,  -282,  1528,   680,   612,  -282,  -282,  1561,
     104,  -282,  -282,  -282,   401,  -282,   933,  1143,   832,   849,
    -282,  -282,  1776,  1369,  1776,   780,   612,  -282,  1594,   508,
    -282,    45,  -282,   696,   797,  -282,  1391,   267,  1341,  -282,
    -282,  -282,  -282,  -282,   861,  1776,   862,   870,   871,   872,
     873,   809,   612,  -282,   793,   717,    45,   727,   819,   730,
     876,   879,  -282,   881,   750,   750,   819,  -282
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -282,  -282,  -282,  -282,   878,    77,   213,  -110,   -26,   854,
     459,   869,   840,  -282,  -282,  -282,  -282,   514,   537,  -200,
    -194,   695,   708,   -51,  -282,  -114,  -282,   464,  -282,  -282,
    -282,  -282,  -282,  -282,  -238,   630,   673,  -282,  -282,  -282,
    -282,  -282,  -282,  -277,  -282,  -282,  -282,  -282,  -282,  -282,
     567,  -282,   609,   250,  -240,  -282,  -282,  -282,   -62,  -282,
    -279,  -282,   584,  -111,  -281,  -282,  -282,   778,  -282,  -282,
     -72,  -282,   -73,  -282,  -282
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -256
static const short int yytable[] =
{
     111,   335,   228,   334,    82,   303,   313,   384,   185,   382,
     384,   310,   382,    65,   386,   355,   254,    36,    76,   174,
     231,   186,   345,    17,   259,   261,   232,  -256,   268,   270,
     271,    71,  -256,   276,   281,   189,   187,   282,   193,   283,
      72,   284,   104,    93,    36,   188,   356,   378,   279,   245,
     305,   239,  -256,  -256,   248,   249,   250,   185,   346,   255,
     256,    22,   416,   418,   306,   265,   197,   253,   174,    37,
    -256,   253,   362,    23,   228,   185,   174,    77,   185,   357,
     185,   174,   185,   192,    73,   440,   174,   287,    28,   174,
      73,   174,   324,   174,   279,    73,   104,    24,   275,   306,
     105,   335,   106,   107,   409,  -129,   108,   109,    49,   423,
    -256,   335,   456,   342,   279,   335,   294,   276,   358,  -256,
     297,   447,   287,   295,   335,   384,   359,   382,   304,   452,
     331,    94,   298,    73,   428,   344,    49,   315,   104,   316,
     296,    95,    20,   460,   299,   432,    21,   317,   318,   319,
     320,   321,   322,   239,   105,    45,   106,   107,     2,    88,
     108,   109,   361,   399,   450,   101,   334,    45,   332,   454,
      34,    83,    25,    73,   202,    95,   473,   383,   380,   253,
     383,   380,    73,   225,   203,   327,   328,   266,   199,     4,
       5,     6,    34,   126,   433,   389,   105,   397,   106,   107,
     104,   239,   108,   109,   199,   310,   365,   369,     2,     3,
     200,   201,   366,   279,   300,    36,   450,    84,    85,   431,
     138,   267,   139,   387,   141,   253,   388,   410,   334,    35,
     454,   398,   420,   415,   417,   395,    41,    42,   399,     4,
       5,     6,   426,  -256,   405,   105,   143,   106,   107,   406,
     260,   108,   109,   400,   401,    38,   435,   292,   105,   438,
     106,   107,   341,   342,   108,   109,   248,    95,   412,   268,
      35,   287,   104,   185,   421,   343,   225,   288,   424,   253,
     251,    57,   429,    17,   174,    64,   126,   253,   115,   253,
     116,   360,   446,   253,   419,   383,   380,   185,    95,   436,
     185,   302,   253,   210,    39,   379,    87,   459,   174,    57,
      40,   174,   104,   138,   238,   139,    17,   141,   196,   301,
     442,   456,   342,   462,   444,   215,   216,   217,   218,   302,
     105,   448,   106,   107,   457,    60,   108,   109,   105,   143,
     106,   107,   253,   309,   108,   109,    45,   472,   185,   105,
     190,   106,   107,    95,   229,   108,   109,    69,    29,   174,
     230,   199,    30,    63,   185,    31,    43,   200,   201,    31,
     105,   465,   106,   107,   225,   174,   108,   109,  -255,  -255,
    -255,  -255,   226,  -255,  -255,  -255,   474,    92,   312,  -255,
    -255,  -255,  -255,  -255,   253,  -255,  -255,  -255,    95,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,   461,   456,
     342,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   390,    80,  -255,  -255,  -255,  -255,
      81,   103,  -255,  -255,   391,  -255,  -255,   227,  -255,  -255,
    -255,  -255,  -255,  -255,   209,   370,   445,   371,  -246,  -246,
    -246,  -246,   118,  -246,  -246,  -246,   302,   351,   342,  -246,
    -246,  -246,  -246,  -246,    45,  -246,  -246,   210,   235,  -246,
    -246,  -246,   211,  -246,  -246,  -246,  -246,  -246,   363,   364,
     121,  -246,  -246,  -246,  -246,  -246,   212,   213,   214,   215,
     216,   217,   218,   219,    61,   119,   220,   221,   222,   223,
      66,    67,  -246,  -246,   120,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,   209,   122,  -256,   467,  -244,  -244,
    -244,  -244,  -139,  -244,  -244,  -244,     4,     5,     6,  -244,
    -244,  -244,  -244,  -244,   262,  -244,  -244,   210,   263,  -244,
    -244,  -244,   211,  -244,  -244,  -244,  -244,  -244,   367,   287,
     204,  -244,  -244,  -244,  -244,  -244,   212,   213,   214,   215,
     216,   217,   218,   219,   392,   393,   220,   221,   222,   223,
      86,    89,  -244,  -244,   205,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,   240,   206,   338,   208,  -253,  -253,
     339,   241,  -253,   233,  -253,    45,   234,  -253,    34,   194,
    -253,   191,  -253,  -253,   195,  -253,    96,  -253,   272,  -253,
     117,  -253,  -253,  -253,  -253,  -253,  -253,  -253,   200,   201,
     279,  -253,   285,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,   236,   237,  -253,  -253,   243,  -253,
      56,    58,   286,   244,    59,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,   209,   289,    74,    75,   -22,   -22,
     -22,   -22,    78,    79,   -22,  -206,    90,   290,    56,  -210,
     -22,    68,   -22,   -22,    59,   -22,  -207,   210,   293,   -22,
     307,   -22,   211,   -22,   -22,   -22,   -22,   -22,   456,   342,
     308,   -22,   -22,   -22,   -22,   -22,   212,   213,   214,   215,
     216,   217,   218,   219,  -256,   470,   220,   221,   222,   223,
    -256,  -256,  -256,   -22,   323,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   225,  -256,   480,    23,  -255,  -255,
     325,  -255,   226,   326,  -255,  -256,   481,   291,  -256,   483,
    -255,   336,  -255,  -255,   337,  -255,   287,  -255,   352,  -255,
     353,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -256,   408,
     368,  -255,   374,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   376,   385,  -255,  -255,  -255,  -255,
    -256,  -256,  -256,  -255,   394,  -255,  -255,   227,  -255,  -255,
    -255,  -255,  -255,  -255,   209,   389,    24,   402,  -246,  -246,
     329,  -246,   252,   396,  -246,  -256,   258,   414,   263,   439,
    -246,   269,  -246,  -246,   437,  -246,   277,   210,   342,  -246,
     441,  -246,   211,  -246,  -246,  -246,  -246,  -246,   443,   451,
     453,  -246,   455,  -246,  -246,  -246,   212,   213,   214,   215,
     216,   217,   218,   219,   198,   199,   220,   221,   222,   223,
     371,   200,   201,  -246,   464,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,   458,   207,   199,   475,   124,    81,
     408,   -22,   200,   201,   126,   476,   477,   478,   479,  -256,
     127,   484,   128,   129,   485,   130,   486,   210,    27,   131,
      62,   132,   211,   133,   134,   135,   136,   137,    44,    91,
     311,   138,   463,   139,   140,   141,   212,   213,   214,   215,
     216,   217,   218,   219,   314,   375,   220,   221,   222,   223,
     427,   278,   411,   -22,     0,   142,   105,   143,   106,   107,
     144,   145,   108,   109,   209,     0,     0,     0,  -113,  -113,
       0,     0,     0,     0,  -113,     0,     0,     0,     0,     0,
    -113,     0,  -113,  -113,     0,  -113,     0,   210,     0,  -113,
       0,  -113,   211,  -113,  -113,  -113,  -113,  -113,     0,     0,
       0,  -113,     0,  -113,  -113,  -113,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,   220,   221,   222,   223,
       0,     0,   104,     0,     0,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   123,     0,     0,     0,   124,    81,
       0,     0,    45,   125,   126,     2,    46,     0,     0,     0,
     127,     0,   128,   129,     0,   130,   267,     0,     0,   131,
       0,   132,     0,   133,   134,   135,   136,   137,     0,     0,
       0,   138,     0,   139,   140,   141,     4,     5,     6,     0,
     105,     0,   106,   107,   225,     0,   108,   109,   104,     0,
       0,     0,    47,    48,   126,   142,   105,   143,   106,   107,
     144,   145,   108,   109,   123,     0,     0,     0,   124,    81,
       0,     0,     0,   280,   126,     0,     0,     0,     0,     0,
     127,   379,   128,   129,     0,   130,     0,     0,     0,   131,
       0,   132,     0,   133,   134,   135,   136,   137,     0,     0,
       0,   138,     0,   139,   140,   141,   105,   227,   106,   107,
       2,     3,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,   105,   143,   106,   107,
     144,   145,   108,   109,   123,     0,     0,     0,   124,    81,
       0,     4,     5,     6,   126,     0,     0,     0,     0,     0,
     127,     0,   128,   129,     0,   130,     0,     7,     8,   131,
       0,   132,     0,   133,   134,   135,   136,   137,     0,     0,
       0,   138,   273,   139,   140,   141,   274,     0,   275,     0,
     225,     0,   126,     0,   257,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,   142,   105,   143,   106,   107,
     144,   145,   108,   109,     0,     0,     0,     0,     0,   138,
       0,   139,   140,   141,   225,     0,     0,   138,   333,   139,
       0,   141,   225,     0,   126,     0,   377,     0,     0,     0,
       0,     0,   126,     0,   105,   143,   106,   107,     0,     0,
     108,   109,   105,   143,   106,   107,     0,     0,   108,   109,
       0,   138,     0,   139,     0,   141,   225,     0,     0,   138,
     413,   139,     0,   141,   225,     0,   126,     0,   422,     0,
       0,     0,     0,     0,   126,     0,   105,   143,   106,   107,
       0,     0,   108,   109,   105,   143,   106,   107,     0,     0,
     108,   109,     0,   138,     0,   139,     0,   141,   225,     0,
       0,   138,   425,   139,     0,   141,   225,     0,   126,     0,
     430,     0,     0,     0,     0,     0,   126,     0,   105,   143,
     106,   107,     0,     0,   108,   109,   105,   143,   106,   107,
       0,     0,   108,   109,     0,   138,   104,   139,   238,   141,
     225,   122,     0,   138,   434,   139,     0,   141,   225,     0,
     126,     0,   449,     0,     0,     0,     0,     0,   126,     0,
     105,   143,   106,   107,   104,     0,   108,   109,   105,   143,
     106,   107,   330,     0,   108,   109,     0,   138,     0,   139,
       0,   141,   225,     0,     0,   138,   471,   139,     0,   141,
       0,     0,   126,     0,   105,     0,   106,   107,     0,     0,
     108,   109,   105,   143,   106,   107,     0,     0,   108,   109,
     105,   143,   106,   107,     0,     0,   108,   109,     0,   138,
     209,   139,   105,   141,   106,   107,     0,   350,   108,   109,
     105,     0,   106,   107,     0,     0,   108,   109,     0,     0,
       0,     0,     0,   210,   105,   143,   106,   107,   211,     0,
     108,   109,     0,   209,     0,     0,     0,     0,     0,     0,
     354,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,   220,   221,   222,   223,   210,     0,     0,  -162,
       0,   211,     0,     0,     0,     0,  -256,     0,     0,     0,
       0,     0,     0,   403,     0,   212,   213,   214,   215,   216,
     217,   218,   219,     0,     0,   220,   221,   222,   223,   210,
       0,     0,  -186,     0,   211,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,   220,   221,
     222,   223,   210,     0,     0,   -22,     0,   211,     0,     0,
       0,     0,   209,     0,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,   215,   216,   217,   218,   219,     0,
       0,   220,   221,   222,   223,   210,     0,     0,  -163,     0,
     211,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   219,     0,     0,   220,   221,   222,   223,   210,     0,
       0,  -187,     0,   211,     0,     0,     1,     2,     3,     0,
       0,     0,    26,     1,     2,     3,     0,   212,   213,   214,
     215,   216,   217,   218,   219,   209,     0,   220,   221,   222,
     223,     0,  -226,     0,  -189,     0,  -226,     0,     4,     5,
       6,     0,     0,     0,     0,     4,     5,     6,   210,     0,
       0,     0,     0,   211,     7,     8,     0,     0,   209,     0,
       0,     7,     8,     0,   329,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   219,     0,     0,   220,   221,   222,
     223,   210,     0,     0,     0,     0,   211,     0,     0,     0,
       0,   209,     0,     0,     0,     0,   340,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   219,     0,     0,
     220,   221,   222,   223,   210,     0,     0,     0,     0,   211,
       0,     0,     0,     0,  -256,     0,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     219,     0,     0,   220,   221,   222,   223,   210,     0,     0,
     349,     0,   211,     0,     0,     0,     0,  -256,     0,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,   220,   221,   222,   223,
     210,     0,     0,     0,     0,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   219,     0,     0,   220,
     221,   222,   223
};

static const short int yycheck[] =
{
      72,   241,   113,   241,    55,   199,   206,   288,    81,   288,
     291,   205,   291,    39,   291,     8,   130,     8,     1,    81,
       1,     1,    23,     5,   134,   135,     7,     1,   138,   139,
     140,     5,     1,   143,   148,    86,     5,   151,    89,   153,
      14,   155,     5,     7,     8,    14,    39,   287,     8,    12,
       1,   123,     8,     8,   126,   127,   128,   130,    59,   131,
     132,     1,   343,   344,    15,   137,    92,   129,   130,    60,
       1,   133,   272,    52,   185,   148,   138,    60,   151,    39,
     153,   143,   155,    14,    64,     1,   148,     8,    11,   151,
      64,   153,     1,   155,     8,    64,     5,    51,     7,    15,
      63,   341,    65,    66,    60,    60,    69,    70,    31,   349,
       1,   351,     8,     9,     8,   355,   188,   227,    39,     1,
     192,   402,     8,    14,   364,   406,    40,   406,   200,   406,
     240,     5,    14,    64,     1,    21,    59,   209,     5,   211,
     191,    15,     1,    39,   195,    39,     5,   219,   220,   221,
     222,   223,   224,   225,    63,     1,    65,    66,     4,     5,
      69,    70,   272,     8,   404,     5,   404,     1,   240,   407,
       4,     5,     0,    64,     5,    15,   457,   288,   288,   241,
     291,   291,    64,     1,    15,   236,   237,     5,     8,    35,
      36,    37,     4,    11,    39,    15,    63,     1,    65,    66,
       5,   273,    69,    70,     8,   399,     1,   279,     4,     5,
      14,    15,     7,     8,     7,     8,   456,    51,    52,    39,
      38,    39,    40,   295,    42,   287,   298,   337,   466,    16,
     468,     1,   346,   343,   344,   307,    23,    24,     8,    35,
      36,    37,   352,     8,     9,    63,    64,    65,    66,    14,
      55,    69,    70,   325,   326,     9,   370,     5,    63,   373,
      65,    66,     8,     9,    69,    70,   338,    15,   340,   379,
      57,     8,     5,   346,   346,    21,     1,    14,   350,   341,
       5,    31,   354,     5,   346,     7,    11,   349,     5,   351,
       7,     5,   402,   355,   345,   406,   406,   370,    15,   371,
     373,    15,   364,    24,    64,    38,    56,   421,   370,    59,
       5,   373,     5,    38,     7,    40,     5,    42,     7,     5,
     392,     8,     9,   437,   396,    46,    47,    48,    49,    15,
      63,   403,    65,    66,    21,     5,    69,    70,    63,    64,
      65,    66,   404,     5,    69,    70,     1,   457,   421,    63,
       5,    65,    66,    15,     1,    69,    70,    64,     6,   421,
       7,     8,    10,     5,   437,    13,    10,    14,    15,    13,
      63,   443,    65,    66,     1,   437,    69,    70,     5,     6,
       7,     8,     9,    10,    11,    12,   458,    64,     5,    16,
      17,    18,    19,    20,   456,    22,    23,    24,    15,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     7,     8,
       9,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     5,     1,    53,    54,    55,    56,
       6,     1,    59,    60,    15,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    16,     5,    18,     5,     6,
       7,     8,    52,    10,    11,    12,    15,     8,     9,    16,
      17,    18,    19,    20,     1,    22,    23,    24,     5,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     7,     8,
      52,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    35,    51,    53,    54,    55,    56,
      41,    42,    59,    60,    51,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    10,     8,     9,     5,     6,
       7,     8,    14,    10,    11,    12,    35,    36,    37,    16,
      17,    18,    19,    20,     1,    22,    23,    24,     5,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     7,     8,
       7,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    14,    15,    53,    54,    55,    56,
      56,    57,    59,    60,     8,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,     8,     8,     7,     5,     6,
      12,     8,     9,     5,    11,     1,     5,    14,     4,     5,
      17,    87,    19,    20,    90,    22,    69,    24,    38,    26,
      73,    28,    29,    30,    31,    32,    33,    34,    14,    15,
       8,    38,     8,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   120,   121,    53,    54,    55,    56,
      31,    10,     9,    60,    13,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    60,    47,    48,     5,     6,
       7,     8,    53,    54,    11,     9,    57,     9,    59,     9,
      17,    10,    19,    20,    13,    22,     9,    24,     1,    26,
      14,    28,    29,    30,    31,    32,    33,    34,     8,     9,
       5,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     8,     9,    53,    54,    55,    56,
      35,    36,    37,    60,     5,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,     8,     9,    52,     5,     6,
      14,     8,     9,    14,    11,     8,     9,    14,     8,     9,
      17,     5,    19,    20,    55,    22,     8,    24,    55,    26,
       8,    28,    29,    30,    31,    32,    33,    34,     8,     9,
       7,    38,     5,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     5,     5,    53,    54,    55,    56,
      35,    36,    37,    60,     1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    15,    51,    21,     5,     6,
       7,     8,   129,    14,    11,     8,   133,     5,     5,     9,
      17,   138,    19,    20,    16,    22,   143,    24,     9,    26,
       5,    28,    29,    30,    31,    32,    33,    34,    14,     5,
       5,    38,     5,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     7,     8,    53,    54,    55,    56,
      18,    14,    15,    60,     5,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,     7,     8,     5,     5,     6,
       9,     8,    14,    15,    11,     5,     5,     5,     5,    60,
      17,     5,    19,    20,     5,    22,     5,    24,    10,    26,
      36,    28,    29,    30,    31,    32,    33,    34,    29,    59,
     205,    38,   438,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   206,   285,    53,    54,    55,    56,
     353,   143,   338,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      -1,    -1,     5,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    -1,    -1,    -1,     5,     6,
      -1,    -1,     1,    10,    11,     4,     5,    -1,    -1,    -1,
      17,    -1,    19,    20,    -1,    22,    39,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    35,    36,    37,    -1,
      63,    -1,    65,    66,     1,    -1,    69,    70,     5,    -1,
      -1,    -1,    51,    52,    11,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    38,    19,    20,    -1,    22,    -1,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    63,    64,    65,    66,
       4,     5,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     1,    -1,    -1,    -1,     5,     6,
      -1,    35,    36,    37,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    19,    20,    -1,    22,    -1,    51,    52,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    38,     1,    40,    41,    42,     5,    -1,     7,    -1,
       1,    -1,    11,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,     1,    -1,    -1,    38,     5,    40,
      -1,    42,     1,    -1,    11,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    63,    64,    65,    66,    -1,    -1,
      69,    70,    63,    64,    65,    66,    -1,    -1,    69,    70,
      -1,    38,    -1,    40,    -1,    42,     1,    -1,    -1,    38,
       5,    40,    -1,    42,     1,    -1,    11,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    63,    64,    65,    66,
      -1,    -1,    69,    70,    63,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    38,    -1,    40,    -1,    42,     1,    -1,
      -1,    38,     5,    40,    -1,    42,     1,    -1,    11,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    11,    -1,    63,    64,
      65,    66,    -1,    -1,    69,    70,    63,    64,    65,    66,
      -1,    -1,    69,    70,    -1,    38,     5,    40,     7,    42,
       1,    10,    -1,    38,     5,    40,    -1,    42,     1,    -1,
      11,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      63,    64,    65,    66,     5,    -1,    69,    70,    63,    64,
      65,    66,     5,    -1,    69,    70,    -1,    38,    -1,    40,
      -1,    42,     1,    -1,    -1,    38,     5,    40,    -1,    42,
      -1,    -1,    11,    -1,    63,    -1,    65,    66,    -1,    -1,
      69,    70,    63,    64,    65,    66,    -1,    -1,    69,    70,
      63,    64,    65,    66,    -1,    -1,    69,    70,    -1,    38,
       1,    40,    63,    42,    65,    66,    -1,     8,    69,    70,
      63,    -1,    65,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    24,    63,    64,    65,    66,    29,    -1,
      69,    70,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,    60,
      -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    24,
      -1,    -1,    60,    -1,    29,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    24,    -1,    -1,    60,    -1,    29,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    24,    -1,    -1,    60,    -1,
      29,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    24,    -1,
      -1,    60,    -1,    29,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,     3,     4,     5,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,     1,    -1,    53,    54,    55,
      56,    -1,     8,    -1,    60,    -1,    12,    -1,    35,    36,
      37,    -1,    -1,    -1,    -1,    35,    36,    37,    24,    -1,
      -1,    -1,    -1,    29,    51,    52,    -1,    -1,     1,    -1,
      -1,    51,    52,    -1,     7,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    35,    36,    37,    51,    52,    84,
      85,    86,    87,    88,    89,   135,   136,     5,    91,    92,
       1,     5,     1,    52,    51,     0,     9,    87,    88,     6,
      10,    13,    93,    94,     4,    89,     8,    60,     9,    64,
       5,    89,    89,    10,    94,     1,     5,    51,    52,    88,
      95,    96,    97,    98,    99,   100,   135,   136,    10,    13,
       5,    93,    92,     5,     7,    91,    93,    93,    10,    64,
       1,     5,    14,    64,   135,   135,     1,    60,   135,   135,
       1,     6,   106,     5,    51,    52,   100,   136,     5,   100,
     135,    95,    64,     7,     5,    15,   101,   102,   103,   104,
     105,     5,   101,     1,     5,    63,    65,    66,    69,    70,
     141,   153,   154,   155,   156,     5,     7,   101,    52,    51,
      51,    52,    10,     1,     5,    10,    11,    17,    19,    20,
      22,    26,    28,    30,    31,    32,    33,    34,    38,    40,
      41,    42,    62,    64,    67,    68,    90,   106,   107,   108,
     109,   111,   113,   114,   115,   116,   117,   118,   119,   120,
     123,   124,   125,   127,   128,   129,   130,   131,   132,   134,
     137,   138,   139,   140,   141,   142,   143,   146,   147,   148,
     149,   150,   151,   152,   153,   155,     1,     5,    14,   106,
       5,   100,    14,   106,     5,   100,     7,    91,     7,     8,
      14,    15,     5,    15,     7,     8,     8,     7,     7,     1,
      24,    29,    43,    44,    45,    46,    47,    48,    49,    50,
      53,    54,    55,    56,   157,     1,     9,    64,   146,     1,
       7,     1,     7,     5,     5,     5,   100,   100,     7,   153,
       1,     8,     9,    55,    60,    12,   144,   145,   153,   153,
     153,     5,   119,   141,   108,   153,   153,     5,   119,    90,
      55,    90,     1,     5,   133,   153,     5,    39,    90,   119,
      90,    90,    38,     1,     5,     7,    90,   119,   150,     8,
      10,   108,   108,   108,   108,     8,     9,     8,    14,    60,
       9,    14,     5,     1,   153,    14,   106,   153,    14,   106,
       7,     5,    15,   103,   153,     1,    15,    14,     5,     5,
     103,   104,     5,   102,   105,   153,   153,   153,   153,   153,
     153,   153,   153,     5,     1,    14,    14,   106,   106,     7,
       5,    90,   153,     5,   117,   137,     5,    55,     8,    12,
       6,     8,     9,    21,    21,    23,    59,   121,   122,    27,
       8,     8,    55,     8,     8,     8,    39,    39,    39,    40,
       5,    90,   102,     7,     8,     1,     7,     7,     7,   153,
      16,    18,   110,   112,     5,   118,     5,     5,   137,    38,
      90,   126,   143,   146,   147,     5,   126,   153,   153,    15,
       5,    15,    14,    15,     1,   153,    14,     1,     1,     8,
     153,   153,    21,     8,     8,     9,    14,     8,     9,    60,
      90,   145,   153,     5,     5,    90,   147,    90,   147,   106,
     108,   153,     5,   137,   153,     5,    90,   133,     1,   153,
       5,    39,    39,    39,     5,   108,   153,    16,   108,     9,
       1,     5,   153,    14,   153,     5,    90,   147,   153,     5,
     137,     5,   126,     5,   117,     5,     8,    21,     1,   108,
      39,     7,   108,   110,     5,   153,     8,     9,     8,     9,
       9,     5,    90,   147,   153,     5,     5,     5,     5,     5,
       9,     9,    60,     9,     5,     5,     5,    60
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
#line 101 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() <<"prgram : program unit\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						;}
    break;

  case 3:
#line 108 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					;}
    break;

  case 4:
#line 111 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							;}
    break;

  case 5:
#line 119 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";;}
    break;

  case 6:
#line 121 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: import_stmt class_decl\n";;}
    break;

  case 7:
#line 122 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"unit: class_decl\n";;}
    break;

  case 8:
#line 125 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: class_h class_body\n"; ;}
    break;

  case 9:
#line 126 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: storage modef class_h class_body\n"; ;}
    break;

  case 10:
#line 127 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: STATIC FINAL class_h class_body\n"; ;}
    break;

  case 11:
#line 128 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_decl: FINAL STATIC class_h class_body\n"; ;}
    break;

  case 12:
#line 131 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[0].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
					;}
    break;

  case 13:
#line 136 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
								(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
					;}
    break;

  case 14:
#line 142 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-2].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								;}
    break;

  case 15:
#line 147 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[-1].r.colNum)+1)); 
									(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
								t=(yyval.type);
								inhertance_list.clear();
								acc_mod="";
								;}
    break;

  case 16:
#line 153 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-3].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													inhertance_list.clear();
											;}
    break;

  case 17:
#line 158 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack((yyvsp[-5].r.lineNum),(yyvsp[-1].r.colNum)+1));
													(yyval.type)=p->createType((yyvsp[-4].r.strVal),inhertance_list,acc_mod, yylval.r.lineNum, yylval.r.colNum,false);
													t=(yyval.type);
													acc_mod="";
													inhertance_list.clear();
											;}
    break;

  case 18:
#line 164 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {							
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected class name","");
		;}
    break;

  case 19:
#line 169 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected Reserved word","");
							 ;}
    break;

  case 20:
#line 174 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									colonStack.push(new ColonStack((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
									err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected Reserved word","");
						 ;}
    break;

  case 21:
#line 181 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr_list COMMA expr\n";;}
    break;

  case 22:
#line 182 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr_list: expr %prec stmt_1\n";;}
    break;

  case 23:
#line 185 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												;}
    break;

  case 24:
#line 192 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							;}
    break;

  case 25:
#line 201 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									temp_id=temp_id+"."+(yyvsp[0].r.strVal);
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								;}
    break;

  case 26:
#line 205 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					temp_id=temp_id+(yyvsp[0].r.strVal);
					Streams::verbose()<<"unit_import: ID\n";

				;}
    break;

  case 27:
#line 213 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								(yyval.type)=p->finishTypeDeclaration(t);
							;}
    break;

  case 28:
#line 217 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										(yyval.type)=p->finishTypeDeclaration(t);
									;}
    break;

  case 29:
#line 220 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 30:
#line 226 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						(yyval.type)=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  ;}
    break;

  case 31:
#line 235 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: dm_list DEF dm\n";;}
    break;

  case 32:
#line 236 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm_list: DEF dm\n";;}
    break;

  case 33:
#line 239 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";;}
    break;

  case 34:
#line 240 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	method_declaration\n";;}
    break;

  case 35:
#line 241 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dm:	class_decl\n";;}
    break;

  case 36:
#line 242 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   ;}
    break;

  case 37:
#line 248 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
									v=(yyval.var);
									acc_mod="";
									;}
    break;

  case 38:
#line 254 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID\n";;}
    break;

  case 39:
#line 255 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 40:
#line 259 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
													acc_mod="";
													;}
    break;

  case 41:
#line 264 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef ID ASSIGN expr\n";;}
    break;

  case 42:
#line 265 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										(yyval.var)=p->addVariableToCurrentScope((yyvsp[-2].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
													v=(yyval.var);
										;}
    break;

  case 43:
#line 269 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID\n";;}
    break;

  case 44:
#line 270 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID\n";;}
    break;

  case 45:
#line 271 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: access_modef storage_modef ID ASSIGN expr\n";;}
    break;

  case 46:
#line 272 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: storage_modef access_modef ID ASSIGN expr\n";;}
    break;

  case 47:
#line 273 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 48:
#line 274 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";;}
    break;

  case 49:
#line 275 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"UN Expected IDENTIFIER ","");
										  ;}
    break;

  case 50:
#line 279 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)-strlength((yyvsp[0].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"UN Expected IDENTIFIER ","");						
						;}
    break;

  case 51:
#line 285 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 52:
#line 286 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";;}
    break;

  case 53:
#line 287 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef method_h block_stmt\n";;}
    break;

  case 54:
#line 288 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: access_modef storage_modef method_h block_stmt\n";;}
    break;

  case 55:
#line 289 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: storage_modef access_modef method_h block_stmt\n";;}
    break;

  case 56:
#line 290 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";;}
    break;

  case 57:
#line 291 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";;}
    break;

  case 58:
#line 294 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {ss=true;;}
    break;

  case 59:
#line 295 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {ff=true;;}
    break;

  case 60:
#line 297 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 61:
#line 298 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back((yyvsp[-1].r.strVal));testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-3].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 62:
#line 299 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, (yyvsp[-2].r.strVal),parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();;}
    break;

  case 63:
#line 300 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 64:
#line 304 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-3].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-1,"Expected IDENTIFIER ","");
									  ;}
    break;

  case 65:
#line 308 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 66:
#line 312 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[-2].r.colNum)+1<<endl;
												err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)+1,"Expected '(' ","");
											   ;}
    break;

  case 67:
#line 316 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 ;}
    break;

  case 68:
#line 320 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<(yyvsp[0].r.colNum)+1<<endl;
														err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[0].r.colNum)+1,"Expected ')' ","");
													 ;}
    break;

  case 69:
#line 328 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list\n";;}
    break;

  case 70:
#line 329 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	default_args_list\n";;}
    break;

  case 71:
#line 330 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";;}
    break;

  case 72:
#line 332 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA arg\n";;}
    break;

  case 73:
#line 333 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 74:
#line 334 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 75:
#line 335 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back((yyvsp[-2].r.strVal)); parameters.push_back((yyvsp[0].r.strVal));;}
    break;

  case 76:
#line 336 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"args_list: arg \n";;}
    break;

  case 77:
#line 339 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					;}
    break;

  case 78:
#line 345 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr((yyvsp[0].r.strVal));
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 79:
#line 349 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
							err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))," Un Expected '*' ","");
						;}
    break;

  case 80:
#line 353 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Un Expected '**' ","");
							 ;}
    break;

  case 81:
#line 360 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";;}
    break;

  case 82:
#line 361 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_args_list: default_arg \n";;}
    break;

  case 83:
#line 362 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 84:
#line 366 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														;}
    break;

  case 85:
#line 372 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back((yyvsp[-2].r.strVal));;}
    break;

  case 86:
#line 373 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									;}
    break;

  case 87:
#line 379 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr((yyvsp[-2].r.strVal));
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);;}
    break;

  case 88:
#line 383 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<(yyvsp[-5].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-5].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))," Un Expected '**' ","");
										;}
    break;

  case 89:
#line 387 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
											err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))," Un Expected '*' ","");
										;}
    break;

  case 90:
#line 393 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"COLON  END \n";;}
    break;

  case 91:
#line 394 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"block_stmt: COLON stmt_list END \n";;}
    break;

  case 92:
#line 395 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlength((yyvsp[-1].r.strVal)),"Expected ':' ","");			 
						;}
    break;

  case 93:
#line 402 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt_list stmt \n";;}
    break;

  case 94:
#line 403 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt_list:	stmt \n";;}
    break;

  case 95:
#line 406 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt: 		if_stmt\n";;}
    break;

  case 96:
#line 407 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	while_stmt\n";;}
    break;

  case 97:
#line 408 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	for_stmt\n";;}
    break;

  case 98:
#line 409 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	try_stmt\n";;}
    break;

  case 99:
#line 410 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	with_stmt\n";;}
    break;

  case 100:
#line 411 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	block_stmt\n";;}
    break;

  case 101:
#line 412 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	simple_stmt_list\n";;}
    break;

  case 102:
#line 413 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID SEMICOLON\n";;}
    break;

  case 103:
#line 414 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";;}
    break;

  case 104:
#line 415 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 105:
#line 416 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";;}
    break;

  case 106:
#line 419 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt\n";;}
    break;

  case 107:
#line 420 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";;}
    break;

  case 108:
#line 421 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";;}
    break;

  case 109:
#line 422 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";;}
    break;

  case 110:
#line 425 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";;}
    break;

  case 111:
#line 426 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_stmt:	elif_header stmt\n";;}
    break;

  case 112:
#line 429 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"if_header:	IF expr \n";;}
    break;

  case 113:
#line 432 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"elif_header:	ELIF expr \n";;}
    break;

  case 114:
#line 435 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_stmt: while_header stmt\n";;}
    break;

  case 115:
#line 440 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"while_header: WHILE expr \n";;}
    break;

  case 116:
#line 441 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
						err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'while' ","");
					 ;}
    break;

  case 117:
#line 447 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_stmt: 	for_header stmt\n";;}
    break;

  case 118:
#line 450 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";;}
    break;

  case 119:
#line 451 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";;}
    break;

  case 120:
#line 452 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";;}
    break;

  case 121:
#line 453 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";;}
    break;

  case 122:
#line 454 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";;}
    break;

  case 123:
#line 455 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";;}
    break;

  case 124:
#line 456 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 125:
#line 460 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'for' ","");
								;}
    break;

  case 126:
#line 467 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import_list COMMA import\n";;}
    break;

  case 127:
#line 468 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA import_list \n";;}
    break;

  case 128:
#line 469 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID \n";;}
    break;

  case 129:
#line 470 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";;}
    break;

  case 130:
#line 471 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";;}
    break;

  case 131:
#line 472 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";;}
    break;

  case 132:
#line 473 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";;}
    break;

  case 133:
#line 474 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import_list:	import\n";;}
    break;

  case 134:
#line 478 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import: import DOT ID\n";;}
    break;

  case 135:
#line 479 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"import:	ID DOT ID DOT ID;";}
    break;

  case 136:
#line 483 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA target\n";;}
    break;

  case 137:
#line 484 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";;}
    break;

  case 138:
#line 485 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target_list COMMA ID\n";;}
    break;

  case 139:
#line 486 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";;}
    break;

  case 140:
#line 487 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	ID COMMA target\n";;}
    break;

  case 141:
#line 488 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target_list:	target\n";;}
    break;

  case 142:
#line 491 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";;}
    break;

  case 143:
#line 492 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";;}
    break;

  case 144:
#line 495 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";;}
    break;

  case 145:
#line 498 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";;}
    break;

  case 146:
#line 499 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";;}
    break;

  case 147:
#line 502 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr \n";;}
    break;

  case 148:
#line 503 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"with_stmt:	WITH expr AS target \n";;}
    break;

  case 149:
#line 506 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	expr_list\n";;}
    break;

  case 150:
#line 507 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";;}
    break;

  case 151:
#line 508 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";;}
    break;

  case 152:
#line 510 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	PASS\n";;}
    break;

  case 153:
#line 511 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";;}
    break;

  case 154:
#line 512 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";;}
    break;

  case 155:
#line 513 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";;}
    break;

  case 156:
#line 514 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";;}
    break;

  case 157:
#line 515 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";;}
    break;

  case 158:
#line 516 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	BREAK\n";;}
    break;

  case 159:
#line 517 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";;}
    break;

  case 160:
#line 518 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	import_list\n";;}
    break;

  case 161:
#line 519 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";;}
    break;

  case 162:
#line 522 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";;}
    break;

  case 163:
#line 523 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";;}
    break;

  case 164:
#line 525 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : expr_list\n";;}
    break;

  case 165:
#line 526 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : parenth_form\n";;}
    break;

  case 166:
#line 527 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : list_display\n";;}
    break;

  case 167:
#line 528 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"left_assignment_side : dict_display\n";;}
    break;

  case 168:
#line 531 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";;}
    break;

  case 169:
#line 532 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";;}
    break;

  case 170:
#line 533 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";;}
    break;

  case 171:
#line 539 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL target_list\n";;}
    break;

  case 172:
#line 540 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";;}
    break;

  case 173:
#line 541 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"del_stmt:	DEL ID\n";;}
    break;

  case 174:
#line 544 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN\n";;}
    break;

  case 175:
#line 545 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"return_stmt:	RETURN expr_list\n";;}
    break;

  case 176:
#line 548 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_stmt:		yield_expression\n";;}
    break;

  case 177:
#line 551 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt: PRINT expr_list\n";;}
    break;

  case 178:
#line 552 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";;}
    break;

  case 179:
#line 553 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
								err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal)),"Expected reserved word 'print' ","");
								;}
    break;

  case 180:
#line 557 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal))<<endl;
												err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlength((yyvsp[-3].r.strVal)),"Expected reserved word 'print' ","");
												;}
    break;

  case 181:
#line 562 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"global_stmt :GLOBAL id_list\n";;}
    break;

  case 182:
#line 563 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+(yyvsp[-1].r.strVal)<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected IDENTIFIER ","");
									   ;}
    break;

  case 183:
#line 569 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list: 	ID COMMA id_list\n";;}
    break;

  case 184:
#line 570 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_list:	ID\n";;}
    break;

  case 185:
#line 573 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt: RAISE\n";;}
    break;

  case 186:
#line 574 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr\n";;}
    break;

  case 187:
#line 575 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";;}
    break;

  case 188:
#line 576 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<(yyvsp[-3].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
													err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected expression ","");
												 ;}
    break;

  case 189:
#line 580 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<(yyvsp[-4].r.lineNum)<<" Column No:"<<(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[-4].r.colNum)-strlength((yyvsp[-4].r.strVal)),"Expected reserved word 'raise' ","");
												 ;}
    break;

  case 190:
#line 586 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;;}
    break;

  case 191:
#line 587 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
    break;

  case 192:
#line 588 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";;}
    break;

  case 193:
#line 592 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"storage_modef: STATIC\n"; ss=true;;}
    break;

  case 194:
#line 593 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"storage_modef: FINAL\n"; ff=true;;}
    break;

  case 195:
#line 595 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";;}
    break;

  case 196:
#line 596 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";;}
    break;

  case 197:
#line 597 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";;}
    break;

  case 198:
#line 598 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";;}
    break;

  case 199:
#line 599 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";;}
    break;

  case 200:
#line 600 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";;}
    break;

  case 201:
#line 601 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	attributeref\n";;}
    break;

  case 202:
#line 602 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"target: 	subscription\n";;}
    break;

  case 203:
#line 605 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: primary DOT ID\n";;}
    break;

  case 204:
#line 606 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"attributeref: ID DOT ID\n";;}
    break;

  case 205:
#line 609 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary: 	atom\n";;}
    break;

  case 206:
#line 610 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	attributeref\n";;}
    break;

  case 207:
#line 611 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	subscription\n";;}
    break;

  case 208:
#line 612 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"primary:	call\n";;}
    break;

  case 209:
#line 615 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	enclosure\n";;}
    break;

  case 210:
#line 616 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"atom:	literal\n";	;}
    break;

  case 211:
#line 619 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:    STRING_VALUE\n";;}
    break;

  case 212:
#line 620 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	INTEGER_VALUE\n";;}
    break;

  case 213:
#line 621 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	LONG_VALUE\n";;}
    break;

  case 214:
#line 622 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	FLOAT_VALUE\n";;}
    break;

  case 215:
#line 623 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"literal:	CHAR_VALUE\n";;}
    break;

  case 216:
#line 626 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	parenth_form\n";;}
    break;

  case 217:
#line 627 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	list_display\n";;}
    break;

  case 218:
#line 628 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	string_conversion\n";;}
    break;

  case 219:
#line 629 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	yield_atom\n";;}
    break;

  case 220:
#line 630 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"enclosure:	dict_display\n";;}
    break;

  case 221:
#line 633 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";;}
    break;

  case 222:
#line 634 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";;}
    break;

  case 223:
#line 636 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";;}
    break;

  case 224:
#line 637 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";;}
    break;

  case 225:
#line 638 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum_list: key_datum\n";;}
    break;

  case 226:
#line 640 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"key_datum : expr COLON expr\n";;}
    break;

  case 227:
#line 643 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 228:
#line 644 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";;}
    break;

  case 229:
#line 645 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)-1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-1,"Expected '(' ","");
								;}
    break;

  case 230:
#line 649 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-1].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.colNum)+1<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)+1,"Expected ')' ","");
										;}
    break;

  case 231:
#line 653 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlength((yyvsp[-2].r.strVal))," Expected '(' ","");
												 ;}
    break;

  case 232:
#line 657 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue((yyvsp[-2].r.lineNum),yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 ;}
    break;

  case 233:
#line 664 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 234:
#line 665 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";;}
    break;

  case 235:
#line 668 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 236:
#line 671 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 237:
#line 674 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD\n";;}
    break;

  case 238:
#line 675 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 239:
#line 678 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 240:
#line 682 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 241:
#line 683 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 242:
#line 687 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	condition\n";;}
    break;

  case 243:
#line 688 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	literal\n";;}
    break;

  case 244:
#line 689 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	expr op expr\n";;}
    break;

  case 245:
#line 690 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"expr:	long_id\n";;}
    break;

  case 246:
#line 691 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<(yyvsp[-2].r.lineNum)<<" Column No:"<<(yyvsp[-1].r.lineNum)-strlength((yyvsp[-1].r.strVal))<<endl;
										err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Expected operand ","");
									  ;}
    break;

  case 247:
#line 697 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr EQUAL expr\n";;}
    break;

  case 248:
#line 698 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 249:
#line 699 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 250:
#line 700 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 251:
#line 701 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 252:
#line 702 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 253:
#line 704 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	ID\n";;}
    break;

  case 254:
#line 705 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";;}
    break;

  case 255:
#line 714 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot\n";;}
    break;

  case 256:
#line 715 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"long_id:	id_dot parenth_form\n";;}
    break;

  case 257:
#line 718 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :PLUS\n";;}
    break;

  case 258:
#line 719 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MINUS\n";;}
    break;

  case 259:
#line 720 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :DIV\n";;}
    break;

  case 260:
#line 721 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MOD\n";;}
    break;

  case 261:
#line 722 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :OR\n";;}
    break;

  case 262:
#line 723 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :NOT\n";;}
    break;

  case 263:
#line 724 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :MULTI\n";;}
    break;

  case 264:
#line 725 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"
    {Streams::verbose()<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3588 "yacc.cpp"

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


#line 727 "C:\\Users\\Luay AL Assadi\\Documents\\Visual Studio 2013\\Projects\\compiler-project\\yacc.y"

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

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
     SEMI_COLUMN = 261,
     CLOSE_S = 262,
     COMMA = 263,
     DOT = 264,
     _BEGIN = 265,
     END = 266,
     DEF = 267,
     ASSIGN = 268,
     STAR = 269,
     ELSE = 270,
     IF = 271,
     ELIF = 272,
     WHILE = 273,
     FOR = 274,
     IN = 275,
     TRY = 276,
     FINALLY = 277,
     MULTI = 278,
     EXPECT = 279,
     WITH = 280,
     AS = 281,
     ASSERT = 282,
     EQUAL = 283,
     DEL = 284,
     RETURN = 285,
     PRINT = 286,
     GLOBAL = 287,
     RAISE = 288,
     PRIVATE = 289,
     PUBLIC = 290,
     PROTECTED = 291,
     OPEN_D = 292,
     CLOSE_D = 293,
     RE_COT = 294,
     YIELD = 295,
     PRIMARY = 296,
     OR = 297,
     AND = 298,
     NOT = 299,
     PLUS = 300,
     MINUS = 301,
     DIV = 302,
     MOD = 303,
     NOT_EQUAL = 304,
     LESS_THAN = 305,
     LESS_OR_EQUAL = 306,
     MORE_THAN = 307,
     MORE_OR_EQUAL = 308,
     TRUE = 309,
     FALSE = 310,
     XOR = 311,
     XNOT = 312,
     EXCEPT = 313,
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
     FLOOR = 324,
     stmt_1_2 = 325,
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
#define SEMI_COLUMN 261
#define CLOSE_S 262
#define COMMA 263
#define DOT 264
#define _BEGIN 265
#define END 266
#define DEF 267
#define ASSIGN 268
#define STAR 269
#define ELSE 270
#define IF 271
#define ELIF 272
#define WHILE 273
#define FOR 274
#define IN 275
#define TRY 276
#define FINALLY 277
#define MULTI 278
#define EXPECT 279
#define WITH 280
#define AS 281
#define ASSERT 282
#define EQUAL 283
#define DEL 284
#define RETURN 285
#define PRINT 286
#define GLOBAL 287
#define RAISE 288
#define PRIVATE 289
#define PUBLIC 290
#define PROTECTED 291
#define OPEN_D 292
#define CLOSE_D 293
#define RE_COT 294
#define YIELD 295
#define PRIMARY 296
#define OR 297
#define AND 298
#define NOT 299
#define PLUS 300
#define MINUS 301
#define DIV 302
#define MOD 303
#define NOT_EQUAL 304
#define LESS_THAN 305
#define LESS_OR_EQUAL 306
#define MORE_THAN 307
#define MORE_OR_EQUAL 308
#define TRUE 309
#define FALSE 310
#define XOR 311
#define XNOT 312
#define EXCEPT 313
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
#define FLOOR 324
#define stmt_1_2 325
#define stmt_8 326
#define stmt_7 327
#define stmt_6 328
#define stmt_5 329
#define stmt_4 330
#define stmt_3 331
#define stmt_2 332
#define stmt_1 333




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

	#include <iostream>
	#include <FlexLexer.h>
	#include <stack>
	#include "c:\users\amer-hy\source\repos\compiler-project - Copy - Copy\compilerproject\myparser.h"
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	char* i_type;
	char* acc_mod;
	Type* t;
	Variable* v;
	vector<char *>inhertance_list;
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
#line 31 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
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
#line 284 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 296 "yacc.cpp"

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1180

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  62
/* YYNRULES -- Number of rules. */
#define YYNRULES  215
/* YYNRULES -- Number of states. */
#define YYNSTATES  373

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
       0,     0,     3,     6,     9,    11,    15,    19,    25,    27,
      30,    34,    40,    47,    50,    54,    57,    60,    64,    66,
      70,    72,    76,    82,    88,    92,   100,   106,   110,   116,
     120,   122,   126,   132,   134,   137,   141,   144,   146,   148,
     150,   152,   155,   157,   162,   166,   170,   173,   176,   183,
     190,   196,   202,   208,   213,   219,   224,   230,   236,   242,
     246,   250,   254,   258,   260,   263,   267,   272,   275,   279,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   301,
     306,   310,   316,   320,   323,   327,   330,   334,   337,   341,
     345,   348,   351,   356,   363,   368,   373,   377,   383,   387,
     393,   397,   399,   404,   409,   414,   419,   423,   427,   432,
     436,   442,   444,   446,   448,   450,   452,   454,   456,   458,
     460,   462,   464,   466,   468,   471,   476,   480,   486,   490,
     494,   500,   504,   507,   512,   515,   517,   520,   522,   525,
     530,   533,   536,   538,   542,   544,   546,   549,   554,   558,
     560,   562,   564,   568,   574,   578,   582,   588,   592,   594,
     596,   600,   604,   606,   608,   610,   612,   614,   616,   618,
     620,   622,   624,   626,   628,   630,   632,   634,   638,   641,
     644,   646,   649,   653,   657,   661,   663,   666,   671,   676,
     681,   683,   685,   689,   691,   695,   699,   703,   707,   711,
     715,   718,   722,   727,   732,   736,   742,   749,   756,   758,
     760,   762,   764,   766,   768,   770
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      80,     0,    -1,    81,     9,    -1,    81,    82,    -1,    82,
      -1,     3,    87,    83,    -1,     3,     5,    83,    -1,     3,
       5,     9,     5,    83,    -1,    83,    -1,    84,    89,    -1,
       4,     5,     6,    -1,     4,     5,    62,     7,     6,    -1,
       4,     5,    62,    85,     7,     6,    -1,     4,     6,    -1,
       5,     5,     6,    -1,     5,     6,    -1,     4,     5,    -1,
      85,     8,     5,    -1,     5,    -1,    86,     8,   137,    -1,
     137,    -1,    87,     8,    88,    -1,     5,     9,     5,     8,
      88,    -1,    87,     8,     5,     9,     5,    -1,    87,     8,
       5,    -1,     5,     9,     5,     8,     5,     9,     5,    -1,
       5,     9,     5,     8,     5,    -1,     5,     8,    88,    -1,
       5,     8,     5,     9,     5,    -1,     5,     8,     5,    -1,
      88,    -1,    88,     9,     5,    -1,     5,     9,     5,     9,
       5,    -1,    11,    -1,    90,    11,    -1,    90,    12,    91,
      -1,    12,    91,    -1,    91,    -1,    92,    -1,    93,    -1,
      83,    -1,   123,     5,    -1,     5,    -1,   123,     5,    13,
     137,    -1,     5,    13,   137,    -1,   123,     5,     5,    -1,
       5,     5,    -1,    94,    97,    -1,   123,     5,    62,    95,
       7,     6,    -1,   123,     5,    62,     5,     7,     6,    -1,
       5,    62,    95,     7,     6,    -1,     5,    62,     5,     7,
       6,    -1,   123,     5,    62,     7,     6,    -1,     5,    62,
       7,     6,    -1,   123,    62,    95,     7,     6,    -1,    62,
      95,     7,     6,    -1,   123,     5,    95,     7,     6,    -1,
     123,     5,    62,    95,     6,    -1,   123,     5,    62,    95,
       7,    -1,    95,     8,    96,    -1,     5,     8,    96,    -1,
      95,     8,     5,    -1,     5,     8,     5,    -1,    96,    -1,
      14,     5,    -1,     5,    13,   137,    -1,    14,     5,    13,
     137,    -1,    10,    11,    -1,    10,    98,    11,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   104,    -1,   106,    -1,
     109,    -1,   112,    -1,    97,    -1,   113,    -1,   102,    99,
      -1,   102,    99,    15,    99,    -1,   102,    99,   101,    -1,
     102,    99,   101,    15,    99,    -1,   103,    99,   101,    -1,
     103,    99,    -1,    16,   137,     6,    -1,    16,   137,    -1,
      17,   137,     6,    -1,   105,    99,    -1,    18,   137,     6,
      -1,     5,   137,     6,    -1,    18,   137,    -1,   107,    99,
      -1,    19,   108,    20,    86,    -1,    19,     5,     8,     5,
      20,    86,    -1,    19,     5,    20,    86,    -1,     5,   108,
      20,    86,    -1,   108,     8,   124,    -1,     5,     8,     5,
       8,   124,    -1,   108,     8,     5,    -1,     5,     8,     5,
       8,     5,    -1,     5,     8,   124,    -1,   124,    -1,    21,
       6,    99,   111,    -1,    21,     6,    99,   110,    -1,    21,
       6,    97,   111,    -1,    21,     6,    97,   110,    -1,    22,
       6,    97,    -1,    58,     6,    99,    -1,    58,     6,   137,
      99,    -1,    25,   137,     6,    -1,    25,   137,    26,   124,
       6,    -1,    86,    -1,   114,    -1,   115,    -1,    60,    -1,
     116,    -1,   119,    -1,   117,    -1,   118,    -1,   122,    -1,
      65,    -1,    66,    -1,    87,    -1,   120,    -1,    27,   137,
      -1,    27,   137,     8,   137,    -1,   108,    28,    86,    -1,
       5,     8,     5,    28,    86,    -1,     5,    28,    86,    -1,
     108,    28,   134,    -1,     5,     8,     5,    28,   134,    -1,
       5,    28,   134,    -1,    29,   108,    -1,    29,     5,     8,
       5,    -1,    29,     5,    -1,    30,    -1,    30,    86,    -1,
     134,    -1,    31,    86,    -1,    31,    52,    52,    86,    -1,
       5,    86,    -1,    32,   121,    -1,    32,    -1,     5,     8,
     121,    -1,     5,    -1,    33,    -1,    33,   137,    -1,    33,
     137,     8,   137,    -1,    33,   137,     8,    -1,    34,    -1,
      35,    -1,    36,    -1,    62,   108,     7,    -1,    62,     5,
       8,     5,     7,    -1,    62,     5,     7,    -1,    37,   108,
      38,    -1,    37,     5,     8,     5,    38,    -1,    37,     5,
      38,    -1,   125,    -1,   135,    -1,   126,     9,     5,    -1,
       5,     9,     5,    -1,   127,    -1,   125,    -1,   135,    -1,
     136,    -1,   128,    -1,   129,    -1,    63,    -1,    64,    -1,
      67,    -1,    68,    -1,    61,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,    62,   137,     7,    -1,    62,     7,
      -1,    62,   137,    -1,    62,    -1,   137,     7,    -1,    37,
      86,    38,    -1,    39,    86,    39,    -1,    62,   134,     7,
      -1,    40,    -1,    40,    86,    -1,    41,    37,    86,    38,
      -1,    41,    37,    95,    38,    -1,    41,    37,     5,    38,
      -1,   138,    -1,   128,    -1,   137,   140,   137,    -1,   139,
      -1,   137,    28,   137,    -1,   137,    49,   137,    -1,   137,
      50,   137,    -1,   137,    51,   137,    -1,   137,    52,   137,
      -1,   137,    53,   137,    -1,     5,    62,    -1,     5,    62,
       7,    -1,     5,    62,    86,     7,    -1,     5,    62,   137,
       7,    -1,   139,     9,     5,    -1,   139,     9,     5,    62,
       7,    -1,   139,     9,     5,    62,    86,     7,    -1,   139,
       9,     5,    62,   137,     7,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    42,    -1,    44,    -1,    23,    -1,
      43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    69,    69,    78,    79,    82,    83,    84,    85,    90,
      94,   100,   106,   113,   117,   120,   123,   128,   129,   132,
     133,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     147,   159,   160,   164,   165,   168,   170,   172,   181,   182,
     183,   186,   190,   193,   197,   200,   201,   204,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   221,
     222,   223,   224,   225,   228,   229,   230,   233,   234,   237,
     238,   241,   242,   243,   244,   245,   246,   247,   250,   251,
     252,   253,   256,   257,   260,   261,   264,   267,   272,   273,
     274,   277,   280,   281,   282,   283,   286,   287,   288,   289,
     290,   291,   294,   295,   296,   297,   300,   303,   304,   307,
     308,   311,   312,   313,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   327,   328,   331,   332,   333,   334,
     335,   336,   339,   340,   341,   344,   345,   348,   351,   352,
     353,   355,   356,   359,   360,   363,   364,   365,   366,   369,
     370,   371,   374,   375,   376,   377,   378,   379,   380,   381,
     384,   385,   388,   389,   390,   391,   394,   395,   398,   399,
     400,   401,   402,   405,   406,   407,   408,   411,   412,   413,
     414,   415,   419,   422,   425,   428,   429,   432,   435,   436,
     439,   440,   441,   442,   446,   447,   448,   449,   450,   451,
     454,   455,   456,   457,   458,   459,   460,   461,   464,   465,
     466,   467,   468,   469,   470,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "_BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI",
  "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT",
  "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D",
  "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV",
  "MOD", "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "XOR", "XNOT", "EXCEPT", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "FLOOR", "stmt_1_2", "stmt_8",
  "stmt_7", "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1",
  "$accept", "program", "units", "unit", "class_decl", "class_h",
  "inherted_list", "expr_list", "import_list", "import", "class_body",
  "dm_list", "dm", "var_declaration", "method_declaration", "method_h",
  "args_list", "arg", "block_stmt", "stmt_list", "stmt", "if_stmt",
  "elif_stmt", "if_header", "elif_header", "while_stmt", "while_header",
  "for_stmt", "for_header", "target_list", "try_stmt", "finally_stmt",
  "except_stmt", "with_stmt", "simple_stmt_list", "assert_stmt",
  "assignment_stmt", "del_stmt", "return_stmt", "yield_stmt", "print_stmt",
  "global_stmt", "id_list", "raise_stmt", "access_modef", "target",
  "attributeref", "primary", "atom", "literal", "enclosure",
  "parenth_form", "list_display", "string_conversion", "yield_atom",
  "yield_expression", "subscription", "call", "expr", "condition",
  "long_id", "op", 0
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
       0,    79,    80,    81,    81,    82,    82,    82,    82,    83,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   101,   101,   102,   102,   103,   104,   105,   105,
     105,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   109,   109,   109,   109,   110,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   116,   116,   116,   117,   117,   118,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   127,   127,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   131,   132,   133,   134,   134,   135,   136,   136,
     137,   137,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     5,     1,     2,
       3,     5,     6,     2,     3,     2,     2,     3,     1,     3,
       1,     3,     5,     5,     3,     7,     5,     3,     5,     3,
       1,     3,     5,     1,     2,     3,     2,     1,     1,     1,
       1,     2,     1,     4,     3,     3,     2,     2,     6,     6,
       5,     5,     5,     4,     5,     4,     5,     5,     5,     3,
       3,     3,     3,     1,     2,     3,     4,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     3,     2,     3,     2,     3,     2,     3,     3,
       2,     2,     4,     6,     4,     4,     3,     5,     3,     5,
       3,     1,     4,     4,     4,     4,     3,     3,     4,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     5,     3,     3,
       5,     3,     2,     4,     2,     1,     2,     1,     2,     4,
       2,     2,     1,     3,     1,     1,     2,     4,     3,     1,
       1,     1,     3,     5,     3,     3,     5,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       1,     2,     3,     3,     3,     1,     2,     4,     4,     4,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     4,     3,     5,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     0,     0,     4,     8,     0,     0,
       0,    30,    16,    13,     0,    15,     1,     2,     3,    42,
      33,     0,   149,   150,   151,     0,    40,     9,     0,    37,
      38,    39,     0,     0,     0,     0,     6,     0,     5,     0,
      10,     0,    14,    46,     0,     0,    36,     0,     0,     0,
      63,    34,     0,     0,    47,    41,     0,    29,    27,     0,
      24,    21,    31,    18,     0,     0,     0,   172,   168,   169,
     170,   171,   191,    44,   190,   193,     0,     0,     0,     0,
       0,    64,     0,     0,    35,     0,    67,     0,     0,     0,
       0,     0,     0,     0,   135,     0,   142,   145,     0,     0,
     185,     0,   114,   180,   120,   121,   111,   122,    76,     0,
      70,    71,     0,    72,     0,    73,     0,     0,    74,    75,
      77,   112,   113,   115,   117,   118,   116,   123,   119,   101,
     158,     0,   162,   191,   167,   173,   174,   175,   176,   137,
     159,   165,    20,    45,     0,     0,     0,     0,     0,     0,
       0,     7,     0,    11,     0,     0,   200,   214,     0,   212,
     215,   213,   208,   209,   210,   211,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    62,    60,    65,     0,
      55,    61,    59,     0,     0,     0,     0,   200,   140,     0,
      20,    85,    90,     0,     0,     0,     0,     0,   124,   134,
     132,   136,    20,     0,   138,   144,   141,   146,     0,     0,
       0,     0,   186,     0,     0,   178,     0,     0,   179,     0,
      68,    69,    78,    87,    91,     0,     0,     0,   181,    43,
       0,     0,     0,     0,     0,    28,    26,    22,    32,    23,
      12,    17,   201,     0,    20,   194,   195,   196,   197,   198,
     199,   192,   204,    51,    50,    66,     0,     0,    29,   100,
     161,   128,   131,   201,    20,     0,    89,    84,    88,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
     148,     0,   157,   182,   155,   183,     0,     0,     0,   154,
       0,   152,   184,   177,    19,     0,     0,    80,     0,    98,
      96,   126,   129,   160,     0,    52,    57,    58,    56,    54,
       0,   202,   203,     0,     0,   161,     0,     0,     0,   203,
      95,     0,    94,    92,     0,     0,   105,   104,   103,   102,
       0,     0,   125,   133,   139,   143,   147,     0,   189,   187,
     188,     0,    79,     0,     0,    83,    49,    48,    25,   205,
       0,    20,    99,    97,    28,   127,   130,     0,     0,     0,
     110,   156,   153,    86,    81,    82,   206,   207,    93,   106,
     107,    20,   108
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,    26,     8,    65,   106,   107,    11,
      27,    28,    29,    30,    31,    32,    49,    50,   108,   109,
     110,   111,   297,   112,   298,   113,   114,   115,   116,   117,
     118,   326,   327,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   206,   128,    33,   129,   130,   131,   132,    72,
     134,   135,   136,   137,   138,   139,   140,   141,   202,    74,
      75,   171
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -171
static const short int yypact[] =
{
     383,    17,    96,   152,    35,   262,  -171,  -171,   735,   284,
     234,    65,     0,  -171,    85,  -171,  -171,  -171,  -171,    20,
    -171,   768,  -171,  -171,  -171,   200,  -171,  -171,   297,  -171,
    -171,  -171,   120,    13,   114,   137,  -171,   171,  -171,   185,
    -171,   222,  -171,    85,   300,   316,  -171,   100,   196,   309,
    -171,  -171,   768,   315,  -171,    47,   200,   199,    65,   365,
     207,    65,  -171,  -171,   218,   331,   173,  -171,  -171,  -171,
    -171,  -171,  -171,  1127,  -171,   232,   305,   244,   364,   204,
     300,   264,   276,   208,  -171,   435,  -171,   300,   300,    92,
     313,   300,   300,   531,   723,   132,   319,   723,   564,   300,
     723,   292,  -171,   223,  -171,  -171,   324,   327,  -171,   450,
    -171,  -171,   514,  -171,   514,  -171,   514,   133,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
     342,   348,  -171,   351,  -171,  -171,  -171,  -171,  -171,  -171,
     353,  -171,   960,   100,   300,   336,   387,   413,   360,   384,
     395,  -171,   398,  -171,   402,   405,   143,  -171,   300,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,   300,   300,   300,   300,
     300,   300,   407,   416,  -171,   418,   379,  -171,  1127,   300,
    -171,   379,  -171,   136,   582,   457,   243,   522,   324,    38,
     773,   836,   867,    76,    49,   960,   514,   805,  1084,   155,
     459,   324,  1127,   421,   324,   462,  -171,  1115,    42,    26,
      98,    34,   324,   235,    21,  -171,   434,   471,   991,   300,
    -171,  -171,   280,  -171,  -171,   597,   243,   479,  -171,  1127,
     377,   480,   391,   482,   486,   476,   484,    65,  -171,   476,
    -171,  -171,  -171,   449,  1022,   233,   233,   233,   233,   233,
     233,  -171,   432,  -171,  -171,  1127,   615,   490,    70,  -171,
     456,   324,  -171,   491,   929,   300,  -171,  -171,  -171,   630,
     300,   300,    81,    81,  -171,   648,   300,   663,   300,   319,
     300,   681,  -171,  -171,  -171,  -171,   164,   177,   181,  -171,
     696,  -171,  -171,  -171,  1127,   514,   300,   489,   514,    -6,
    -171,   324,  -171,  -171,   495,  -171,  -171,   499,  -171,  -171,
     501,  -171,  -171,   543,   161,  -171,   714,   502,   243,   500,
     324,   159,   324,   324,   515,   516,  -171,  -171,  -171,  -171,
      15,   517,  1127,   183,   324,  -171,  1127,   109,  -171,  -171,
    -171,    31,  -171,   898,   514,   503,  -171,  -171,   476,  -171,
     451,  1053,    -6,  -171,   106,   324,  -171,   300,   120,   514,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,   324,  -171,
    -171,   386,  -171
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -171,  -171,  -171,   520,     7,  -171,  -171,    88,   507,   -33,
    -171,  -171,   128,  -171,  -171,  -171,   -35,   178,   -30,  -171,
    -101,  -171,   189,  -171,  -171,  -171,  -171,  -171,  -171,   -66,
    -171,   253,   255,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   258,  -171,  -171,  -170,  -171,  -171,  -171,   -22,
    -171,  -171,  -171,  -171,  -171,   -98,  -171,  -171,   -44,  -171,
    -171,  -171
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -181
static const short int yytable[] =
{
      73,    58,    54,   257,    61,   217,    40,     7,   221,   142,
      78,   222,     7,   223,   259,   224,    36,    38,    55,   189,
     146,   147,     9,   194,   257,    43,    15,   200,   289,   290,
     257,   133,   210,    44,   219,    16,   178,   216,   362,   316,
     257,   190,   219,   191,   192,   195,   225,   197,   198,   195,
     281,   257,   143,   207,   142,   300,  -181,   225,   265,   218,
     144,    48,    41,   133,   283,   142,   151,   133,   142,   271,
     142,   133,   142,   285,    39,    56,   133,   156,   316,   317,
     282,   133,    45,   156,   269,   257,   259,   133,   262,   217,
     133,    42,   133,   156,   133,   273,   270,   193,   318,   259,
     229,    12,    13,   324,   156,   331,   225,   259,    79,   145,
     232,   259,   244,    80,   245,   150,   237,   316,   257,    57,
     259,   216,   246,   247,   248,   249,   250,   251,   302,    98,
      53,    99,   156,   101,  -161,   255,   284,    66,   156,   325,
     195,   225,    59,   264,   256,   257,   353,   361,    66,    46,
     242,    58,   142,    67,   103,    68,    69,    14,    15,    70,
      71,   226,   133,   277,   257,   133,   272,   316,   257,   316,
     257,   156,    79,   188,   133,   294,    60,    80,   288,   357,
      84,   195,   201,   204,   203,   219,   209,   211,   212,    83,
      62,   316,   257,    67,   342,    68,    69,   345,   156,    70,
      71,    81,   338,   133,    67,    47,    68,    69,   148,   176,
      70,    71,   195,   181,    48,   339,   152,  -181,    48,   340,
     356,   156,    48,   156,   153,   195,   156,    63,   214,    64,
     215,   195,   332,   195,   133,   156,   336,   195,     2,     3,
     286,   172,    37,   364,   243,  -181,   195,   133,    66,    48,
     174,   142,   343,   133,   142,   133,   157,   177,   370,   133,
      98,   182,    99,   100,   101,     1,     2,     3,   133,   351,
     372,    17,   195,   133,   261,   243,   133,   179,   162,   163,
     164,   165,   180,   100,    67,   103,    68,    69,     2,     3,
      70,    71,    34,    35,   133,   295,    67,   296,    68,    69,
     142,   287,    70,    71,    67,    66,    68,    69,    51,    52,
      70,    71,   173,    79,   301,   371,    82,    83,    80,   196,
      85,    76,   133,    77,   205,    53,    86,   142,   369,   213,
      48,    87,   219,    88,    89,    37,    90,   133,   154,   155,
      91,   230,    92,   231,    93,    94,    95,    96,    97,   133,
      48,  -163,    98,   320,    99,   100,   101,   227,   322,   323,
    -166,    67,  -164,    68,    69,   235,   334,    70,    71,     2,
       3,   175,    83,   149,   150,   102,    67,   103,    68,    69,
     104,   105,    70,    71,   304,    79,     1,     2,     3,   236,
      80,    85,    80,   228,   233,    83,    53,   306,   307,    83,
     238,   350,    87,   239,    88,    89,   355,    90,   240,   157,
     241,    91,   252,    92,   158,    93,    94,    95,    96,    97,
     234,    83,   253,    98,   254,    99,   100,   101,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     183,   291,   225,   184,   185,   368,   102,    67,   103,    68,
      69,   104,   105,    70,    71,    85,   311,   219,   366,   219,
      53,   220,   260,   186,   149,   150,    87,   225,    88,    89,
     279,    90,    98,   278,    99,    91,   101,    92,   292,    93,
      94,    95,    96,    97,   303,   150,   305,    98,   308,    99,
     100,   101,   309,   310,  -181,   315,    67,   187,    68,    69,
    -178,   346,    70,    71,   344,   347,   348,   354,    10,  -177,
     102,    67,   103,    68,    69,   104,   105,    70,    71,    85,
     296,   358,   359,   360,    53,    18,   328,   214,   329,   263,
      87,  -180,    88,    89,   365,    90,   199,   335,     0,    91,
       0,    92,     0,    93,    94,    95,    96,    97,    66,     0,
     349,    98,     0,    99,   100,   101,     0,     0,     0,    98,
       0,    99,   100,   101,     0,     0,     0,     0,    98,   208,
      99,     0,   101,     0,   102,    67,   103,    68,    69,   104,
     105,    70,    71,    67,   103,    68,    69,   258,     0,    70,
      71,     0,    67,   103,    68,    69,     0,     0,    70,    71,
       0,    98,   299,    99,    67,   101,    68,    69,     0,     0,
      70,    71,     0,     0,     0,     0,     0,     0,     0,    98,
     314,    99,     0,   101,     0,    67,   103,    68,    69,     0,
       0,    70,    71,     0,    98,   321,    99,     0,   101,     0,
       0,     0,     0,    67,   103,    68,    69,     0,     0,    70,
      71,     0,    98,   330,    99,     0,   101,     0,    67,   103,
      68,    69,     0,     0,    70,    71,     0,    98,   333,    99,
       0,   101,     0,     0,     0,     0,    67,   103,    68,    69,
       0,     0,    70,    71,     0,    98,   337,    99,     0,   101,
       0,    67,   103,    68,    69,     0,     0,    70,    71,     0,
      98,   341,    99,     0,   101,     0,     0,     0,     0,    67,
     103,    68,    69,     0,     0,    70,    71,     0,    98,   352,
      99,     0,   101,     0,    67,   103,    68,    69,  -181,     0,
      70,    71,     0,    98,     0,    99,     0,   101,     0,     2,
      19,     0,    67,   103,    68,    69,    20,    21,    70,    71,
       0,    98,     0,    99,     0,   101,     0,    67,   103,    68,
      69,     0,     0,    70,    71,     0,     0,     0,     0,    22,
      23,    24,     2,    19,     0,    67,   103,    68,    69,   266,
     228,    70,    71,     0,  -181,     0,  -181,  -181,     0,     0,
    -181,  -181,     0,     0,     0,     0,   157,    25,     0,     0,
       0,   158,    22,    23,    24,     0,     0,     0,     0,     0,
       0,   274,     0,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,   157,     0,
      25,   275,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   157,
       0,     0,     0,     0,   158,     0,     0,     0,     0,     0,
       0,     0,     0,   268,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     157,     0,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,     0,     0,   363,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   157,     0,     0,     0,     0,   158,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   319,     0,  -179,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   157,     0,     0,     0,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   157,     0,     0,     0,     0,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   293,     0,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   157,     0,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
       0,     0,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   157,     0,     0,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   157,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   276,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   157,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   157,     0,
       0,     0,     0,   158,     0,     0,     0,     0,     0,     0,
     157,     0,     0,     0,     0,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170
};

static const short int yycheck[] =
{
      44,    34,    32,     9,    37,   103,     6,     0,   109,    53,
      45,   112,     5,   114,   184,   116,     9,    10,     5,    85,
      55,    56,     5,    89,     9,     5,     6,    93,     7,     8,
       9,    53,    98,    13,     8,     0,    80,   103,     7,     8,
       9,    85,     8,    87,    88,    89,     8,    91,    92,    93,
       8,     9,     5,    97,    98,   225,    62,     8,    20,   103,
      13,    14,    62,    85,    38,   109,    59,    89,   112,    20,
     114,    93,   116,    39,     9,    62,    98,    62,     8,     9,
      38,   103,    62,    62,     8,     9,   256,   109,   186,   187,
     112,     6,   114,    62,   116,   196,    20,     5,    28,   269,
     144,     5,     6,    22,    62,   275,     8,   277,     8,    62,
     145,   281,   156,    13,   158,     9,   149,     8,     9,     5,
     290,   187,   166,   167,   168,   169,   170,   171,   226,    37,
      10,    39,    62,    41,    28,   179,    38,     5,    62,    58,
     184,     8,     5,   187,     8,     9,   316,    38,     5,    21,
       7,   184,   196,    61,    62,    63,    64,     5,     6,    67,
      68,    28,   184,     8,     9,   187,   196,     8,     9,     8,
       9,    62,     8,    85,   196,   219,     5,    13,   213,    20,
      52,   225,    94,    95,    52,     8,    98,    99,   100,     8,
       5,     8,     9,    61,   295,    63,    64,   298,    62,    67,
      68,     5,    38,   225,    61,     5,    63,    64,     9,     5,
      67,    68,   256,     5,    14,    38,     9,    62,    14,    38,
     318,    62,    14,    62,     6,   269,    62,     5,     5,     7,
       7,   275,   276,   277,   256,    62,   280,   281,     4,     5,
       5,     9,     8,   344,   156,    62,   290,   269,     5,    14,
       6,   295,   296,   275,   298,   277,    23,    79,   359,   281,
      37,    83,    39,    40,    41,     3,     4,     5,   290,   313,
     371,     9,   316,   295,   186,   187,   298,    13,    45,    46,
      47,    48,     6,    40,    61,    62,    63,    64,     4,     5,
      67,    68,     8,     9,   316,    15,    61,    17,    63,    64,
     344,   213,    67,    68,    61,     5,    63,    64,    11,    12,
      67,    68,     7,     8,   226,   359,     7,     8,    13,     6,
       5,     5,   344,     7,     5,    10,    11,   371,   358,    37,
      14,    16,     8,    18,    19,     8,    21,   359,     7,     8,
      25,     5,    27,     7,    29,    30,    31,    32,    33,   371,
      14,     9,    37,   265,    39,    40,    41,     9,   270,   271,
       9,    61,     9,    63,    64,     5,   278,    67,    68,     4,
       5,     7,     8,     8,     9,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     7,     8,     3,     4,     5,     5,
      13,     5,    13,     7,     7,     8,    10,     6,     7,     8,
       5,   313,    16,     5,    18,    19,   318,    21,     6,    23,
       5,    25,     5,    27,    28,    29,    30,    31,    32,    33,
       7,     8,     6,    37,     6,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       5,     7,     8,     8,     9,   357,    60,    61,    62,    63,
      64,    65,    66,    67,    68,     5,     7,     8,     7,     8,
      10,    11,     5,    28,     8,     9,    16,     8,    18,    19,
       8,    21,    37,    52,    39,    25,    41,    27,     7,    29,
      30,    31,    32,    33,     5,     9,     6,    37,     6,    39,
      40,    41,     6,     9,    62,     5,    61,    62,    63,    64,
       9,     6,    67,    68,    15,     6,     5,     5,     1,     9,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     5,
      17,     6,     6,     6,    10,     5,   273,     5,   273,     7,
      16,     9,    18,    19,   345,    21,     5,   279,    -1,    25,
      -1,    27,    -1,    29,    30,    31,    32,    33,     5,    -1,
       7,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    37,     5,
      39,    -1,    41,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    61,    62,    63,    64,     5,    -1,    67,
      68,    -1,    61,    62,    63,    64,    -1,    -1,    67,    68,
      -1,    37,     5,    39,    61,    41,    63,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
       5,    39,    -1,    41,    -1,    61,    62,    63,    64,    -1,
      -1,    67,    68,    -1,    37,     5,    39,    -1,    41,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    67,
      68,    -1,    37,     5,    39,    -1,    41,    -1,    61,    62,
      63,    64,    -1,    -1,    67,    68,    -1,    37,     5,    39,
      -1,    41,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    67,    68,    -1,    37,     5,    39,    -1,    41,
      -1,    61,    62,    63,    64,    -1,    -1,    67,    68,    -1,
      37,     5,    39,    -1,    41,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    67,    68,    -1,    37,     5,
      39,    -1,    41,    -1,    61,    62,    63,    64,     5,    -1,
      67,    68,    -1,    37,    -1,    39,    -1,    41,    -1,     4,
       5,    -1,    61,    62,    63,    64,    11,    12,    67,    68,
      -1,    37,    -1,    39,    -1,    41,    -1,    61,    62,    63,
      64,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    34,
      35,    36,     4,     5,    -1,    61,    62,    63,    64,     6,
       7,    67,    68,    -1,    61,    -1,    63,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    23,    62,    -1,    -1,
      -1,    28,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    23,    -1,
      62,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    80,    81,    82,    83,    84,     5,
      87,    88,     5,     6,     5,     6,     0,     9,    82,     5,
      11,    12,    34,    35,    36,    62,    83,    89,    90,    91,
      92,    93,    94,   123,     8,     9,    83,     8,    83,     9,
       6,    62,     6,     5,    13,    62,    91,     5,    14,    95,
      96,    11,    12,    10,    97,     5,    62,     5,    88,     5,
       5,    88,     5,     5,     7,    85,     5,    61,    63,    64,
      67,    68,   128,   137,   138,   139,     5,     7,    95,     8,
      13,     5,     7,     8,    91,     5,    11,    16,    18,    19,
      21,    25,    27,    29,    30,    31,    32,    33,    37,    39,
      40,    41,    60,    62,    65,    66,    86,    87,    97,    98,
      99,   100,   102,   104,   105,   106,   107,   108,   109,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   122,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     5,    13,    62,    95,    95,     9,     8,
       9,    83,     9,     6,     7,     8,    62,    23,    28,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   140,     9,     7,     6,     7,     5,    96,   137,    13,
       6,     5,    96,     5,     8,     9,    28,    62,    86,   108,
     137,   137,   137,     5,   108,   137,     6,   137,   137,     5,
     108,    86,   137,    52,    86,     5,   121,   137,     5,    86,
     108,    86,    86,    37,     5,     7,   108,   134,   137,     8,
      11,    99,    99,    99,    99,     8,    28,     9,     7,   137,
       5,     7,    95,     7,     7,     5,     5,    88,     5,     5,
       6,     5,     7,    86,   137,   137,   137,   137,   137,   137,
     137,   137,     5,     6,     6,   137,     8,     9,     5,   124,
       5,    86,   134,     7,   137,    20,     6,     6,     6,     8,
      20,    20,    97,    99,     6,    26,     8,     8,    52,     8,
       8,     8,    38,    38,    38,    39,     5,    86,    95,     7,
       8,     7,     7,     7,   137,    15,    17,   101,   103,     5,
     124,    86,   134,     5,     7,     6,     6,     7,     6,     6,
       9,     7,     7,    62,     5,     5,     8,     9,    28,     7,
      86,     5,    86,    86,    22,    58,   110,   111,   110,   111,
       5,   124,   137,     5,    86,   121,   137,     5,    38,    38,
      38,     5,    99,   137,    15,    99,     6,     6,     5,     7,
      86,   137,     5,   124,     5,    86,   134,    20,     6,     6,
       6,    38,     7,     6,    99,   101,     7,     7,    86,    97,
      99,   137,    99
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
#line 69 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {                    cout <<"prgram : Units\n";
					p->check_inhertance_list();
                    if(!err->errQ->isEmpty())						   
				    err->printErrQueue();
					if(!p->errRecovery->errQ->isEmpty())
					p->errRecovery->printErrQueue();
					//amer
					;}
    break;

  case 3:
#line 78 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 4:
#line 79 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 5:
#line 82 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"unit: IMPORT import_list class_decl\n";;}
    break;

  case 6:
#line 83 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"unit: IMPORT ID class_decl\n";;}
    break;

  case 7:
#line 84 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"unit: IMPORT ID DOT ID class_decl\n";;}
    break;

  case 8:
#line 85 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
		cout<<"unit: class_decl\n";
		;}
    break;

  case 9:
#line 90 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
cout <<"class_decl: class_h class_body\n";
;}
    break;

  case 10:
#line 94 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									cout << "class_h: CLASS ID SEMI_COLUMN\n"; 
									(yyval.type)=p->createType((yyvsp[-1].r.strVal),inhertance_list, yylval.r.lineNum, yylval.r.colNum,false);
									t=(yyval.type);
									cout<<"done successfull"<<endl;
								;}
    break;

  case 11:
#line 101 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {			(yyval.type) = p->createType((yyvsp[-3].r.strVal),inhertance_list, yylval.r.lineNum, yylval.r.colNum,false);
							t=(yyval.type);
				;}
    break;

  case 12:
#line 108 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout << "class_h:CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN\n";
			(yyval.type) = p->createType((yyvsp[-4].r.strVal),inhertance_list, (yyvsp[-4].r.lineNum), (yyvsp[-4].r.colNum),false);
			t=(yyval.type);
			inhertance_list.clear();
		;}
    break;

  case 13:
#line 113 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
				    
									err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"CLASS NAME IS NOT FOUND ","");
		;}
    break;

  case 14:
#line 117 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
									err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"REServed WORD CLASS NOT FOUND ","");
							 ;}
    break;

  case 15:
#line 120 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
		                  err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"REServed WORD CLASS NOT FOUND ","");
						 ;}
    break;

  case 16:
#line 123 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {
		            err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: SEMI_COLUMN NOT FOUND","");
		           ;}
    break;

  case 17:
#line 128 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {inhertance_list.push_back((yyvsp[0].r.strVal));;}
    break;

  case 18:
#line 129 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {inhertance_list.push_back((yyvsp[0].r.strVal));;}
    break;

  case 19:
#line 132 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {;;}
    break;

  case 20:
#line 133 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {;;}
    break;

  case 21:
#line 137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	import_list COMMA import\n";;}
    break;

  case 22:
#line 138 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID DOT ID  COMMA import\n";;}
    break;

  case 23:
#line 139 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	import_list COMMA ID DOT ID\n";;}
    break;

  case 24:
#line 140 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	|import_list COMMA ID\n";;}
    break;

  case 25:
#line 141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID DOT ID COMMA ID DOT ID\n";;}
    break;

  case 26:
#line 142 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID DOT ID COMMA ID\n";;}
    break;

  case 27:
#line 143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID COMMA import\n";;}
    break;

  case 28:
#line 144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID COMMA ID DOT ID\n";;}
    break;

  case 29:
#line 145 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	ID COMMA ID\n";;}
    break;

  case 30:
#line 147 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import_list:	import\n";;}
    break;

  case 31:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import DOT ID\n";;}
    break;

  case 32:
#line 160 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"import:	ID DOT ID DOT ID;";}
    break;

  case 33:
#line 164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"class_body: END	\n"; (yyval.type)=p->finishTypeDeclaration(t);;}
    break;

  case 34:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"class_body: dm_list END\n"; (yyval.type)=p->finishTypeDeclaration(t);;}
    break;

  case 35:
#line 168 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"dm_list:	dm_list DEF dm\n";
								acc_mod="";;}
    break;

  case 36:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"dm_list:	DEF dm\n";
				acc_mod="";;}
    break;

  case 37:
#line 172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {if(v!=NULL)
					{
						p->remove_vatiable(v);
						err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: DEF not FOUND For Variable",v->get_name());
						v=NULL;
					}
						err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: DEF not FOUND","");;}
    break;

  case 38:
#line 181 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"dm:	var_declaration\n";;}
    break;

  case 39:
#line 182 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"dm:	var_declaration\n";;}
    break;

  case 40:
#line 183 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"dm:	class_decl\n";;}
    break;

  case 41:
#line 186 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"var_declaration: access_modef ID\n";
										(yyval.var) = p->insertVar((yyvsp[0].r.strVal),acc_mod, yylval.r.lineNum, yylval.r.colNum);
										v=(yyval.var);
									;}
    break;

  case 42:
#line 190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"var_declaration: ID\n";
											//$<var>$ = p->insertVar($<r.strVal>1,null,"", yylval.r.lineNum, yylval.r.colNum);
									;}
    break;

  case 43:
#line 193 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"var_declaration: access_modef ID ASSIGN expr\n";
													//	$<var>$ = p->insertVar($<r.strVal>2,null,acc_mod, yylval.r.lineNum, yylval.r.colNum);
														//assigment staement
													;}
    break;

  case 44:
#line 197 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"var_declaration:	ID ASSIGN expr\n";
									//$<var>$ = p->insertVar($<r.strVal>2,null,"", yylval.r.lineNum, yylval.r.colNum);
								;}
    break;

  case 45:
#line 200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"unexpected Id ","");;}
    break;

  case 46:
#line 201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"unexpected id ","");;}
    break;

  case 47:
#line 204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_declaration: method_h block_stmt\n";;}
    break;

  case 48:
#line 207 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h: 	access_modef ID OPEN_S args_list CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 49:
#line 208 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h:	access_modef ID OPEN_S ID CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 50:
#line 209 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h:	ID OPEN_S args_list CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 51:
#line 210 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h:	ID OPEN_S ID CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 52:
#line 211 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h:	access_modef ID OPEN_S  CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 53:
#line 212 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"method_h:	ID OPEN_S CLOSE_S SEMI_COLUMN/n";;}
    break;

  case 54:
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"Expected ID ","");;}
    break;

  case 55:
#line 214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"Expected ID ","");;}
    break;

  case 56:
#line 215 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"Expected ( ","");;}
    break;

  case 57:
#line 216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"Expected ( ","");;}
    break;

  case 58:
#line 217 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.lineNum),(yyvsp[0].r.colNum)-strlen((yyvsp[0].r.strVal)),"Expected : ","");;}
    break;

  case 59:
#line 221 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"args_list:	args_list COMMA arg/n";;}
    break;

  case 60:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"args_list:	ID COMMA arg/n";;}
    break;

  case 61:
#line 223 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"args_list:	args_list COMMA ID/n";;}
    break;

  case 62:
#line 224 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"args_list:	ID COMMA ID/n";;}
    break;

  case 63:
#line 225 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"args_list:	arg/n";;}
    break;

  case 64:
#line 228 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"arg:	STAR ID/n";;}
    break;

  case 65:
#line 229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"arg:	ID ASSIGN expr/n";;}
    break;

  case 66:
#line 230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"arg:	STAR ID ASSIGN exp/n";;}
    break;

  case 67:
#line 233 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"block_stmt: _BEGIN END/n";;}
    break;

  case 68:
#line 234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"block_stmt:	_BEGIN stmt_list END/n";;}
    break;

  case 69:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt_list:	stmt_list stmt/n";;}
    break;

  case 70:
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt_list:	stmt/n";;}
    break;

  case 71:
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt: 			if_stmt/n";;}
    break;

  case 72:
#line 242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	while_stmt/n";;}
    break;

  case 73:
#line 243 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	for_stmt/n";;}
    break;

  case 74:
#line 244 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	try_stmt/n";;}
    break;

  case 75:
#line 245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	with_stmt/n";;}
    break;

  case 76:
#line 246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	block_stmt/n";;}
    break;

  case 77:
#line 247 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"stmt:	simple_stmt_list/n";;}
    break;

  case 78:
#line 250 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"if_stmt:	if_header stmt/n";;}
    break;

  case 79:
#line 251 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"if_stmt:	if_header stmt ELSE stmt/n";;}
    break;

  case 80:
#line 252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"if_stmt:	if_header stmt elif_stmt/n";;}
    break;

  case 81:
#line 253 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"if_stmt:	if_header stmt elif_stmt ELSE stmt/n";;}
    break;

  case 82:
#line 256 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"elif_stmt: 	elif_header stmt elif_stmt/n";;}
    break;

  case 83:
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"elif_stmt:	elif_header stmt/n";;}
    break;

  case 84:
#line 260 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"if_header:	IF expr SEMI_COLUMN/n";;}
    break;

  case 85:
#line 261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"ERROR: Expected :","");;}
    break;

  case 86:
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"elif_header:	ELIF expr SEMI_COLUMN/n";;}
    break;

  case 87:
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"while_stmt: while_header stmt/n";;}
    break;

  case 88:
#line 272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"while_header: WHILE expr SEMI_COLUMN/n";;}
    break;

  case 89:
#line 273 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    { err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-2].r.colNum)-strlen((yyvsp[-2].r.strVal)),"ERROR: unexpected ID","");;}
    break;

  case 90:
#line 274 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum),"ERROR: Expected :","");;}
    break;

  case 91:
#line 277 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"for_stmt: 	for_header stmt/n";;}
    break;

  case 92:
#line 280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"for_header: FOR target_list IN expr_list/n";;}
    break;

  case 93:
#line 281 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"for_header:	FOR ID COMMA ID IN expr_list/n";;}
    break;

  case 94:
#line 282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"for_header:	FOR ID IN expr_list/n";;}
    break;

  case 95:
#line 283 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[-3].r.colNum)-strlen((yyvsp[-3].r.strVal)),"REServed WORD FOR Expected ","");;}
    break;

  case 96:
#line 286 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	target_list COMMA target/n";;}
    break;

  case 97:
#line 287 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	ID COMMA ID COMMA target/n";;}
    break;

  case 98:
#line 288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	target_list COMMA ID/n";;}
    break;

  case 99:
#line 289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	ID COMMA ID COMMA ID/n";;}
    break;

  case 100:
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	ID COMMA target/n";;}
    break;

  case 101:
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target_list:	target/n";;}
    break;

  case 102:
#line 294 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"try_stmt: 	TRY SEMI_COLUMN stmt except_stmt/n";;}
    break;

  case 103:
#line 295 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"try_stmt: 	TRY SEMI_COLUMN stmt finally_stmt/n";;}
    break;

  case 104:
#line 296 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"try_stmt: 	TRY SEMI_COLUMN block_stmt except_stmt/n";;}
    break;

  case 105:
#line 297 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"try_stmt: 	TRY SEMI_COLUMN block_stmt finally_stmt/n";;}
    break;

  case 106:
#line 300 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"finally_stmt: 	FINALLY SEMI_COLUMN block_stmt/n";;}
    break;

  case 107:
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"except_stmt:	EXCEPT SEMI_COLUMN stmt/n";;}
    break;

  case 108:
#line 304 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"except_stmt:	EXCEPT SEMI_COLUMN expr stmt/n";;}
    break;

  case 109:
#line 307 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"with_stmt:	WITH expr SEMI_COLUMN/n";;}
    break;

  case 110:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"with_stmt:	WITH expr AS target SEMI_COLUMN/n";;}
    break;

  case 111:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	expr_list/n";;}
    break;

  case 112:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	assert_stmt/n";;}
    break;

  case 113:
#line 313 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	assignment_stmt/n";;}
    break;

  case 114:
#line 315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	PASS/n";;}
    break;

  case 115:
#line 316 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	del_stmt/n";;}
    break;

  case 116:
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	print_stmt/n";;}
    break;

  case 117:
#line 318 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	return_stmt/n";;}
    break;

  case 118:
#line 319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	yield_stmt/n";;}
    break;

  case 119:
#line 320 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	raise_stmt/n";;}
    break;

  case 120:
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	BREAK/n";;}
    break;

  case 121:
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	CONTINUE/n";;}
    break;

  case 122:
#line 323 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	import_list/n";;}
    break;

  case 123:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"simple_stmt_list: 	global_stmt/n";;}
    break;

  case 124:
#line 327 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assert_stmt: 	ASSERT expr/n";;}
    break;

  case 125:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assert_stmt:	ASSERT expr COMMA expr/n";;}
    break;

  case 126:
#line 331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	target_list EQUAL expr_list/n";;}
    break;

  case 127:
#line 332 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	ID COMMA ID EQUAL expr_list/n";;}
    break;

  case 128:
#line 333 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	ID EQUAL expr_list/n";;}
    break;

  case 129:
#line 334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	target_list EQUAL yield_expression/n";;}
    break;

  case 130:
#line 335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	ID COMMA ID EQUAL yield_expression/n";;}
    break;

  case 131:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"assignment_stmt:	ID EQUAL yield_expression/n";;}
    break;

  case 132:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"del_stmt:	DEL target_list/n";;}
    break;

  case 133:
#line 340 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"del_stmt:	DEL ID COMMA ID/n";;}
    break;

  case 134:
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"del_stmt:	DEL ID/n";;}
    break;

  case 135:
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"return_stmt:	RETURN/n";;}
    break;

  case 136:
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"return_stmt:	RETURN expr_list/n";;}
    break;

  case 137:
#line 348 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"yield_stmt:		yield_expression/n";;}
    break;

  case 138:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"print_stmt: PRINT expr_list/n";;}
    break;

  case 139:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list/n";;}
    break;

  case 140:
#line 353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[-1].r.colNum)-strlen((yyvsp[-1].r.strVal)),"Unexpected ID ","");;}
    break;

  case 141:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"global_stmt :GLOBAL id_list/n";;}
    break;

  case 142:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum),"expected ID ","");;}
    break;

  case 143:
#line 359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"id_list: 	ID COMMA id_list/n";;}
    break;

  case 144:
#line 360 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"id_list:	ID/n";;}
    break;

  case 145:
#line 363 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"raise_stmt: RAISE/n";;}
    break;

  case 146:
#line 364 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"raise_stmt:	RAISE expr/n";;}
    break;

  case 147:
#line 365 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"raise_stmt:	RAISE expr COMMA expr/n";;}
    break;

  case 148:
#line 366 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.lineNum),(yyvsp[0].r.colNum),"expresion expected ","");;}
    break;

  case 149:
#line 369 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {acc_mod="private";;}
    break;

  case 150:
#line 370 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {acc_mod="public";;}
    break;

  case 151:
#line 371 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {acc_mod="protected";;}
    break;

  case 152:
#line 374 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_S target_list CLOSE_S /n";;}
    break;

  case 153:
#line 375 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_S ID COMMA ID CLOSE_S/n";;}
    break;

  case 154:
#line 376 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_S ID CLOSE_S/n";;}
    break;

  case 155:
#line 377 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_D target_list CLOSE_D/n";;}
    break;

  case 156:
#line 378 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_D ID COMMA ID CLOSE_D/n";;}
    break;

  case 157:
#line 379 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	OPEN_D ID CLOSE_D/n";;}
    break;

  case 158:
#line 380 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	attributeref/n";;}
    break;

  case 159:
#line 381 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"target: 	subscription/n";;}
    break;

  case 160:
#line 384 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"attributeref: primary DOT ID/n";;}
    break;

  case 161:
#line 385 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"attributeref:	ID DOT ID/n";;}
    break;

  case 162:
#line 388 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"primary: 	atom/n";;}
    break;

  case 163:
#line 389 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"primary:	attributeref/n";;}
    break;

  case 164:
#line 390 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"primary:	subscription/n";;}
    break;

  case 165:
#line 391 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"primary:	call/n";;}
    break;

  case 166:
#line 394 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"atom:		literal/n";;}
    break;

  case 167:
#line 395 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"atom:	enclosure/n";;}
    break;

  case 168:
#line 398 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"literal:    STRING_VALUE/n";;}
    break;

  case 169:
#line 399 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"literal:	INTEGER_VALUE/n";;}
    break;

  case 170:
#line 400 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"literal:	LONG_VALUE/n";;}
    break;

  case 171:
#line 401 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"literal:	FLOAT_VALUE/n";;}
    break;

  case 172:
#line 402 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"literal:	CHAR_VALUE/n";;}
    break;

  case 173:
#line 405 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"enclosure:	parenth_form\n";;}
    break;

  case 174:
#line 406 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"enclosure:	list_display\n";;}
    break;

  case 175:
#line 407 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"enclosure:	string_conversion\n";;}
    break;

  case 176:
#line 408 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"enclosure:	yield_atom\n";;}
    break;

  case 177:
#line 411 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"parenth_form : 	OPEN_S expr CLOSE_S";;}
    break;

  case 178:
#line 412 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"parenth_form : 	OPEN_S  CLOSE_S";;}
    break;

  case 179:
#line 413 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[0].r.colNum)," expected ) ","");;}
    break;

  case 180:
#line 414 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.lineNum),(yyvsp[0].r.colNum)," expected ) ","");;}
    break;

  case 181:
#line 415 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.lineNum),(yyvsp[-1].r.colNum)," expected ( ","");;}
    break;

  case 182:
#line 419 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"list_display:	OPEN_D  expr_list CLOSE_D\n";;}
    break;

  case 183:
#line 422 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"string_conversion:	RE_COT expr_list RE_COT\n";;}
    break;

  case 184:
#line 425 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";;}
    break;

  case 185:
#line 428 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"yield_expression:	YIELD\n";;}
    break;

  case 186:
#line 429 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"yield_expression:	YIELD expr_list\n";;}
    break;

  case 187:
#line 432 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";;}
    break;

  case 188:
#line 435 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";;}
    break;

  case 189:
#line 436 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";;}
    break;

  case 190:
#line 439 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"expr:	condition\n";;}
    break;

  case 191:
#line 440 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"expr:	literal\n";;}
    break;

  case 192:
#line 441 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"expr:	expr op expr\n";;}
    break;

  case 193:
#line 442 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"expr:	long_id\n";;}
    break;

  case 194:
#line 446 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr EQUAL expr\n";;}
    break;

  case 195:
#line 447 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr NOT_EQUAL expr\n";;}
    break;

  case 196:
#line 448 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr LESS_THAN expr\n";;}
    break;

  case 197:
#line 449 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr LESS_OR_EQUAL expr\n";;}
    break;

  case 198:
#line 450 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr MORE_THAN expr\n";;}
    break;

  case 199:
#line 451 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"condition: expr MORE_OR_EQUAL expr\n";;}
    break;

  case 200:
#line 454 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	\n";;}
    break;

  case 201:
#line 455 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	ID OPEN_S CLOSE_S\n";;}
    break;

  case 202:
#line 456 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 203:
#line 457 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";;}
    break;

  case 204:
#line 458 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	long_id DOT ID\n";;}
    break;

  case 205:
#line 459 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";;}
    break;

  case 206:
#line 460 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";;}
    break;

  case 207:
#line 461 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";;}
    break;

  case 208:
#line 464 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :PLUS\n";;}
    break;

  case 209:
#line 465 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :MINUS\n";;}
    break;

  case 210:
#line 466 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :DIV\n";;}
    break;

  case 211:
#line 467 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :MOD\n";;}
    break;

  case 212:
#line 468 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :OR\n";;}
    break;

  case 213:
#line 469 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :NOT\n";;}
    break;

  case 214:
#line 470 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :MULTI\n";;}
    break;

  case 215:
#line 471 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"
    {cout<<"op :AND\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2945 "yacc.cpp"

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


#line 473 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project - Copy - Copy\\yacc.y"

void yyerror(char *s) 
{
	cout<< s;
}

int yylex()
{
	return lexer->yylex();

}
int main(int argc, char* argv[])
{
	Parser* p = new Parser();
	p->parse();
	system("pause");
	return 0;
	
}

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
     BEGIN = 265,
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
     stmt_7 = 326,
     stmt_6 = 327,
     stmt_5 = 328,
     stmt_4 = 329,
     stmt_3 = 330,
     stmt_2 = 331,
     stmt_1 = 332
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
#define BEGIN 265
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
#define stmt_7 326
#define stmt_6 327
#define stmt_5 328
#define stmt_4 329
#define stmt_3 330
#define stmt_2 331
#define stmt_1 332




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"

	#include <iostream>
	#include <FlexLexer.h>
	#include "ErrorRevovery.h"
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	
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
#line 25 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int myLineNo;
		int myColno;
	}r;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 272 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 284 "yacc.cpp"

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
#define YYLAST   831

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  61
/* YYNRULES -- Number of rules. */
#define YYNRULES  179
/* YYNRULES -- Number of states. */
#define YYNSTATES  291

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

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
      75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    16,    19,    23,
      29,    36,    39,    43,    46,    49,    53,    55,    59,    61,
      65,    67,    69,    72,    76,    79,    81,    83,    85,    88,
      90,    95,    99,   103,   106,   109,   116,   122,   128,   133,
     139,   144,   150,   156,   162,   166,   168,   170,   173,   177,
     182,   185,   189,   192,   194,   196,   198,   200,   202,   204,
     206,   208,   211,   216,   220,   226,   230,   233,   237,   240,
     244,   247,   251,   255,   258,   261,   266,   271,   275,   277,
     282,   287,   292,   297,   301,   305,   309,   315,   317,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   337,   339,
     341,   344,   349,   353,   357,   360,   362,   365,   367,   370,
     375,   378,   381,   383,   387,   389,   391,   394,   399,   403,
     405,   407,   409,   411,   415,   419,   421,   423,   427,   431,
     433,   435,   437,   439,   441,   443,   445,   447,   449,   451,
     453,   455,   457,   459,   461,   465,   468,   471,   473,   476,
     480,   484,   488,   490,   493,   498,   503,   505,   507,   511,
     513,   517,   521,   525,   529,   533,   537,   541,   546,   548,
     554,   561,   565,   567,   569,   571,   573,   575,   577,   579
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      79,     0,    -1,    80,    -1,    80,    81,    -1,    81,    -1,
       3,    85,    82,    -1,    82,    -1,    83,    87,    -1,     4,
       5,     6,    -1,     4,     5,    62,     7,     6,    -1,     4,
       5,    62,    84,     7,     6,    -1,     4,     6,    -1,     5,
       5,     6,    -1,     5,     6,    -1,     4,     5,    -1,    84,
       8,   135,    -1,   135,    -1,    85,     8,    86,    -1,    86,
      -1,    86,     9,     5,    -1,     5,    -1,    11,    -1,    88,
      11,    -1,    88,    12,    89,    -1,    12,    89,    -1,    90,
      -1,    91,    -1,    82,    -1,   121,     5,    -1,     5,    -1,
     121,     5,    13,   135,    -1,     5,    13,   135,    -1,   121,
       5,     5,    -1,     5,     5,    -1,    92,    95,    -1,   121,
       5,    62,    93,     7,     6,    -1,     5,    62,    93,     7,
       6,    -1,   121,     5,    62,     7,     6,    -1,     5,    62,
       7,     6,    -1,   121,    62,    93,     7,     6,    -1,    62,
      93,     7,     6,    -1,   121,     5,    93,     7,     6,    -1,
     121,     5,    62,    93,     6,    -1,   121,     5,    62,    93,
       7,    -1,    93,     8,    94,    -1,    94,    -1,     5,    -1,
      14,     5,    -1,     5,    13,   135,    -1,    14,     5,    13,
     135,    -1,    10,    11,    -1,    10,    96,    11,    -1,    96,
      97,    -1,    97,    -1,    98,    -1,   102,    -1,   104,    -1,
     107,    -1,   110,    -1,    95,    -1,   111,    -1,   100,    97,
      -1,   100,    97,    15,    97,    -1,   100,    97,    99,    -1,
     100,    97,    99,    15,    97,    -1,   101,    97,    99,    -1,
     101,    97,    -1,    16,   135,     6,    -1,    16,   135,    -1,
      17,   135,     6,    -1,   103,    97,    -1,    18,   135,     6,
      -1,     5,   135,     6,    -1,    18,   135,    -1,   105,    97,
      -1,    19,   106,    20,    84,    -1,     5,   106,    20,    84,
      -1,   106,     8,   122,    -1,   122,    -1,    21,     6,    97,
     109,    -1,    21,     6,    97,   108,    -1,    21,     6,    95,
     109,    -1,    21,     6,    95,   108,    -1,    22,     6,    95,
      -1,    58,     6,    95,    -1,    25,   135,     6,    -1,    25,
     135,    26,   122,     6,    -1,    84,    -1,   112,    -1,   113,
      -1,    60,    -1,   114,    -1,   117,    -1,   115,    -1,   116,
      -1,   120,    -1,    65,    -1,    66,    -1,    85,    -1,   118,
      -1,    27,   135,    -1,    27,   135,     8,   135,    -1,   106,
      28,    84,    -1,   106,    28,   132,    -1,    29,   106,    -1,
      30,    -1,    30,    84,    -1,   132,    -1,    31,    84,    -1,
      31,    52,    52,    84,    -1,     5,    84,    -1,    32,   119,
      -1,    32,    -1,     5,     8,   119,    -1,     5,    -1,    33,
      -1,    33,   135,    -1,    33,   135,     8,   135,    -1,    33,
     135,     8,    -1,    34,    -1,    35,    -1,    36,    -1,     5,
      -1,    62,   106,     7,    -1,    37,   106,    38,    -1,   123,
      -1,   133,    -1,   124,     9,     5,    -1,     5,     9,     5,
      -1,   125,    -1,   123,    -1,   133,    -1,   134,    -1,   126,
      -1,   127,    -1,    63,    -1,    64,    -1,    67,    -1,    68,
      -1,    61,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,    62,   135,     7,    -1,    62,     7,    -1,    62,   135,
      -1,    62,    -1,   135,     7,    -1,    37,    84,    38,    -1,
      39,    84,    39,    -1,    62,   132,     7,    -1,    40,    -1,
      40,    84,    -1,    41,    37,    84,    38,    -1,    41,    37,
      93,    38,    -1,   136,    -1,   126,    -1,   135,   138,   135,
      -1,   137,    -1,   135,    28,   135,    -1,   135,    49,   135,
      -1,   135,    50,   135,    -1,   135,    51,   135,    -1,   135,
      52,   135,    -1,   135,    53,   135,    -1,     5,    62,     7,
      -1,     5,    62,    84,     7,    -1,     5,    -1,   137,     9,
       5,    62,     7,    -1,   137,     9,     5,    62,    84,     7,
      -1,   137,     9,     5,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    42,    -1,    44,    -1,    23,    -1,    43,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    59,    59,    64,    65,    67,    68,    71,    73,    74,
      76,    79,    83,    86,    89,    94,    95,    98,   100,   112,
     113,   117,   118,   120,   121,   123,   124,   125,   127,   128,
     129,   130,   131,   132,   134,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   147,   148,   150,   151,   152,   153,
     155,   156,   158,   159,   161,   162,   163,   164,   165,   166,
     167,   169,   170,   171,   172,   184,   185,   190,   191,   193,
     195,   200,   201,   202,   204,   207,   208,   210,   211,   213,
     214,   215,   216,   219,   222,   226,   227,   229,   230,   231,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     245,   246,   248,   249,   252,   254,   255,   257,   259,   260,
     261,   263,   264,   266,   267,   269,   270,   271,   272,   274,
     275,   276,   278,   279,   280,   281,   282,   285,   286,   288,
     289,   290,   291,   294,   295,   297,   298,   299,   300,   301,
     303,   304,   305,   306,   308,   309,   310,   311,   312,   315,
     317,   319,   321,   322,   324,   326,   328,   329,   330,   331,
     334,   335,   336,   337,   338,   339,   341,   342,   343,   344,
     345,   346,   350,   351,   352,   353,   354,   355,   356,   357
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "MULTI",
  "EXPECT", "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT",
  "GLOBAL", "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D",
  "RE_COT", "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV",
  "MOD", "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN",
  "MORE_OR_EQUAL", "TRUE", "FALSE", "XOR", "XNOT", "EXCEPT", "NEW_LINE",
  "PASS", "CHAR_VALUE", "OPEN_S", "STRING_VALUE", "INTEGER_VALUE", "BREAK",
  "CONTINUE", "LONG_VALUE", "FLOAT_VALUE", "FLOOR", "stmt_1_2", "stmt_7",
  "stmt_6", "stmt_5", "stmt_4", "stmt_3", "stmt_2", "stmt_1", "$accept",
  "program", "units", "unit", "class_decl", "class_h", "expr_list",
  "import_list", "import", "class_body", "dm_list", "dm",
  "var_declaration", "method_declaration", "method_h", "args_list", "arg",
  "block_stmt", "stmt_list", "stmt", "if_stmt", "elif_stmt", "if_header",
  "elif_header", "while_stmt", "while_header", "for_stmt", "for_header",
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
     325,   326,   327,   328,   329,   330,   331,   332
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    78,    79,    80,    80,    81,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     102,   103,   103,   103,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   114,   115,   115,   116,   117,   117,
     117,   118,   118,   119,   119,   120,   120,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   128,   128,   128,   128,   128,   129,
     130,   131,   132,   132,   133,   134,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     2,     3,     5,
       6,     2,     3,     2,     2,     3,     1,     3,     1,     3,
       1,     1,     2,     3,     2,     1,     1,     1,     2,     1,
       4,     3,     3,     2,     2,     6,     5,     5,     4,     5,
       4,     5,     5,     5,     3,     1,     1,     2,     3,     4,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     5,     3,     2,     3,     2,     3,
       2,     3,     3,     2,     2,     4,     4,     3,     1,     4,
       4,     4,     4,     3,     3,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     3,     2,     1,     2,     1,     2,     4,
       2,     2,     1,     3,     1,     1,     2,     4,     3,     1,
       1,     1,     1,     3,     3,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     1,     2,     3,
       3,     3,     1,     2,     4,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     1,     5,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     6,     0,    20,
       0,    18,    14,    11,     0,    13,     1,     3,    21,     0,
       7,     0,     0,     5,     0,     8,     0,    12,    29,   119,
     120,   121,     0,    27,    24,    25,    26,     0,     0,    22,
       0,    17,    19,   168,     0,   139,   135,   136,   137,   138,
       0,   157,    16,   156,   159,    33,     0,     0,    46,     0,
       0,    45,     0,    34,    28,     0,    23,     0,     9,     0,
       0,   178,     0,   176,   179,   177,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    47,     0,     0,    20,    50,     0,     0,     0,     0,
       0,     0,     0,   105,     0,   112,   115,     0,     0,   152,
       0,    90,   147,    96,    97,    87,    98,    59,     0,    53,
      54,     0,    55,     0,    56,     0,     0,    57,    58,    60,
      88,    89,    91,    93,    94,    92,    99,    95,    78,   125,
       0,   129,   157,   134,   140,   141,   142,   143,   107,   126,
     132,    16,    32,     0,     0,     0,     0,   166,     0,    10,
      15,   160,   161,   162,   163,   164,   165,   158,   171,    38,
       0,    48,     0,    40,    44,   122,     0,   147,   110,     0,
      16,    68,    73,     0,     0,     0,     0,   100,   104,   106,
       0,   108,   114,   111,   116,     0,     0,     0,   153,     0,
     145,     0,     0,   146,    51,    52,    61,    70,    74,     0,
       0,     0,   148,    30,     0,     0,     0,     0,   167,     0,
      36,    49,   128,   166,    16,     0,    72,    67,    71,     0,
       0,     0,    85,     0,     0,     0,     0,   118,   149,   124,
     150,   168,     0,     0,   123,   151,   144,     0,     0,    63,
       0,    77,   102,   103,   127,    37,    42,    43,    41,    39,
     169,     0,    76,    75,     0,     0,    82,    81,    80,    79,
       0,   101,   109,   113,   117,   154,   155,    62,     0,     0,
      66,    35,   170,     0,     0,    86,    69,    64,    65,    83,
      84
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,   115,   116,    11,    20,
      21,    34,    35,    36,    37,    60,    61,   117,   118,   119,
     120,   249,   121,   250,   122,   123,   124,   125,   126,   127,
     266,   267,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   193,   137,    38,   138,   139,   140,   141,    51,   143,
     144,   145,   146,   147,   148,   149,   150,    52,    53,    54,
      85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -200
static const short int yypact[] =
{
     226,    18,    32,   179,    44,   226,  -200,  -200,   208,  -200,
     200,    22,    -3,  -200,    42,  -200,  -200,  -200,  -200,    79,
    -200,   215,    18,  -200,    81,  -200,    97,  -200,    -1,  -200,
    -200,  -200,    19,  -200,  -200,  -200,  -200,    45,     3,  -200,
      79,    22,  -200,    46,    88,  -200,  -200,  -200,  -200,  -200,
     237,  -200,   778,  -200,   101,    42,   236,   163,   107,   121,
     244,  -200,   245,  -200,   111,    19,  -200,   146,  -200,   106,
     236,  -200,   236,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
     236,   236,   236,   236,   236,   236,   124,   778,   128,   272,
     236,   134,   151,    19,   355,  -200,   236,   236,    82,   156,
     236,   236,    82,   428,   154,   147,   428,    82,   236,   428,
     129,  -200,   135,  -200,  -200,   161,   172,  -200,   309,  -200,
    -200,   410,  -200,   410,  -200,   410,     8,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,   162,
     191,  -200,   203,  -200,  -200,  -200,  -200,  -200,  -200,   223,
    -200,   673,   181,   236,   176,   280,   294,  -200,   314,  -200,
     778,   270,   270,   270,   270,   270,   270,  -200,   177,  -200,
     242,   778,   236,  -200,  -200,   456,   249,   228,   161,    12,
     487,   549,   580,    85,   673,   410,   518,   735,   234,   161,
     206,   161,   252,  -200,   766,    50,    71,    10,   161,   318,
    -200,   336,   255,   704,  -200,  -200,    80,  -200,  -200,    82,
      14,   266,  -200,   778,   267,   230,   275,   277,  -200,   420,
    -200,   778,  -200,   285,   642,   236,  -200,  -200,  -200,   236,
      31,    31,  -200,    82,   236,   236,   147,   236,  -200,  -200,
    -200,   178,    98,    99,  -200,  -200,  -200,   410,   236,   283,
     410,  -200,   161,  -200,  -200,  -200,  -200,   320,  -200,  -200,
    -200,   344,   161,   161,   323,   325,  -200,  -200,  -200,  -200,
     327,   778,   161,  -200,   778,  -200,  -200,  -200,   611,   410,
     307,  -200,  -200,    45,    45,  -200,  -200,  -200,  -200,  -200,
    -200
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -200,  -200,  -200,   330,    52,  -200,    24,   346,   315,  -200,
    -200,   305,  -200,  -200,  -200,   -43,   260,   -37,  -200,  -112,
    -200,    74,  -200,  -200,  -200,  -200,  -200,  -200,   -38,  -200,
     125,   126,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,   119,  -200,  -200,  -199,  -200,  -200,  -200,   -22,  -200,
    -200,  -200,  -200,  -200,  -110,  -200,  -200,   -55,  -200,  -200,
    -200
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -169
static const short int yytable[] =
{
      63,    87,   202,    25,    55,    15,   205,   151,    64,   206,
     251,   207,    56,   208,    89,   160,   209,   161,    70,    43,
     209,   155,   156,     9,    58,   162,   163,   164,   165,   166,
     167,    24,   225,    59,   270,   171,   210,    12,    13,   180,
     142,   181,   182,   184,    16,   186,   187,   184,    27,   240,
      50,   194,   151,   264,   109,    62,   179,   203,    70,    26,
     183,    57,    23,   151,   188,    65,   151,   202,   151,   196,
     151,    33,   142,   231,   201,    45,   142,    46,    47,   209,
     142,    48,    49,     2,    28,   142,    42,   175,   238,   265,
     142,   158,    33,   209,    68,   247,   142,   248,   213,   142,
     253,   142,    43,   142,    44,   229,    70,    93,    67,   239,
      86,   215,   159,    29,    30,    31,   152,   221,   178,   107,
      90,   108,   224,   110,   153,    59,    91,   189,   191,   168,
     151,   195,   197,   198,   169,   277,   275,   276,   280,   201,
     175,    32,   200,    45,   112,    46,    47,   172,   230,    48,
      49,    43,   192,   157,   184,   142,   243,   173,    45,    43,
      46,    47,   185,   142,    48,    49,   199,   287,    58,    70,
      88,  -130,   107,   154,   108,   109,   110,    59,   184,   271,
      22,    58,   274,   214,    14,    15,   -46,   142,   -46,   -46,
      59,    90,   151,   278,    90,   151,    45,   112,    46,    47,
     211,   158,    48,    49,     2,     3,   190,    45,    22,    46,
      47,   142,  -133,    48,    49,    45,   -46,    46,    47,    18,
      19,    48,    49,   242,   151,   142,    39,    40,   142,     1,
       2,     3,  -131,   175,   252,   223,   256,   257,    93,   219,
      67,    43,   209,   261,    69,    70,   289,   290,   220,   262,
      94,    92,    93,   263,   222,    62,    95,   142,   235,   272,
     236,    96,   245,    97,    98,   107,    99,   108,   109,   110,
     100,   254,   101,   255,   102,   103,   104,   105,   106,   170,
      93,   258,   107,   259,   108,   109,   110,   216,    93,    45,
     112,    46,    47,    71,  -145,    48,    49,    45,   279,    46,
      47,   217,    93,    48,    49,   111,    45,   112,    46,    47,
     113,   114,    48,    49,    94,    76,    77,    78,    79,    62,
     204,   218,    70,   241,   248,    96,   281,    97,    98,   283,
      99,   284,    59,   285,   100,    17,   101,    41,   102,   103,
     104,   105,   106,   244,   209,    66,   107,    10,   108,   109,
     110,   282,    70,   174,   288,   273,   268,   269,     0,     0,
     175,     0,  -168,     0,   176,     0,     0,     0,     0,   111,
      45,   112,    46,    47,   113,   114,    48,    49,  -168,    45,
       0,    46,    47,  -122,     0,    48,    49,     0,     0,     0,
       0,     0,   107,     0,   108,     0,   110,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,     0,
       0,     0,     0,     0,     0,    94,    45,   177,    46,    47,
      62,     0,    48,    49,     0,    43,    96,   260,    97,    98,
       0,    99,     0,  -169,     0,   100,     0,   101,     0,   102,
     103,   104,   105,   106,     0,     0,     0,   107,     0,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,     0,
     111,    45,   112,    46,    47,   113,   114,    48,    49,  -168,
       0,    45,     0,    46,    47,     0,     0,    48,    49,  -169,
       0,  -169,  -169,   226,   212,  -169,  -169,     0,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
      71,     0,     0,     0,     0,    72,     0,     0,  -169,     0,
       0,     0,     0,     0,   232,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    71,     0,     0,   233,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    71,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,   286,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    71,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
       0,  -146,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    71,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    71,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    71,     0,     0,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    71,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    71,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    72,     0,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84
};

static const short int yycheck[] =
{
      37,    56,   112,     6,     5,     6,   118,    62,     5,   121,
     209,   123,    13,   125,    57,    70,     8,    72,     8,     5,
       8,    64,    65,     5,     5,    80,    81,    82,    83,    84,
      85,     9,    20,    14,   233,    90,    28,     5,     6,    94,
      62,    96,    97,    98,     0,   100,   101,   102,     6,    39,
      26,   106,   107,    22,    40,    10,    94,   112,     8,    62,
      98,    62,    10,   118,   102,    62,   121,   177,   123,   107,
     125,    19,    94,   185,   112,    61,    98,    63,    64,     8,
     102,    67,    68,     4,     5,   107,     5,     5,    38,    58,
     112,    67,    40,     8,     6,    15,   118,    17,   153,   121,
     210,   123,     5,   125,     7,    20,     8,     8,    62,    38,
       9,   154,     6,    34,    35,    36,     5,   172,    94,    37,
      13,    39,   177,    41,    13,    14,     5,   103,   104,     5,
     185,   107,   108,   109,     6,   247,    38,    38,   250,   177,
       5,    62,     7,    61,    62,    63,    64,    13,   185,    67,
      68,     5,     5,     7,   209,   177,   199,     6,    61,     5,
      63,    64,     6,   185,    67,    68,    37,   279,     5,     8,
       7,     9,    37,    62,    39,    40,    41,    14,   233,   234,
       8,     5,   237,     7,     5,     6,     8,   209,     7,     8,
      14,    13,   247,   248,    13,   250,    61,    62,    63,    64,
       9,   177,    67,    68,     4,     5,    52,    61,     8,    63,
      64,   233,     9,    67,    68,    61,    38,    63,    64,    11,
      12,    67,    68,   199,   279,   247,    11,    12,   250,     3,
       4,     5,     9,     5,   210,     7,     6,     7,     8,    62,
      62,     5,     8,   219,     7,     8,   283,   284,     6,   225,
       5,     7,     8,   229,     5,    10,    11,   279,    52,   235,
       8,    16,     7,    18,    19,    37,    21,    39,    40,    41,
      25,     5,    27,     6,    29,    30,    31,    32,    33,     7,
       8,     6,    37,     6,    39,    40,    41,     7,     8,    61,
      62,    63,    64,    23,     9,    67,    68,    61,    15,    63,
      64,     7,     8,    67,    68,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     5,    45,    46,    47,    48,    10,
      11,     7,     8,     5,    17,    16,     6,    18,    19,     6,
      21,     6,    14,     6,    25,     5,    27,    22,    29,    30,
      31,    32,    33,     7,     8,    40,    37,     1,    39,    40,
      41,     7,     8,    93,   280,   236,   231,   231,    -1,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    23,    61,
      -1,    63,    64,    28,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    61,    62,    63,    64,
      10,    -1,    67,    68,    -1,     5,    16,     7,    18,    19,
      -1,    21,    -1,     5,    -1,    25,    -1,    27,    -1,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    23,
      -1,    61,    -1,    63,    64,    -1,    -1,    67,    68,    61,
      -1,    63,    64,     6,     7,    67,    68,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,     9,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    79,    80,    81,    82,    83,     5,
      85,    86,     5,     6,     5,     6,     0,    81,    11,    12,
      87,    88,     8,    82,     9,     6,    62,     6,     5,    34,
      35,    36,    62,    82,    89,    90,    91,    92,   121,    11,
      12,    86,     5,     5,     7,    61,    63,    64,    67,    68,
      84,   126,   135,   136,   137,     5,    13,    62,     5,    14,
      93,    94,    10,    95,     5,    62,    89,    62,     6,     7,
       8,    23,    28,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   138,     9,   135,     7,    93,
      13,     5,     7,     8,     5,    11,    16,    18,    19,    21,
      25,    27,    29,    30,    31,    32,    33,    37,    39,    40,
      41,    60,    62,    65,    66,    84,    85,    95,    96,    97,
      98,   100,   102,   103,   104,   105,   106,   107,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   120,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     5,    13,    62,    93,    93,     7,    84,     6,
     135,   135,   135,   135,   135,   135,   135,   135,     5,     6,
       7,   135,    13,     6,    94,     5,     9,    62,    84,   106,
     135,   135,   135,   106,   135,     6,   135,   135,   106,    84,
      52,    84,     5,   119,   135,    84,   106,    84,    84,    37,
       7,   106,   132,   135,    11,    97,    97,    97,    97,     8,
      28,     9,     7,   135,     7,    93,     7,     7,     7,    62,
       6,   135,     5,     7,   135,    20,     6,     6,     6,    20,
      95,    97,     6,    26,     8,    52,     8,     8,    38,    38,
      39,     5,    84,    93,     7,     7,     7,    15,    17,    99,
     101,   122,    84,   132,     5,     6,     6,     7,     6,     6,
       7,    84,    84,    84,    22,    58,   108,   109,   108,   109,
     122,   135,    84,   119,   135,    38,    38,    97,   135,    15,
      97,     6,     7,     6,     6,     6,     6,    97,    99,    95,
      95
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
#line 59 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {                    cout <<"prgram : Units\n";
                    if(!err->errQ->isEmpty())						   
				    err->printErrQueue();
					;}
    break;

  case 3:
#line 64 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 4:
#line 65 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"units: unit\n";;}
    break;

  case 5:
#line 67 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 6:
#line 68 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 7:
#line 71 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout <<"class_decl: class_h class_body\n";;}
    break;

  case 8:
#line 73 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout << "class_h: CLASS ID SEMI_COLUMN\n";;}
    break;

  case 9:
#line 75 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 10:
#line 78 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout << "class_h:CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN\n";;}
    break;

  case 11:
#line 79 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
				    
									err->errQ->enqueue((yyvsp[0].r.myLineNo),((yyvsp[0].r.myColNo)-strlen((yyvsp[0].r.myColNo)),"CLASS NAME IS NOT FOUND ","");
		;}
    break;

  case 12:
#line 83 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
									err->errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo)-strlen((yyvsp[-2].r.myColNo)),"REServed WORD CLASS NOT FOUND ","");
							 ;}
    break;

  case 13:
#line 86 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
		                  err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[-1].r.myColNo)-strlen((yyvsp[-1].r.myColNo)),"REServed WORD CLASS NOT FOUND ","");
						 ;}
    break;

  case 14:
#line 89 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {
		            err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"ERROR: SEMI_COLUMN NOT FOUND","");
		           ;}
    break;

  case 15:
#line 94 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 16:
#line 95 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 17:
#line 98 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 18:
#line 100 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 19:
#line 112 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 20:
#line 113 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 21:
#line 117 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<"class_body: END	\n";;}
    break;

  case 22:
#line 118 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 23:
#line 120 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 24:
#line 121 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 25:
#line 123 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 26:
#line 124 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 27:
#line 125 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 28:
#line 127 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 29:
#line 128 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 30:
#line 129 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 31:
#line 130 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 32:
#line 131 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[0].r.myColNo)-strlen((yyvsp[0].r.myColNo)),"unexpected Id ","");;}
    break;

  case 33:
#line 132 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo)-strlen((yyvsp[0].r.myColNo)),"unexpected id ","");;}
    break;

  case 34:
#line 134 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 35:
#line 136 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 36:
#line 137 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 37:
#line 138 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 38:
#line 139 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 39:
#line 140 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.myLineNo),(yyvsp[-3].r.myColNo)-strlen((yyvsp[-3].r.myColNo)),"Expected ID ","");s;}
    break;

  case 40:
#line 141 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-3].r.myLineNo),(yyvsp[-3].r.myColNo)-strlen((yyvsp[-3].r.myColNo)),"Expected ID ","");s;}
    break;

  case 41:
#line 142 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo)-strlen((yyvsp[-2].r.myColNo)),"Expected ( ","");s;}
    break;

  case 42:
#line 143 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.myLineNo),(yyvsp[0].r.myColNo)-strlen((yyvsp[0].r.myColNo)),"Expected ( ","");s;}
    break;

  case 43:
#line 144 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-4].r.myLineNo),(yyvsp[0].r.myColNo)-strlen((yyvsp[0].r.myColNo)),"Expected : ","");s;}
    break;

  case 44:
#line 147 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 45:
#line 148 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 46:
#line 150 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 47:
#line 151 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 48:
#line 152 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 49:
#line 153 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 50:
#line 155 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 51:
#line 156 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 52:
#line 158 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 53:
#line 159 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 54:
#line 161 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 55:
#line 162 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 56:
#line 163 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 57:
#line 164 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 58:
#line 165 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 59:
#line 166 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 60:
#line 167 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 61:
#line 169 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 62:
#line 170 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 63:
#line 171 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 64:
#line 172 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 65:
#line 184 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 66:
#line 185 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 67:
#line 190 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 68:
#line 191 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    { err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"ERROR: Expected :","");;}
    break;

  case 69:
#line 193 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 70:
#line 195 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 71:
#line 200 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 72:
#line 201 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    { err->errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-2].r.myColNo)-strlen((yyvsp[-2].r.myColNo)),"ERROR: unexpected ID","");;}
    break;

  case 73:
#line 202 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[-1].r.myColNo),"ERROR: Expected :","");;}
    break;

  case 74:
#line 204 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 75:
#line 207 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 76:
#line 208 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-3].r.myColNo)-strlen((yyvsp[-3].r.myColNo)),"REServed WORD FOR Expected ","");;}
    break;

  case 77:
#line 210 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 78:
#line 211 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 79:
#line 213 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 80:
#line 214 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 81:
#line 215 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 82:
#line 216 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 83:
#line 219 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 84:
#line 222 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 85:
#line 226 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 86:
#line 227 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 87:
#line 229 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 88:
#line 230 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 89:
#line 231 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 90:
#line 233 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 91:
#line 234 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 92:
#line 235 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 93:
#line 236 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 94:
#line 237 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 95:
#line 238 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 96:
#line 239 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 97:
#line 240 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 98:
#line 241 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 99:
#line 242 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 100:
#line 245 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 101:
#line 246 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 102:
#line 248 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 103:
#line 249 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 104:
#line 252 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 105:
#line 254 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 106:
#line 255 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 107:
#line 257 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 108:
#line 259 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 109:
#line 260 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 110:
#line 261 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[-1].r.myColNo)-strlen((yyvsp[-1].r.myColNo)),"Unexpected ID ","");;}
    break;

  case 111:
#line 263 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 112:
#line 264 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expected ID ","");;}
    break;

  case 113:
#line 266 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 114:
#line 267 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 115:
#line 269 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 116:
#line 270 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 117:
#line 271 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 118:
#line 272 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[0].r.myColNo),"expresion expected ","");;}
    break;

  case 119:
#line 274 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 120:
#line 275 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 121:
#line 276 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 122:
#line 278 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 123:
#line 279 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 124:
#line 280 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 125:
#line 281 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 126:
#line 282 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 127:
#line 285 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 128:
#line 286 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 129:
#line 288 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 130:
#line 289 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 131:
#line 290 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 132:
#line 291 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 133:
#line 294 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 134:
#line 295 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 135:
#line 297 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 136:
#line 298 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 137:
#line 299 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 138:
#line 300 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 139:
#line 301 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 140:
#line 303 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 141:
#line 304 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 142:
#line 305 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 143:
#line 306 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 144:
#line 308 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 145:
#line 309 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 146:
#line 310 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[0].r.myColNo)," expected ) ","");;}
    break;

  case 147:
#line 311 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo)," expected ) ","");;}
    break;

  case 148:
#line 312 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {err->errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo)," expected ( ","");;}
    break;

  case 149:
#line 315 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 150:
#line 317 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 151:
#line 319 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 152:
#line 321 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 153:
#line 322 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 154:
#line 324 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 155:
#line 326 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 156:
#line 328 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 157:
#line 329 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 158:
#line 330 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 159:
#line 331 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;

  case 160:
#line 334 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 161:
#line 335 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 162:
#line 336 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 163:
#line 337 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 164:
#line 338 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 165:
#line 339 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 166:
#line 341 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 167:
#line 342 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 168:
#line 343 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 169:
#line 344 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 170:
#line 345 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 171:
#line 346 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 172:
#line 350 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 173:
#line 351 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 174:
#line 352 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 175:
#line 353 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 176:
#line 354 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 177:
#line 355 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 178:
#line 356 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 179:
#line 357 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"
    {;;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2586 "yacc.cpp"

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


#line 359 "C:\\Users\\AMER-HY\\Source\\Repos\\compiler-project\\yacc.y"

void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	Parser* p = new Parser();
	p->parse();
	
}

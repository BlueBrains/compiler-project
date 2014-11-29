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
     EXCEPT = 278,
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
     LESS_THAN = 304,
     LESS_OR_EQUAL = 305,
     MORE_THAN = 306,
     MORE_OR_EQUAL = 307,
     TRUE = 308,
     FALSE = 309,
     NEW_LINE = 310,
     PASS = 311,
     CHAR_VALUE = 312,
     OPEN_S = 313,
     STRING_VALUE = 314,
     INTEGER_VALUE = 315,
     BREAK = 316,
     CONTINUE = 317,
     LONG_VALUE = 318,
     FLOAT_VALUE = 319,
     stmt_8 = 320,
     stmt_7 = 321,
     stmt_6 = 322,
     stmt_5 = 323,
     stmt_4 = 324,
     stmt_3 = 325,
     stmt_2 = 326,
     stmt_1 = 327
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
#define EXCEPT 278
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
#define LESS_THAN 304
#define LESS_OR_EQUAL 305
#define MORE_THAN 306
#define MORE_OR_EQUAL 307
#define TRUE 308
#define FALSE 309
#define NEW_LINE 310
#define PASS 311
#define CHAR_VALUE 312
#define OPEN_S 313
#define STRING_VALUE 314
#define INTEGER_VALUE 315
#define BREAK 316
#define CONTINUE 317
#define LONG_VALUE 318
#define FLOAT_VALUE 319
#define stmt_8 320
#define stmt_7 321
#define stmt_6 322
#define stmt_5 323
#define stmt_4 324
#define stmt_3 325
#define stmt_2 326
#define stmt_1 327




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

	#include <iostream>
	#include <FlexLexer.h>
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
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
#line 22 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
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
#line 260 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 272 "yacc.cpp"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   976

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  61
/* YYNRULES -- Number of rules. */
#define YYNRULES  183
/* YYNRULES -- Number of states. */
#define YYNSTATES  316

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    18,    24,    26,
      29,    33,    39,    46,    50,    52,    56,    58,    62,    64,
      67,    71,    75,    78,    80,    82,    84,    87,    89,    94,
      98,   101,   108,   115,   121,   127,   133,   138,   142,   146,
     150,   154,   156,   159,   163,   168,   171,   175,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   197,   202,   206,
     212,   216,   219,   223,   227,   230,   234,   237,   242,   249,
     254,   258,   264,   268,   274,   278,   280,   285,   290,   295,
     300,   304,   308,   313,   317,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   352,
     357,   361,   367,   371,   375,   381,   385,   388,   393,   396,
     398,   401,   403,   406,   411,   414,   418,   420,   422,   425,
     430,   432,   434,   436,   440,   446,   450,   454,   460,   464,
     466,   468,   472,   476,   478,   480,   482,   484,   486,   488,
     490,   492,   494,   496,   498,   500,   502,   504,   506,   510,
     513,   517,   521,   525,   527,   530,   535,   540,   545,   547,
     549,   553,   555,   559,   563,   567,   571,   575,   579,   581,
     585,   590,   595,   599,   605,   612,   619,   621,   623,   625,
     627,   629,   631,   633
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      74,     0,    -1,    75,    -1,    75,    76,    -1,    76,    -1,
       3,    80,    77,    -1,     3,     5,    77,    -1,     3,     5,
       9,     5,    77,    -1,    77,    -1,    78,    82,    -1,     4,
       5,     6,    -1,     4,     5,    58,     7,     6,    -1,     4,
       5,    58,    79,     7,     6,    -1,    79,     8,   130,    -1,
     130,    -1,    80,     8,    81,    -1,    81,    -1,    81,     9,
       5,    -1,     5,    -1,    10,    11,    -1,    10,    83,    11,
      -1,    83,    12,    84,    -1,    12,    84,    -1,    85,    -1,
      86,    -1,    77,    -1,   116,     5,    -1,     5,    -1,   116,
       5,    13,   130,    -1,     5,    13,   130,    -1,    87,    90,
      -1,   116,     5,    58,    88,     7,     6,    -1,   116,     5,
      58,     5,     7,     6,    -1,     5,    58,    88,     7,     6,
      -1,     5,    58,     5,     7,     6,    -1,   116,     5,    58,
       7,     6,    -1,     5,    58,     7,     6,    -1,    88,     8,
      89,    -1,     5,     8,    89,    -1,    88,     8,     5,    -1,
       5,     8,     5,    -1,    89,    -1,    14,     5,    -1,     5,
      13,   130,    -1,    14,     5,    13,   130,    -1,    10,    11,
      -1,    10,    91,    11,    -1,    91,    92,    -1,    92,    -1,
      93,    -1,    97,    -1,    99,    -1,   102,    -1,   105,    -1,
      90,    -1,   106,    -1,    95,    92,    -1,    95,    92,    15,
      92,    -1,    95,    92,    94,    -1,    95,    92,    94,    15,
      92,    -1,    96,    92,    94,    -1,    96,    92,    -1,    16,
     130,     6,    -1,    17,   130,     6,    -1,    98,    92,    -1,
      18,   130,     6,    -1,   100,    92,    -1,    19,   101,    20,
      79,    -1,    19,     5,     8,     5,    20,    79,    -1,    19,
       5,    20,    79,    -1,   101,     8,   117,    -1,     5,     8,
       5,     8,   117,    -1,   101,     8,     5,    -1,     5,     8,
       5,     8,     5,    -1,     5,     8,   117,    -1,   117,    -1,
      21,     6,    92,   104,    -1,    21,     6,    92,   103,    -1,
      21,     6,    90,   104,    -1,    21,     6,    90,   103,    -1,
      22,     6,    90,    -1,    23,     6,    92,    -1,    23,     6,
     130,    92,    -1,    24,   130,     6,    -1,    24,   130,    25,
     117,     6,    -1,    79,    -1,   107,    -1,   108,    -1,    56,
      -1,   109,    -1,   112,    -1,   110,    -1,   111,    -1,   115,
      -1,    61,    -1,    62,    -1,    80,    -1,   113,    -1,    26,
     130,    -1,    26,   130,     8,   130,    -1,   101,    27,    79,
      -1,     5,     8,     5,    27,    79,    -1,     5,    27,    79,
      -1,   101,    27,   127,    -1,     5,     8,     5,    27,   127,
      -1,     5,    27,   127,    -1,    28,   101,    -1,    28,     5,
       8,     5,    -1,    28,     5,    -1,    29,    -1,    29,    79,
      -1,   127,    -1,    30,    79,    -1,    30,    51,    51,    79,
      -1,    31,   114,    -1,     5,     8,   114,    -1,     5,    -1,
      32,    -1,    32,   130,    -1,    32,   130,     8,   130,    -1,
      33,    -1,    34,    -1,    35,    -1,    58,   101,     7,    -1,
      58,     5,     8,     5,     7,    -1,    58,     5,     7,    -1,
      36,   101,    37,    -1,    36,     5,     8,     5,    37,    -1,
      36,     5,    37,    -1,   118,    -1,   128,    -1,   119,     9,
       5,    -1,     5,     9,     5,    -1,   120,    -1,   118,    -1,
     128,    -1,   129,    -1,   121,    -1,   122,    -1,    59,    -1,
      60,    -1,    63,    -1,    64,    -1,    57,    -1,   123,    -1,
     124,    -1,   125,    -1,   126,    -1,    58,   130,     7,    -1,
      58,     7,    -1,    36,    79,    37,    -1,    38,    79,    38,
      -1,    58,   127,     7,    -1,    39,    -1,    39,    79,    -1,
      40,    36,    79,    37,    -1,    40,    36,    88,    37,    -1,
      40,    36,     5,    37,    -1,   131,    -1,   121,    -1,   130,
     133,   130,    -1,   132,    -1,   130,    27,   130,    -1,   130,
      48,   130,    -1,   130,    49,   130,    -1,   130,    50,   130,
      -1,   130,    51,   130,    -1,   130,    52,   130,    -1,     5,
      -1,     5,    58,     7,    -1,     5,    58,    79,     7,    -1,
       5,    58,   130,     7,    -1,   132,     9,     5,    -1,   132,
       9,     5,    58,     7,    -1,   132,     9,     5,    58,    79,
       7,    -1,   132,     9,     5,    58,   130,     7,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    41,    -1,    43,
      -1,    14,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    56,    57,    60,
      63,    64,    65,    69,    70,    74,    75,    79,    80,    83,
      84,    87,    88,    91,    92,    93,    96,    97,    98,    99,
     102,   105,   106,   107,   108,   109,   110,   113,   114,   115,
     116,   117,   120,   121,   122,   125,   126,   129,   130,   133,
     134,   135,   136,   137,   138,   139,   142,   143,   144,   145,
     148,   149,   152,   155,   158,   161,   164,   167,   168,   169,
     172,   173,   174,   175,   176,   177,   180,   181,   182,   183,
     186,   189,   190,   193,   194,   197,   198,   199,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   213,   214,
     217,   218,   219,   220,   221,   222,   225,   226,   227,   230,
     231,   234,   237,   238,   241,   244,   245,   248,   249,   250,
     253,   254,   255,   258,   259,   260,   261,   262,   263,   264,
     265,   268,   269,   272,   273,   274,   275,   278,   279,   282,
     283,   284,   285,   286,   289,   290,   291,   292,   295,   296,
     299,   302,   305,   308,   309,   312,   315,   316,   319,   320,
     321,   322,   325,   326,   327,   328,   329,   330,   333,   334,
     335,   336,   337,   338,   339,   340,   343,   344,   345,   346,
     347,   348,   349,   350
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "CLASS", "ID", "SEMI_COLUMN",
  "CLOSE_S", "COMMA", "DOT", "BEGIN", "END", "DEF", "ASSIGN", "STAR",
  "ELSE", "IF", "ELIF", "WHILE", "FOR", "IN", "TRY", "FINALLY", "EXCEPT",
  "WITH", "AS", "ASSERT", "EQUAL", "DEL", "RETURN", "PRINT", "GLOBAL",
  "RAISE", "PRIVATE", "PUBLIC", "PROTECTED", "OPEN_D", "CLOSE_D", "RE_COT",
  "YIELD", "PRIMARY", "OR", "AND", "NOT", "PLUS", "MINUS", "DIV", "MOD",
  "NOT_EQUAL", "LESS_THAN", "LESS_OR_EQUAL", "MORE_THAN", "MORE_OR_EQUAL",
  "TRUE", "FALSE", "NEW_LINE", "PASS", "CHAR_VALUE", "OPEN_S",
  "STRING_VALUE", "INTEGER_VALUE", "BREAK", "CONTINUE", "LONG_VALUE",
  "FLOAT_VALUE", "stmt_8", "stmt_7", "stmt_6", "stmt_5", "stmt_4",
  "stmt_3", "stmt_2", "stmt_1", "$accept", "program", "units", "unit",
  "class_decl", "class_h", "expr_list", "import_list", "import",
  "class_body", "dm_list", "dm", "var_declaration", "method_declaration",
  "method_h", "args_list", "arg", "block_stmt", "stmt_list", "stmt",
  "if_stmt", "elif_stmt", "if_header", "elif_header", "while_stmt",
  "while_header", "for_stmt", "for_header", "target_list", "try_stmt",
  "finally_stmt", "except_stmt", "with_stmt", "simple_stmt_list",
  "assert_stmt", "assignment_stmt", "del_stmt", "return_stmt",
  "yield_stmt", "print_stmt", "global_stmt", "id_list", "raise_stmt",
  "access_modef", "target", "attributeref", "primary", "atom", "literal",
  "enclosure", "parenth_form", "list_display", "string_conversion",
  "yield_atom", "yield_expression", "subscription", "call", "expr",
  "condition", "long_id", "op", 0
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
     325,   326,   327
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    85,    85,    85,    85,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    96,    97,    98,    99,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   110,
     110,   111,   112,   112,   113,   114,   114,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   123,   123,
     124,   125,   126,   127,   127,   128,   129,   129,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     3,     5,     1,     2,
       3,     5,     6,     3,     1,     3,     1,     3,     1,     2,
       3,     3,     2,     1,     1,     1,     2,     1,     4,     3,
       2,     6,     6,     5,     5,     5,     4,     3,     3,     3,
       3,     1,     2,     3,     4,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     5,
       3,     2,     3,     3,     2,     3,     2,     4,     6,     4,
       3,     5,     3,     5,     3,     1,     4,     4,     4,     4,
       3,     3,     4,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     3,     3,     5,     3,     2,     4,     2,     1,
       2,     1,     2,     4,     2,     3,     1,     1,     2,     4,
       1,     1,     1,     3,     5,     3,     3,     5,     3,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     3,     3,     1,     2,     4,     4,     4,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       4,     4,     3,     5,     6,     6,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     2,     4,     8,     0,    18,     0,
      16,     0,     1,     3,     0,     9,     0,     6,     0,     5,
       0,    10,     0,    19,     0,     0,     0,    18,    15,    17,
     168,     0,   143,   139,   140,   141,   142,     0,   159,    14,
     158,   161,    27,   120,   121,   122,    25,    22,    23,    24,
       0,     0,    20,     0,     7,     0,    11,     0,     0,   182,
       0,   180,   183,   181,   176,   177,   178,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    26,
      21,   169,     0,    14,    12,    13,   162,   163,   164,   165,
     166,   167,   160,   172,    29,     0,     0,     0,     0,    41,
      18,    45,     0,     0,     0,     0,     0,     0,     0,   109,
       0,     0,   117,     0,     0,   153,     0,    88,     0,    94,
      95,    85,    96,    54,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    55,    86,    87,    89,    91,
      92,    90,    97,    93,    75,   129,     0,   133,   159,   138,
     144,   145,   146,   147,   111,   130,   136,     0,     0,   170,
     171,     0,     0,     0,     0,    36,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,    98,
     108,   106,   110,     0,   112,   116,   114,   118,   168,     0,
       0,     0,   154,     0,   168,   149,     0,     0,     0,    46,
      47,    56,    64,    66,     0,     0,     0,    28,     0,     0,
       0,   173,     0,    14,    34,    40,    38,    43,     0,    33,
      39,    37,     0,    74,   132,   102,   105,    62,    65,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,   128,   150,   126,   151,   168,     0,     0,   125,
       0,   123,   152,   148,     0,     0,    58,     0,    72,    70,
     100,   103,   131,     0,    35,     0,   174,   175,    44,     0,
       0,     0,    69,    67,     0,     0,    79,    78,    77,    76,
       0,     0,    99,   107,   113,   115,   119,     0,   157,   155,
     156,     0,    57,     0,     0,    61,    32,    31,    73,    71,
     101,   104,     0,     0,     0,    84,   127,   124,    63,    59,
      60,    68,    80,    81,    14,    82
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   121,   122,    10,    15,
      25,    47,    48,    49,    50,    98,    99,   123,   124,   125,
     126,   256,   127,   257,   128,   129,   130,   131,   132,   133,
     276,   277,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   186,   143,    51,   144,   145,   146,   147,    38,   149,
     150,   151,   152,   153,   154,   155,   156,    39,    40,    41,
      73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const short int yypact[] =
{
      37,    51,    69,    80,    37,  -166,  -166,    85,   102,   103,
     128,    -1,  -166,  -166,   122,  -166,   140,  -166,   145,  -166,
     158,  -166,    72,  -166,   337,   162,   102,  -166,   128,  -166,
     127,   187,  -166,  -166,  -166,  -166,  -166,   199,  -166,   885,
    -166,   178,    13,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
     179,   192,  -166,   337,  -166,   547,  -166,   193,   105,  -166,
     105,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   105,   105,
     105,   105,   105,   105,   209,   105,   146,   329,  -166,    15,
    -166,  -166,   222,   758,  -166,   885,   924,   924,   924,   924,
     924,   924,   885,   159,   885,   183,   218,   221,   229,  -166,
     594,  -166,   105,   105,    84,   236,   105,   105,   175,   141,
     534,   241,   141,   205,   105,   141,   214,  -166,   118,  -166,
    -166,   250,   267,  -166,   389,  -166,  -166,   449,  -166,   449,
    -166,   449,    75,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,   277,   297,  -166,   313,  -166,
    -166,  -166,  -166,  -166,  -166,   314,  -166,   105,   165,  -166,
    -166,   555,   272,    76,   105,  -166,   276,   318,   181,   213,
     330,   398,   653,   700,    38,    24,  -166,   449,   641,   828,
     212,   328,   250,   286,   250,   336,  -166,   873,     5,    41,
      45,     7,   250,   563,     3,  -166,   253,   331,   770,  -166,
    -166,   123,  -166,  -166,   338,   398,   341,   885,   215,   343,
     259,  -166,   274,   816,  -166,   339,  -166,   885,   105,  -166,
     339,  -166,    91,  -166,  -166,   250,  -166,  -166,  -166,   376,
     105,   105,   280,   280,  -166,   436,   105,   478,   105,   241,
     105,   486,  -166,  -166,  -166,  -166,    -6,    89,    93,  -166,
     515,  -166,  -166,  -166,   449,   105,   347,   449,   342,  -166,
     250,  -166,  -166,   348,  -166,   350,  -166,  -166,   885,   523,
     398,   107,   250,   250,   357,   358,  -166,  -166,  -166,  -166,
     342,   360,   885,   283,   250,  -166,   885,    28,  -166,  -166,
    -166,   248,  -166,   712,   449,   356,  -166,  -166,   342,  -166,
     250,  -166,   105,   179,   449,  -166,  -166,  -166,  -166,  -166,
    -166,   250,  -166,  -166,   269,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -166,  -166,  -166,   371,    60,  -166,   -22,   378,   359,  -166,
    -166,   327,  -166,  -166,  -166,  -134,  -133,   -49,  -166,  -102,
    -166,    87,  -166,  -166,  -166,  -166,  -166,  -166,   -70,  -166,
     150,   151,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,   167,  -166,  -166,  -165,  -166,  -166,  -166,   -10,  -166,
    -166,  -166,  -166,  -166,  -109,  -166,  -166,   -52,  -166,  -166,
    -166
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -169
static const short int yytable[] =
{
      37,    78,   163,    83,   223,    21,    85,   164,    86,   197,
     249,   250,   170,   241,   170,    58,    87,    88,    89,    90,
      91,    92,   200,    94,   210,   201,    75,   202,   157,   203,
     216,   288,   204,    82,   175,   221,   269,   170,   181,   259,
       1,     2,   242,   190,   231,   245,   229,   170,   196,    58,
     172,   173,    55,   204,   178,   179,     8,    22,   230,   248,
     187,    55,   226,    55,   223,   306,   198,   148,    17,    19,
     281,    76,   223,   158,    11,   233,   223,    30,   243,    31,
      12,   215,   244,   204,    46,   223,    54,   182,   184,   174,
      97,   189,   191,   192,   176,    14,   261,    58,   176,   269,
     170,   168,   205,   148,   299,   207,     2,     2,   148,   213,
      30,    18,   217,    46,   148,   269,   170,   148,   270,   148,
     113,   148,   114,   194,   116,   195,   289,   302,   232,    32,
     290,    33,    34,    23,    24,    35,    36,    20,   254,   212,
     255,    32,   118,    33,    34,    26,  -169,    35,    36,   225,
      27,    95,   292,    96,   113,   295,   114,   115,   116,   176,
      97,   301,    32,    29,    33,    34,   268,   148,    35,    36,
     208,   247,   209,    52,    53,    32,   118,    33,    34,    97,
     180,    35,    36,   260,   282,    55,   220,    74,   286,    77,
     162,   163,   309,    56,   176,    97,   164,    79,  -169,    84,
    -169,  -169,   313,   293,  -169,  -169,    57,    58,   272,   273,
     188,   113,   315,   114,    93,   116,   284,  -169,   222,   176,
     237,   170,   263,   163,   165,   176,   166,   176,   164,   159,
      58,   176,    32,   118,    33,    34,   167,   168,    35,    36,
     176,   113,   177,   114,   148,   116,   185,   148,   300,   113,
     193,   114,   314,   116,   312,   307,   269,   170,    58,   176,
     251,   204,    32,   118,    33,    34,   265,   168,    35,    36,
      32,   118,    33,    34,   100,    18,    35,    36,   214,    77,
     311,   266,    58,    59,   148,   102,  -134,   103,   104,   218,
     105,   269,   170,   106,   148,   107,    60,   108,   109,   110,
     111,   112,   274,   275,   148,   113,   206,   114,   115,   116,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,  -137,  -135,   219,   117,    32,   118,    33,    34,
     119,   120,    35,    36,   100,   224,   204,   238,   252,    77,
     101,     2,    42,   258,   239,   102,   262,   103,   104,   264,
     105,   170,   164,   106,   296,   107,   297,   108,   109,   110,
     111,   112,   294,   303,   304,   113,   305,   114,   115,   116,
      43,    44,    45,   255,   113,    13,   114,    28,   116,     9,
      80,   271,   310,   278,   279,   117,    32,   118,    33,    34,
     119,   120,    35,    36,   100,    32,   118,    33,    34,    77,
     199,    35,    36,    30,     0,   102,   285,   103,   104,     0,
     105,     0,   113,   106,   114,   107,   116,   108,   109,   110,
     111,   112,     0,     0,     0,   113,     0,   114,   115,   116,
       0,     0,     0,    32,   118,    33,    34,   115,     0,    35,
      36,   280,     0,     0,     0,   117,    32,   118,    33,    34,
     119,   120,    35,    36,   100,    32,     0,    33,    34,    77,
       0,    35,    36,     0,     0,   102,     0,   103,   104,     0,
     105,     0,   113,   106,   114,   107,   116,   108,   109,   110,
     111,   112,     0,   283,     0,   113,     0,   114,   115,   116,
       0,   287,     0,    32,   118,    33,    34,     0,     0,    35,
      36,     0,     0,     0,     0,   117,    32,   118,    33,    34,
     119,   120,    35,    36,   113,     0,   114,     0,   116,     0,
     291,     0,   113,     0,   114,     0,   116,     0,   298,     0,
       0,     0,     0,     0,     0,    32,   118,    33,    34,    30,
       0,    35,    36,    32,   118,    33,    34,     0,     0,    35,
      36,   113,    30,   114,    81,   116,     0,     0,     0,   113,
      30,   114,   211,   116,     0,     0,     0,     0,   246,     0,
       0,     0,    32,   118,    33,    34,     0,    97,    35,    36,
      32,   118,    33,    34,     0,   183,    35,    36,     0,     0,
       0,    32,     0,    33,    34,     0,     0,    35,    36,     0,
       0,     0,  -169,     0,    32,     0,    33,    34,  -168,     0,
      35,    36,    32,     0,    33,    34,     0,     0,    35,    36,
      32,   171,    33,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   234,     0,     0,
       0,     0,  -169,     0,     0,    59,     0,     0,     0,   227,
       0,     0,     0,     0,     0,     0,   235,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   228,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,   308,     0,
       0,     0,     0,     0,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   160,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,   253,     0,     0,
       0,     0,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   267,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,   236,     0,     0,     0,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   240,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,  -169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169
};

static const short int yycheck[] =
{
      22,    50,     8,    55,   169,     6,    58,    13,    60,   118,
       7,     8,     9,     8,     9,     8,    68,    69,    70,    71,
      72,    73,   124,    75,   158,   127,    13,   129,    13,   131,
     163,    37,     8,    55,   104,   168,     8,     9,   108,   204,
       3,     4,    37,   113,    20,    38,     8,     9,   118,     8,
     102,   103,    58,     8,   106,   107,     5,    58,    20,   193,
     112,    58,   171,    58,   229,    37,   118,    77,     8,     9,
     235,    58,   237,    58,     5,   177,   241,     5,    37,     7,
       0,     5,    37,     8,    24,   250,    26,   109,   110,     5,
      14,   113,   114,   115,   104,    10,   205,     8,   108,     8,
       9,     8,    27,   113,   269,   157,     4,     4,   118,   161,
       5,     8,   164,    53,   124,     8,     9,   127,    27,   129,
      36,   131,    38,     5,    40,     7,    37,    20,   177,    57,
      37,    59,    60,    11,    12,    63,    64,     9,    15,   161,
      17,    57,    58,    59,    60,     5,     5,    63,    64,   171,
       5,     5,   254,     7,    36,   257,    38,    39,    40,   169,
      14,   270,    57,     5,    59,    60,   218,   177,    63,    64,
       5,   193,     7,    11,    12,    57,    58,    59,    60,    14,
       5,    63,    64,   205,   236,    58,     5,     9,   240,    10,
       7,     8,   294,     6,   204,    14,    13,     5,    57,     6,
      59,    60,   304,   255,    63,    64,     7,     8,   230,   231,
       5,    36,   314,    38,     5,    40,   238,    58,     5,   229,
       8,     9,     7,     8,     6,   235,     5,   237,    13,     7,
       8,   241,    57,    58,    59,    60,     7,     8,    63,    64,
     250,    36,     6,    38,   254,    40,     5,   257,   270,    36,
      36,    38,   304,    40,   303,     7,     8,     9,     8,   269,
       7,     8,    57,    58,    59,    60,     7,     8,    63,    64,
      57,    58,    59,    60,     5,     8,    63,    64,     6,    10,
     302,     7,     8,    14,   294,    16,     9,    18,    19,    13,
      21,     8,     9,    24,   304,    26,    27,    28,    29,    30,
      31,    32,    22,    23,   314,    36,     9,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     9,     9,     6,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     5,     5,     8,    51,     7,    10,
      11,     4,     5,     5,     8,    16,     5,    18,    19,     6,
      21,     9,    13,    24,     6,    26,     6,    28,    29,    30,
      31,    32,    15,     6,     6,    36,     6,    38,    39,    40,
      33,    34,    35,    17,    36,     4,    38,    18,    40,     1,
      53,     5,   295,   233,   233,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     5,    57,    58,    59,    60,    10,
      11,    63,    64,     5,    -1,    16,   239,    18,    19,    -1,
      21,    -1,    36,    24,    38,    26,    40,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    57,    58,    59,    60,    39,    -1,    63,
      64,     5,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     5,    57,    -1,    59,    60,    10,
      -1,    63,    64,    -1,    -1,    16,    -1,    18,    19,    -1,
      21,    -1,    36,    24,    38,    26,    40,    28,    29,    30,
      31,    32,    -1,     5,    -1,    36,    -1,    38,    39,    40,
      -1,     5,    -1,    57,    58,    59,    60,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    36,    -1,    38,    -1,    40,    -1,
       5,    -1,    36,    -1,    38,    -1,    40,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,     5,
      -1,    63,    64,    57,    58,    59,    60,    -1,    -1,    63,
      64,    36,     5,    38,     7,    40,    -1,    -1,    -1,    36,
       5,    38,     7,    40,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    57,    58,    59,    60,    -1,    14,    63,    64,
      57,    58,    59,    60,    -1,    51,    63,    64,    -1,    -1,
      -1,    57,    -1,    59,    60,    -1,    -1,    63,    64,    -1,
      -1,    -1,     8,    -1,    57,    -1,    59,    60,    14,    -1,
      63,    64,    57,    -1,    59,    60,    -1,    -1,    63,    64,
      57,    27,    59,    60,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     6,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    14,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    14,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    14,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,    74,    75,    76,    77,    78,     5,    80,
      81,     5,     0,    76,    10,    82,     9,    77,     8,    77,
       9,     6,    58,    11,    12,    83,     5,     5,    81,     5,
       5,     7,    57,    59,    60,    63,    64,    79,   121,   130,
     131,   132,     5,    33,    34,    35,    77,    84,    85,    86,
      87,   116,    11,    12,    77,    58,     6,     7,     8,    14,
      27,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   133,     9,    13,    58,    10,    90,     5,
      84,     7,    79,   130,     6,   130,   130,   130,   130,   130,
     130,   130,   130,     5,   130,     5,     7,    14,    88,    89,
       5,    11,    16,    18,    19,    21,    24,    26,    28,    29,
      30,    31,    32,    36,    38,    39,    40,    56,    58,    61,
      62,    79,    80,    90,    91,    92,    93,    95,    97,    98,
      99,   100,   101,   102,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   115,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    13,    58,     7,
       7,    58,     7,     8,    13,     6,     5,     7,     8,     8,
       9,    27,   130,   130,     5,   101,   121,     6,   130,   130,
       5,   101,    79,    51,    79,     5,   114,   130,     5,    79,
     101,    79,    79,    36,     5,     7,   101,   127,   130,    11,
      92,    92,    92,    92,     8,    27,     9,   130,     5,     7,
      88,     7,    79,   130,     6,     5,    89,   130,    13,     6,
       5,    89,     5,   117,     5,    79,   127,     6,     6,     8,
      20,    20,    90,    92,     6,    25,     8,     8,    51,     8,
       8,     8,    37,    37,    37,    38,     5,    79,    88,     7,
       8,     7,     7,     7,    15,    17,    94,    96,     5,   117,
      79,   127,     5,     7,     6,     7,     7,     7,   130,     8,
      27,     5,    79,    79,    22,    23,   103,   104,   103,   104,
       5,   117,   130,     5,    79,   114,   130,     5,    37,    37,
      37,     5,    92,   130,    15,    92,     6,     6,     5,   117,
      79,   127,    20,     6,     6,     6,    37,     7,     6,    92,
      94,    79,    90,    92,   130,    92
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
#line 47 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 3:
#line 50 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 4:
#line 51 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 5:
#line 54 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 6:
#line 55 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 7:
#line 56 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 8:
#line 57 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 9:
#line 60 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 10:
#line 63 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 12:
#line 65 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 13:
#line 69 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 14:
#line 70 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 15:
#line 74 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 16:
#line 75 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 17:
#line 79 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 19:
#line 83 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 20:
#line 84 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 21:
#line 87 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 22:
#line 88 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 23:
#line 91 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 24:
#line 92 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 25:
#line 93 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 26:
#line 96 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 27:
#line 97 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 28:
#line 98 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 29:
#line 99 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 30:
#line 102 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 31:
#line 105 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 32:
#line 106 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 33:
#line 107 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 34:
#line 108 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 35:
#line 109 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 36:
#line 110 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 37:
#line 113 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 38:
#line 114 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 39:
#line 115 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 40:
#line 116 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 41:
#line 117 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 42:
#line 120 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 43:
#line 121 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 44:
#line 122 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 45:
#line 125 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 46:
#line 126 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 47:
#line 129 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 48:
#line 130 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 49:
#line 133 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 50:
#line 134 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 51:
#line 135 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 52:
#line 136 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 53:
#line 137 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 54:
#line 138 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 55:
#line 139 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 56:
#line 142 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 57:
#line 143 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 58:
#line 144 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 59:
#line 145 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 60:
#line 148 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 61:
#line 149 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 62:
#line 152 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 63:
#line 155 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 64:
#line 158 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 65:
#line 161 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 66:
#line 164 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 67:
#line 167 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 68:
#line 168 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 69:
#line 169 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 70:
#line 172 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 71:
#line 173 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 72:
#line 174 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 73:
#line 175 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 74:
#line 176 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 75:
#line 177 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 76:
#line 180 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 77:
#line 181 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 78:
#line 182 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 79:
#line 183 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 80:
#line 186 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 81:
#line 189 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 82:
#line 190 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 83:
#line 193 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 84:
#line 194 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 85:
#line 197 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 86:
#line 198 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 87:
#line 199 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 88:
#line 201 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 89:
#line 202 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 90:
#line 203 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 91:
#line 204 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 92:
#line 205 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 93:
#line 206 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 94:
#line 207 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 95:
#line 208 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 96:
#line 209 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 97:
#line 210 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 98:
#line 213 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 99:
#line 214 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 100:
#line 217 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 101:
#line 218 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 102:
#line 219 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 103:
#line 220 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 104:
#line 221 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 105:
#line 222 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 106:
#line 225 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 107:
#line 226 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 108:
#line 227 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 109:
#line 230 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 110:
#line 231 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 111:
#line 234 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 112:
#line 237 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 113:
#line 238 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 114:
#line 241 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 115:
#line 244 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 116:
#line 245 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 117:
#line 248 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 118:
#line 249 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 119:
#line 250 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 120:
#line 253 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 121:
#line 254 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 122:
#line 255 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 123:
#line 258 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 124:
#line 259 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 125:
#line 260 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 126:
#line 261 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 127:
#line 262 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 128:
#line 263 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 129:
#line 264 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 130:
#line 265 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 131:
#line 268 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 132:
#line 269 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 133:
#line 272 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 134:
#line 273 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 135:
#line 274 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 136:
#line 275 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 137:
#line 278 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 138:
#line 279 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 139:
#line 282 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 140:
#line 283 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 141:
#line 284 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 142:
#line 285 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 143:
#line 286 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 144:
#line 289 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 145:
#line 290 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 146:
#line 291 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 147:
#line 292 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 148:
#line 295 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 149:
#line 296 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 150:
#line 299 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 151:
#line 302 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 152:
#line 305 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 153:
#line 308 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 154:
#line 309 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 155:
#line 312 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 156:
#line 315 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 157:
#line 316 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 158:
#line 319 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 159:
#line 320 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 160:
#line 321 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 161:
#line 322 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;

  case 162:
#line 325 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 163:
#line 326 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 164:
#line 327 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 165:
#line 328 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 166:
#line 329 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 167:
#line 330 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 168:
#line 333 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 169:
#line 334 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 170:
#line 335 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 171:
#line 336 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 172:
#line 337 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 173:
#line 338 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 174:
#line 339 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 175:
#line 340 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 176:
#line 343 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 177:
#line 344 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 178:
#line 345 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 179:
#line 346 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 180:
#line 347 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 181:
#line 348 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 182:
#line 349 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {cout<<" : \n";;}
    break;

  case 183:
#line 350 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"
    {;;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2614 "yacc.cpp"

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


#line 352 "C:\\Users\\Molham\\documents\\visual studio 2012\\Projects\\compilerProject\\yacc.y"

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

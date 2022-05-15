/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

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
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     ENDIF = 275,
     identifier = 276,
     array_identifier = 277,
     func_identifier = 278,
     integer_constant = 279,
     string_constant = 280,
     float_constant = 281,
     character_constant = 282,
     ELSE = 283,
     rightshift_assignment_operator = 284,
     leftshift_assignment_operator = 285,
     OR_assignment_operator = 286,
     XOR_assignment_operator = 287,
     modulo_assignment_operator = 288,
     AND_assignment_operator = 289,
     division_assignment_operator = 290,
     multiplication_assignment_operator = 291,
     subtraction_assignment_operator = 292,
     addition_assignment_operator = 293,
     assignment_operator = 294,
     OR_operator = 295,
     AND_operator = 296,
     pipe_operator = 297,
     caret_operator = 298,
     amp_operator = 299,
     inequality_operator = 300,
     equality_operator = 301,
     greaterthan_operator = 302,
     greaterthan_assignment_operator = 303,
     lessthan_operator = 304,
     lessthan_assignment_operator = 305,
     rightshift_operator = 306,
     leftshift_operator = 307,
     subtract_operator = 308,
     add_operator = 309,
     modulo_operator = 310,
     division_operator = 311,
     multiplication_operator = 312,
     SIZEOF = 313,
     exclamation_operator = 314,
     tilde_operator = 315,
     decrement_operator = 316,
     increment_operator = 317
   };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define identifier 276
#define array_identifier 277
#define func_identifier 278
#define integer_constant 279
#define string_constant 280
#define float_constant 281
#define character_constant 282
#define ELSE 283
#define rightshift_assignment_operator 284
#define leftshift_assignment_operator 285
#define OR_assignment_operator 286
#define XOR_assignment_operator 287
#define modulo_assignment_operator 288
#define AND_assignment_operator 289
#define division_assignment_operator 290
#define multiplication_assignment_operator 291
#define subtraction_assignment_operator 292
#define addition_assignment_operator 293
#define assignment_operator 294
#define OR_operator 295
#define AND_operator 296
#define pipe_operator 297
#define caret_operator 298
#define amp_operator 299
#define inequality_operator 300
#define equality_operator 301
#define greaterthan_operator 302
#define greaterthan_assignment_operator 303
#define lessthan_operator 304
#define lessthan_assignment_operator 305
#define rightshift_operator 306
#define leftshift_operator 307
#define subtract_operator 308
#define add_operator 309
#define modulo_operator 310
#define division_operator 311
#define multiplication_operator 312
#define SIZEOF 313
#define exclamation_operator 314
#define tilde_operator 315
#define decrement_operator 316
#define increment_operator 317




/* Copy the first part of user declarations.  */
#line 1 "semantic.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	extern int params_count;
	int call_params_count;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 270 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    68,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    11,    13,    15,    19,
      23,    25,    26,    30,    31,    35,    37,    40,    43,    44,
      48,    51,    53,    55,    56,    58,    60,    62,    64,    67,
      70,    73,    76,    78,    80,    83,    86,    87,    89,    92,
      95,    96,    98,    99,   101,   102,   105,   109,   113,   115,
     116,   117,   121,   124,   127,   128,   129,   133,   136,   137,
     139,   141,   143,   145,   147,   149,   151,   152,   157,   160,
     161,   164,   166,   167,   175,   178,   179,   180,   187,   188,
     198,   199,   208,   211,   215,   218,   221,   226,   229,   232,
     233,   237,   241,   245,   249,   253,   257,   260,   263,   265,
     269,   271,   275,   277,   280,   282,   286,   288,   290,   292,
     294,   296,   298,   300,   304,   306,   308,   310,   314,   316,
     318,   320,   322,   324,   326,   328,   329,   335,   339,   341,
     343,   344,   350,   352,   353,   354,   358,   359,   364,   365,
     367,   369,   371
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    75,    74,    -1,    73,    -1,
      -1,    76,    -1,    90,    -1,    85,    77,    63,    -1,    77,
      64,    78,    -1,    78,    -1,    -1,    21,    79,    81,    -1,
      -1,    22,    80,    81,    -1,    82,    -1,    39,   120,    -1,
      65,    83,    -1,    -1,    24,    66,    84,    -1,    66,   115,
      -1,   115,    -1,   116,    -1,    -1,     4,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    88,    -1,     9,    89,    -1,
      11,    86,    -1,    10,    87,    -1,    15,    -1,     4,    -1,
       8,    88,    -1,     9,    89,    -1,    -1,     4,    -1,     8,
      88,    -1,     9,    89,    -1,    -1,     4,    -1,    -1,     4,
      -1,    -1,    91,    92,    -1,    85,    21,    67,    -1,    93,
      68,   101,    -1,    94,    -1,    -1,    -1,    85,    95,    96,
      -1,    98,    97,    -1,    64,    94,    -1,    -1,    -1,    21,
      99,   100,    -1,    65,    66,    -1,    -1,   105,    -1,   102,
      -1,   106,    -1,   109,    -1,   113,    -1,   114,    -1,    76,
      -1,    -1,   103,    69,   104,    70,    -1,   101,   104,    -1,
      -1,   119,    63,    -1,    63,    -1,    -1,     3,    67,   120,
      68,   107,   101,   108,    -1,    28,   101,    -1,    -1,    -1,
      16,    67,   120,    68,   110,   101,    -1,    -1,    17,    67,
     119,    63,   120,    63,   111,   119,    68,    -1,    -1,    18,
     101,    16,    67,   120,    68,   112,    63,    -1,    13,    63,
      -1,    13,   119,    63,    -1,    19,    63,    -1,    39,    25,
      -1,    39,    69,   117,    70,    -1,    24,   118,    -1,    64,
     117,    -1,    -1,   130,    39,   119,    -1,   130,    38,   119,
      -1,   130,    37,   119,    -1,   130,    36,   119,    -1,   130,
      35,   119,    -1,   130,    33,   119,    -1,   130,    62,    -1,
     130,    61,    -1,   120,    -1,   120,    40,   121,    -1,   121,
      -1,   121,    41,   122,    -1,   122,    -1,    59,   122,    -1,
     123,    -1,   123,   124,   125,    -1,   125,    -1,    48,    -1,
      50,    -1,    47,    -1,    49,    -1,    46,    -1,    45,    -1,
     125,   126,   127,    -1,   127,    -1,    54,    -1,    53,    -1,
     127,   128,   129,    -1,   129,    -1,    57,    -1,    56,    -1,
      55,    -1,   132,    -1,   130,    -1,    21,    -1,    -1,    22,
     131,    65,   119,    66,    -1,    67,   119,    68,    -1,   133,
      -1,   140,    -1,    -1,    21,    67,   134,   135,    68,    -1,
     136,    -1,    -1,    -1,   119,   137,   138,    -1,    -1,    64,
     119,   139,   138,    -1,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    85,    88,    89,    92,    93,    96,    99,
      99,   102,   102,   103,   103,   107,   107,   110,   111,   114,
     115,   118,   119,   120,   123,   123,   123,   123,   124,   125,
     126,   127,   128,   131,   131,   131,   131,   134,   134,   134,
     134,   137,   137,   140,   140,   143,   146,   149,   152,   152,
     155,   155,   158,   161,   162,   165,   165,   168,   169,   172,
     172,   173,   173,   174,   174,   175,   178,   178,   181,   182,
     185,   186,   189,   189,   192,   193,   196,   196,   197,   197,
     198,   198,   200,   201,   214,   217,   220,   223,   226,   227,
     230,   238,   244,   250,   256,   262,   268,   269,   270,   274,
     275,   278,   279,   283,   284,   287,   288,   291,   291,   291,
     292,   292,   292,   295,   296,   299,   300,   303,   304,   307,
     307,   307,   310,   311,   314,   326,   326,   334,   335,   336,
     339,   339,   357,   357,   360,   360,   363,   363,   364,   367,
     368,   369,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "identifier",
  "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "rightshift_assignment_operator", "leftshift_assignment_operator",
  "OR_assignment_operator", "XOR_assignment_operator",
  "modulo_assignment_operator", "AND_assignment_operator",
  "division_assignment_operator", "multiplication_assignment_operator",
  "subtraction_assignment_operator", "addition_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "inequality_operator",
  "equality_operator", "greaterthan_operator",
  "greaterthan_assignment_operator", "lessthan_operator",
  "lessthan_assignment_operator", "rightshift_operator",
  "leftshift_operator", "subtract_operator", "add_operator",
  "modulo_operator", "division_operator", "multiplication_operator",
  "SIZEOF", "exclamation_operator", "tilde_operator", "decrement_operator",
  "increment_operator", "';'", "','", "'['", "']'", "'('", "')'", "'{'",
  "'}'", "$accept", "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "@1", "@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "@3", "parameters_identifier_list", "parameters_identifier_list_breakup",
  "param_identifier", "@4", "param_identifier_breakup", "statement",
  "compound_statement", "@5", "statment_list", "expression_statment",
  "conditional_statements", "@6", "conditional_statements_breakup",
  "iterative_statements", "@7", "@8", "@9", "return_statement",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "simple_expression", "and_expression", "unary_relation_expression",
  "regular_expression", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "@10",
  "immutable", "call", "@11", "arguments", "arguments_list", "@12", "A",
  "@13", "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    59,    44,    91,    93,    40,    41,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    79,    78,    80,    78,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    91,    92,    93,    93,
      95,    94,    96,    97,    97,    99,    98,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   103,   102,   104,   104,
     105,   105,   107,   106,   108,   108,   110,   109,   111,   109,
     112,   109,   113,   113,   114,   115,   116,   117,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   129,   129,   130,   131,   130,   132,   132,   132,
     134,   133,   135,   135,   137,   136,   139,   138,   138,   140,
     140,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     3,     1,     0,
       0,     3,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     0,
       2,     1,     0,     7,     2,     0,     0,     6,     0,     9,
       0,     8,     2,     3,     2,     2,     4,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       0,     5,     1,     0,     0,     3,     0,     4,     0,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    42,    44,    40,    36,    32,
       0,     2,     5,     6,     0,     7,    49,    41,    28,    43,
      29,    37,    42,    44,    31,    33,    42,    44,    30,     1,
       4,     3,    11,    13,     0,    10,    50,    45,     0,    48,
      38,    39,    34,    35,    46,    18,    18,     8,     0,     0,
      66,     0,     0,    12,    15,    14,    11,     9,    55,    51,
      54,     0,     0,     0,     0,    66,     0,   124,   125,   139,
     140,   141,   142,     0,    71,     0,    65,     0,    47,    60,
       0,    59,    61,    62,    63,    64,     0,    98,   100,   102,
     104,   106,   114,   118,   123,   122,   128,   129,    16,   123,
       0,     0,    17,    58,     0,    52,     0,    82,     0,     0,
       0,     0,    84,   130,     0,   103,     0,    66,    70,     0,
       0,   112,   111,   109,   107,   110,   108,     0,   116,   115,
       0,   121,   120,   119,     0,     0,     0,     0,     0,     0,
       0,    97,    96,    23,     0,    20,     0,    56,    53,     0,
      83,     0,     0,     0,   133,     0,   127,    66,     0,    99,
     101,   105,   113,   117,    95,    94,    93,    92,    91,    90,
       0,    19,    21,    22,    85,    57,    72,    76,     0,     0,
     134,     0,   132,     0,    68,    67,     0,    66,    66,     0,
       0,   138,   131,   126,    89,     0,    75,    77,    78,    80,
       0,   135,     0,    87,    86,    66,    73,     0,     0,   136,
      88,    74,     0,    81,   138,    79,   137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,    76,    34,    35,    45,    46,
      53,    54,   102,   171,    77,    28,    24,    18,    20,    15,
      16,    37,    38,    39,    49,    59,   105,    60,   103,   147,
     157,    79,    80,   158,    81,    82,   187,   206,    83,   188,
     207,   208,    84,    85,   145,   173,   195,   203,    86,    87,
      88,    89,    90,   127,    91,   130,    92,   134,    93,    94,
     114,    95,    96,   154,   181,   182,   191,   201,   214,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
     205,   -63,   -63,   -63,   -63,     8,    14,    59,    62,   -63,
       7,   -63,   205,   -63,   -12,   -63,   205,   -63,   -63,   -63,
     -63,   -63,     8,    14,   -63,   -63,     8,    14,   -63,   -63,
     -63,   -63,   -24,   -63,    34,   -63,   -63,   -63,   -38,   -63,
     -63,   -63,   -63,   -63,   -63,    25,    25,   -63,   112,    63,
      97,   141,     3,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
      27,    28,   123,    44,    50,    97,    57,    61,   -63,   -63,
     -63,   -63,   -63,   141,   -63,   141,   -63,   112,   -63,   -63,
      71,   -63,   -63,   -63,   -63,   -63,    78,   102,   110,   -63,
     131,    82,    70,   -63,   136,   -63,   -63,   -63,   102,   -63,
      77,   113,   -63,    88,   205,   -63,   141,   -63,    91,   141,
     141,   142,   -63,   -63,    92,   -63,    93,    29,   -63,   141,
     141,   -63,   -63,   -63,   -63,   -63,   -63,    -2,   -63,   -63,
      -2,   -63,   -63,   -63,    -2,   141,   141,   141,   141,   141,
     141,   -63,   -63,   120,   145,   -63,   117,   -63,   -63,   -37,
     -63,   -27,   121,   118,   141,   141,   -63,    29,   119,   110,
     -63,    82,    70,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -17,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   141,   141,
     -63,   124,   -63,   122,   -63,   -63,   163,    97,    97,   -34,
      21,   127,   -63,   -63,   129,   125,   166,   -63,   -63,   -63,
     141,   -63,   163,   -63,   -63,    97,   -63,   141,   133,   -63,
     -63,   -63,   134,   -63,   127,   -63,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   187,   -63,   -63,    16,   -63,   153,   -63,   -63,
     157,   -63,   -63,   -63,     5,   -63,   -63,    60,    58,   -63,
     -63,   -63,   -63,   100,   -63,   -63,   -63,   -63,   -63,   -63,
     -50,   -63,   -63,    48,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,    64,   -63,     4,   -63,   -61,   -49,
      98,   -62,   -63,   -63,    94,   -63,    89,   -63,    84,   -47,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     9,   -63,   -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      78,   108,    98,   119,    99,    14,   119,    29,   174,    32,
      33,   115,    17,   119,   116,   111,    13,    14,    19,    67,
      68,    36,    69,    70,    71,    72,    99,   100,    13,   198,
      50,   176,    61,     1,     2,     3,     4,     5,     6,     7,
       8,   177,    62,    44,     9,    63,    64,    65,    66,   152,
      67,    68,   186,    69,    70,    71,    72,   149,   160,    99,
     151,   119,    99,    21,    51,    75,    25,    22,    23,   101,
      26,    27,    99,    99,   164,   165,   166,   167,   168,   169,
      99,    41,    40,    99,    58,    43,    42,    99,    73,   199,
      52,   104,    74,   180,   183,   106,    75,    47,    48,   -69,
      61,     1,     2,     3,     4,     5,     6,     7,     8,    36,
      62,   109,     9,    63,    64,    65,    66,   110,    67,    68,
     112,    69,    70,    71,    72,   131,   132,   133,   113,   189,
     190,    99,    99,    56,    33,   128,   129,   196,   197,   209,
     117,   118,   119,   143,    67,    68,   212,    69,    70,    71,
      72,   120,   144,   146,   150,   211,    73,   155,   153,   170,
      74,   156,    67,    68,    75,    69,    70,    71,    72,   135,
     174,   136,   137,   138,   139,   140,   121,   122,   123,   124,
     125,   126,    73,   175,   178,   179,   107,   194,   193,   185,
      75,   200,   192,   202,   205,   204,   213,   141,   142,    30,
      73,    57,   215,    55,   148,   184,   210,   172,    75,     1,
       2,     3,     4,     5,     6,     7,     8,   159,   163,   162,
       9,   161,     0,   216
};

static const yytype_int16 yycheck[] =
{
      50,    62,    51,    40,    51,     0,    40,     0,    25,    21,
      22,    73,     4,    40,    75,    65,     0,    12,     4,    21,
      22,    16,    24,    25,    26,    27,    73,    24,    12,    63,
      68,    68,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    68,    13,    67,    15,    16,    17,    18,    19,   110,
      21,    22,    69,    24,    25,    26,    27,   106,   120,   106,
     109,    40,   109,     4,    39,    67,     4,     8,     9,    66,
       8,     9,   119,   120,   135,   136,   137,   138,   139,   140,
     127,    23,    22,   130,    21,    27,    26,   134,    59,    68,
      65,    64,    63,   154,   155,    67,    67,    63,    64,    70,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   104,
      13,    67,    15,    16,    17,    18,    19,    67,    21,    22,
      63,    24,    25,    26,    27,    55,    56,    57,    67,   178,
     179,   178,   179,    21,    22,    53,    54,   187,   188,   200,
      69,    63,    40,    66,    21,    22,   207,    24,    25,    26,
      27,    41,    39,    65,    63,   205,    59,    65,    16,    39,
      63,    68,    21,    22,    67,    24,    25,    26,    27,    33,
      25,    35,    36,    37,    38,    39,    45,    46,    47,    48,
      49,    50,    59,    66,    63,    67,    63,    24,    66,    70,
      67,    64,    68,    64,    28,    70,    63,    61,    62,    12,
      59,    48,    68,    46,   104,   157,   202,   143,    67,     4,
       5,     6,     7,     8,     9,    10,    11,   119,   134,   130,
      15,   127,    -1,   214
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      72,    73,    75,    76,    85,    90,    91,     4,    88,     4,
      89,     4,     8,     9,    87,     4,     8,     9,    86,     0,
      73,    74,    21,    22,    77,    78,    85,    92,    93,    94,
      88,    89,    88,    89,    67,    79,    80,    63,    64,    95,
      68,    39,    65,    81,    82,    81,    21,    78,    21,    96,
      98,     3,    13,    16,    17,    18,    19,    21,    22,    24,
      25,    26,    27,    59,    63,    67,    76,    85,   101,   102,
     103,   105,   106,   109,   113,   114,   119,   120,   121,   122,
     123,   125,   127,   129,   130,   132,   133,   140,   120,   130,
      24,    66,    83,    99,    64,    97,    67,    63,   119,    67,
      67,   101,    63,    67,   131,   122,   119,    69,    63,    40,
      41,    45,    46,    47,    48,    49,    50,   124,    53,    54,
     126,    55,    56,    57,   128,    33,    35,    36,    37,    38,
      39,    61,    62,    66,    39,   115,    65,   100,    94,   120,
      63,   120,   119,    16,   134,    65,    68,   101,   104,   121,
     122,   125,   127,   129,   119,   119,   119,   119,   119,   119,
      39,    84,   115,   116,    25,    66,    68,    68,    63,    67,
     119,   135,   136,   119,   104,    70,    69,   107,   110,   120,
     120,   137,    68,    66,    24,   117,   101,   101,    63,    68,
      64,   138,    64,   118,    70,    28,   108,   111,   112,   119,
     117,   101,   119,    63,   139,    68,   138
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

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
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


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
	yytype_int16 *yyss1 = yyss;
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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 11:
#line 102 "semantic.y"
    {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
    break;

  case 13:
#line 103 "semantic.y"
    {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
    break;

  case 19:
#line 114 "semantic.y"
    {if((yyval) < 1) {printf("Wrong array size\n"); exit(0);} }
    break;

  case 46:
#line 146 "semantic.y"
    { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
    break;

  case 50:
#line 155 "semantic.y"
    { check_params(curtype); }
    break;

  case 51:
#line 155 "semantic.y"
    { insertSTparamscount(currfunc, params_count); }
    break;

  case 55:
#line 165 "semantic.y"
    { ins();insertSTnest(curid,1); params_count++; }
    break;

  case 66:
#line 178 "semantic.y"
    {currnest++;}
    break;

  case 67:
#line 178 "semantic.y"
    {deletedata(currnest);currnest--;}
    break;

  case 72:
#line 189 "semantic.y"
    {if((yyvsp[(3) - (4)])!=1){printf("Condition checking is not of type int\n");exit(0);}}
    break;

  case 76:
#line 196 "semantic.y"
    {if((yyvsp[(3) - (4)])!=1){printf("Condition checking is not of type int\n");exit(0);}}
    break;

  case 78:
#line 197 "semantic.y"
    {if((yyvsp[(5) - (6)])!=1){printf("Condition checking is not of type int\n");exit(0);}}
    break;

  case 80:
#line 198 "semantic.y"
    {if((yyvsp[(5) - (6)])!=1){printf("Condition checking is not of type int\n");exit(0);}}
    break;

  case 82:
#line 200 "semantic.y"
    {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
    break;

  case 83:
#line 201 "semantic.y"
    { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[(2) - (3)])!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
    break;

  case 85:
#line 217 "semantic.y"
    {insV();}
    break;

  case 90:
#line 230 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
																	  {
			                                                          (yyval)=1;
			                                                          } 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 91:
#line 238 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 92:
#line 244 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 93:
#line 250 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 94:
#line 256 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 95:
#line 262 "semantic.y"
    {
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
    break;

  case 96:
#line 268 "semantic.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 97:
#line 269 "semantic.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 98:
#line 270 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 99:
#line 274 "semantic.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 100:
#line 275 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 101:
#line 278 "semantic.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 102:
#line 279 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 103:
#line 283 "semantic.y"
    {if((yyvsp[(2) - (2)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 104:
#line 284 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 105:
#line 287 "semantic.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 106:
#line 288 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 113:
#line 295 "semantic.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 114:
#line 296 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 117:
#line 303 "semantic.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 118:
#line 304 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 122:
#line 310 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 123:
#line 311 "semantic.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 124:
#line 314 "semantic.y"
    {
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              }
    break;

  case 125:
#line 326 "semantic.y"
    {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
    break;

  case 126:
#line 327 "semantic.y"
    {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		(yyval) = 1;
			              		else
			              		(yyval) = -1;
			              		}
    break;

  case 127:
#line 334 "semantic.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 129:
#line 336 "semantic.y"
    {if((yyvsp[(1) - (1)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 130:
#line 339 "semantic.y"
    {
			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
    break;

  case 131:
#line 345 "semantic.y"
    { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							} 
						 }
    break;

  case 134:
#line 360 "semantic.y"
    { call_params_count++; }
    break;

  case 136:
#line 363 "semantic.y"
    { call_params_count++; }
    break;

  case 139:
#line 367 "semantic.y"
    {  insV(); (yyval)=1; }
    break;

  case 140:
#line 368 "semantic.y"
    {  insV(); (yyval)=-1;}
    break;

  case 141:
#line 369 "semantic.y"
    {  insV(); }
    break;

  case 142:
#line 370 "semantic.y"
    {  insV();(yyval)=1; }
    break;


/* Line 1267 of yacc.c.  */
#line 2041 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
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
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 372 "semantic.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}

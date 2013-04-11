/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

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
enum yytokentype
{
  tFNUM = 258,
  tSYMBOL = 259,
  tSTRSYM = 260,
  tDOCU = 261,
  tDIGITS = 262,
  tSTRING = 263,
  tFOR = 264,
  tTO = 265,
  tSTEP = 266,
  tNEXT = 267,
  tWHILE = 268,
  tWEND = 269,
  tREPEAT = 270,
  tUNTIL = 271,
  tIMPORT = 272,
  tGOTO = 273,
  tGOSUB = 274,
  tLABEL = 275,
  tON = 276,
  tSUB = 277,
  tENDSUB = 278,
  tLOCAL = 279,
  tSTATIC = 280,
  tEXPORT = 281,
  tERROR = 282,
  tEXECUTE = 283,
  tEXECUTE2 = 284,
  tCOMPILE = 285,
  tRUNTIME_CREATED_SUB = 286,
  tINTERRUPT = 287,
  tBREAK = 288,
  tCONTINUE = 289,
  tSWITCH = 290,
  tSEND = 291,
  tCASE = 292,
  tDEFAULT = 293,
  tLOOP = 294,
  tDO = 295,
  tSEP = 296,
  tEOPROG = 297,
  tIF = 298,
  tTHEN = 299,
  tELSE = 300,
  tELSIF = 301,
  tENDIF = 302,
  tUSING = 303,
  tPRINT = 304,
  tINPUT = 305,
  tLINE = 306,
  tRETURN = 307,
  tDIM = 308,
  tEND = 309,
  tEXIT = 310,
  tAT = 311,
  tSCREEN = 312,
  tREVERSE = 313,
  tCOLOUR = 314,
  tBACKCOLOUR = 315,
  tAND = 316,
  tOR = 317,
  tNOT = 318,
  tEOR = 319,
  tNEQ = 320,
  tLEQ = 321,
  tGEQ = 322,
  tLTN = 323,
  tGTN = 324,
  tEQU = 325,
  tPOW = 326,
  tREAD = 327,
  tDATA = 328,
  tRESTORE = 329,
  tOPEN = 330,
  tCLOSE = 331,
  tSEEK = 332,
  tTELL = 333,
  tAS = 334,
  tREADING = 335,
  tWRITING = 336,
  tORIGIN = 337,
  tWINDOW = 338,
  tDOT = 339,
  tCIRCLE = 340,
  tTRIANGLE = 341,
  tTEXT = 342,
  tCLEAR = 343,
  tFILL = 344,
  tPRINTER = 345,
  tWAIT = 346,
  tBELL = 347,
  tLET = 348,
  tARDIM = 349,
  tARSIZE = 350,
  tBIND = 351,
  tRECT = 352,
  tGETBIT = 353,
  tPUTBIT = 354,
  tGETCHAR = 355,
  tPUTCHAR = 356,
  tNEW = 357,
  tCURVE = 358,
  tSIN = 359,
  tASIN = 360,
  tCOS = 361,
  tACOS = 362,
  tTAN = 363,
  tATAN = 364,
  tEXP = 365,
  tLOG = 366,
  tSQRT = 367,
  tSQR = 368,
  tMYEOF = 369,
  tABS = 370,
  tSIG = 371,
  tINT = 372,
  tFRAC = 373,
  tMOD = 374,
  tRAN = 375,
  tLEN = 376,
  tVAL = 377,
  tLEFT = 378,
  tRIGHT = 379,
  tMID = 380,
  tMIN = 381,
  tMAX = 382,
  tSTR = 383,
  tINKEY = 384,
  tCHR = 385,
  tASC = 386,
  tHEX = 387,
  tDEC = 388,
  tBIN = 389,
  tUPPER = 390,
  tLOWER = 391,
  tMOUSEX = 392,
  tMOUSEY = 393,
  tMOUSEB = 394,
  tMOUSEMOD = 395,
  tTRIM = 396,
  tLTRIM = 397,
  tRTRIM = 398,
  tINSTR = 399,
  tRINSTR = 400,
  tSYSTEM = 401,
  tSYSTEM2 = 402,
  tPEEK = 403,
  tPEEK2 = 404,
  tPOKE = 405,
  tDATE = 406,
  tTIME = 407,
  tTOKEN = 408,
  tTOKENALT = 409,
  tSPLIT = 410,
  tSPLITALT = 411,
  tGLOB = 412,
  UMINUS = 413
};
#endif
#define tFNUM 258
#define tSYMBOL 259
#define tSTRSYM 260
#define tDOCU 261
#define tDIGITS 262
#define tSTRING 263
#define tFOR 264
#define tTO 265
#define tSTEP 266
#define tNEXT 267
#define tWHILE 268
#define tWEND 269
#define tREPEAT 270
#define tUNTIL 271
#define tIMPORT 272
#define tGOTO 273
#define tGOSUB 274
#define tLABEL 275
#define tON 276
#define tSUB 277
#define tENDSUB 278
#define tLOCAL 279
#define tSTATIC 280
#define tEXPORT 281
#define tERROR 282
#define tEXECUTE 283
#define tEXECUTE2 284
#define tCOMPILE 285
#define tRUNTIME_CREATED_SUB 286
#define tINTERRUPT 287
#define tBREAK 288
#define tCONTINUE 289
#define tSWITCH 290
#define tSEND 291
#define tCASE 292
#define tDEFAULT 293
#define tLOOP 294
#define tDO 295
#define tSEP 296
#define tEOPROG 297
#define tIF 298
#define tTHEN 299
#define tELSE 300
#define tELSIF 301
#define tENDIF 302
#define tUSING 303
#define tPRINT 304
#define tINPUT 305
#define tLINE 306
#define tRETURN 307
#define tDIM 308
#define tEND 309
#define tEXIT 310
#define tAT 311
#define tSCREEN 312
#define tREVERSE 313
#define tCOLOUR 314
#define tBACKCOLOUR 315
#define tAND 316
#define tOR 317
#define tNOT 318
#define tEOR 319
#define tNEQ 320
#define tLEQ 321
#define tGEQ 322
#define tLTN 323
#define tGTN 324
#define tEQU 325
#define tPOW 326
#define tREAD 327
#define tDATA 328
#define tRESTORE 329
#define tOPEN 330
#define tCLOSE 331
#define tSEEK 332
#define tTELL 333
#define tAS 334
#define tREADING 335
#define tWRITING 336
#define tORIGIN 337
#define tWINDOW 338
#define tDOT 339
#define tCIRCLE 340
#define tTRIANGLE 341
#define tTEXT 342
#define tCLEAR 343
#define tFILL 344
#define tPRINTER 345
#define tWAIT 346
#define tBELL 347
#define tLET 348
#define tARDIM 349
#define tARSIZE 350
#define tBIND 351
#define tRECT 352
#define tGETBIT 353
#define tPUTBIT 354
#define tGETCHAR 355
#define tPUTCHAR 356
#define tNEW 357
#define tCURVE 358
#define tSIN 359
#define tASIN 360
#define tCOS 361
#define tACOS 362
#define tTAN 363
#define tATAN 364
#define tEXP 365
#define tLOG 366
#define tSQRT 367
#define tSQR 368
#define tMYEOF 369
#define tABS 370
#define tSIG 371
#define tINT 372
#define tFRAC 373
#define tMOD 374
#define tRAN 375
#define tLEN 376
#define tVAL 377
#define tLEFT 378
#define tRIGHT 379
#define tMID 380
#define tMIN 381
#define tMAX 382
#define tSTR 383
#define tINKEY 384
#define tCHR 385
#define tASC 386
#define tHEX 387
#define tDEC 388
#define tBIN 389
#define tUPPER 390
#define tLOWER 391
#define tMOUSEX 392
#define tMOUSEY 393
#define tMOUSEB 394
#define tMOUSEMOD 395
#define tTRIM 396
#define tLTRIM 397
#define tRTRIM 398
#define tINSTR 399
#define tRINSTR 400
#define tSYSTEM 401
#define tSYSTEM2 402
#define tPEEK 403
#define tPEEK2 404
#define tPOKE 405
#define tDATE 406
#define tTIME 407
#define tTOKEN 408
#define tTOKENALT 409
#define tSPLIT 410
#define tSPLITALT 411
#define tGLOB 412
#define UMINUS 413




/* Copy the first part of user declarations.  */


/*

    YABASIC ---  a simple Basic Interpreter
    written by Marc-Oliver Ihm 1995-2005
    homepage: www.yabasic.de

    BISON part
     
    This file is part of yabasic and may be copied only 
    under the terms of either the Artistic License or 
    the GNU General Public License (GPL), both of which 
    can be found at www.yabasic.de

*/


#ifndef YABASIC_INCLUDED
#include "yabasic.h"		/* definitions of yabasic */
#endif

#ifdef WINDOWS
#include <malloc.h>
#else
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#else
#include <stdlib.h>
#endif
#endif

#if HAVE_ALLOCA_H
#ifndef WINDOWS
#include <alloca.h>
#endif
#endif

void __yy_bcopy (char *, char *, int);	/* prototype missing */

int tileol;			/* true, read should go to eon of line */
int yylineno = 1;		/* line number; counts fresh in every new file */
int main_lineno = 1;		/* line number of main */
int function_type = ftNONE;	/* contains function type while parsing function */
char *current_function = NULL;	/* name of currently parsed function */
int exported = FALSE;		/* true, if function is exported */
int yylex (void);
extern struct libfile_name *current_libfile;	/*  defined in main.c: name of currently parsed file */
int missing_endif = 0;
int missing_endif_line = 0;
int missing_endsub = 0;
int missing_endsub_line = 0;
int missing_next = 0;
int missing_next_line = 0;
int missing_wend = 0;
int missing_wend_line = 0;
int missing_until = 0;
int missing_until_line = 0;
int missing_loop = 0;
int missing_loop_line = 0;
int in_loop = 0;

void
report_missing (int severity, char *text)
{
  if (missing_loop || missing_endif || missing_next || missing_until
      || missing_wend)
    {
      error (severity, text);
      string[0] = '\0';
      if (missing_endif)
	sprintf (string,
		 "if statement starting at line %d has seen no 'endif' yet",
		 missing_endif_line);
      else if (missing_next)
	sprintf (string,
		 "for-loop starting at line %d has seen no 'next' yet",
		 missing_next_line);
      else if (missing_wend)
	sprintf (string,
		 "while-loop starting at line %d has seen no 'wend' yet",
		 missing_wend_line);
      else if (missing_until)
	sprintf (string,
		 "repeat-loop starting at line %d has seen no 'until' yet",
		 missing_until_line);
      else if (missing_loop)
	sprintf (string,
		 "do-loop starting at line %d has seen no 'loop' yet",
		 missing_wend_line);
      if (string[0])
	error (severity, string);
    }
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)

typedef union YYSTYPE
{
  double fnum;			/* double number */
  int inum;			/* integer number */
  int token;			/* token of command */
  int sep;			/* number of newlines */
  char *string;			/* quoted string */
  char *symbol;			/* general symbol */
  char *digits;			/* string of digits */
  char *docu;			/* embedded documentation */
} YYSTYPE;
/* Line 191 of yacc.c.  */

# define yystype YYSTYPE	/* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h>		/* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
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
typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  247
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5167

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  110
/* YYNRULES -- Number of rules. */
#define YYNRULES  427
/* YYNRULES -- Number of states. */
#define YYNSTATES  1002

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   413

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] = {
  0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 167, 2, 2, 2, 2,
  163, 164, 160, 159, 166, 158, 2, 161, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 165,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
  5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
  15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
  25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
  35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
  45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
  55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
  65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
  75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
  85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
  95, 96, 97, 98, 99, 100, 101, 102, 103, 104,
  105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
  115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
  125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
  135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
  145, 146, 147, 148, 149, 150, 151, 152, 153, 154,
  155, 156, 157, 162
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] = {
  0, 0, 3, 6, 8, 9, 10, 16, 17, 19,
  22, 24, 27, 29, 32, 34, 36, 38, 40, 42,
  44, 46, 48, 50, 52, 53, 57, 58, 62, 64,
  66, 69, 72, 76, 80, 81, 87, 88, 94, 97,
  99, 102, 104, 107, 112, 117, 121, 126, 131, 132,
  136, 137, 142, 149, 152, 159, 162, 165, 168, 170,
  173, 175, 178, 181, 184, 190, 198, 202, 205, 209,
  214, 220, 224, 227, 232, 236, 245, 252, 259, 262,
  265, 271, 279, 284, 291, 300, 306, 309, 312, 315,
  318, 322, 325, 328, 330, 332, 336, 341, 346, 351,
  356, 361, 366, 368, 370, 373, 375, 378, 379, 381,
  383, 386, 389, 393, 404, 413, 422, 431, 435, 437,
  439, 446, 451, 456, 463, 470, 475, 482, 484, 489,
  491, 493, 495, 497, 501, 505, 512, 519, 528, 535,
  540, 547, 556, 558, 562, 567, 572, 577, 582, 587,
  592, 597, 602, 604, 608, 610, 614, 619, 626, 633,
  638, 645, 650, 657, 668, 673, 678, 683, 687, 691,
  692, 697, 698, 703, 706, 710, 714, 718, 722, 726,
  730, 735, 742, 744, 749, 754, 761, 768, 770, 772,
  776, 780, 784, 788, 792, 795, 799, 803, 807, 811,
  815, 819, 821, 825, 829, 833, 837, 842, 847, 852,
  857, 862, 867, 874, 879, 884, 891, 896, 901, 906,
  911, 916, 921, 928, 933, 937, 944, 951, 956, 961,
  966, 971, 978, 985, 994, 1001, 1010, 1015, 1020, 1025,
  1030, 1032, 1036, 1041, 1043, 1047, 1052, 1054, 1058, 1063,
  1065, 1069, 1076, 1083, 1090, 1095, 1104, 1111, 1120, 1127,
  1132, 1137, 1142, 1149, 1156, 1163, 1172, 1174, 1177, 1180,
  1182, 1184, 1186, 1188, 1193, 1200, 1205, 1212, 1217, 1222,
  1223, 1226, 1227, 1229, 1233, 1235, 1237, 1238, 1239, 1240,
  1252, 1254, 1256, 1258, 1260, 1261, 1263, 1265, 1268, 1270,
  1274, 1276, 1278, 1283, 1288, 1290, 1294, 1296, 1298, 1303,
  1308, 1309, 1311, 1315, 1317, 1319, 1323, 1327, 1328, 1329,
  1330, 1331, 1346, 1348, 1350, 1351, 1354, 1355, 1357, 1358,
  1366, 1368, 1371, 1373, 1375, 1376, 1377, 1378, 1385, 1386,
  1387, 1392, 1393, 1398, 1400, 1402, 1403, 1404, 1413, 1415,
  1417, 1418, 1423, 1425, 1430, 1431, 1432, 1433, 1434, 1446,
  1448, 1450, 1451, 1457, 1458, 1461, 1462, 1463, 1464, 1472,
  1473, 1475, 1477, 1478, 1483, 1485, 1490, 1492, 1497, 1499,
  1503, 1505, 1510, 1512, 1517, 1519, 1521, 1525, 1529, 1530,
  1533, 1538, 1540, 1544, 1545, 1548, 1555, 1556, 1561, 1562,
  1567, 1568, 1575, 1576, 1586, 1587, 1591, 1592, 1594, 1595,
  1598, 1601, 1606, 1608, 1613, 1620, 1627, 1635, 1646, 1659,
  1667, 1678, 1691, 1694, 1696, 1698, 1702, 1704
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] = {
  169, 0, -1, 170, 42, -1, 173, -1, -1, -1,
  170, 171, 41, 172, 173, -1, -1, 181, -1, 93,
  181, -1, 188, -1, 93, 188, -1, 17, -1, 27,
  186, -1, 219, -1, 227, -1, 243, -1, 239, -1,
  236, -1, 33, -1, 34, -1, 206, -1, 200, -1,
  201, -1, -1, 24, 174, 213, -1, -1, 25, 175,
  215, -1, 246, -1, 252, -1, 18, 198, -1, 19,
  198, -1, 21, 32, 33, -1, 21, 32, 34, -1,
  -1, 21, 189, 18, 176, 276, -1, -1, 21, 189,
  19, 177, 277, -1, 20, 198, -1, 183, -1, 76,
  275, -1, 184, -1, 30, 186, -1, 28, 163, 202,
  164, -1, 29, 163, 202, 164, -1, 49, 274, 265,
  -1, 49, 274, 265, 165, -1, 49, 274, 265, 166,
  -1, -1, 50, 178, 267, -1, -1, 51, 50, 179,
  267, -1, 59, 189, 166, 189, 166, 189, -1, 59,
  186, -1, 60, 189, 166, 189, 166, 189, -1, 60,
  186, -1, 72, 262, -1, 73, 264, -1, 74, -1,
  74, 198, -1, 52, -1, 52, 189, -1, 52, 186,
  -1, 53, 199, -1, 75, 83, 189, 166, 189, -1,
  75, 83, 189, 166, 189, 166, 186, -1, 83, 82,
  186, -1, 84, 194, -1, 88, 84, 194, -1, 51,
  194, 182, 194, -1, 88, 51, 194, 182, 194, -1,
  51, 10, 194, -1, 51, 194, -1, 88, 51, 10,
  194, -1, 88, 51, 194, -1, 99, 186, 182, 189,
  166, 189, 166, 186, -1, 99, 186, 182, 189, 166,
  189, -1, 101, 186, 182, 189, 166, 189, -1, 102,
  103, -1, 76, 103, -1, 180, 85, 194, 166, 189,
  -1, 180, 86, 194, 182, 194, 182, 194, -1, 87,
  194, 166, 186, -1, 87, 194, 166, 186, 166, 186,
  -1, 87, 194, 166, 186, 166, 186, 166, 186, -1,
  180, 97, 194, 182, 194, -1, 76, 83, -1, 88,
  83, -1, 88, 57, -1, 75, 90, -1, 75, 90,
  186, -1, 76, 90, -1, 91, 189, -1, 92, -1,
  129, -1, 129, 163, 164, -1, 129, 163, 189, 164,
  -1, 147, 163, 186, 164, -1, 150, 186, 166, 186,
  -1, 150, 186, 166, 189, -1, 150, 275, 166, 186,
  -1, 150, 275, 166, 189, -1, 54, -1, 55, -1,
  55, 189, -1, 6, -1, 96, 186, -1, -1, 88,
  -1, 89, -1, 88, 89, -1, 89, 88, -1, 5,
  70, 186, -1, 125, 163, 185, 166, 189, 166, 189,
  164, 70, 186, -1, 125, 163, 185, 166, 189, 164,
  70, 186, -1, 123, 163, 185, 166, 189, 164, 70,
  186, -1, 124, 163, 185, 166, 189, 164, 70, 186,
  -1, 201, 70, 186, -1, 166, -1, 10, -1, 75,
  275, 166, 186, 166, 186, -1, 75, 275, 166, 186,
  -1, 75, 275, 166, 90, -1, 75, 186, 9, 80,
  79, 275, -1, 75, 186, 9, 81, 79, 275, -1,
  77, 275, 166, 189, -1, 77, 275, 166, 189, 166,
  186, -1, 5, -1, 5, 163, 202, 164, -1, 5,
  -1, 187, -1, 201, -1, 8, -1, 186, 159, 186,
  -1, 163, 186, 164, -1, 123, 163, 186, 166, 189,
  164, -1, 124, 163, 186, 166, 189, 164, -1, 125,
  163, 186, 166, 189, 166, 189, 164, -1, 125, 163,
  186, 166, 189, 164, -1, 128, 163, 189, 164, -1,
  128, 163, 189, 166, 186, 164, -1, 128, 163, 189,
  166, 186, 166, 186, 164, -1, 129, -1, 129, 163,
  164, -1, 129, 163, 189, 164, -1, 130, 163, 189,
  164, -1, 135, 163, 186, 164, -1, 136, 163, 186,
  164, -1, 142, 163, 186, 164, -1, 143, 163, 186,
  164, -1, 141, 163, 186, 164, -1, 146, 163, 186,
  164, -1, 151, -1, 151, 163, 164, -1, 152, -1,
  152, 163, 164, -1, 149, 163, 186, 164, -1, 149,
  163, 186, 166, 186, 164, -1, 154, 163, 185, 166,
  186, 164, -1, 154, 163, 185, 164, -1, 156, 163,
  185, 166, 186, 164, -1, 156, 163, 185, 164, -1,
  98, 163, 194, 182, 194, 164, -1, 100, 163, 189,
  166, 189, 182, 189, 166, 189, 164, -1, 132, 163,
  189, 164, -1, 134, 163, 189, 164, -1, 29, 163,
  202, 164, -1, 4, 70, 189, -1, 200, 70, 189,
  -1, -1, 189, 62, 190, 189, -1, -1, 189, 61,
  191, 189, -1, 63, 189, -1, 189, 70, 189, -1,
  189, 65, 189, -1, 189, 68, 189, -1, 189, 66,
  189, -1, 189, 69, 189, -1, 189, 67, 189, -1,
  114, 163, 275, 164, -1, 157, 163, 186, 166, 186,
  164, -1, 197, -1, 94, 163, 192, 164, -1, 94,
  163, 193, 164, -1, 95, 163, 192, 166, 189, 164,
  -1, 95, 163, 193, 166, 189, 164, -1, 200, -1,
  4, -1, 189, 159, 189, -1, 189, 158, 189, -1,
  189, 160, 189, -1, 189, 161, 189, -1, 189, 71,
  189, -1, 158, 189, -1, 186, 70, 186, -1, 186,
  65, 186, -1, 186, 68, 186, -1, 186, 66, 186,
  -1, 186, 69, 186, -1, 186, 67, 186, -1, 195,
  -1, 163, 189, 164, -1, 4, 163, 164, -1, 5,
  163, 164, -1, 189, 166, 189, -1, 104, 163, 189,
  164, -1, 105, 163, 189, 164, -1, 106, 163, 189,
  164, -1, 107, 163, 189, 164, -1, 108, 163, 189,
  164, -1, 109, 163, 189, 164, -1, 109, 163, 189,
  166, 189, 164, -1, 110, 163, 189, 164, -1, 111,
  163, 189, 164, -1, 111, 163, 189, 166, 189, 164,
  -1, 112, 163, 189, 164, -1, 113, 163, 189, 164,
  -1, 117, 163, 189, 164, -1, 118, 163, 189, 164,
  -1, 115, 163, 189, 164, -1, 116, 163, 189, 164,
  -1, 119, 163, 189, 166, 189, 164, -1, 120, 163,
  189, 164, -1, 120, 163, 164, -1, 126, 163, 189,
  166, 189, 164, -1, 127, 163, 189, 166, 189, 164,
  -1, 121, 163, 186, 164, -1, 122, 163, 186, 164,
  -1, 131, 163, 186, 164, -1, 133, 163, 186, 164,
  -1, 133, 163, 186, 166, 189, 164, -1, 144, 163,
  186, 166, 186, 164, -1, 144, 163, 186, 166, 186,
  166, 189, 164, -1, 145, 163, 186, 166, 186, 164,
  -1, 145, 163, 186, 166, 186, 166, 189, 164, -1,
  147, 163, 186, 164, -1, 148, 163, 275, 164, -1,
  148, 163, 186, 164, -1, 137, 163, 186, 164, -1,
  137, -1, 137, 163, 164, -1, 138, 163, 186, 164,
  -1, 138, -1, 138, 163, 164, -1, 139, 163, 186,
  164, -1, 139, -1, 139, 163, 164, -1, 140, 163,
  186, 164, -1, 140, -1, 140, 163, 164, -1, 61,
  163, 189, 166, 189, 164, -1, 62, 163, 189, 166,
  189, 164, -1, 64, 163, 189, 166, 189, 164, -1,
  78, 163, 275, 164, -1, 153, 163, 186, 166, 193,
  166, 186, 164, -1, 153, 163, 186, 166, 193, 164,
  -1, 155, 163, 186, 166, 193, 166, 186, 164, -1,
  155, 163, 186, 166, 193, 164, -1, 28, 163, 202,
  164, -1, 75, 163, 90, 164, -1, 75, 163, 186,
  164, -1, 75, 163, 186, 166, 186, 164, -1, 75,
  163, 275, 166, 90, 164, -1, 75, 163, 275, 166,
  186, 164, -1, 75, 163, 275, 166, 186, 166, 186,
  164, -1, 197, -1, 159, 197, -1, 158, 197, -1,
  3, -1, 7, -1, 7, -1, 4, -1, 4, 163,
  202, 164, -1, 199, 166, 4, 163, 202, 164, -1,
  5, 163, 202, 164, -1, 199, 166, 5, 163, 202,
  164, -1, 4, 163, 202, 164, -1, 5, 163, 202,
  164, -1, -1, 203, 204, -1, -1, 205, -1, 204,
  166, 205, -1, 186, -1, 189, -1, -1, -1, -1,
  212, 22, 207, 211, 208, 163, 217, 164, 209, 170,
  210, -1, 42, -1, 23, -1, 4, -1, 5, -1,
  -1, 26, -1, 31, -1, 31, 26, -1, 214, -1,
  213, 166, 214, -1, 4, -1, 5, -1, 4, 163,
  202, 164, -1, 5, 163, 202, 164, -1, 216, -1,
  215, 166, 216, -1, 4, -1, 5, -1, 4, 163,
  202, 164, -1, 5, 163, 202, 164, -1, -1, 218,
  -1, 217, 166, 218, -1, 4, -1, 5, -1, 4,
  163, 164, -1, 5, 163, 164, -1, -1, -1, -1,
  -1, 9, 220, 4, 70, 221, 189, 10, 189, 225,
  222, 170, 223, 224, 226, -1, 42, -1, 12, -1,
  -1, 11, 189, -1, -1, 4, -1, -1, 35, 228,
  230, 229, 231, 234, 36, -1, 41, -1, 229, 41,
  -1, 189, -1, 186, -1, -1, -1, -1, 231, 37,
  232, 230, 233, 170, -1, -1, -1, 38, 41, 235,
  170, -1, -1, 40, 237, 170, 238, -1, 42, -1,
  39, -1, -1, -1, 13, 240, 163, 189, 164, 241,
  170, 242, -1, 42, -1, 14, -1, -1, 15, 244,
  170, 245, -1, 42, -1, 16, 163, 189, 164, -1,
  -1, -1, -1, -1, 43, 189, 247, 44, 248, 170,
  249, 255, 254, 250, 251, -1, 42, -1, 47, -1,
  -1, 43, 189, 253, 170, 47, -1, -1, 45, 170,
  -1, -1, -1, -1, 46, 189, 258, 256, 170, 257,
  255, -1, -1, 44, -1, 261, -1, -1, 261, 166,
  260, 259, -1, 4, -1, 4, 163, 202, 164, -1,
  5, -1, 5, 163, 202, 164, -1, 263, -1, 262,
  166, 263, -1, 4, -1, 4, 163, 202, 164, -1,
  5, -1, 5, 163, 202, 164, -1, 8, -1, 196,
  -1, 264, 166, 8, -1, 264, 166, 196, -1, -1,
  189, 266, -1, 265, 166, 189, 266, -1, 186, -1,
  265, 166, 186, -1, -1, 48, 186, -1, 48, 163,
  186, 166, 186, 164, -1, -1, 167, 4, 268, 259,
  -1, -1, 167, 7, 269, 259, -1, -1, 167, 163,
  189, 164, 270, 259, -1, -1, 56, 163, 189, 166,
  189, 164, 271, 273, 259, -1, -1, 272, 273, 259,
  -1, -1, 8, -1, -1, 167, 4, -1, 167, 7,
  -1, 167, 163, 189, 164, -1, 58, -1, 59, 163,
  186, 164, -1, 59, 163, 186, 166, 186, 164, -1,
  56, 163, 189, 166, 189, 164, -1, 58, 56, 163,
  189, 166, 189, 164, -1, 59, 163, 186, 164, 56,
  163, 189, 166, 189, 164, -1, 59, 163, 186, 166,
  186, 164, 56, 163, 189, 166, 189, 164, -1, 56,
  163, 189, 166, 189, 164, 58, -1, 56, 163, 189,
  166, 189, 164, 59, 163, 186, 164, -1, 56, 163,
  189, 166, 189, 164, 59, 163, 186, 166, 186, 164,
  -1, 167, 189, -1, 189, -1, 198, -1, 276, 166,
  198, -1, 198, -1, 277, 166, 198, -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] = {
  0, 147, 147, 150, 151, 152, 151, 155, 156, 157,
  158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
  168, 169, 170, 171, 172, 172, 173, 173, 174, 175,
  176, 177, 178, 179, 180, 180, 182, 182, 184, 185,
  186, 187, 188, 189, 190, 191, 192, 193, 194, 194,
  195, 195, 196, 197, 198, 199, 200, 201, 202, 203,
  204, 213, 214, 215, 216, 217, 219, 220, 221, 222,
  223, 224, 225, 226, 227, 228, 229, 230, 231, 232,
  233, 234, 235, 236, 237, 238, 239, 240, 241, 242,
  243, 244, 245, 246, 247, 248, 249, 250, 252, 253,
  254, 255, 256, 257, 258, 259, 260, 264, 265, 266,
  267, 268, 272, 273, 274, 275, 276, 277, 280, 281,
  284, 285, 286, 287, 288, 291, 292, 295, 296, 299,
  300, 301, 302, 303, 304, 307, 308, 309, 310, 311,
  312, 313, 314, 315, 316, 317, 318, 319, 320, 321,
  322, 323, 324, 325, 326, 327, 328, 329, 330, 331,
  332, 333, 334, 335, 336, 337, 338, 341, 342, 345,
  345, 346, 346, 347, 348, 349, 350, 351, 352, 353,
  354, 355, 356, 357, 358, 359, 360, 361, 362, 363,
  364, 365, 366, 367, 368, 369, 370, 371, 372, 373,
  374, 375, 376, 379, 382, 385, 388, 389, 390, 391,
  392, 393, 394, 395, 396, 397, 398, 399, 400, 401,
  402, 403, 404, 405, 406, 407, 408, 409, 410, 411,
  412, 413, 414, 415, 416, 417, 418, 419, 420, 421,
  422, 423, 424, 425, 426, 427, 428, 429, 430, 431,
  432, 433, 434, 435, 436, 437, 438, 439, 440, 441,
  442, 443, 444, 445, 446, 447, 450, 451, 452, 455,
  456, 459, 460, 463, 464, 465, 466, 469, 472, 475,
  475, 478, 479, 480, 483, 484, 487, 488, 491, 487,
  496, 497, 500, 501, 504, 505, 506, 507, 510, 511,
  514, 515, 516, 517, 520, 521, 524, 525, 526, 527,
  530, 531, 532, 535, 536, 537, 538, 541, 542, 546,
  559, 541, 564, 565, 568, 569, 572, 573, 578, 578,
  583, 584, 587, 588, 592, 593, 594, 593, 598, 599,
  599, 603, 603, 609, 610, 614, 615, 614, 621, 622,
  626, 626, 631, 632, 636, 637, 637, 639, 636, 643,
  644, 647, 647, 651, 652, 655, 657, 659, 656, 663,
  664, 667, 668, 668, 671, 672, 674, 675, 679, 680,
  683, 684, 686, 687, 691, 692, 693, 694, 697, 698,
  699, 700, 701, 704, 705, 706, 709, 709, 710, 710,
  711, 711, 712, 712, 713, 713, 716, 717, 720, 721,
  722, 723, 724, 725, 726, 727, 728, 729, 730, 731,
  732, 733, 736, 737, 739, 740, 743, 744
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] = {
  "$end", "error", "$undefined", "tFNUM", "tSYMBOL", "tSTRSYM", "tDOCU",
  "tDIGITS", "tSTRING", "tFOR", "tTO", "tSTEP", "tNEXT", "tWHILE",
  "tWEND", "tREPEAT", "tUNTIL", "tIMPORT", "tGOTO", "tGOSUB", "tLABEL",
  "tON", "tSUB", "tENDSUB", "tLOCAL", "tSTATIC", "tEXPORT", "tERROR",
  "tEXECUTE", "tEXECUTE2", "tCOMPILE", "tRUNTIME_CREATED_SUB",
  "tINTERRUPT", "tBREAK", "tCONTINUE", "tSWITCH", "tSEND", "tCASE",
  "tDEFAULT", "tLOOP", "tDO", "tSEP", "tEOPROG", "tIF", "tTHEN", "tELSE",
  "tELSIF", "tENDIF", "tUSING", "tPRINT", "tINPUT", "tLINE", "tRETURN",
  "tDIM", "tEND", "tEXIT", "tAT", "tSCREEN", "tREVERSE", "tCOLOUR",
  "tBACKCOLOUR", "tAND", "tOR", "tNOT", "tEOR", "tNEQ", "tLEQ", "tGEQ",
  "tLTN", "tGTN", "tEQU", "tPOW", "tREAD", "tDATA", "tRESTORE", "tOPEN",
  "tCLOSE", "tSEEK", "tTELL", "tAS", "tREADING", "tWRITING", "tORIGIN",
  "tWINDOW", "tDOT", "tCIRCLE", "tTRIANGLE", "tTEXT", "tCLEAR", "tFILL",
  "tPRINTER", "tWAIT", "tBELL", "tLET", "tARDIM", "tARSIZE", "tBIND",
  "tRECT", "tGETBIT", "tPUTBIT", "tGETCHAR", "tPUTCHAR", "tNEW", "tCURVE",
  "tSIN", "tASIN", "tCOS", "tACOS", "tTAN", "tATAN", "tEXP", "tLOG",
  "tSQRT", "tSQR", "tMYEOF", "tABS", "tSIG", "tINT", "tFRAC", "tMOD",
  "tRAN", "tLEN", "tVAL", "tLEFT", "tRIGHT", "tMID", "tMIN", "tMAX",
  "tSTR", "tINKEY", "tCHR", "tASC", "tHEX", "tDEC", "tBIN", "tUPPER",
  "tLOWER", "tMOUSEX", "tMOUSEY", "tMOUSEB", "tMOUSEMOD", "tTRIM",
  "tLTRIM", "tRTRIM", "tINSTR", "tRINSTR", "tSYSTEM", "tSYSTEM2", "tPEEK",
  "tPEEK2", "tPOKE", "tDATE", "tTIME", "tTOKEN", "tTOKENALT", "tSPLIT",
  "tSPLITALT", "tGLOB", "'-'", "'+'", "'*'", "'/'", "UMINUS", "'('",
  "')'", "';'", "','", "'#'", "$accept", "program", "statement_list",
  "@1", "@2", "statement", "@3", "@4", "@5", "@6", "@7", "@8",
  "clear_fill_clause", "string_assignment", "to", "open_clause",
  "seek_clause", "string_scalar_or_array", "string_expression",
  "string_function", "assignment", "expression", "@9", "@10", "arrayref",
  "string_arrayref", "coordinates", "function", "const", "number",
  "symbol_or_lineno", "dimlist", "function_or_array",
  "stringfunction_or_array", "call_list", "@11", "calls", "call_item",
  "function_definition", "@12", "@13", "@14", "endsub", "function_name",
  "export", "local_list", "local_item", "static_list", "static_item",
  "paramlist", "paramitem", "for_loop", "@15", "@16", "@17", "@18",
  "next", "step_part", "next_symbol", "switch_number_or_string", "@19",
  "sep_list", "number_or_string", "case_list", "@20", "@21", "default",
  "@22", "do_loop", "@23", "loop", "while_loop", "@24", "@25", "wend",
  "repeat_loop", "@26", "until", "if_clause", "@27", "@28", "@29", "@30",
  "endif", "short_if", "@31", "else_part", "elsif_part", "@32", "@33",
  "maybe_then", "inputlist", "@34", "input", "readlist", "readitem",
  "datalist", "printlist", "using", "inputbody", "@35", "@36", "@37",
  "@38", "@39", "prompt", "printintro", "hashed_number", "goto_list",
  "gosub_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] = {
  0, 256, 257, 258, 259, 260, 261, 262, 263, 264,
  265, 266, 267, 268, 269, 270, 271, 272, 273, 274,
  275, 276, 277, 278, 279, 280, 281, 282, 283, 284,
  285, 286, 287, 288, 289, 290, 291, 292, 293, 294,
  295, 296, 297, 298, 299, 300, 301, 302, 303, 304,
  305, 306, 307, 308, 309, 310, 311, 312, 313, 314,
  315, 316, 317, 318, 319, 320, 321, 322, 323, 324,
  325, 326, 327, 328, 329, 330, 331, 332, 333, 334,
  335, 336, 337, 338, 339, 340, 341, 342, 343, 344,
  345, 346, 347, 348, 349, 350, 351, 352, 353, 354,
  355, 356, 357, 358, 359, 360, 361, 362, 363, 364,
  365, 366, 367, 368, 369, 370, 371, 372, 373, 374,
  375, 376, 377, 378, 379, 380, 381, 382, 383, 384,
  385, 386, 387, 388, 389, 390, 391, 392, 393, 394,
  395, 396, 397, 398, 399, 400, 401, 402, 403, 404,
  405, 406, 407, 408, 409, 410, 411, 412, 45, 43,
  42, 47, 413, 40, 41, 59, 44, 35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] = {
  0, 168, 169, 170, 171, 172, 170, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 174, 173, 175, 173, 173, 173,
  173, 173, 173, 173, 176, 173, 177, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 178, 173,
  179, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
  173, 173, 173, 173, 173, 173, 173, 180, 180, 180,
  180, 180, 181, 181, 181, 181, 181, 181, 182, 182,
  183, 183, 183, 183, 183, 184, 184, 185, 185, 186,
  186, 186, 186, 186, 186, 187, 187, 187, 187, 187,
  187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
  187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
  187, 187, 187, 187, 187, 187, 187, 188, 188, 190,
  189, 191, 189, 189, 189, 189, 189, 189, 189, 189,
  189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
  189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
  189, 189, 189, 192, 193, 194, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 195, 195, 195, 195,
  195, 195, 195, 195, 195, 195, 196, 196, 196, 197,
  197, 198, 198, 199, 199, 199, 199, 200, 201, 203,
  202, 204, 204, 204, 205, 205, 207, 208, 209, 206,
  210, 210, 211, 211, 212, 212, 212, 212, 213, 213,
  214, 214, 214, 214, 215, 215, 216, 216, 216, 216,
  217, 217, 217, 218, 218, 218, 218, 220, 221, 222,
  223, 219, 224, 224, 225, 225, 226, 226, 228, 227,
  229, 229, 230, 230, 231, 232, 233, 231, 234, 235,
  234, 237, 236, 238, 238, 240, 241, 239, 242, 242,
  244, 243, 245, 245, 247, 248, 249, 250, 246, 251,
  251, 253, 252, 254, 254, 255, 256, 257, 255, 258,
  258, 259, 260, 259, 261, 261, 261, 261, 262, 262,
  263, 263, 263, 263, 264, 264, 264, 264, 265, 265,
  265, 265, 265, 266, 266, 266, 268, 267, 269, 267,
  270, 267, 271, 267, 272, 267, 273, 273, 274, 274,
  274, 274, 274, 274, 274, 274, 274, 274, 274, 274,
  274, 274, 275, 275, 276, 276, 277, 277
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] = {
  0, 2, 2, 1, 0, 0, 5, 0, 1, 2,
  1, 2, 1, 2, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 0, 3, 0, 3, 1, 1,
  2, 2, 3, 3, 0, 5, 0, 5, 2, 1,
  2, 1, 2, 4, 4, 3, 4, 4, 0, 3,
  0, 4, 6, 2, 6, 2, 2, 2, 1, 2,
  1, 2, 2, 2, 5, 7, 3, 2, 3, 4,
  5, 3, 2, 4, 3, 8, 6, 6, 2, 2,
  5, 7, 4, 6, 8, 5, 2, 2, 2, 2,
  3, 2, 2, 1, 1, 3, 4, 4, 4, 4,
  4, 4, 1, 1, 2, 1, 2, 0, 1, 1,
  2, 2, 3, 10, 8, 8, 8, 3, 1, 1,
  6, 4, 4, 6, 6, 4, 6, 1, 4, 1,
  1, 1, 1, 3, 3, 6, 6, 8, 6, 4,
  6, 8, 1, 3, 4, 4, 4, 4, 4, 4,
  4, 4, 1, 3, 1, 3, 4, 6, 6, 4,
  6, 4, 6, 10, 4, 4, 4, 3, 3, 0,
  4, 0, 4, 2, 3, 3, 3, 3, 3, 3,
  4, 6, 1, 4, 4, 6, 6, 1, 1, 3,
  3, 3, 3, 3, 2, 3, 3, 3, 3, 3,
  3, 1, 3, 3, 3, 3, 4, 4, 4, 4,
  4, 4, 6, 4, 4, 6, 4, 4, 4, 4,
  4, 4, 6, 4, 3, 6, 6, 4, 4, 4,
  4, 6, 6, 8, 6, 8, 4, 4, 4, 4,
  1, 3, 4, 1, 3, 4, 1, 3, 4, 1,
  3, 6, 6, 6, 4, 8, 6, 8, 6, 4,
  4, 4, 6, 6, 6, 8, 1, 2, 2, 1,
  1, 1, 1, 4, 6, 4, 6, 4, 4, 0,
  2, 0, 1, 3, 1, 1, 0, 0, 0, 11,
  1, 1, 1, 1, 0, 1, 1, 2, 1, 3,
  1, 1, 4, 4, 1, 3, 1, 1, 4, 4,
  0, 1, 3, 1, 1, 3, 3, 0, 0, 0,
  0, 14, 1, 1, 0, 2, 0, 1, 0, 7,
  1, 2, 1, 1, 0, 0, 0, 6, 0, 0,
  4, 0, 4, 1, 1, 0, 0, 8, 1, 1,
  0, 4, 1, 4, 0, 0, 0, 0, 11, 1,
  1, 0, 5, 0, 2, 0, 0, 0, 7, 0,
  1, 1, 0, 4, 1, 4, 1, 4, 1, 3,
  1, 4, 1, 4, 1, 1, 3, 3, 0, 2,
  4, 1, 3, 0, 2, 6, 0, 4, 0, 4,
  0, 6, 0, 9, 0, 3, 0, 1, 0, 2,
  2, 4, 1, 4, 6, 6, 7, 10, 12, 7,
  10, 12, 2, 1, 1, 3, 1, 3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] = {
  107, 0, 0, 105, 317, 345, 350, 12, 0, 0,
  0, 0, 24, 26, 295, 0, 0, 0, 0, 296,
  19, 20, 328, 341, 0, 408, 48, 0, 60, 0,
  102, 103, 0, 0, 0, 0, 58, 0, 0, 0,
  0, 0, 0, 108, 109, 0, 93, 0, 0, 0,
  0, 0, 0, 0, 0, 94, 0, 0, 0, 4,
  3, 0, 8, 39, 41, 10, 22, 23, 21, 0,
  14, 15, 18, 17, 16, 28, 29, 0, 279, 0,
  279, 0, 0, 7, 272, 271, 30, 31, 38, 269,
  188, 129, 270, 132, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
  240, 243, 246, 249, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 152, 154, 0, 0, 0, 0, 0,
  0, 0, 0, 130, 0, 201, 182, 187, 131, 0,
  0, 0, 13, 279, 279, 42, 297, 0, 7, 361,
  0, 412, 0, 0, 388, 404, 0, 50, 0, 72,
  62, 61, 0, 0, 63, 104, 53, 0, 55, 0,
  380, 382, 56, 378, 384, 0, 0, 385, 266, 57,
  59, 0, 89, 0, 0, 423, 0, 86, 91, 79,
  40, 0, 0, 67, 0, 0, 88, 87, 0, 110,
  111, 92, 9, 11, 0, 0, 106, 0, 0, 78,
  0, 0, 0, 0, 0, 0, 0, 1, 2, 0,
  0, 0, 0, 0, 0, 286, 167, 0, 281, 112,
  0, 0, 0, 4, 279, 279, 32, 33, 0, 0,
  173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 34, 36, 171, 169, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 300, 301, 25, 298,
  306, 307, 27, 304, 0, 0, 0, 333, 332, 0,
  4, 0, 107, 0, 0, 0, 409, 410, 0, 391,
  393, 45, 0, 0, 49, 406, 71, 404, 0, 119,
  118, 0, 279, 279, 0, 0, 0, 279, 279, 0,
  268, 267, 0, 0, 90, 422, 0, 0, 0, 66,
  0, 0, 74, 68, 0, 0, 127, 0, 0, 0,
  95, 0, 0, 0, 0, 5, 0, 0, 0, 168,
  117, 0, 277, 284, 285, 280, 282, 278, 318, 0,
  0, 352, 351, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
  0, 0, 0, 0, 0, 241, 0, 244, 0, 247,
  0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 153, 155, 0, 0, 0, 0, 0,
  134, 202, 196, 198, 200, 197, 199, 195, 133, 0,
  0, 0, 0, 175, 177, 179, 176, 178, 174, 193,
  190, 189, 191, 192, 279, 279, 0, 279, 279, 0,
  43, 44, 330, 334, 344, 343, 342, 355, 4, 0,
  0, 0, 0, 0, 389, 46, 47, 0, 396, 398,
  0, 407, 0, 51, 205, 69, 0, 0, 0, 0,
  0, 0, 0, 0, 379, 386, 387, 0, 0, 0,
  122, 121, 125, 82, 73, 0, 0, 0, 279, 0,
  0, 0, 96, 97, 98, 99, 100, 101, 7, 0,
  0, 0, 292, 293, 287, 0, 0, 346, 0, 259,
  166, 0, 0, 0, 260, 261, 0, 0, 254, 0,
  0, 183, 184, 0, 0, 0, 0, 206, 207, 208,
  209, 210, 211, 0, 213, 214, 0, 216, 217, 180,
  220, 221, 218, 219, 0, 223, 227, 228, 0, 0,
  0, 0, 0, 139, 0, 144, 145, 229, 164, 230,
  0, 165, 146, 147, 239, 242, 245, 248, 150, 148,
  149, 0, 0, 151, 236, 238, 237, 156, 0, 0,
  159, 0, 0, 161, 0, 0, 424, 35, 426, 37,
  172, 170, 0, 0, 299, 0, 0, 305, 331, 338,
  7, 362, 0, 0, 413, 0, 411, 0, 394, 392,
  393, 0, 0, 0, 0, 374, 376, 405, 371, 273,
  275, 279, 279, 0, 0, 381, 383, 64, 0, 0,
  0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
  6, 80, 0, 85, 0, 283, 0, 7, 0, 0,
  0, 0, 0, 0, 0, 203, 204, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 302, 303, 308, 309, 335, 0, 0, 356, 0,
  0, 0, 0, 0, 390, 0, 397, 399, 400, 279,
  279, 372, 0, 0, 52, 54, 0, 123, 124, 120,
  126, 83, 76, 77, 128, 0, 0, 0, 0, 0,
  310, 0, 4, 353, 251, 252, 253, 262, 263, 264,
  0, 185, 186, 162, 0, 212, 215, 222, 135, 136,
  138, 0, 225, 226, 140, 0, 231, 232, 0, 234,
  0, 157, 256, 0, 158, 258, 0, 160, 181, 425,
  427, 0, 339, 329, 365, 415, 0, 0, 414, 0,
  0, 0, 0, 0, 0, 274, 276, 65, 0, 0,
  0, 0, 0, 0, 81, 313, 314, 0, 311, 324,
  349, 348, 347, 0, 0, 0, 0, 0, 0, 0,
  0, 336, 107, 0, 363, 419, 0, 416, 0, 0,
  0, 402, 401, 375, 377, 373, 84, 75, 115, 116,
  114, 0, 0, 0, 288, 0, 0, 319, 265, 0,
  137, 141, 233, 235, 255, 257, 7, 4, 369, 7,
  357, 0, 0, 0, 395, 406, 0, 315, 316, 7,
  312, 325, 7, 0, 337, 370, 366, 364, 0, 0,
  0, 0, 0, 113, 4, 320, 163, 7, 359, 360,
  358, 420, 0, 417, 0, 403, 291, 290, 289, 0,
  367, 0, 0, 323, 322, 326, 365, 421, 418, 327,
  321, 368
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] = {
  -1, 58, 59, 249, 608, 60, 169, 170, 529, 530,
  185, 387, 61, 62, 391, 63, 64, 417, 162, 163,
  65, 188, 532, 531, 454, 455, 189, 165, 207, 166,
  86, 194, 167, 168, 257, 258, 435, 436, 68, 431,
  754, 959, 988, 614, 69, 358, 359, 362, 363, 897,
  898, 70, 81, 616, 962, 989, 995, 937, 1000, 71,
  177, 553, 369, 709, 871, 946, 797, 912, 72, 178,
  556, 73, 82, 757, 902, 74, 83, 442, 75, 371,
  710, 874, 968, 980, 76, 372, 950, 914, 977, 996,
  966, 727, 884, 728, 202, 203, 209, 381, 564, 384,
  722, 723, 881, 955, 385, 572, 184, 216, 697, 699
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -714
static const short yypact[] = {
  3330, -45, -43, -714, -714, -714, -714, -714, 7, 7,
  7, 2314, -714, -714, -714, 2994, -151, -124, 2994, 25,
  -714, -714, -714, -714, 2628, 20, -714, 2157, 2628, 82,
  -714, 2628, 2628, 2628, 275, 37, 7, 1200, 1043, 1514,
  -11, 2628, 2628, 172, 28, 2628, -714, 26, 2994, 2994,
  2994, -26, -25, 13, 23, 34, 67, 1514, 160, 194,
  -714, 107, -714, -714, -714, -714, 174, 195, -714, 300,
  -714, -714, -714, -714, -714, -714, -714, 2628, -714, 2994,
  -714, 326, 203, 3194, -714, -714, -714, -714, -714, -714,
  206, 215, -714, -714, 228, 238, 361, 246, 274, 2628,
  278, 282, 291, 293, 295, 314, 322, 330, 339, 341,
  377, 391, 421, 458, 461, 476, 479, 485, 494, 498,
  504, 505, 506, 507, 510, 519, 520, 521, 522, 523,
  525, 530, 532, 534, 535, 536, 537, 538, 545, 549,
  550, 551, 554, 558, 565, 566, 567, 568, 571, 577,
  578, 581, 582, 583, 584, 587, 588, 589, 591, 592,
  2628, 2628, 31, -714, 610, -714, -714, -714, -714, 417,
  552, 2994, 248, -714, -714, 248, -714, 2628, 3194, 861,
  593, 387, 596, 14, 2628, -48, 2628, -714, 2010, 3,
  31, 3512, 597, 598, 231, 3512, 31, 2172, 31, 2329,
  599, 600, 380, -714, -714, 145, 145, -714, -714, 444,
  -714, 2628, 2994, 2628, 24, 3512, 528, -714, -714, -714,
  -714, 543, 2994, -714, 560, 2471, -714, -714, 2628, -714,
  -714, 3512, -714, -714, 174, 195, 248, -5, -5, -714,
  513, 513, 513, 1671, 2994, -13, 573, -714, -714, 487,
  2628, 2628, 2628, 2628, 2994, -714, 3512, 602, 2628, 248,
  608, 683, 2628, 30, -714, -714, -714, -714, 2628, 2628,
  429, 2628, 1357, 1514, 562, 562, 2628, 2628, 2628, 2628,
  2628, 2628, 2628, 2628, 2628, 2628, 2628, 2628, 1514, 2628,
  2628, 2628, 2628, 2628, 1833, 2994, 2994, 2994, 2994, 2994,
  2628, 2628, 2628, 1995, 2628, 2994, 2628, 2994, 2628, 2994,
  2994, 409, 2689, 2787, 2834, 2994, 2994, 2994, 2994, 2994,
  2994, 2994, 1514, 2994, 609, 611, 2994, 513, 2994, 513,
  2994, 693, 173, 3236, 2994, 2994, 2994, 2994, 2994, 2994,
  2994, -714, -714, -714, -714, 2628, 2628, 2628, 2628, 2628,
  2628, 2628, 2628, 2628, 2628, 2628, 613, 614, 615, -714,
  617, 621, 619, -714, -49, 623, 624, 31, 3512, 724,
  120, 730, 3466, 2628, 626, 2994, -714, -714, 2628, 31,
  531, 403, 627, 19, -714, 783, -714, -48, 2628, -714,
  -714, 2628, -714, -714, 590, 2628, 2628, -714, -714, 275,
  -714, -714, 66, 2486, 248, 3512, 563, 2884, 2628, 248,
  2994, 2628, 3, -714, 2628, 2628, 629, 628, 630, 631,
  -714, 3372, -27, 2628, 2628, -714, 632, 3, 3, 3512,
  248, 641, -714, 31, 3512, 633, -714, -714, -714, 4006,
  637, -714, -714, 638, 639, 2643, 2835, 2993, 642, 39,
  635, 643, 645, 648, 646, 649, 652, 653, 3, 3598,
  4028, 4063, 4074, 4085, 4107, 934, 4129, 1372, 4140, 4186,
  650, 4208, 4241, 4252, 4263, 3644, -714, 4287, 35, 49,
  -84, -64, 86, 3667, 3700, 1529, -714, 4309, 4320, 63,
  4364, 169, 4388, 216, 220, -714, 234, -714, 252, -714,
  296, -714, 317, 342, 346, 349, 104, 105, 352, 353,
  320, 656, 201, -714, -714, 108, 50, 150, 62, 159,
  -714, -714, 248, 248, 248, 248, 248, 248, -714, 7,
  7, 2628, 2628, 564, 546, 180, 141, 244, -47, -714,
  -37, -37, 693, 693, -714, -714, 417, -714, -714, 552,
  -714, -714, -714, 752, -714, -714, -714, -714, 748, 3711,
  2628, 217, 4421, 3041, -714, -714, 2628, 2628, -714, -714,
  2628, -714, 647, -714, 3512, -714, 657, 658, 654, 660,
  3722, 3746, 661, 662, -714, -714, -714, 2628, 726, 733,
  -714, 165, 3769, 168, -714, 2628, 3780, 3824, -714, 2628,
  2628, 2628, -714, -714, 31, 3512, 31, 3512, 3194, 2628,
  2628, 2628, -714, -714, -714, 2628, 2628, -714, 2628, -714,
  -714, 2628, 2628, 2628, -714, -714, 2994, 2944, -714, 663,
  664, -714, -714, 2628, 2628, 2628, 2628, -714, -714, -714,
  -714, -714, -714, 2628, -714, -714, 2628, -714, -714, -714,
  -714, -714, -714, -714, 2628, -714, -714, -714, 2628, 2628,
  2628, 2628, 2628, -714, 2994, -714, -714, -714, -714, -714,
  2628, -714, -714, -714, -714, -714, -714, -714, -714, -714,
  -714, 2994, 2994, -714, -714, -714, -714, -714, 2994, 810,
  -714, 2994, 810, -714, 2994, 2994, -714, 665, -714, 670,
  429, 915, 666, 673, -714, 674, 675, -714, -714, 616,
  3194, -714, 2628, 3848, 768, 2994, -714, 2994, 248, 31,
  531, 3882, 647, 647, 4432, 678, 679, -714, 684, -714,
  -714, -714, -714, 2628, 2628, -714, -714, 3893, 1514, 1514,
  2994, 2994, 2994, -714, 2628, 2628, 680, 4443, 4465, 1686,
  -714, 3512, 3, -714, 682, -714, 60, 3194, 4489, 4500,
  4544, 4566, 355, 685, 249, -714, -714, 4601, 4612, 688,
  -3, 4623, 4645, 4667, 4678, 4724, 1848, 4746, 4779, 266,
  4790, 267, 270, 356, 155, 362, 181, 365, 366, 7,
  7, -714, -714, -714, -714, -714, 788, 817, 813, 4801,
  2628, 694, 383, 276, -714, 2628, -714, -714, -714, -714,
  -714, -714, 692, 695, 3512, 3512, 2994, -714, -714, 248,
  248, 204, 3904, 3512, -714, 790, 791, 793, 2628, 2628,
  651, 2628, 46, -714, -714, -714, -714, -714, -714, -714,
  2994, -714, -714, -714, 2628, -714, -714, -714, -714, -714,
  -714, 2628, -714, -714, -714, 2994, -714, -714, 2628, -714,
  2628, -714, -714, 2994, -714, -714, 2994, -714, -714, -714,
  -714, 2628, -714, -714, 812, 601, 4825, 2628, 809, 2994,
  4847, 647, 702, 704, 647, -714, -714, 248, 2994, 2994,
  2994, 2994, 2994, 4858, -714, 707, 708, 182, -714, 74,
  -714, -714, -714, 389, 3926, 4902, 418, 4926, 4959, 419,
  447, -714, 3602, 2628, 827, -714, 710, -714, 3950, 711,
  448, -714, -714, -714, -714, -714, 248, 248, 248, 248,
  248, 806, 713, 714, -714, 651, 2628, -714, -714, 2628,
  -714, -714, -714, -714, -714, -714, 3194, 843, 904, 3194,
  -714, 2994, 2628, 2628, -714, 783, 2994, -714, -714, 3194,
  -714, 3512, 3194, 4970, 813, -714, -714, 813, 576, 280,
  4981, 3961, 647, 248, 124, 813, -714, 3194, -714, -714,
  -714, -714, 2994, -714, 2628, -714, -714, -714, -714, 38,
  813, 477, 5003, -714, -714, 876, 812, -714, -714, -714,
  -714, -714
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] = {
  -714, -714, -61, -714, -714, 279, -714, -714, -714, -714,
  -714, -714, -714, 835, -221, -714, -714, -69, 152, -714,
  836, 4, -714, -714, 620, -269, 92, -714, 482, -31,
  -7, -714, 0, 1, 188, -714, -714, 271, -714, -714,
  -714, -714, -714, -714, -714, -714, 343, -714, 347, -714,
  -44, -714, -714, -714, -714, -714, -714, -714, -714, -714,
  -714, -714, 29, -714, -714, -714, -714, -714, -714, -714,
  -714, -714, -714, -714, -714, -714, -714, -714, -714, -714,
  -714, -714, -714, -714, -714, -714, -714, -106, -714, -714,
  -714, -713, -714, -714, -714, 500, -714, -714, 177, 515,
  -714, -714, -714, -714, -714, -52, -714, -19, -714, -714
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -355
static const short yytable[] = {
  66, 67, 87, 88, 208, 389, 457, 389, 382, 806,
  807, 84, 173, 389, 85, 164, 414, 415, 376, 220,
  221, 377, 263, 568, 351, 77, 569, 79, 179, 210,
  1, 2, 191, 406, 351, 195, 197, 199, 246, 174,
  89, 215, 215, 215, 92, 204, 440, 234, 235, 231,
  993, 176, 334, 335, 336, 337, 338, 339, 343, 344,
  900, 215, 345, 346, 347, 348, 349, 350, 351, 89,
  831, 222, 441, 92, 585, 340, 180, 239, 181, 182,
  994, 256, 658, 66, 67, 936, 192, 193, 901, 334,
  335, 336, 337, 338, 339, 340, 334, 335, 336, 337,
  338, 339, 659, 270, 334, 335, 336, 337, 338, 339,
  340, 352, 353, 354, 355, 520, 230, 370, 78, 383,
  80, 343, 344, 354, 355, 345, 346, 347, 348, 349,
  350, 351, 340, 223, 224, 343, 344, 603, 240, 345,
  346, 347, 348, 349, 350, 351, 340, 986, 89, 52,
  53, 54, 92, 423, 340, 352, 353, 354, 355, 554,
  247, 390, 555, 390, 331, 333, 987, 172, 922, 390,
  175, 925, 418, 419, 400, 401, 241, 378, 66, 67,
  190, 368, 570, 340, 196, 198, 242, 183, 380, 214,
  340, 595, 250, 251, 340, 205, 206, 243, 340, 656,
  236, 237, 238, 625, 252, 626, 610, 611, 340, 245,
  349, 350, 351, 657, 690, 403, 691, 405, 352, 353,
  354, 355, 340, 225, 205, 206, 693, 667, 694, 226,
  244, 259, 352, 353, 354, 355, 248, 635, 334, 335,
  336, 337, 338, 339, 253, 340, 346, 421, 348, 349,
  350, 351, 660, 450, 451, 227, 228, 429, 516, 985,
  518, 229, 434, 340, 340, 254, 439, 340, 260, 470,
  681, 682, 445, 446, 689, 447, 215, 215, 386, 200,
  201, 459, 460, 461, 462, 463, 464, 465, 466, 467,
  468, 469, 215, 471, 472, 473, 474, 475, 477, 352,
  353, 354, 355, 511, 483, 484, 485, 487, 488, 340,
  490, 558, 492, 332, 350, 351, 692, 412, 340, 862,
  413, 863, 255, 364, 340, 695, 215, 340, 340, 367,
  261, 740, 340, 669, 742, 670, 379, 520, 352, 353,
  354, 355, 426, 427, 428, 865, 934, 866, 935, 533,
  534, 535, 536, 537, 538, 539, 540, 541, 542, 543,
  340, 365, 366, 340, 404, 687, 262, 688, 458, 78,
  888, 208, 66, 67, 409, 340, 340, 559, 80, 340,
  672, 714, 562, 715, 673, 334, 335, 336, 337, 338,
  339, 264, 574, 340, 266, 267, 422, 394, 674, 580,
  581, 265, 352, 353, 354, 355, 430, 340, 340, 268,
  433, 340, 592, 839, 91, 840, 675, 93, 596, 597,
  784, 356, 357, 786, 449, 340, 340, 605, 607, 340,
  854, 857, 855, 858, 859, 340, 860, 269, 95, 340,
  520, 271, 879, 374, 981, 272, 982, 478, 479, 480,
  481, 482, 443, 444, 273, 340, 274, 489, 275, 491,
  676, 493, 494, 496, 498, 500, 502, 503, 504, 505,
  506, 507, 508, 509, 510, 512, 340, 276, 515, 340,
  517, 677, 519, 575, 685, 277, 522, 523, 524, 525,
  526, 527, 528, 278, 345, 346, 347, 348, 349, 350,
  351, 340, 279, 594, 280, 340, 678, 105, 340, 106,
  679, 340, 340, 680, 340, 340, 683, 684, 416, 837,
  861, 340, 696, 698, 340, 340, 864, 561, 425, 867,
  868, 829, 126, 127, 128, 700, 701, 131, 132, 133,
  281, 135, 340, 137, 138, 139, 399, 878, 340, 844,
  144, 145, 146, 938, 282, 149, 360, 361, 152, 591,
  153, 154, 593, 156, 713, 158, 452, 453, 565, 566,
  720, 721, 171, 495, 724, 604, 606, 340, 340, 563,
  576, 577, 941, 944, 283, 582, 583, 352, 353, 354,
  355, 737, 343, 344, 578, 579, 345, 346, 347, 348,
  349, 350, 351, 747, 748, 749, 340, 340, 66, 67,
  402, 945, 954, 751, 348, 349, 350, 351, 978, 434,
  756, 284, 758, 979, 285, 759, 760, 761, 341, 342,
  346, 347, 348, 349, 350, 351, 340, 767, 768, 286,
  770, 997, 287, 588, 589, 612, 613, 771, 288, 798,
  772, 725, 726, 795, 796, 895, 896, 289, 773, 915,
  916, 290, 774, 775, 776, 777, 778, 291, 292, 293,
  294, 343, 344, 295, 780, 345, 346, 347, 348, 349,
  350, 351, 296, 297, 298, 299, 300, 743, 301, 352,
  353, 354, 355, 302, 407, 303, 832, 304, 305, 306,
  307, 308, 752, 753, 352, 353, 354, 355, 309, 408,
  66, 67, 310, 311, 312, 718, 799, 313, 719, 817,
  818, 314, 352, 353, 354, 355, 410, 769, 315, 316,
  317, 318, 702, 703, 319, 705, 706, 814, 815, 424,
  320, 321, 215, 215, 322, 323, 324, 325, 822, 823,
  326, 327, 328, 438, 329, 330, 373, 66, 67, 375,
  392, 393, 397, 398, 351, 552, 432, 433, 352, 353,
  354, 355, 437, 513, 557, 514, 544, 545, 762, 764,
  547, 546, 869, 870, 548, 549, 746, 550, 551, 560,
  567, 571, 598, 708, 599, 711, 600, 601, 609, 615,
  618, 627, 619, 620, 876, 738, 624, 628, 629, 880,
  631, 630, 739, 632, 649, 453, 779, 731, 633, 634,
  686, 729, 730, 732, 801, 735, 736, 765, 766, 872,
  791, 789, 893, 781, 782, 899, 790, 792, 793, 794,
  783, 809, 810, 785, 824, 830, 787, 788, 904, 838,
  811, 947, 843, 873, -4, 905, 885, 877, 913, 886,
  890, 891, 907, 892, 908, 919, 923, 802, 924, 803,
  932, 933, 949, 951, 953, 368, 956, 957, 958, -340,
  999, 918, 232, 233, 586, 964, 755, 750, 967, 704,
  1001, 960, 819, 820, 821, 456, 707, 804, 974, 584,
  911, 975, 573, 972, 0, -354, 0, 0, 0, 0,
  0, 0, 66, 67, 0, 0, 990, 948, 0, 812,
  813, 894, 343, 344, 0, 0, 345, 346, 347, 348,
  349, 350, 351, 0, 0, 0, 0, 0, 0, 0,
  961, 0, 0, 963, 0, 0, 66, 67, 965, 66,
  67, 0, 0, 0, 0, 0, 970, 971, 0, 66,
  67, 0, 66, 67, 0, 343, 344, 0, 887, 345,
  346, 347, 348, 349, 350, 351, 343, 66, 67, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 992, 0,
  0, 0, 903, 0, 0, 343, 344, 882, 883, 345,
  346, 347, 348, 349, 350, 351, 0, 906, 0, 0,
  0, 0, 0, 0, 0, 909, 0, 0, 910, 352,
  353, 354, 355, 367, 0, 0, 0, 0, 0, 0,
  0, 920, 0, 0, 0, 0, 0, 0, 0, 0,
  926, 927, 928, 929, 930, 0, 89, 90, 91, 0,
  92, 93, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 0, 0, 0, 0,
  0, 94, 95, 352, 353, 354, 355, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 0, 0, 642, 0,
  643, 0, 0, 969, 97, 98, 99, 100, 973, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
  0, 102, 0, 0, 0, 0, 217, 0, 0, 0,
  0, 0, 0, 218, 991, 0, 0, 103, 104, 0,
  0, 105, 0, 106, 0, 0, 219, 107, 108, 109,
  110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
  120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
  130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
  140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  150, 151, 152, 0, 153, 154, 155, 156, 157, 158,
  159, 160, 0, 89, 90, 91, 161, 92, 93, 0,
  213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 94, 95,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 97, 98, 99, 100, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
  0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
  212, 0, 0, 0, 103, 104, 0, 0, 105, 0,
  106, 0, 0, 0, 107, 108, 109, 110, 111, 112,
  113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
  123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
  133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
  143, 144, 145, 146, 147, 148, 149, 150, 151, 152,
  0, 153, 154, 155, 156, 157, 158, 159, 160, 0,
  89, 90, 91, 161, 92, 93, 0, 213, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 94, 95, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 97, 98,
  99, 100, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 101, 343, 344, 102, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 448, 0, 0,
  0, 103, 104, 0, 0, 105, 0, 106, 0, 0,
  0, 107, 108, 109, 110, 111, 112, 113, 114, 115,
  116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
  126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
  136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
  146, 147, 148, 149, 150, 151, 152, 0, 153, 154,
  155, 156, 157, 158, 159, 160, 0, 89, 90, 91,
  161, 92, 93, 0, 213, 0, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 645, 0, 646, 0,
  0, 0, 94, 95, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 97, 98, 99, 100, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
  343, 344, 102, 0, 345, 346, 347, 348, 349, 350,
  351, 0, 0, 0, 0, 0, 0, 0, 103, 104,
  0, 0, 105, 0, 106, 0, 0, 0, 107, 108,
  109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
  119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
  129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
  139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
  149, 150, 151, 152, 0, 153, 154, 155, 156, 157,
  158, 159, 160, 0, 89, 90, 91, 161, 92, 93,
  0, 213, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 663, 0, 664, 0, 0, 0, 94,
  95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 97, 98, 99, 100, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 101, 343, 344, 102,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 103, 104, 0, 0, 105,
  0, 106, 0, 0, 0, 107, 108, 109, 110, 111,
  112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
  122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
  132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
  142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
  152, 0, 153, 154, 155, 156, 157, 158, 159, 160,
  0, 0, 0, 0, 161, 420, 89, 90, 91, 0,
  92, 93, 0, 0, 352, 353, 354, 355, 0, 0,
  827, 0, 828, 0, 0, 0, 0, 0, 0, 0,
  0, 94, 95, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 97, 98, 99, 100, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 101, 343,
  344, 102, 0, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 103, 104, 0,
  0, 105, 0, 106, 0, 0, 0, 107, 108, 109,
  110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
  120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
  130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
  140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  150, 151, 152, 0, 153, 154, 155, 156, 157, 158,
  159, 160, 0, 0, 0, 0, 161, 476, 89, 90,
  91, 0, 92, 93, 0, 0, 352, 353, 354, 355,
  0, 0, 850, 0, 851, 0, 0, 0, 0, 0,
  0, 0, 0, 94, 95, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 97, 98, 99, 100,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  101, 343, 344, 102, 0, 345, 346, 347, 348, 349,
  350, 351, 0, 0, 0, 0, 0, 0, 0, 103,
  104, 0, 0, 105, 0, 106, 0, 0, 0, 107,
  108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
  118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
  128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
  138, 139, 140, 141, 142, 143, 144, 145, 146, 147,
  148, 149, 150, 151, 152, 0, 153, 154, 155, 156,
  157, 158, 159, 160, 0, 0, 0, 0, 161, 486,
  89, 90, 91, 0, 92, 93, 0, 186, 352, 353,
  354, 355, 0, 0, 0, 0, 388, 0, 0, 0,
  0, 0, 0, 0, 0, 94, 95, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 97, 98,
  99, 100, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 101, 343, 344, 102, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 0, 0, 0,
  0, 103, 104, 0, 0, 105, 0, 106, 0, 0,
  0, 107, 108, 109, 110, 111, 112, 113, 114, 115,
  116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
  126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
  136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
  146, 147, 148, 149, 150, 151, 152, 0, 153, 154,
  155, 156, 157, 158, 159, 160, 0, 89, 90, 91,
  161, 92, 93, 0, 0, 0, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 0, 0, 395, 0,
  0, 0, 94, 95, 0, 0, 96, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 97, 98, 99, 100, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
  343, 344, 102, 0, 345, 346, 347, 348, 349, 350,
  351, 0, 0, 0, 0, 0, 0, 0, 103, 104,
  0, 0, 105, 0, 106, 0, 0, 0, 107, 108,
  109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
  119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
  129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
  139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
  149, 150, 151, 152, 0, 153, 154, 155, 156, 157,
  158, 159, 160, 0, 89, 90, 91, 161, 92, 93,
  0, 411, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 0, 0, 396, 0, 0, 0, 94,
  95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 97, 98, 99, 100, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 101, 343, 344, 102,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 103, 104, 0, 0, 105,
  0, 106, 0, 0, 0, 107, 108, 109, 110, 111,
  112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
  122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
  132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
  142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
  152, 0, 153, 154, 155, 156, 157, 158, 159, 160,
  0, 89, 90, 91, 161, 92, 93, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 0, 0,
  0, 0, 587, 0, 0, 0, 94, 95, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
  98, 99, 100, 0, 91, 0, 0, 93, 0, 0,
  0, 0, 0, 101, 343, 344, 102, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 0, 95, 0,
  0, 0, 103, 104, 0, 0, 105, 0, 106, 0,
  0, 0, 107, 108, 109, 110, 111, 112, 113, 114,
  115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
  125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
  135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
  145, 146, 147, 148, 149, 150, 151, 152, 0, 153,
  154, 155, 156, 157, 158, 159, 160, 105, 0, 106,
  0, 161, 91, 0, 0, 93, 0, 0, 0, 0,
  0, 352, 353, 354, 355, 0, 0, 0, 0, 621,
  0, 0, 126, 127, 128, 0, 95, 131, 132, 133,
  0, 135, 0, 137, 138, 139, 0, 0, 0, 0,
  144, 145, 146, 0, 0, 149, 0, 0, 152, 91,
  153, 154, 93, 156, 0, 158, 0, 0, 0, 0,
  0, 0, 171, 497, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 105, 0, 106, 0, 91,
  0, 0, 93, 0, 0, 0, 343, 344, 0, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 0, 0,
  126, 127, 128, 95, 0, 131, 132, 133, 0, 135,
  0, 137, 138, 139, 0, 0, 0, 0, 144, 145,
  146, 0, 105, 149, 106, 0, 152, 0, 153, 154,
  0, 156, 0, 158, 0, 0, 0, 0, 0, 91,
  171, 499, 93, 0, 0, 0, 0, 126, 127, 128,
  0, 0, 131, 132, 133, 0, 135, 0, 137, 138,
  139, 0, 0, 95, 590, 144, 145, 146, 0, 0,
  149, 0, 105, 152, 106, 153, 154, 0, 156, 0,
  158, 0, 0, 352, 353, 354, 355, 171, 501, 91,
  0, 622, 93, 0, 0, 0, 0, 126, 127, 128,
  0, 0, 131, 132, 133, 0, 135, 0, 137, 138,
  139, 0, 0, 95, 0, 144, 145, 146, 0, 0,
  149, 0, 0, 152, 763, 153, 154, 0, 156, 0,
  158, 0, 105, 0, 106, 0, 91, 171, 0, 93,
  0, 0, 0, 0, 343, 344, 0, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 126, 127, 128,
  95, 0, 131, 132, 133, 0, 135, 0, 137, 138,
  139, 0, 0, 0, 0, 144, 145, 146, 0, 0,
  149, 0, 105, 152, 106, 153, 154, 0, 156, 0,
  158, 0, 0, 0, 0, 0, 0, 171, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 126, 127, 128,
  0, 0, 131, 132, 133, 0, 135, 0, 137, 138,
  139, 0, 0, 0, 0, 144, 145, 146, 0, 105,
  149, 106, 0, 152, 0, 153, 154, 0, 156, 0,
  158, 352, 353, 354, 355, 0, 0, 171, 0, 623,
  0, 0, 0, 0, 126, 127, 128, 0, 0, 131,
  132, 133, 0, 135, 0, 137, 138, 139, 0, 0,
  0, 0, 144, 145, 146, 0, 0, 149, 0, 0,
  152, 0, 153, 154, 0, 156, 0, 158, 1, 2,
  3, 0, 0, 4, 717, 0, 0, 5, 0, 6,
  0, 7, 8, 9, 10, 11, -294, 0, 12, 13,
  14, 15, 16, 17, 18, 19, 0, 20, 21, 22,
  0, 0, 0, 0, 23, 0, 0, 24, 0, 0,
  0, 0, 0, 25, 26, 27, 28, 29, 30, 31,
  0, 0, 0, 32, 33, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 34, 35, 36, 37,
  38, 39, 0, 0, 0, 0, 0, 40, 41, -107,
  -107, 42, 43, 44, 0, 45, 46, 47, 0, 0,
  48, -107, 0, 49, 0, 50, 51, 343, 344, 0,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 52, 53, 54,
  0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 2, 3, 0, 0, 4,
  0, 56, 0, 5, 57, 6, 0, 7, 8, 9,
  10, 11, -294, 0, 12, 13, 14, 15, 16, 17,
  18, 19, 0, 20, 21, 22, 0, 0, 0, 0,
  23, -7, -7, 24, 0, 0, 0, 0, 0, 25,
  26, 27, 28, 29, 30, 31, 0, 0, 0, 32,
  33, 0, 0, 0, 352, 353, 354, 355, 0, 0,
  521, 0, 34, 35, 36, 37, 38, 39, 0, 0,
  0, 0, 0, 40, 41, 0, 0, 42, 43, 44,
  0, 45, 46, 47, 0, 0, 48, 0, 0, 49,
  0, 50, 51, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 52, 53, 54, 0, 0, 0, 55,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 2, 3, 0, 0, 4, 0, 56, 0, 5,
  57, 6, 0, 7, 8, 9, 10, 11, -294, 0,
  12, 13, 14, 15, 16, 17, 18, 19, 0, 20,
  21, 22, 0, 0, 0, 0, 23, -7, 0, 24,
  0, 0, 0, -7, 0, 25, 26, 27, 28, 29,
  30, 31, 0, 0, 0, 32, 33, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 602, 0, 34, 35,
  36, 37, 38, 39, 0, 0, 0, 0, 0, 40,
  41, 0, 0, 42, 43, 44, 0, 45, 46, 47,
  0, 0, 48, 0, 0, 49, 0, 50, 51, 0,
  0, 0, 0, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 0, 0, 52,
  53, 54, 0, 0, 0, 55, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 1, 2, 3, 0,
  0, 4, 0, 56, 0, 5, 57, 6, 0, 7,
  8, 9, 10, 11, -294, 0, 12, 13, 14, 15,
  16, 17, 18, 19, 0, 20, 21, 22, -7, 0,
  0, 0, 23, -7, 0, 24, 0, 0, 0, 0,
  0, 25, 26, 27, 28, 29, 30, 31, 0, 343,
  344, 32, 33, 345, 346, 347, 348, 349, 350, 351,
  352, 353, 354, 355, 34, 35, 36, 37, 38, 39,
  0, 0, 0, 0, 0, 40, 41, 0, 0, 42,
  43, 44, 0, 45, 46, 47, 0, 0, 48, 0,
  0, 49, 0, 50, 51, 343, 344, 0, 0, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 52, 53, 54, 343, 344,
  0, 55, 345, 346, 347, 348, 349, 350, 351, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
  0, 0, 57, 0, 0, 0, 352, 353, 354, 355,
  0, 343, 344, 0, 636, 345, 346, 347, 348, 349,
  350, 351, 343, 344, 0, 0, 345, 346, 347, 348,
  349, 350, 351, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 0, 343, 344, 0,
  654, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 352, 353, 354, 355, 0,
  343, 344, 0, 661, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 0, 0, 0, 0, 0, 0, 352, 353,
  354, 355, 0, 0, 0, 0, 662, 0, 0, 352,
  353, 354, 355, 0, 0, 0, 0, 712, 0, 0,
  352, 353, 354, 355, 0, 343, 344, 0, 733, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 0, 343,
  344, 0, 734, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 0, 0, 741, 0, 0, 352, 353,
  354, 355, 0, 343, 344, 0, 744, 345, 346, 347,
  348, 349, 350, 351, 343, 344, 0, 0, 345, 346,
  347, 348, 349, 350, 351, 343, 344, 0, 0, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 0, 343, 344, 0,
  745, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 0, 352, 353, 354, 355,
  0, 343, 344, 0, 800, 345, 346, 347, 348, 349,
  350, 351, 343, 344, 0, 0, 345, 346, 347, 348,
  349, 350, 351, 0, 0, 0, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 0, 0, 805, 0,
  0, 352, 353, 354, 355, 0, 0, 0, 0, 816,
  0, 0, 352, 353, 354, 355, 0, 343, 344, 0,
  889, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 0, 343,
  344, 0, 939, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 0, 352, 353,
  354, 355, 0, 0, 0, 0, 952, 0, 0, 352,
  353, 354, 355, 0, 343, 344, 0, 984, 345, 346,
  347, 348, 349, 350, 351, 343, 344, 0, 0, 345,
  346, 347, 348, 349, 350, 351, 343, 344, 0, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 343, 344,
  617, 0, 345, 346, 347, 348, 349, 350, 351, 0,
  0, 0, 0, 0, 0, 0, 352, 353, 354, 355,
  343, 344, 637, 0, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 352, 353, 354, 355, 0, 0, 638, 0, 0,
  0, 0, 352, 353, 354, 355, 0, 0, 639, 0,
  0, 0, 0, 352, 353, 354, 355, 343, 344, 640,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 352, 353, 354, 355, 343,
  344, 641, 0, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 644, 0, 0, 0, 0, 352, 353,
  354, 355, 343, 344, 647, 0, 345, 346, 347, 348,
  349, 350, 351, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 343, 344, 0, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 343, 344,
  648, 0, 345, 346, 347, 348, 349, 350, 351, 0,
  0, 0, 0, 0, 0, 0, 352, 353, 354, 355,
  343, 344, 650, 0, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 0, 0, 0, 0, 0, 0, 0, 352,
  353, 354, 355, 0, 0, 651, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 652, 0, 0, 0,
  0, 352, 353, 354, 355, 343, 344, 653, 0, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 352, 353, 354, 355, 343,
  344, 655, 0, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 665, 0, 0, 0, 0, 352, 353,
  354, 355, 343, 344, 666, 0, 345, 346, 347, 348,
  349, 350, 351, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 343, 344, 0, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 343, 344, 668, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 352, 353, 354, 355,
  343, 344, 671, 0, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 0, 0, 0, 0, 0, 0, 0, 352,
  353, 354, 355, 0, 0, 716, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 808, 0, 0, 0,
  0, 352, 353, 354, 355, 343, 344, 825, 0, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 0, 352, 353, 354, 355, 343, 344, 826,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 833, 0, 0, 0, 0, 352, 353,
  354, 355, 343, 344, 834, 0, 345, 346, 347, 348,
  349, 350, 351, 343, 344, 0, 0, 345, 346, 347,
  348, 349, 350, 351, 343, 344, 0, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 343, 344, 835, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 343, 344,
  836, 0, 345, 346, 347, 348, 349, 350, 351, 343,
  344, 0, 0, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
  353, 354, 355, 0, 0, 841, 0, 0, 0, 0,
  352, 353, 354, 355, 0, 0, 842, 0, 0, 0,
  0, 352, 353, 354, 355, 343, 344, 845, 0, 345,
  346, 347, 348, 349, 350, 351, 0, 0, 0, 0,
  0, 0, 0, 352, 353, 354, 355, 343, 344, 846,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 352, 353, 354, 355, 0,
  0, 847, 0, 0, 0, 0, 352, 353, 354, 355,
  343, 344, 848, 0, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 343, 344, 0, 0, 345, 346, 347, 348,
  349, 350, 351, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 352, 353, 354, 355, 343, 344, 849, 0,
  345, 346, 347, 348, 349, 350, 351, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 343, 344,
  852, 0, 345, 346, 347, 348, 349, 350, 351, 343,
  344, 0, 0, 345, 346, 347, 348, 349, 350, 351,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 853, 0, 0, 0, 0, 352, 353,
  354, 355, 0, 0, 856, 0, 0, 0, 0, 352,
  353, 354, 355, 343, 344, 875, 0, 345, 346, 347,
  348, 349, 350, 351, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 352, 353, 354, 355, 343, 344, 917,
  0, 345, 346, 347, 348, 349, 350, 351, 0, 0,
  0, 0, 0, 0, 0, 352, 353, 354, 355, 0,
  0, 921, 0, 0, 0, 0, 352, 353, 354, 355,
  343, 344, 931, 0, 345, 346, 347, 348, 349, 350,
  351, 343, 344, 0, 0, 345, 346, 347, 348, 349,
  350, 351, 343, 344, 0, 0, 345, 346, 347, 348,
  349, 350, 351, 0, 0, 0, 0, 0, 0, 0,
  352, 353, 354, 355, 343, 344, 940, 0, 345, 346,
  347, 348, 349, 350, 351, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 352, 353, 354, 355, 0, 0,
  942, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 352, 353, 354,
  355, 0, 0, 943, 0, 0, 0, 0, 352, 353,
  354, 355, 0, 0, 976, 0, 0, 0, 0, 352,
  353, 354, 355, 0, 0, 983, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 352, 353, 354, 355, 0, 0, 998
};

static const short yycheck[] = {
  0, 0, 9, 10, 35, 10, 275, 10, 56, 722,
  723, 4, 163, 10, 7, 11, 237, 238, 4, 38,
  39, 7, 83, 4, 71, 70, 7, 70, 24, 36,
  4, 5, 28, 9, 71, 31, 32, 33, 57, 163,
  3, 37, 38, 39, 7, 8, 16, 47, 47, 45,
  12, 26, 65, 66, 67, 68, 69, 70, 61, 62,
  14, 57, 65, 66, 67, 68, 69, 70, 71, 3,
  10, 82, 42, 7, 8, 159, 56, 103, 58, 59,
  42, 77, 166, 83, 83, 11, 4, 5, 42, 65,
  66, 67, 68, 69, 70, 159, 65, 66, 67, 68,
  69, 70, 166, 99, 65, 66, 67, 68, 69, 70,
  159, 158, 159, 160, 161, 164, 88, 178, 163, 167,
  163, 61, 62, 160, 161, 65, 66, 67, 68, 69,
  70, 71, 159, 41, 42, 61, 62, 164, 163, 65,
  66, 67, 68, 69, 70, 71, 159, 23, 3, 123,
  124, 125, 7, 166, 159, 158, 159, 160, 161, 39,
  0, 166, 42, 166, 160, 161, 42, 15, 881, 166,
  18, 884, 241, 242, 205, 206, 163, 163, 178, 178,
  28, 177, 163, 159, 32, 33, 163, 167, 184, 37,
  159, 412, 85, 86, 159, 158, 159, 163, 159, 164,
  48, 49, 50, 164, 97, 166, 427, 428, 159, 57,
  69, 70, 71, 164, 164, 211, 166, 213, 158, 159,
  160, 161, 159, 51, 158, 159, 164, 164, 166, 57,
  163, 79, 158, 159, 160, 161, 42, 458, 65, 66,
  67, 68, 69, 70, 70, 159, 66, 243, 68, 69,
  70, 71, 166, 272, 273, 83, 84, 253, 327, 972,
  329, 89, 258, 159, 159, 70, 262, 159, 80, 288,
  166, 166, 268, 269, 166, 271, 272, 273, 186, 4,
  5, 277, 278, 279, 280, 281, 282, 283, 284, 285,
  286, 287, 288, 289, 290, 291, 292, 293, 294, 158,
  159, 160, 161, 322, 300, 301, 302, 303, 304, 159,
  306, 372, 308, 161, 70, 71, 166, 225, 159, 164,
  228, 166, 22, 171, 159, 166, 322, 159, 159, 177,
  4, 166, 159, 164, 166, 166, 184, 164, 158, 159,
  160, 161, 250, 251, 252, 164, 164, 166, 166, 345,
  346, 347, 348, 349, 350, 351, 352, 353, 354, 355,
  159, 173, 174, 159, 212, 164, 163, 166, 276, 163,
  166, 402, 372, 372, 222, 159, 159, 373, 163, 159,
  164, 164, 378, 166, 164, 65, 66, 67, 68, 69,
  70, 163, 388, 159, 33, 34, 244, 166, 164, 395,
  396, 163, 158, 159, 160, 161, 254, 159, 159, 163,
  258, 159, 408, 164, 5, 166, 164, 8, 414, 415,
  689, 4, 5, 692, 272, 159, 159, 423, 424, 159,
  164, 164, 166, 166, 164, 159, 166, 163, 29, 159,
  164, 163, 166, 56, 164, 163, 166, 295, 296, 297,
  298, 299, 264, 265, 163, 159, 163, 305, 163, 307,
  164, 309, 310, 311, 312, 313, 314, 315, 316, 317,
  318, 319, 320, 321, 322, 323, 159, 163, 326, 159,
  328, 164, 330, 391, 164, 163, 334, 335, 336, 337,
  338, 339, 340, 163, 65, 66, 67, 68, 69, 70,
  71, 159, 163, 411, 163, 159, 164, 98, 159, 100,
  164, 159, 159, 164, 159, 159, 164, 164, 5, 164,
  164, 159, 529, 530, 159, 159, 164, 375, 41, 164,
  164, 752, 123, 124, 125, 531, 532, 128, 129, 130,
  163, 132, 159, 134, 135, 136, 166, 164, 159, 770,
  141, 142, 143, 164, 163, 146, 4, 5, 149, 407,
  151, 152, 410, 154, 560, 156, 4, 5, 165, 166,
  566, 567, 163, 164, 570, 423, 424, 159, 159, 48,
  392, 393, 164, 164, 163, 397, 398, 158, 159, 160,
  161, 587, 61, 62, 4, 5, 65, 66, 67, 68,
  69, 70, 71, 599, 600, 601, 159, 159, 608, 608,
  166, 164, 164, 609, 68, 69, 70, 71, 42, 615,
  616, 163, 618, 47, 163, 621, 622, 623, 18, 19,
  66, 67, 68, 69, 70, 71, 159, 633, 634, 163,
  636, 164, 163, 80, 81, 4, 5, 643, 163, 710,
  646, 4, 5, 37, 38, 4, 5, 163, 654, 58,
  59, 163, 658, 659, 660, 661, 662, 163, 163, 163,
  163, 61, 62, 163, 670, 65, 66, 67, 68, 69,
  70, 71, 163, 163, 163, 163, 163, 595, 163, 158,
  159, 160, 161, 163, 166, 163, 757, 163, 163, 163,
  163, 163, 610, 611, 158, 159, 160, 161, 163, 166,
  710, 710, 163, 163, 163, 563, 712, 163, 566, 738,
  739, 163, 158, 159, 160, 161, 166, 635, 163, 163,
  163, 163, 544, 545, 163, 547, 548, 733, 734, 166,
  163, 163, 738, 739, 163, 163, 163, 163, 744, 745,
  163, 163, 163, 70, 163, 163, 163, 757, 757, 163,
  163, 163, 163, 163, 71, 41, 164, 615, 158, 159,
  160, 161, 164, 164, 44, 164, 163, 163, 626, 627,
  163, 166, 789, 790, 163, 166, 598, 164, 164, 163,
  163, 8, 163, 41, 166, 47, 166, 166, 166, 166,
  163, 166, 164, 164, 800, 79, 164, 164, 163, 805,
  164, 163, 79, 164, 164, 5, 664, 163, 166, 166,
  164, 164, 164, 163, 56, 164, 164, 164, 164, 41,
  164, 166, 828, 681, 682, 831, 166, 164, 164, 164,
  688, 163, 163, 691, 164, 163, 694, 695, 844, 164,
  166, 912, 164, 36, 41, 851, 164, 163, 46, 164,
  70, 70, 858, 70, 860, 56, 164, 715, 164, 717,
  163, 163, 45, 163, 163, 871, 70, 164, 164, 36,
  4, 877, 47, 47, 402, 946, 615, 608, 949, 546,
  996, 935, 740, 741, 742, 275, 549, 720, 959, 399,
  871, 962, 387, 955, -1, 44, -1, -1, -1, -1,
  -1, -1, 912, 912, -1, -1, 977, 913, -1, 731,
  732, 829, 61, 62, -1, -1, 65, 66, 67, 68,
  69, 70, 71, -1, -1, -1, -1, -1, -1, -1,
  936, -1, -1, 939, -1, -1, 946, 946, 44, 949,
  949, -1, -1, -1, -1, -1, 952, 953, -1, 959,
  959, -1, 962, 962, -1, 61, 62, -1, 816, 65,
  66, 67, 68, 69, 70, 71, 61, 977, 977, -1,
  65, 66, 67, 68, 69, 70, 71, -1, 984, -1,
  -1, -1, 840, -1, -1, 61, 62, 809, 810, 65,
  66, 67, 68, 69, 70, 71, -1, 855, -1, -1,
  -1, -1, -1, -1, -1, 863, -1, -1, 866, 158,
  159, 160, 161, 871, -1, -1, -1, -1, -1, -1,
  -1, 879, -1, -1, -1, -1, -1, -1, -1, -1,
  888, 889, 890, 891, 892, -1, 3, 4, 5, -1,
  7, 8, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, -1, -1, -1, -1,
  -1, 28, 29, 158, 159, 160, 161, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, -1, -1, 164, -1,
  166, -1, -1, 951, 61, 62, 63, 64, 956, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, 75, -1,
  -1, 78, -1, -1, -1, -1, 83, -1, -1, -1,
  -1, -1, -1, 90, 982, -1, -1, 94, 95, -1,
  -1, 98, -1, 100, -1, -1, 103, 104, 105, 106,
  107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
  117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
  127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
  137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
  147, 148, 149, -1, 151, 152, 153, 154, 155, 156,
  157, 158, -1, 3, 4, 5, 163, 7, 8, -1,
  167, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, 28, 29,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, 61, 62, 63, 64, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 75, -1, -1, 78, -1,
  -1, -1, -1, 83, -1, -1, -1, -1, -1, -1,
  90, -1, -1, -1, 94, 95, -1, -1, 98, -1,
  100, -1, -1, -1, 104, 105, 106, 107, 108, 109,
  110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
  120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
  130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
  140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  -1, 151, 152, 153, 154, 155, 156, 157, 158, -1,
  3, 4, 5, 163, 7, 8, -1, 167, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 28, 29, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, 61, 62,
  63, 64, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 75, 61, 62, 78, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, 90, -1, -1,
  -1, 94, 95, -1, -1, 98, -1, 100, -1, -1,
  -1, 104, 105, 106, 107, 108, 109, 110, 111, 112,
  113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
  123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
  133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
  143, 144, 145, 146, 147, 148, 149, -1, 151, 152,
  153, 154, 155, 156, 157, 158, -1, 3, 4, 5,
  163, 7, 8, -1, 167, -1, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, 164, -1, 166, -1,
  -1, -1, 28, 29, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 61, 62, 63, 64, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, 75,
  61, 62, 78, -1, 65, 66, 67, 68, 69, 70,
  71, -1, -1, -1, -1, -1, -1, -1, 94, 95,
  -1, -1, 98, -1, 100, -1, -1, -1, 104, 105,
  106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
  116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
  126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
  136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
  146, 147, 148, 149, -1, 151, 152, 153, 154, 155,
  156, 157, 158, -1, 3, 4, 5, 163, 7, 8,
  -1, 167, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, 166, -1, -1, -1, 28,
  29, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 61, 62, 63, 64, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 75, 61, 62, 78,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 94, 95, -1, -1, 98,
  -1, 100, -1, -1, -1, 104, 105, 106, 107, 108,
  109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
  119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
  129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
  139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
  149, -1, 151, 152, 153, 154, 155, 156, 157, 158,
  -1, -1, -1, -1, 163, 164, 3, 4, 5, -1,
  7, 8, -1, -1, 158, 159, 160, 161, -1, -1,
  164, -1, 166, -1, -1, -1, -1, -1, -1, -1,
  -1, 28, 29, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, 61, 62, 63, 64, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, 75, 61,
  62, 78, -1, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, 94, 95, -1,
  -1, 98, -1, 100, -1, -1, -1, 104, 105, 106,
  107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
  117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
  127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
  137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
  147, 148, 149, -1, 151, 152, 153, 154, 155, 156,
  157, 158, -1, -1, -1, -1, 163, 164, 3, 4,
  5, -1, 7, 8, -1, -1, 158, 159, 160, 161,
  -1, -1, 164, -1, 166, -1, -1, -1, -1, -1,
  -1, -1, -1, 28, 29, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 61, 62, 63, 64,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  75, 61, 62, 78, -1, 65, 66, 67, 68, 69,
  70, 71, -1, -1, -1, -1, -1, -1, -1, 94,
  95, -1, -1, 98, -1, 100, -1, -1, -1, 104,
  105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
  115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
  125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
  135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
  145, 146, 147, 148, 149, -1, 151, 152, 153, 154,
  155, 156, 157, 158, -1, -1, -1, -1, 163, 164,
  3, 4, 5, -1, 7, 8, -1, 10, 158, 159,
  160, 161, -1, -1, -1, -1, 166, -1, -1, -1,
  -1, -1, -1, -1, -1, 28, 29, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, 50, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, 61, 62,
  63, 64, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 75, 61, 62, 78, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, -1, -1, -1,
  -1, 94, 95, -1, -1, 98, -1, 100, -1, -1,
  -1, 104, 105, 106, 107, 108, 109, 110, 111, 112,
  113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
  123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
  133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
  143, 144, 145, 146, 147, 148, 149, -1, 151, 152,
  153, 154, 155, 156, 157, 158, -1, 3, 4, 5,
  163, 7, 8, -1, -1, -1, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, -1, -1, 166, -1,
  -1, -1, 28, 29, -1, -1, 32, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 61, 62, 63, 64, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, 75,
  61, 62, 78, -1, 65, 66, 67, 68, 69, 70,
  71, -1, -1, -1, -1, -1, -1, -1, 94, 95,
  -1, -1, 98, -1, 100, -1, -1, -1, 104, 105,
  106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
  116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
  126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
  136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
  146, 147, 148, 149, -1, 151, 152, 153, 154, 155,
  156, 157, 158, -1, 3, 4, 5, 163, 7, 8,
  -1, 10, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, -1, -1, 166, -1, -1, -1, 28,
  29, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 61, 62, 63, 64, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 75, 61, 62, 78,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 94, 95, -1, -1, 98,
  -1, 100, -1, -1, -1, 104, 105, 106, 107, 108,
  109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
  119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
  129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
  139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
  149, -1, 151, 152, 153, 154, 155, 156, 157, 158,
  -1, 3, 4, 5, 163, 7, 8, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, -1, -1,
  -1, -1, 166, -1, -1, -1, 28, 29, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, 61,
  62, 63, 64, -1, 5, -1, -1, 8, -1, -1,
  -1, -1, -1, 75, 61, 62, 78, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, -1, 29, -1,
  -1, -1, 94, 95, -1, -1, 98, -1, 100, -1,
  -1, -1, 104, 105, 106, 107, 108, 109, 110, 111,
  112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
  122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
  132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
  142, 143, 144, 145, 146, 147, 148, 149, -1, 151,
  152, 153, 154, 155, 156, 157, 158, 98, -1, 100,
  -1, 163, 5, -1, -1, 8, -1, -1, -1, -1,
  -1, 158, 159, 160, 161, -1, -1, -1, -1, 166,
  -1, -1, 123, 124, 125, -1, 29, 128, 129, 130,
  -1, 132, -1, 134, 135, 136, -1, -1, -1, -1,
  141, 142, 143, -1, -1, 146, -1, -1, 149, 5,
  151, 152, 8, 154, -1, 156, -1, -1, -1, -1,
  -1, -1, 163, 164, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, 29, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 98, -1, 100, -1, 5,
  -1, -1, 8, -1, -1, -1, 61, 62, -1, -1,
  65, 66, 67, 68, 69, 70, 71, -1, -1, -1,
  123, 124, 125, 29, -1, 128, 129, 130, -1, 132,
  -1, 134, 135, 136, -1, -1, -1, -1, 141, 142,
  143, -1, 98, 146, 100, -1, 149, -1, 151, 152,
  -1, 154, -1, 156, -1, -1, -1, -1, -1, 5,
  163, 164, 8, -1, -1, -1, -1, 123, 124, 125,
  -1, -1, 128, 129, 130, -1, 132, -1, 134, 135,
  136, -1, -1, 29, 90, 141, 142, 143, -1, -1,
  146, -1, 98, 149, 100, 151, 152, -1, 154, -1,
  156, -1, -1, 158, 159, 160, 161, 163, 164, 5,
  -1, 166, 8, -1, -1, -1, -1, 123, 124, 125,
  -1, -1, 128, 129, 130, -1, 132, -1, 134, 135,
  136, -1, -1, 29, -1, 141, 142, 143, -1, -1,
  146, -1, -1, 149, 90, 151, 152, -1, 154, -1,
  156, -1, 98, -1, 100, -1, 5, 163, -1, 8,
  -1, -1, -1, -1, 61, 62, -1, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, 123, 124, 125,
  29, -1, 128, 129, 130, -1, 132, -1, 134, 135,
  136, -1, -1, -1, -1, 141, 142, 143, -1, -1,
  146, -1, 98, 149, 100, 151, 152, -1, 154, -1,
  156, -1, -1, -1, -1, -1, -1, 163, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, 123, 124, 125,
  -1, -1, 128, 129, 130, -1, 132, -1, 134, 135,
  136, -1, -1, -1, -1, 141, 142, 143, -1, 98,
  146, 100, -1, 149, -1, 151, 152, -1, 154, -1,
  156, 158, 159, 160, 161, -1, -1, 163, -1, 166,
  -1, -1, -1, -1, 123, 124, 125, -1, -1, 128,
  129, 130, -1, 132, -1, 134, 135, 136, -1, -1,
  -1, -1, 141, 142, 143, -1, -1, 146, -1, -1,
  149, -1, 151, 152, -1, 154, -1, 156, 4, 5,
  6, -1, -1, 9, 163, -1, -1, 13, -1, 15,
  -1, 17, 18, 19, 20, 21, 22, -1, 24, 25,
  26, 27, 28, 29, 30, 31, -1, 33, 34, 35,
  -1, -1, -1, -1, 40, -1, -1, 43, -1, -1,
  -1, -1, -1, 49, 50, 51, 52, 53, 54, 55,
  -1, -1, -1, 59, 60, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 72, 73, 74, 75,
  76, 77, -1, -1, -1, -1, -1, 83, 84, 85,
  86, 87, 88, 89, -1, 91, 92, 93, -1, -1,
  96, 97, -1, 99, -1, 101, 102, 61, 62, -1,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, 123, 124, 125,
  -1, -1, -1, 129, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, 4, 5, 6, -1, -1, 9,
  -1, 147, -1, 13, 150, 15, -1, 17, 18, 19,
  20, 21, 22, -1, 24, 25, 26, 27, 28, 29,
  30, 31, -1, 33, 34, 35, -1, -1, -1, -1,
  40, 41, 42, 43, -1, -1, -1, -1, -1, 49,
  50, 51, 52, 53, 54, 55, -1, -1, -1, 59,
  60, -1, -1, -1, 158, 159, 160, 161, -1, -1,
  164, -1, 72, 73, 74, 75, 76, 77, -1, -1,
  -1, -1, -1, 83, 84, -1, -1, 87, 88, 89,
  -1, 91, 92, 93, -1, -1, 96, -1, -1, 99,
  -1, 101, 102, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, 123, 124, 125, -1, -1, -1, 129,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  4, 5, 6, -1, -1, 9, -1, 147, -1, 13,
  150, 15, -1, 17, 18, 19, 20, 21, 22, -1,
  24, 25, 26, 27, 28, 29, 30, 31, -1, 33,
  34, 35, -1, -1, -1, -1, 40, 41, -1, 43,
  -1, -1, -1, 47, -1, 49, 50, 51, 52, 53,
  54, 55, -1, -1, -1, 59, 60, -1, -1, -1,
  158, 159, 160, 161, -1, -1, 164, -1, 72, 73,
  74, 75, 76, 77, -1, -1, -1, -1, -1, 83,
  84, -1, -1, 87, 88, 89, -1, 91, 92, 93,
  -1, -1, 96, -1, -1, 99, -1, 101, 102, -1,
  -1, -1, -1, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, -1, -1, 123,
  124, 125, -1, -1, -1, 129, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 4, 5, 6, -1,
  -1, 9, -1, 147, -1, 13, 150, 15, -1, 17,
  18, 19, 20, 21, 22, -1, 24, 25, 26, 27,
  28, 29, 30, 31, -1, 33, 34, 35, 36, -1,
  -1, -1, 40, 41, -1, 43, -1, -1, -1, -1,
  -1, 49, 50, 51, 52, 53, 54, 55, -1, 61,
  62, 59, 60, 65, 66, 67, 68, 69, 70, 71,
  158, 159, 160, 161, 72, 73, 74, 75, 76, 77,
  -1, -1, -1, -1, -1, 83, 84, -1, -1, 87,
  88, 89, -1, 91, 92, 93, -1, -1, 96, -1,
  -1, 99, -1, 101, 102, 61, 62, -1, -1, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 123, 124, 125, 61, 62,
  -1, 129, 65, 66, 67, 68, 69, 70, 71, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, 147,
  -1, -1, 150, -1, -1, -1, 158, 159, 160, 161,
  -1, 61, 62, -1, 166, 65, 66, 67, 68, 69,
  70, 71, 61, 62, -1, -1, 65, 66, 67, 68,
  69, 70, 71, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, -1, 61, 62, -1,
  166, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 158, 159, 160, 161, -1,
  61, 62, -1, 166, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, -1, -1, -1, -1, -1, -1, 158, 159,
  160, 161, -1, -1, -1, -1, 166, -1, -1, 158,
  159, 160, 161, -1, -1, -1, -1, 166, -1, -1,
  158, 159, 160, 161, -1, 61, 62, -1, 166, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, -1, 61,
  62, -1, 166, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, -1, -1, 166, -1, -1, 158, 159,
  160, 161, -1, 61, 62, -1, 166, 65, 66, 67,
  68, 69, 70, 71, 61, 62, -1, -1, 65, 66,
  67, 68, 69, 70, 71, 61, 62, -1, -1, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, -1, 61, 62, -1,
  166, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, -1, 158, 159, 160, 161,
  -1, 61, 62, -1, 166, 65, 66, 67, 68, 69,
  70, 71, 61, 62, -1, -1, 65, 66, 67, 68,
  69, 70, 71, -1, -1, -1, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, -1, -1, 166, -1,
  -1, 158, 159, 160, 161, -1, -1, -1, -1, 166,
  -1, -1, 158, 159, 160, 161, -1, 61, 62, -1,
  166, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, -1, 61,
  62, -1, 166, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, -1, 158, 159,
  160, 161, -1, -1, -1, -1, 166, -1, -1, 158,
  159, 160, 161, -1, 61, 62, -1, 166, 65, 66,
  67, 68, 69, 70, 71, 61, 62, -1, -1, 65,
  66, 67, 68, 69, 70, 71, 61, 62, -1, -1,
  65, 66, 67, 68, 69, 70, 71, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, 61, 62,
  164, -1, 65, 66, 67, 68, 69, 70, 71, -1,
  -1, -1, -1, -1, -1, -1, 158, 159, 160, 161,
  61, 62, 164, -1, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, 158, 159, 160, 161, -1, -1, 164, -1, -1,
  -1, -1, 158, 159, 160, 161, -1, -1, 164, -1,
  -1, -1, -1, 158, 159, 160, 161, 61, 62, 164,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 158, 159, 160, 161, 61,
  62, 164, -1, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, -1, -1, -1, 158, 159,
  160, 161, 61, 62, 164, -1, 65, 66, 67, 68,
  69, 70, 71, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, 61, 62, -1, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, 61, 62,
  164, -1, 65, 66, 67, 68, 69, 70, 71, -1,
  -1, -1, -1, -1, -1, -1, 158, 159, 160, 161,
  61, 62, 164, -1, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, -1, -1, -1, -1, -1, -1, -1, 158,
  159, 160, 161, -1, -1, 164, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, 164, -1, -1, -1,
  -1, 158, 159, 160, 161, 61, 62, 164, -1, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, 158, 159, 160, 161, 61,
  62, 164, -1, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, -1, -1, -1, 158, 159,
  160, 161, 61, 62, 164, -1, 65, 66, 67, 68,
  69, 70, 71, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, 61, 62, -1, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, 61, 62, 164, -1,
  65, 66, 67, 68, 69, 70, 71, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, 158, 159, 160, 161,
  61, 62, 164, -1, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, -1, -1, -1, -1, -1, -1, -1, 158,
  159, 160, 161, -1, -1, 164, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, 164, -1, -1, -1,
  -1, 158, 159, 160, 161, 61, 62, 164, -1, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, -1, 158, 159, 160, 161, 61, 62, 164,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, -1, -1, -1, 158, 159,
  160, 161, 61, 62, 164, -1, 65, 66, 67, 68,
  69, 70, 71, 61, 62, -1, -1, 65, 66, 67,
  68, 69, 70, 71, 61, 62, -1, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, 61, 62, 164, -1,
  65, 66, 67, 68, 69, 70, 71, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, 61, 62,
  164, -1, 65, 66, 67, 68, 69, 70, 71, 61,
  62, -1, -1, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, 158,
  159, 160, 161, -1, -1, 164, -1, -1, -1, -1,
  158, 159, 160, 161, -1, -1, 164, -1, -1, -1,
  -1, 158, 159, 160, 161, 61, 62, 164, -1, 65,
  66, 67, 68, 69, 70, 71, -1, -1, -1, -1,
  -1, -1, -1, 158, 159, 160, 161, 61, 62, 164,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 158, 159, 160, 161, -1,
  -1, 164, -1, -1, -1, -1, 158, 159, 160, 161,
  61, 62, 164, -1, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, 61, 62, -1, -1, 65, 66, 67, 68,
  69, 70, 71, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, 158, 159, 160, 161, 61, 62, 164, -1,
  65, 66, 67, 68, 69, 70, 71, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, 61, 62,
  164, -1, 65, 66, 67, 68, 69, 70, 71, 61,
  62, -1, -1, 65, 66, 67, 68, 69, 70, 71,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, -1, -1, -1, 158, 159,
  160, 161, -1, -1, 164, -1, -1, -1, -1, 158,
  159, 160, 161, 61, 62, 164, -1, 65, 66, 67,
  68, 69, 70, 71, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, 158, 159, 160, 161, 61, 62, 164,
  -1, 65, 66, 67, 68, 69, 70, 71, -1, -1,
  -1, -1, -1, -1, -1, 158, 159, 160, 161, -1,
  -1, 164, -1, -1, -1, -1, 158, 159, 160, 161,
  61, 62, 164, -1, 65, 66, 67, 68, 69, 70,
  71, 61, 62, -1, -1, 65, 66, 67, 68, 69,
  70, 71, 61, 62, -1, -1, 65, 66, 67, 68,
  69, 70, 71, -1, -1, -1, -1, -1, -1, -1,
  158, 159, 160, 161, 61, 62, 164, -1, 65, 66,
  67, 68, 69, 70, 71, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, 158, 159, 160, 161, -1, -1,
  164, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, 158, 159, 160,
  161, -1, -1, 164, -1, -1, -1, -1, 158, 159,
  160, 161, -1, -1, 164, -1, -1, -1, -1, 158,
  159, 160, 161, -1, -1, 164, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, 158, 159, 160, 161, -1, -1, 164
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] = {
  0, 4, 5, 6, 9, 13, 15, 17, 18, 19,
  20, 21, 24, 25, 26, 27, 28, 29, 30, 31,
  33, 34, 35, 40, 43, 49, 50, 51, 52, 53,
  54, 55, 59, 60, 72, 73, 74, 75, 76, 77,
  83, 84, 87, 88, 89, 91, 92, 93, 96, 99,
  101, 102, 123, 124, 125, 129, 147, 150, 169, 170,
  173, 180, 181, 183, 184, 188, 200, 201, 206, 212,
  219, 227, 236, 239, 243, 246, 252, 70, 163, 70,
  163, 220, 240, 244, 4, 7, 198, 198, 198, 3,
  4, 5, 7, 8, 28, 29, 32, 61, 62, 63,
  64, 75, 78, 94, 95, 98, 100, 104, 105, 106,
  107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
  117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
  127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
  137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
  147, 148, 149, 151, 152, 153, 154, 155, 156, 157,
  158, 163, 186, 187, 189, 195, 197, 200, 201, 174,
  175, 163, 186, 163, 163, 186, 26, 228, 237, 189,
  56, 58, 59, 167, 274, 178, 10, 50, 189, 194,
  186, 189, 4, 5, 199, 189, 186, 189, 186, 189,
  4, 5, 262, 263, 8, 158, 159, 196, 197, 264,
  198, 83, 90, 167, 186, 189, 275, 83, 90, 103,
  275, 275, 82, 194, 194, 51, 57, 83, 84, 89,
  88, 189, 181, 188, 200, 201, 186, 186, 186, 103,
  163, 163, 163, 163, 163, 186, 275, 0, 42, 171,
  85, 86, 97, 70, 70, 22, 189, 202, 203, 186,
  202, 4, 163, 170, 163, 163, 33, 34, 163, 163,
  189, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
  163, 189, 186, 189, 65, 66, 67, 68, 69, 70,
  159, 18, 19, 61, 62, 65, 66, 67, 68, 69,
  70, 71, 158, 159, 160, 161, 4, 5, 213, 214,
  4, 5, 215, 216, 186, 202, 202, 186, 189, 230,
  170, 247, 253, 163, 56, 163, 4, 7, 163, 186,
  189, 265, 56, 167, 267, 272, 194, 179, 166, 10,
  166, 182, 163, 163, 166, 166, 166, 163, 163, 166,
  197, 197, 166, 189, 186, 189, 9, 166, 166, 186,
  166, 10, 194, 194, 182, 182, 5, 185, 185, 185,
  164, 189, 186, 166, 166, 41, 194, 194, 194, 189,
  186, 207, 164, 186, 189, 204, 205, 164, 70, 189,
  16, 42, 245, 202, 202, 189, 189, 189, 90, 186,
  275, 275, 4, 5, 192, 193, 192, 193, 194, 189,
  189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
  275, 189, 189, 189, 189, 189, 164, 189, 186, 186,
  186, 186, 186, 189, 189, 189, 164, 189, 189, 186,
  189, 186, 189, 186, 186, 164, 186, 164, 186, 164,
  186, 164, 186, 186, 186, 186, 186, 186, 186, 186,
  186, 275, 186, 164, 164, 186, 185, 186, 185, 186,
  164, 164, 186, 186, 186, 186, 186, 186, 186, 176,
  177, 191, 190, 189, 189, 189, 189, 189, 189, 189,
  189, 189, 189, 189, 163, 163, 166, 163, 163, 166,
  164, 164, 41, 229, 39, 42, 238, 44, 170, 189,
  163, 186, 189, 48, 266, 165, 166, 163, 4, 7,
  163, 8, 273, 267, 189, 194, 202, 202, 4, 5,
  189, 189, 202, 202, 263, 8, 196, 166, 80, 81,
  90, 186, 189, 186, 194, 182, 189, 189, 163, 166,
  166, 166, 164, 164, 186, 189, 186, 189, 172, 166,
  182, 182, 4, 5, 211, 166, 221, 164, 163, 164,
  164, 166, 166, 166, 164, 164, 166, 166, 164, 163,
  163, 164, 164, 166, 166, 182, 166, 164, 164, 164,
  164, 164, 164, 166, 164, 164, 166, 164, 164, 164,
  164, 164, 164, 164, 166, 164, 164, 164, 166, 166,
  166, 166, 166, 164, 166, 164, 164, 164, 164, 164,
  166, 164, 164, 164, 164, 164, 164, 164, 164, 164,
  164, 166, 166, 164, 164, 164, 164, 164, 166, 166,
  164, 166, 166, 164, 166, 166, 198, 276, 198, 277,
  189, 189, 202, 202, 214, 202, 202, 216, 41, 231,
  248, 47, 166, 189, 164, 166, 164, 163, 186, 186,
  189, 189, 268, 269, 189, 4, 5, 259, 261, 164,
  164, 163, 163, 166, 166, 164, 164, 189, 79, 79,
  166, 166, 166, 194, 166, 166, 202, 189, 189, 189,
  173, 189, 194, 194, 208, 205, 189, 241, 189, 189,
  189, 189, 186, 90, 186, 164, 164, 189, 189, 194,
  189, 189, 189, 189, 189, 189, 189, 189, 189, 186,
  189, 186, 186, 186, 193, 186, 193, 186, 186, 166,
  166, 164, 164, 164, 164, 37, 38, 234, 170, 189,
  166, 56, 186, 186, 266, 166, 259, 259, 164, 163,
  163, 166, 202, 202, 189, 189, 166, 275, 275, 186,
  186, 186, 189, 189, 164, 164, 164, 164, 166, 182,
  163, 10, 170, 164, 164, 164, 164, 164, 164, 164,
  166, 164, 164, 164, 182, 164, 164, 164, 164, 164,
  164, 166, 164, 164, 164, 166, 164, 164, 166, 164,
  166, 164, 164, 166, 164, 164, 166, 164, 164, 198,
  198, 232, 41, 36, 249, 164, 189, 163, 164, 166,
  189, 270, 202, 202, 260, 164, 164, 186, 166, 166,
  70, 70, 70, 189, 194, 4, 5, 217, 218, 189,
  14, 42, 242, 186, 189, 189, 186, 189, 189, 186,
  186, 230, 235, 46, 255, 58, 59, 164, 189, 56,
  186, 164, 259, 164, 164, 259, 186, 186, 186, 186,
  186, 164, 163, 163, 164, 166, 11, 225, 164, 166,
  164, 164, 164, 164, 164, 164, 233, 170, 189, 45,
  254, 163, 166, 163, 164, 271, 70, 164, 164, 209,
  218, 189, 222, 189, 170, 44, 258, 170, 250, 186,
  189, 189, 273, 186, 170, 170, 164, 256, 42, 47,
  251, 164, 166, 164, 166, 259, 23, 42, 210, 223,
  170, 186, 189, 12, 42, 224, 257, 164, 164, 4,
  226, 255
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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
#  include <stdio.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
     short *bottom;
     short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for ( /* Nothing. */ ; bottom <= top; ++bottom)
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
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
	     yyrule - 1, yylineno);
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
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

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
  register const char *yys = yystr;

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
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE * yyoutput, int yytype, YYSTYPE * yyvaluep)
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
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

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
yydestruct (int yytype, YYSTYPE * yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
     int yytype;
     YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void *YYPARSE_PARAM)
# else
int
yyparse (YYPARSE_PARAM)
     void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
#endif
#endif
{

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



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
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp), &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	    (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (!yyptr)
	  goto yyoverflowlab;
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
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

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
  yyval = yyvsp[1 - yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
    case 2:

      {
	YYACCEPT;;
      }
      break;

    case 4:

      {
	if (errorlevel <= ERROR)
	  {
	    YYABORT;
	  };
      }
      break;

    case 5:

      {
	if (yyvsp[0].sep >= 0)
	  yylineno += yyvsp[0].sep;
	else
	  switchlib ();;
      }
      break;

    case 12:

      {
	report_missing (ERROR,
			"do not import a library in a loop or an if-statement");
	switchlib ();;
      }
      break;

    case 13:

      {
	add_command (cERROR, NULL);;
      }
      break;

    case 19:

      {
	add_command (cBREAK, NULL);
	if (!in_loop)
	  error (ERROR, "break outside loop");;
      }
      break;

    case 20:

      {
	add_command (cCONTINUE, NULL);
	if (!in_loop)
	  error (ERROR, "continue outside loop");;
      }
      break;

    case 22:

      {
	create_call (yyvsp[0].symbol);
	add_command (cPOP, NULL);;
      }
      break;

    case 23:

      {
	create_call (yyvsp[0].symbol);
	add_command (cPOP, NULL);;
      }
      break;

    case 24:

      {
	if (function_type == ftNONE)
	  error (ERROR, "no use for 'local' outside functions");;
      }
      break;

    case 26:

      {
	if (function_type == ftNONE)
	  error (ERROR, "no use for 'static' outside functions");;
      }
      break;

    case 30:

      {
	create_goto ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							 TRUE) : yyvsp[0].
		     symbol);;
      }
      break;

    case 31:

      {
	create_gosub ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							  TRUE) : yyvsp[0].
		      symbol);;
      }
      break;

    case 32:

      {
	create_exception (TRUE);;
      }
      break;

    case 33:

      {
	create_exception (FALSE);;
      }
      break;

    case 34:

      {
	add_command (cSKIPPER, NULL);;
      }
      break;

    case 35:

      {
	add_command (cNOP, NULL);;
      }
      break;

    case 36:

      {
	add_command (cSKIPPER, NULL);;
      }
      break;

    case 37:

      {
	add_command (cNOP, NULL);;
      }
      break;

    case 38:

      {
	create_label ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							  TRUE) : yyvsp[0].
		      symbol, cLABEL);;
      }
      break;

    case 39:

      {
	add_command (cCHECKOPEN, NULL);;
      }
      break;

    case 40:

      {
	add_command (cCLOSE, NULL);;
      }
      break;

    case 41:

      {
	add_command (cCHECKSEEK, NULL);;
      }
      break;

    case 42:

      {
	add_command (cCOMPILE, NULL);;
      }
      break;

    case 43:

      {
	create_execute (0);
	add_command (cPOP, NULL);
	add_command (cPOP, NULL);;
      }
      break;

    case 44:

      {
	create_execute (1);
	add_command (cPOP, NULL);
	add_command (cPOP, NULL);;
      }
      break;

    case 45:

      {
	create_colour (0);
	create_print ('n');
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 46:

      {
	create_colour (0);
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 47:

      {
	create_colour (0);
	create_print ('t');
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 48:

      {
	tileol = FALSE;;
      }
      break;

    case 50:

      {
	tileol = TRUE;;
      }
      break;

    case 52:

      {
	add_command (cGCOLOUR, NULL);;
      }
      break;

    case 53:

      {
	add_command (cGCOLOUR2, NULL);;
      }
      break;

    case 54:

      {
	add_command (cGBACKCOLOUR, NULL);;
      }
      break;

    case 55:

      {
	add_command (cGBACKCOLOUR2, NULL);;
      }
      break;

    case 58:

      {
	create_restore ("");;
      }
      break;

    case 59:

      {
	create_restore ((function_type !=
			 ftNONE) ? dotify (yyvsp[0].symbol,
					   TRUE) : yyvsp[0].symbol);;
      }
      break;

    case 60:

      {
	if (get_switch_id ())
	  create_clean_switch_mark (0, TRUE);
	if (function_type != ftNONE)
	  {
	    add_command (cCLEARREFS, NULL);
	    lastcmd->nextref = firstref;
	    add_command (cPOPSYMLIST, NULL);
	    create_retval (ftNONE, function_type);
	    add_command (cRET_FROM_FUN, NULL);
	  }
	else
	  {
	    add_command (cRETURN, NULL);
	  };
      }
      break;

    case 61:

      {
	if (get_switch_id ())
	  create_clean_switch_mark (1, TRUE);
	if (function_type == ftNONE)
	  {
	    error (ERROR, "can not return value");
	    YYABORT;
	  }
	add_command (cCLEARREFS, NULL);
	lastcmd->nextref = firstref;
	add_command (cPOPSYMLIST, NULL);
	create_retval (ftNUMBER, function_type);
	add_command (cRET_FROM_FUN, NULL);;
      }
      break;

    case 62:

      {
	if (get_switch_id ())
	  create_clean_switch_mark (1, TRUE);
	if (function_type == ftNONE)
	  {
	    error (ERROR, "can not return value");
	    YYABORT;
	  }
	add_command (cCLEARREFS, NULL);
	lastcmd->nextref = firstref;
	add_command (cPOPSYMLIST, NULL);
	create_retval (ftSTRING, function_type);
	add_command (cRET_FROM_FUN, NULL);;
      }
      break;

    case 64:

      {
	create_openwin (FALSE);;
      }
      break;

    case 65:

      {
	create_openwin (TRUE);;
      }
      break;

    case 66:

      {
	add_command (cMOVEORIGIN, NULL);;
      }
      break;

    case 67:

      {
	add_command (cDOT, NULL);;
      }
      break;

    case 68:

      {
	add_command (cDOT, NULL);
	putindrawmode (dmCLEAR);;
      }
      break;

    case 69:

      {
	create_line (2);;
      }
      break;

    case 70:

      {
	create_line (2);
	putindrawmode (dmCLEAR);;
      }
      break;

    case 71:

      {
	create_line (1);;
      }
      break;

    case 72:

      {
	create_line (1);;
      }
      break;

    case 73:

      {
	create_line (1);
	putindrawmode (dmCLEAR);;
      }
      break;

    case 74:

      {
	create_line (1);
	putindrawmode (dmCLEAR);;
      }
      break;

    case 75:

      {
	add_command (cPUTBIT, NULL);;
      }
      break;

    case 76:

      {
	create_pushstr ("solid");
	add_command (cPUTBIT, NULL);;
      }
      break;

    case 77:

      {
	add_command (cPUTCHAR, NULL);;
      }
      break;

    case 78:

      {
	create_line (-1);;
      }
      break;

    case 79:

      {
	create_line (0);;
      }
      break;

    case 80:

      {
	add_command (cCIRCLE, NULL);
	putindrawmode (0);;
      }
      break;

    case 81:

      {
	add_command (cTRIANGLE, NULL);
	putindrawmode (0);;
      }
      break;

    case 82:

      {
	add_command (cTEXT1, NULL);;
      }
      break;

    case 83:

      {
	add_command (cTEXT2, NULL);;
      }
      break;

    case 84:

      {
	add_command (cTEXT3, NULL);;
      }
      break;

    case 85:

      {
	add_command (cRECT, NULL);
	putindrawmode (0);;
      }
      break;

    case 86:

      {
	add_command (cCLOSEWIN, NULL);;
      }
      break;

    case 87:

      {
	add_command (cCLEARWIN, NULL);;
      }
      break;

    case 88:

      {
	add_command (cCLEARSCR, NULL);;
      }
      break;

    case 89:

      {
	create_openprinter (0);;
      }
      break;

    case 90:

      {
	create_openprinter (1);;
      }
      break;

    case 91:

      {
	add_command (cCLOSEPRN, NULL);;
      }
      break;

    case 92:

      {
	add_command (cWAIT, NULL);;
      }
      break;

    case 93:

      {
	add_command (cBELL, NULL);;
      }
      break;

    case 94:

      {
	create_pushdbl (-1);
	create_function (fINKEY);
	add_command (cPOP, NULL);;
      }
      break;

    case 95:

      {
	create_pushdbl (-1);
	create_function (fINKEY);
	add_command (cPOP, NULL);;
      }
      break;

    case 96:

      {
	create_function (fINKEY);
	add_command (cPOP, NULL);;
      }
      break;

    case 97:

      {
	create_function (fSYSTEM2);
	add_command (cPOP, NULL);;
      }
      break;

    case 98:

      {
	create_poke ('s');;
      }
      break;

    case 99:

      {
	create_poke ('d');;
      }
      break;

    case 100:

      {
	create_poke ('S');;
      }
      break;

    case 101:

      {
	create_poke ('D');;
      }
      break;

    case 102:

      {
	add_command (cEND, NULL);;
      }
      break;

    case 103:

      {
	create_pushdbl (0);
	add_command (cEXIT, NULL);;
      }
      break;

    case 104:

      {
	add_command (cEXIT, NULL);;
      }
      break;

    case 105:

      {
	create_docu (yyvsp[0].symbol);;
      }
      break;

    case 106:

      {
	add_command (cBIND, NULL);;
      }
      break;

    case 107:

      {
	drawmode = 0;;
      }
      break;

    case 108:

      {
	drawmode = dmCLEAR;;
      }
      break;

    case 109:

      {
	drawmode = dmFILL;;
      }
      break;

    case 110:

      {
	drawmode = dmFILL + dmCLEAR;;
      }
      break;

    case 111:

      {
	drawmode = dmFILL + dmCLEAR;;
      }
      break;

    case 112:

      {
	add_command (cPOPSTRSYM, dotify (yyvsp[-2].symbol, FALSE));;
      }
      break;

    case 113:

      {
	create_changestring (fMID);;
      }
      break;

    case 114:

      {
	create_changestring (fMID2);;
      }
      break;

    case 115:

      {
	create_changestring (fLEFT);;
      }
      break;

    case 116:

      {
	create_changestring (fRIGHT);;
      }
      break;

    case 117:

      {
	create_doarray (dotify (yyvsp[-2].symbol, FALSE),
			ASSIGNSTRINGARRAY);;
      }
      break;

    case 120:

      {
	create_myopen (OPEN_HAS_STREAM + OPEN_HAS_MODE);;
      }
      break;

    case 121:

      {
	create_myopen (OPEN_HAS_STREAM);;
      }
      break;

    case 122:

      {
	create_myopen (OPEN_HAS_STREAM + OPEN_PRINTER);;
      }
      break;

    case 123:

      {
	add_command (cSWAP, NULL);
	create_pushstr ("r");
	create_myopen (OPEN_HAS_STREAM + OPEN_HAS_MODE);;
      }
      break;

    case 124:

      {
	add_command (cSWAP, NULL);
	create_pushstr ("w");
	create_myopen (OPEN_HAS_STREAM + OPEN_HAS_MODE);;
      }
      break;

    case 125:

      {
	add_command (cSEEK, NULL);;
      }
      break;

    case 126:

      {
	add_command (cSEEK2, NULL);;
      }
      break;

    case 127:

      {
	add_command (cPUSHSTRPTR, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 128:

      {
	create_doarray (dotify (yyvsp[-3].symbol, FALSE),
			GETSTRINGPOINTER);;
      }
      break;

    case 129:

      {
	add_command (cPUSHSTRSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 131:

      {
	add_command (cSTRINGFUNCTION_OR_ARRAY, yyvsp[0].symbol);;
      }
      break;

    case 132:

      {
	if (yyvsp[0].string == NULL)
	  {
	    error (ERROR, "String not terminated");
	    create_pushstr ("");
	  }
	else
	  {
	    create_pushstr (yyvsp[0].string);
	  };
      }
      break;

    case 133:

      {
	add_command (cCONCAT, NULL);;
      }
      break;

    case 135:

      {
	create_function (fLEFT);;
      }
      break;

    case 136:

      {
	create_function (fRIGHT);;
      }
      break;

    case 137:

      {
	create_function (fMID);;
      }
      break;

    case 138:

      {
	create_function (fMID2);;
      }
      break;

    case 139:

      {
	create_function (fSTR);;
      }
      break;

    case 140:

      {
	create_function (fSTR2);;
      }
      break;

    case 141:

      {
	create_function (fSTR3);;
      }
      break;

    case 142:

      {
	create_pushdbl (-1);
	create_function (fINKEY);;
      }
      break;

    case 143:

      {
	create_pushdbl (-1);
	create_function (fINKEY);;
      }
      break;

    case 144:

      {
	create_function (fINKEY);;
      }
      break;

    case 145:

      {
	create_function (fCHR);;
      }
      break;

    case 146:

      {
	create_function (fUPPER);;
      }
      break;

    case 147:

      {
	create_function (fLOWER);;
      }
      break;

    case 148:

      {
	create_function (fLTRIM);;
      }
      break;

    case 149:

      {
	create_function (fRTRIM);;
      }
      break;

    case 150:

      {
	create_function (fTRIM);;
      }
      break;

    case 151:

      {
	create_function (fSYSTEM);;
      }
      break;

    case 152:

      {
	create_function (fDATE);;
      }
      break;

    case 153:

      {
	create_function (fDATE);;
      }
      break;

    case 154:

      {
	create_function (fTIME);;
      }
      break;

    case 155:

      {
	create_function (fTIME);;
      }
      break;

    case 156:

      {
	create_function (fPEEK2);;
      }
      break;

    case 157:

      {
	create_function (fPEEK3);;
      }
      break;

    case 158:

      {
	add_command (cTOKENALT2, NULL);;
      }
      break;

    case 159:

      {
	add_command (cTOKENALT, NULL);;
      }
      break;

    case 160:

      {
	add_command (cSPLITALT2, NULL);;
      }
      break;

    case 161:

      {
	add_command (cSPLITALT, NULL);;
      }
      break;

    case 162:

      {
	create_function (fGETBIT);;
      }
      break;

    case 163:

      {
	create_function (fGETCHAR);;
      }
      break;

    case 164:

      {
	create_function (fHEX);;
      }
      break;

    case 165:

      {
	create_function (fBIN);;
      }
      break;

    case 166:

      {
	create_execute (1);
	add_command (cSWAP, NULL);
	add_command (cPOP, NULL);;
      }
      break;

    case 167:

      {
	add_command (cPOPDBLSYM, dotify (yyvsp[-2].symbol, FALSE));;
      }
      break;

    case 168:

      {
	create_doarray (yyvsp[-2].symbol, ASSIGNARRAY);;
      }
      break;

    case 169:

      {
	add_command (cORSHORT, NULL);
	pushlabel ();;
      }
      break;

    case 170:

      {
	poplabel ();
	create_boole ('|');;
      }
      break;

    case 171:

      {
	add_command (cANDSHORT, NULL);
	pushlabel ();;
      }
      break;

    case 172:

      {
	poplabel ();
	create_boole ('&');;
      }
      break;

    case 173:

      {
	create_boole ('!');;
      }
      break;

    case 174:

      {
	create_dblrelop ('=');;
      }
      break;

    case 175:

      {
	create_dblrelop ('!');;
      }
      break;

    case 176:

      {
	create_dblrelop ('<');;
      }
      break;

    case 177:

      {
	create_dblrelop ('{');;
      }
      break;

    case 178:

      {
	create_dblrelop ('>');;
      }
      break;

    case 179:

      {
	create_dblrelop ('}');;
      }
      break;

    case 180:

      {
	add_command (cTESTEOF, NULL);;
      }
      break;

    case 181:

      {
	add_command (cGLOB, NULL);;
      }
      break;

    case 182:

      {
	create_pushdbl (yyvsp[0].fnum);;
      }
      break;

    case 183:

      {
	add_command (cARDIM, "");;
      }
      break;

    case 184:

      {
	add_command (cARDIM, "");;
      }
      break;

    case 185:

      {
	add_command (cARSIZE, "");;
      }
      break;

    case 186:

      {
	add_command (cARSIZE, "");;
      }
      break;

    case 187:

      {
	add_command (cFUNCTION_OR_ARRAY, yyvsp[0].symbol);;
      }
      break;

    case 188:

      {
	add_command (cPUSHDBLSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 189:

      {
	create_dblbin ('+');;
      }
      break;

    case 190:

      {
	create_dblbin ('-');;
      }
      break;

    case 191:

      {
	create_dblbin ('*');;
      }
      break;

    case 192:

      {
	create_dblbin ('/');;
      }
      break;

    case 193:

      {
	create_dblbin ('^');;
      }
      break;

    case 194:

      {
	add_command (cNEGATE, NULL);;
      }
      break;

    case 195:

      {
	create_strrelop ('=');;
      }
      break;

    case 196:

      {
	create_strrelop ('!');;
      }
      break;

    case 197:

      {
	create_strrelop ('<');;
      }
      break;

    case 198:

      {
	create_strrelop ('{');;
      }
      break;

    case 199:

      {
	create_strrelop ('>');;
      }
      break;

    case 200:

      {
	create_strrelop ('}');;
      }
      break;

    case 203:

      {
	create_pusharrayref (dotify (yyvsp[-2].symbol, FALSE),
			     stNUMBERARRAYREF);;
      }
      break;

    case 204:

      {
	create_pusharrayref (dotify (yyvsp[-2].symbol, FALSE),
			     stSTRINGARRAYREF);;
      }
      break;

    case 206:

      {
	create_function (fSIN);;
      }
      break;

    case 207:

      {
	create_function (fASIN);;
      }
      break;

    case 208:

      {
	create_function (fCOS);;
      }
      break;

    case 209:

      {
	create_function (fACOS);;
      }
      break;

    case 210:

      {
	create_function (fTAN);;
      }
      break;

    case 211:

      {
	create_function (fATAN);;
      }
      break;

    case 212:

      {
	create_function (fATAN2);;
      }
      break;

    case 213:

      {
	create_function (fEXP);;
      }
      break;

    case 214:

      {
	create_function (fLOG);;
      }
      break;

    case 215:

      {
	create_function (fLOG2);;
      }
      break;

    case 216:

      {
	create_function (fSQRT);;
      }
      break;

    case 217:

      {
	create_function (fSQR);;
      }
      break;

    case 218:

      {
	create_function (fINT);;
      }
      break;

    case 219:

      {
	create_function (fFRAC);;
      }
      break;

    case 220:

      {
	create_function (fABS);;
      }
      break;

    case 221:

      {
	create_function (fSIG);;
      }
      break;

    case 222:

      {
	create_function (fMOD);;
      }
      break;

    case 223:

      {
	create_function (fRAN);;
      }
      break;

    case 224:

      {
	create_function (fRAN2);;
      }
      break;

    case 225:

      {
	create_function (fMIN);;
      }
      break;

    case 226:

      {
	create_function (fMAX);;
      }
      break;

    case 227:

      {
	create_function (fLEN);;
      }
      break;

    case 228:

      {
	create_function (fVAL);;
      }
      break;

    case 229:

      {
	create_function (fASC);;
      }
      break;

    case 230:

      {
	create_function (fDEC);;
      }
      break;

    case 231:

      {
	create_function (fDEC2);;
      }
      break;

    case 232:

      {
	if (check_compat)
	  error (WARNING, "instr() has changed in version 2.712");
	create_function (fINSTR);;
      }
      break;

    case 233:

      {
	create_function (fINSTR2);;
      }
      break;

    case 234:

      {
	create_function (fRINSTR);;
      }
      break;

    case 235:

      {
	create_function (fRINSTR2);;
      }
      break;

    case 236:

      {
	create_function (fSYSTEM2);;
      }
      break;

    case 237:

      {
	create_function (fPEEK4);;
      }
      break;

    case 238:

      {
	create_function (fPEEK);;
      }
      break;

    case 239:

      {
	create_function (fMOUSEX);;
      }
      break;

    case 240:

      {
	create_pushstr ("");
	create_function (fMOUSEX);;
      }
      break;

    case 241:

      {
	create_pushstr ("");
	create_function (fMOUSEX);;
      }
      break;

    case 242:

      {
	create_function (fMOUSEY);;
      }
      break;

    case 243:

      {
	create_pushstr ("");
	create_function (fMOUSEY);;
      }
      break;

    case 244:

      {
	create_pushstr ("");
	create_function (fMOUSEY);;
      }
      break;

    case 245:

      {
	create_function (fMOUSEB);;
      }
      break;

    case 246:

      {
	create_pushstr ("");
	create_function (fMOUSEB);;
      }
      break;

    case 247:

      {
	create_pushstr ("");
	create_function (fMOUSEB);;
      }
      break;

    case 248:

      {
	create_function (fMOUSEMOD);;
      }
      break;

    case 249:

      {
	create_pushstr ("");
	create_function (fMOUSEMOD);;
      }
      break;

    case 250:

      {
	create_pushstr ("");
	create_function (fMOUSEMOD);;
      }
      break;

    case 251:

      {
	create_function (fAND);;
      }
      break;

    case 252:

      {
	create_function (fOR);;
      }
      break;

    case 253:

      {
	create_function (fEOR);;
      }
      break;

    case 254:

      {
	create_function (fTELL);;
      }
      break;

    case 255:

      {
	add_command (cTOKEN2, NULL);;
      }
      break;

    case 256:

      {
	add_command (cTOKEN, NULL);;
      }
      break;

    case 257:

      {
	add_command (cSPLIT2, NULL);;
      }
      break;

    case 258:

      {
	add_command (cSPLIT, NULL);;
      }
      break;

    case 259:

      {
	create_execute (0);
	add_command (cSWAP, NULL);
	add_command (cPOP, NULL);;
      }
      break;

    case 260:

      {
	create_myopen (OPEN_PRINTER);;
      }
      break;

    case 261:

      {
	create_myopen (0);;
      }
      break;

    case 262:

      {
	create_myopen (OPEN_HAS_MODE);;
      }
      break;

    case 263:

      {
	create_myopen (OPEN_PRINTER + OPEN_HAS_STREAM);;
      }
      break;

    case 264:

      {
	create_myopen (OPEN_HAS_STREAM);;
      }
      break;

    case 265:

      {
	create_myopen (OPEN_HAS_STREAM + OPEN_HAS_MODE);;
      }
      break;

    case 266:

      {
	yyval.fnum = yyvsp[0].fnum;;
      }
      break;

    case 267:

      {
	yyval.fnum = yyvsp[0].fnum;;
      }
      break;

    case 268:

      {
	yyval.fnum = -yyvsp[0].fnum;;
      }
      break;

    case 269:

      {
	yyval.fnum = yyvsp[0].fnum;;
      }
      break;

    case 270:

      {
	yyval.fnum = strtod (yyvsp[0].digits, NULL);;
      }
      break;

    case 271:

      {
	yyval.symbol = my_strdup (dotify (yyvsp[0].digits, FALSE));;
      }
      break;

    case 272:

      {
	yyval.symbol = my_strdup (dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 273:

      {
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 'D');;
      }
      break;

    case 274:

      {
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 'D');;
      }
      break;

    case 275:

      {
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 'S');;
      }
      break;

    case 276:

      {
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 'S');;
      }
      break;

    case 277:

      {
	yyval.symbol = my_strdup (dotify (yyvsp[-3].symbol, FALSE));;
      }
      break;

    case 278:

      {
	yyval.symbol = my_strdup (dotify (yyvsp[-3].symbol, FALSE));;
      }
      break;

    case 279:

      {
	add_command (cPUSHFREE, NULL);;
      }
      break;

    case 286:

      {
	missing_endsub++;
	missing_endsub_line = yylineno;
	pushlabel ();
	report_missing (WARNING,
			"do not define a function in a loop or an if-statement");
	if (function_type != ftNONE)
	  {
	    error (ERROR, "nested functions not allowed");
	    YYABORT;
	  };
      }
      break;

    case 287:

      {
	if (exported)
	  create_sublink (yyvsp[0].symbol);
	create_label (yyvsp[0].symbol, cUSER_FUNCTION);
	add_command (cPUSHSYMLIST, NULL);
	add_command (cCLEARREFS, NULL);
	firstref = lastref = lastcmd;
	create_numparam ();;
      }
      break;

    case 288:

      {
	create_require (stFREE);
	add_command (cPOP, NULL);;
      }
      break;

    case 289:

      {
	add_command (cCLEARREFS, NULL);
	lastcmd->nextref = firstref;
	add_command (cPOPSYMLIST, NULL);
	create_retval (ftNONE, function_type);
	function_type = ftNONE;
	add_command (cRET_FROM_FUN, NULL);
	lastref = NULL;
	create_endfunction ();
	poplabel ();;
      }
      break;

    case 290:

      {
	if (missing_endsub)
	  {
	    sprintf (string, "%d end-sub(s) are missing (last at line %d)",
		     missing_endsub, missing_endsub_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 291:

      {
	missing_endsub--;;
      }
      break;

    case 292:

      {
	function_type = ftNUMBER;
	current_function = my_strdup (dotify (yyvsp[0].symbol, FALSE));
	yyval.symbol = my_strdup (dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 293:

      {
	function_type = ftSTRING;
	current_function = my_strdup (dotify (yyvsp[0].symbol, FALSE));
	yyval.symbol = my_strdup (dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 294:

      {
	exported = FALSE;;
      }
      break;

    case 295:

      {
	exported = TRUE;;
      }
      break;

    case 296:

      {
	exported = FALSE;;
      }
      break;

    case 297:

      {
	exported = TRUE;;
      }
      break;

    case 300:

      {
	create_makelocal (dotify (yyvsp[0].symbol, FALSE), syNUMBER);;
      }
      break;

    case 301:

      {
	create_makelocal (dotify (yyvsp[0].symbol, FALSE), sySTRING);;
      }
      break;

    case 302:

      {
	create_makelocal (dotify (yyvsp[-3].symbol, FALSE), syARRAY);
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 'd');;
      }
      break;

    case 303:

      {
	create_makelocal (dotify (yyvsp[-3].symbol, FALSE), syARRAY);
	create_dim (dotify (yyvsp[-3].symbol, FALSE), 's');;
      }
      break;

    case 306:

      {
	create_makestatic (dotify (yyvsp[0].symbol, TRUE), syNUMBER);;
      }
      break;

    case 307:

      {
	create_makestatic (dotify (yyvsp[0].symbol, TRUE), sySTRING);;
      }
      break;

    case 308:

      {
	create_makestatic (dotify (yyvsp[-3].symbol, TRUE), syARRAY);
	create_dim (dotify (yyvsp[-3].symbol, TRUE), 'D');;
      }
      break;

    case 309:

      {
	create_makestatic (dotify (yyvsp[-3].symbol, TRUE), syARRAY);
	create_dim (dotify (yyvsp[-3].symbol, TRUE), 'S');;
      }
      break;

    case 313:

      {
	create_require (stNUMBER);
	create_makelocal (dotify (yyvsp[0].symbol, FALSE), syNUMBER);
	add_command (cPOPDBLSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 314:

      {
	create_require (stSTRING);
	create_makelocal (dotify (yyvsp[0].symbol, FALSE), sySTRING);
	add_command (cPOPSTRSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 315:

      {
	create_require (stNUMBERARRAYREF);
	create_arraylink (dotify (yyvsp[-2].symbol, FALSE),
			  stNUMBERARRAYREF);;
      }
      break;

    case 316:

      {
	create_require (stSTRINGARRAYREF);
	create_arraylink (dotify (yyvsp[-2].symbol, FALSE),
			  stSTRINGARRAYREF);;
      }
      break;

    case 317:

      {
	missing_next++;
	missing_next_line = yylineno;;
      }
      break;

    case 318:

      {
	pushname (dotify (yyvsp[-1].symbol, FALSE));	/* will be used by next_symbol to check equality */
	add_command (cRESETSKIPONCE, NULL);
	pushgoto ();
	add_command (cCONTINUE_HERE, NULL);
	create_break_mark (0, 1);;
      }
      break;

    case 319:

      {				/* pushes another expression */
	add_command (cSKIPONCE, NULL);
	pushlabel ();
	add_command (cSTARTFOR, NULL);
	add_command (cPOPDBLSYM, dotify (yyvsp[-6].symbol, FALSE));
	poplabel ();
	add_command (cPUSHDBLSYM, dotify (yyvsp[-6].symbol, FALSE));
	add_command (cFORINCREMENT, NULL);
	add_command (cPOPDBLSYM, dotify (yyvsp[-6].symbol, FALSE));
	add_command (cPUSHDBLSYM, dotify (yyvsp[-6].symbol, FALSE));
	add_command (cFORCHECK, NULL);
	add_command (cDECIDE, NULL);
	pushlabel ();;
      }
      break;

    case 320:

      {
	swap ();
	popgoto ();
	poplabel ();;
      }
      break;

    case 321:

      {
	create_break_mark (0, -1);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 322:

      {
	if (missing_next)
	  {
	    sprintf (string, "%d next(s) are missing (last at line %d)",
		     missing_next, missing_next_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 323:

      {
	missing_next--;;
      }
      break;

    case 324:

      {
	create_pushdbl (1);;
      }
      break;

    case 326:

      {
	pop (stSTRING);;
      }
      break;

    case 327:

      {
	if (strcmp
	    (pop (stSTRING)->pointer, dotify (yyvsp[0].symbol, FALSE)))
	  {
	    error (ERROR, "'for' and 'next' do not match");
	    YYABORT;
	  }
	;
      }
      break;

    case 328:

      {
	push_switch_id ();
	add_command (cPUSH_SWITCH_MARK, NULL);
	create_break_mark (0, 1);
	add_command (cCONTINUE_CORRECTION, NULL);;
      }
      break;

    case 329:

      {
	create_break_mark (-1, 0);
	add_command (cBREAK_HERE, NULL);
	create_break_mark (0, -1);
	add_command (cBREAK_HERE, NULL);
	create_clean_switch_mark (0, FALSE);
	pop_switch_id ();;
      }
      break;

    case 330:

      {
	if (yyvsp[0].sep >= 0)
	  yylineno += yyvsp[0].sep;;
      }
      break;

    case 331:

      {
	if (yyvsp[0].sep >= 0)
	  yylineno += yyvsp[0].sep;;
      }
      break;

    case 335:

      {
	create_break_mark (-1, 0);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 336:

      {
	add_command (cSWITCH_COMPARE, NULL);
	add_command (cDECIDE, NULL);
	add_command (cMINOR_BREAK, NULL);
	create_break_mark (1, 0);;
      }
      break;

    case 337:

      {
	add_command (cNEXT_CASE, NULL);;
      }
      break;

    case 339:

      {
	if (yyvsp[0].sep >= 0)
	  yylineno += yyvsp[0].sep;
	create_break_mark (-1, 0);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 341:

      {
	add_command (cCONTINUE_HERE, NULL);
	create_break_mark (0, 1);
	missing_loop++;
	missing_loop_line = yylineno;
	pushgoto ();;
      }
      break;

    case 343:

      {
	if (missing_loop)
	  {
	    sprintf (string, "%d loop(s) are missing (last at line %d)",
		     missing_loop, missing_loop_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 344:

      {
	missing_loop--;
	popgoto ();
	create_break_mark (0, -1);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 345:

      {
	add_command (cCONTINUE_HERE, NULL);
	create_break_mark (0, 1);
	missing_wend++;
	missing_wend_line = yylineno;
	pushgoto ();
      }
      break;

    case 346:

      {
	add_command (cDECIDE, NULL);
	pushlabel ();;
      }
      break;

    case 348:

      {
	if (missing_wend)
	  {
	    sprintf (string, "%d wend(s) are missing (last at line %d)",
		     missing_wend, missing_wend_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 349:

      {
	missing_wend--;
	swap ();
	popgoto ();
	poplabel ();
	create_break_mark (0, -1);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 350:

      {
	add_command (cCONTINUE_HERE, NULL);
	create_break_mark (0, 1);
	missing_until++;
	missing_until_line = yylineno;
	pushgoto ();;
      }
      break;

    case 352:

      {
	if (missing_until)
	  {
	    sprintf (string, "%d until(s) are missing (last at line %d)",
		     missing_until, missing_until_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 353:

      {
	missing_until--;
	add_command (cDECIDE, NULL);
	popgoto ();
	create_break_mark (0, -1);
	add_command (cBREAK_HERE, NULL);;
      }
      break;

    case 354:

      {
	add_command (cDECIDE, NULL);
	storelabel ();
	pushlabel ();;
      }
      break;

    case 355:

      {
	missing_endif++;
	missing_endif_line = yylineno;;
      }
      break;

    case 356:

      {
	swap ();
	matchgoto ();
	swap ();
	poplabel ();;
      }
      break;

    case 357:

      {
	poplabel ();;
      }
      break;

    case 359:

      {
	if (missing_endif)
	  {
	    sprintf (string, "%d endif(s) are missing (last at line %d)",
		     missing_endif, missing_endif_line);
	    error (ERROR, string);
	  }
	YYABORT;;
      }
      break;

    case 360:

      {
	missing_endif--;;
      }
      break;

    case 361:

      {
	fi_pending++;
	add_command (cDECIDE, NULL);
	pushlabel ();;
      }
      break;

    case 362:

      {
	poplabel ();;
      }
      break;

    case 366:

      {
	add_command (cDECIDE, NULL);
	pushlabel ();;
      }
      break;

    case 367:

      {
	swap ();
	matchgoto ();
	swap ();
	poplabel ();;
      }
      break;

    case 372:

      {
	add_command (cCHKPROMPT, NULL);;
      }
      break;

    case 374:

      {
	create_myread ('d', tileol);
	add_command (cPOPDBLSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 375:

      {
	create_myread ('d', tileol);
	create_doarray (dotify (yyvsp[-3].symbol, FALSE), ASSIGNARRAY);;
      }
      break;

    case 376:

      {
	create_myread ('s', tileol);
	add_command (cPOPSTRSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 377:

      {
	create_myread ('s', tileol);
	create_doarray (dotify (yyvsp[-3].symbol, FALSE),
			ASSIGNSTRINGARRAY);;
      }
      break;

    case 380:

      {
	create_readdata ('d');
	add_command (cPOPDBLSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 381:

      {
	create_readdata ('d');
	create_doarray (dotify (yyvsp[-3].symbol, FALSE), ASSIGNARRAY);;
      }
      break;

    case 382:

      {
	create_readdata ('s');
	add_command (cPOPSTRSYM, dotify (yyvsp[0].symbol, FALSE));;
      }
      break;

    case 383:

      {
	create_readdata ('s');
	create_doarray (dotify (yyvsp[-3].symbol, FALSE),
			ASSIGNSTRINGARRAY);;
      }
      break;

    case 384:

      {
	create_strdata (yyvsp[0].string);;
      }
      break;

    case 385:

      {
	create_dbldata (yyvsp[0].fnum);;
      }
      break;

    case 386:

      {
	create_strdata (yyvsp[0].string);;
      }
      break;

    case 387:

      {
	create_dbldata (yyvsp[0].fnum);;
      }
      break;

    case 391:

      {
	create_print ('s');;
      }
      break;

    case 392:

      {
	create_print ('s');;
      }
      break;

    case 393:

      {
	create_print ('d');;
      }
      break;

    case 394:

      {
	create_print ('u');;
      }
      break;

    case 395:

      {
	create_print ('U');;
      }
      break;

    case 396:

      {
	add_command (cPUSHDBLSYM, dotify (yyvsp[0].symbol, FALSE));
	create_pps (cPUSHSTREAM, 1);;
      }
      break;

    case 397:

      {
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 398:

      {
	create_pushdbl (atoi (yyvsp[0].digits));
	create_pps (cPUSHSTREAM, 1);;
      }
      break;

    case 399:

      {
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 400:

      {
	create_pps (cPUSHSTREAM, 1);;
      }
      break;

    case 401:

      {
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 402:

      {
	add_command (cMOVE, NULL);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 1);;
      }
      break;

    case 403:

      {
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 404:

      {
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 1);;
      }
      break;

    case 405:

      {
	create_pps (cPOPSTREAM, 0);;
      }
      break;

    case 406:

      {
	create_pushstr ("?");
	create_print ('s');;
      }
      break;

    case 407:

      {
	create_pushstr (yyvsp[0].string);
	create_print ('s');;
      }
      break;

    case 408:

      {
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 409:

      {
	add_command (cPUSHDBLSYM, dotify (yyvsp[0].symbol, FALSE));
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 410:

      {
	create_pushdbl (atoi (yyvsp[0].digits));
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 411:

      {
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 412:

      {
	create_colour (1);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 413:

      {
	create_colour (2);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 414:

      {
	create_colour (3);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 415:

      {
	add_command (cMOVE, NULL);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 416:

      {
	add_command (cMOVE, NULL);
	create_colour (1);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 417:

      {
	add_command (cMOVE, NULL);
	create_colour (2);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 418:

      {
	add_command (cMOVE, NULL);
	create_colour (3);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);;
      }
      break;

    case 419:

      {
	create_colour (1);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);
	add_command (cMOVE, NULL);;
      }
      break;

    case 420:

      {
	create_colour (2);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);
	add_command (cMOVE, NULL);;
      }
      break;

    case 421:

      {
	create_colour (3);
	create_pushdbl (STDIO_STREAM);
	create_pps (cPUSHSTREAM, 0);
	add_command (cMOVE, NULL);;
      }
      break;

    case 424:

      {
	create_goto ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							 TRUE) : yyvsp[0].
		     symbol);
	add_command (cFINDNOP, NULL);;
      }
      break;

    case 425:

      {
	create_goto ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							 TRUE) : yyvsp[0].
		     symbol);
	add_command (cFINDNOP, NULL);;
      }
      break;

    case 426:

      {
	create_gosub ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							  TRUE) : yyvsp[0].
		      symbol);
	add_command (cFINDNOP, NULL);;
      }
      break;

    case 427:

      {
	create_gosub ((function_type != ftNONE) ? dotify (yyvsp[0].symbol,
							  TRUE) : yyvsp[0].
		      symbol);
	add_command (cFINDNOP, NULL);;
      }
      break;


    }

/* Line 991 of yacc.c.  */


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
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq =
			    !yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
	{
	  /* Pop the error token.  */
	  YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp,
			    yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
	}

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__) \
    && !defined __cplusplus
  __attribute__ ((__unused__))
#endif
      goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;		/* Each real token shifted decrements this.  */

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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}

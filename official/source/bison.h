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
/* Line 1249 of yacc.c.  */

# define yystype YYSTYPE	/* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

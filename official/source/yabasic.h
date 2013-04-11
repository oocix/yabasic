/*  

    YABASIC ---  a simple Basic Interpreter
    written by Marc-Oliver Ihm 1995-2005
    homepage: www.yabasic.de
    
    yabasic.h --- function prototypes and global variables
    
    This file is part of yabasic and may be copied only 
    under the terms of either the Artistic License or 
    the GNU General Public License (GPL), both of which 
    can be found at www.yabasic.de

*/


#define YABLICENSE \
"  Yabasic may only be copied under the terms of either the               \n"\
"  Artistic License or the GNU General Public License (GPL),              \n"\
"  both of which can be found at www.yabasic.de.                          \n"\
"  The choice, which license you want to apply, is yours.                 \n"\
"\n"\
"  Most people will want to use and distribute yabasic under the          \n"\
"  terms of the Artistic License. It gives you the right to use           \n"\
"  and distribute yabasic in a more-or-less customary fashion,            \n"\
"  plus the right to make reasonable modifications and distribute         \n"\
"  (or even sell) such a modified version under a different name.         \n"\
"  However, the original author and copyright holder still reserves       \n"\
"  himself some sort of artistic control over the development             \n"\
"  of yabasic itself.                                                     \n"\
"\n"\
"  However, as many people already know the GPL, yabasic may be           \n"\
"  distributed under this license as well.                                \n"

#define YABASIC_INCLUDED

/* ------------- defines ---------------- */

/*
  Define one and only one of the following symbols, depending on your
  System:
  - UNIX: uses some UNIX-features and X11
  - WINDOWS: uses WIN32-features
*/

#if defined(UNIX) && defined(WINDOWS)
UNIX and WINDOWS are defined at once;
check your compiler settings
#endif
/* ------------- includes ---------------- */
#include <config.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <errno.h>
#ifdef WINDOWS
#include <string.h>
#include <windows.h>
#include <io.h>
#define ARCHITECTURE "windows"
#ifdef __LCC__			/* fix for lccwin32 */
#include <winspool.h>
#endif
#endif
#ifdef UNIX
#define ARCHITECTURE UNIX_ARCHITECTURE
#ifdef HAS_STRING_HEADER
#include <string.h>
#elif HAS_STRINGS_HEADER
#include <strings.h>
#endif
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Intrinsic.h>
#define XK_LATIN1
#define XK_MISCELLANY
#include <X11/keysymdef.h>
#include <unistd.h>
#include <fcntl.h>
#ifdef HAVE_NCURSES_HEADER
#include <ncurses.h>
#else
#ifdef HAVE_CURSES_HEADER
#include <curses.h>
#endif
#endif
#ifndef KEY_MAX
#define KEY_MAX 0777
#endif
#endif
#ifndef FOPEN_MAX
#define FOPEN_MAX 9
#endif
#include <signal.h>
#include <ctype.h>
#ifdef UNIX
#ifndef LIBRARY_PATH
#define LIBRARY_PATH "/usr/lib"
#endif
#endif
#define OPEN_HAS_STREAM 1
#define OPEN_HAS_MODE 2
#define OPEN_PRINTER 8
#define STDIO_STREAM 1234
/* -------- variables needed in all files and defined in ... -------- */
/* main.c */
extern struct command *current;	/* currently executed command */
extern struct command *cmdroot;	/* first command */
extern struct command *cmdhead;	/* next command */
extern struct command *lastcmd;	/* last command */
extern int infolevel;		/* controls issuing of error messages */
extern int errorlevel;		/* highest level of error message seen til now */
extern int interactive;		/* true, if commands come from stdin */
extern char *progname;		/* name of yabasic-program */
extern char *explanation[];	/* explanations of commands */
extern char **yabargv;		/* arguments for yabasic */
extern int yabargc;		/* number of arguments in yabargv */
extern time_t compilation_start, compilation_end, execution_end;
extern char *string;		/* for trash-strings */
extern char *errorstring;	/* for error-strings */
extern int errorcode;		/* error-codes */
extern char library_path[];	/* full path to search libraries */
extern int program_state;	/* state of program */
extern int check_compat;	/* true, if compatibility should be checked */
extern int is_bound;		/* true, if this executable is bound */


/* io.c */
extern FILE *streams[];		/* file streams */
extern int read_controls;	/* TRUE, if input should read control characters */
extern int stream_modes[];	/* modes for streams */
extern int curinized;		/* true, if curses has been initialized */
extern int badstream (int, int);	/* test for valid stream id */
void myseek (struct command *);	/* reposition file pointer */
void myswitch (int);		/* switch to specified stream */
#ifdef WINDOWS
extern HANDLE wantkey;		/* mutex to signal key desire */
extern HANDLE gotkey;		/* mutex to signal key reception */
extern HANDLE wthandle;		/* handle of win thread */
extern HANDLE kthandle;		/* handle of inkey thread */
extern DWORD ktid;		/* id of inkey thread */
extern int LINES;		/* number of lines on screen */
extern int COLS;		/* number of columns on screen */
extern HANDLE ConsoleInput;	/* handle for console input */
extern HANDLE ConsoleOutput;	/* handle for console output */
#else
extern int winpid;		/* pid of process waiting for window keys */
extern int termpid;		/* pid of process waiting for terminal keys */
#endif

/* graphic.c */
/* printing and plotting */
extern int print_to_file;	/* print to file ? */
#ifdef WINDOWS
extern HFONT printerfont;	/* handle of printer-font */
extern HDC printer;		/* handle of printer */
#endif
extern FILE *printerfile;	/* file to print on */
extern double xoff;		/* offset for x-mapping */
extern double xinc;		/* inclination of x-mapping */
extern double yoff;		/* offset for y-mapping */
extern double yinc;		/* inclination for y-mapping */
/* window coordinates */
extern int winopened;		/* flag if window is open already */
extern char *winorigin;		/* e.g. "lt","rc"; defines origin of grafic window */
extern int winwidth, winheight;	/* size of window */
/* mouse, console and keyboard */
extern int mousex, mousey, mouseb, mousemod;	/* last know mouse coordinates */
extern char *ykey[];		/* keys returned by inkey */
/* text and font */
extern char *getreg (char *);	/* get defaults from Registry */
extern char *text_align;	/* specifies alignement of text */
extern int fontheight;		/* height of font in pixel */
extern int check_alignment (char *);	/* checks, if text-alignement is valid */

#ifdef WINDOWS
extern HFONT myfont;		/* handle of font for screen */
#endif
/* general window stuff */
extern char *foreground;
extern char *background;
extern char *geometry;
extern char *displayname;
extern char *font;
extern int drawmode;
#ifdef WINDOWS
extern HWND window;		/* handle of my window */
extern HANDLE mainthread;	/* handle to main thread */
extern HANDLE this_instance;
extern WNDCLASS myclass;	/* window class for my program */
extern char *my_class;
extern BOOL Commandline;	/* true if launched from command line */
#else
extern int backpid;		/* pid of process waiting for redraw events */
#endif


/* function.c */
extern struct command *datapointer;	/* current location for read-command */
void switch_compare (void);	/* compare topmost values for switch statement */

/* symbol.c */
extern struct stackentry *stackroot;	/* first element of stack */
extern struct stackentry *stackhead;	/* last element of stack */
extern void query_array (struct command *cmd);	/* query array */
extern struct command *lastref;	/* last command in UDS referencing a symbol */
extern struct command *firstref;	/* first command in UDS referencing a symbol */
extern int labelcount;		/* count self-generated labels */
extern int get_switch_id (void);	/* get current switch id */

/* flex.c */
extern int include_stack_ptr;	/* Lex buffer for any imported file */
extern struct libfile_name *libfile_stack[];	/* stack for library file names */
extern struct libfile_name *currlib;	/* current libfile as relevant to bison */
extern int inlib;		/* true, while in library */
extern int fi_pending;		/* true, if within a short if */
extern int libfile_chain_length;	/* length of libfile_chain */
extern struct libfile_name *libfile_chain[];	/* list of all library file names */


/* bison.c */
extern char *current_function;	/* name of currently parsed function */
extern int yydebug;
extern int missing_endif;
extern int missing_endif_line;
extern int in_loop;

/*-------------------------- defs and undefs ------------------------*/

/* undef symbols */
#undef FATAL
#undef ERROR
#undef WARNING
#undef NOTE
#undef DEBUG
#undef DUMP

#if !defined(TRUE)
#define TRUE (1==1)
#endif

#ifndef FALSE
#define FALSE (1!=1)
#endif

/* I've been told, that some symbols are missing under SunOs ... */
#ifndef RAND_MAX
#define RAND_MAX 32767
#endif

/* length of buffers for system() and input */
#define SYSBUFFLEN 100
#define INBUFFLEN 10000


/* ---------------------- enum types ------------------------------- */

enum error
{				/* error levels  */
  FATAL, ERROR, INFO, DUMP, WARNING, NOTE, DEBUG
};

enum endreasons
{				/* ways to end the program */
  erNONE, erERROR, erREQUEST, erEOF
};

enum streammodes
{				/* ways to access a stream */
  smCLOSED = 0, smREAD = 1, smWRITE = 2, smPRINT = 4
};

enum functions
{				/* functions in yabasic (sorted by number of arguments) */
  fRAN2, fDATE, fTIME,
  fZEROARGS,
  fINKEY, fMOUSEX, fMOUSEY, fMOUSEB, fMOUSEMOD,
  fSIN, fASIN, fCOS, fACOS, fTAN,
  fATAN, fSYSTEM, fSYSTEM2, fPEEK, fPEEK2, fPEEK4, fTELL, fEXP, fLOG, fLEN,
      fSTR,
  fSQRT, fSQR, fFRAC, fABS, fSIG, fRAN, fINT, fVAL, fASC, fHEX, fBIN, fDEC,
      fUPPER, fLOWER,
  fLTRIM, fRTRIM, fTRIM, fCHR, fONEARGS, fDEC2, fATAN2, fLEFT, fAND, fOR,
      fEOR, fLOG2,
  fRIGHT, fINSTR, fRINSTR, fSTR2, fMOD, fMIN, fMAX, fPEEK3, fMID2,
  fTWOARGS,
  fMID, fINSTR2, fRINSTR2, fSTR3,
  fTHREEARGS,
  fGETBIT, fGETCHAR
};

enum arraymode
{				/* type of array access */
  CALLARRAY, ASSIGNARRAY, CALLSTRINGARRAY, ASSIGNSTRINGARRAY,
      GETSTRINGPOINTER
};

enum drawing_modes
{				/* various ways to draw */
  dmNORMAL = 0, dmCLEAR = 1, dmFILL = 2
};

enum cmd_type
{				/* type of command */
  cFIRST_COMMAND,		/* no command, just marks start of list */

  cLABEL, cSUBLINK, cGOTO, cQGOTO, cGOSUB, cQGOSUB, cRETURN,	/* flow control */
  cEND, cEXIT, cBIND, cDECIDE, cSKIPPER, cNOP, cFINDNOP, cEXCEPTION,
      cANDSHORT,
  cORSHORT, cSKIPONCE, cRESETSKIPONCE, cCOMPILE, cEXECUTE, cEXECUTE2,

  cDIM, cFUNCTION, cDOARRAY, cARRAYLINK, cPUSHARRAYREF, cCLEARREFS,	/* everything with "()" */
  cARDIM, cARSIZE, cTOKEN, cTOKEN2, cTOKENALT, cTOKENALT2,
  cSPLIT, cSPLIT2, cSPLITALT, cSPLITALT2,
  cSTARTFOR, cFORCHECK, cFORINCREMENT,	/* for for-loops */

  cSWITCH_COMPARE, cNEXT_CASE, cBREAK, cMINOR_BREAK,	/* break-continue-switch */
  cCONTINUE, cBREAK_HERE, cCONTINUE_HERE, cCONTINUE_CORRECTION,
  cBREAK_MARK, cPUSH_SWITCH_MARK, cCLEAN_SWITCH_MARK,

  cDBLADD, cDBLMIN, cDBLMUL, cDBLDIV, cDBLPOW,	/* double operations */
  cNEGATE, cPUSHDBLSYM, cPOP, cPOPDBLSYM, cPUSHDBL,

  cREQUIRE, cPUSHFREE, cMAKELOCAL, cMAKESTATIC, cNUMPARAM,	/* functions and procedures */
  cCALL, cQCALL, cPUSHSYMLIST, cPOPSYMLIST, cRET_FROM_FUN,
  cUSER_FUNCTION, cRETVAL, cEND_FUNCTION,
  cFUNCTION_OR_ARRAY, cSTRINGFUNCTION_OR_ARRAY,

  cPOKE, cPOKEFILE, cSWAP, cDUPLICATE, cDOCU,	/* internals */

  cAND, cOR, cNOT, cLT, cGT, cLE, cGE, cEQ, cNE,	/* comparisons */
  cSTREQ, cSTRNE, cSTRLT, cSTRLE, cSTRGT, cSTRGE,

  cPUSHSTRSYM, cPOPSTRSYM, cPUSHSTR, cCONCAT,	/* string operations */
  cPUSHSTRPTR, cCHANGESTRING, cGLOB,

  cPRINT, cREAD, cRESTORE, cQRESTORE, cONESTRING,	/* i/o operations */
  cREADDATA, cDATA, cOPEN, cCHECKOPEN, cCHECKSEEK, cCLOSE, cPUSHSTREAM,
      cPOPSTREAM,
  cSEEK, cSEEK2, cTESTEOF, cWAIT, cBELL, cMOVE,
  cCLEARSCR, cCOLOUR, cCHKPROMPT, cERROR,

  cOPENWIN, cDOT, cLINE, cCIRCLE, cTRIANGLE, cTEXT1, cTEXT2, cTEXT3, cCLOSEWIN, cCLEARWIN,	/* grafics */
  cOPENPRN, cCLOSEPRN, cMOVEORIGIN, cRECT, cGCOLOUR, cGCOLOUR2,
  cGBACKCOLOUR, cGBACKCOLOUR2, cPUTBIT, cPUTCHAR,

  cLAST_COMMAND			/* no command, just marks end of list */
};

enum stackentries
{				/* different types of stackentries */
  stGOTO, stSTRING, stSTRINGARRAYREF, stNUMBER, stNUMBERARRAYREF, stLABEL,
      stRETADD, stRETADDCALL, stFREE, stROOT,
  stANY, stSTRING_OR_NUMBER, stSTRING_OR_NUMBER_ARRAYREF,	/* these will never appear on stack but are used to check with pop */
  stSWITCH_MARK,		/* used to clean up stack after switch-statement */
  stSWITCH_STRING, stSWITCH_NUMBER	/* only used in switch statement, compares true to every string or number */
};

enum symbols
{				/* different types of symbols */
  sySTRING, syNUMBER, syFREE, syARRAY
};

enum function_type
{				/* different types of functions */
  ftNONE, ftNUMBER, ftSTRING
};

enum addmodes
{				/* different modes for adding symbols */
  amSEARCH, amSEARCH_PRE, amADD_LOCAL, amADD_GLOBAL, amSEARCH_VERY_LOCAL
};

enum states
{				/* current state of program */
  HATCHED, INITIALIZED, COMPILING, RUNNING, FINISHED
};

enum yabkeys
{				/* recognized special keys */
  kERR, kUP, kDOWN, kLEFT, kRIGHT, kDEL, kINS, kCLEAR, kHOME, kEND,
  kF0, kF1, kF2, kF3, kF4, kF5, kF6, kF7, kF8, kF9, kF10, kF11, kF12,
  kF13, kF14, kF15, kF16, kF17, kF18, kF19, kF20, kF21, kF22, kF23, kF24,
  kBACKSPACE, kSCRNDOWN, kSCRNUP, kENTER, kESC, kTAB, kLASTKEY
};

enum searchmodes
{				/* modes for searching labels */
  smSUB = 1, smLINK = 2, smLABEL = 4, smGLOBAL = 8
};

/* ------------- global types ---------------- */

struct stackentry
{				/* one element on stack */
  int type;			/* contents of entry */
  struct stackentry *next;
  struct stackentry *prev;
  void *pointer;		/* multiuse ptr */
  double value;			/* double value, only one of pointer or value is used */
};

/*
  symbols are organized as a stack of lists: for every procedure call 
  a new list is pushed onto the stack; all local variables of this
  function are chained into this list. After return from this procedure,
  the whole list is discarded and one element is popped from
  the stack.
*/

struct symstack
{				/* stack of symbol lists */
  struct symbol *next_in_list;
  struct symstack *next_in_stack;
  struct symstack *prev_in_stack;
};

struct symbol
{				/* general symbol; either variable, string */
  int type;
  struct symbol *link;		/* points to linked symbol, if any */
  struct symbol *next_in_list;	/* next symbol in symbollist */
  char *name;			/* name of symbol */
  void *pointer;		/* pointer to string contents (if any) */
  char *args;			/* used to store number of arguments for functions/array */
  double value;
};

struct command
{				/* one interpreter command */
  int type;			/* type of command */
  int cnt;			/* count of this command */
  struct command *prev;		/* link to previous command */
  struct command *next;		/* link to next command */
  void *pointer;		/* pointer to data */
  void *symbol;			/* pointer to symbol (or data within symbol) associated with command */
  struct command *jump;		/* pointer to jump destination */
  char *name;			/* name of symbol associated with command */
  struct command *nextref;	/* next cmd within function referencing a symbol */
  struct command *nextassoc;	/* next cmd within within chain of associated commands */
  int args;			/* number of arguments for function/array call */
  /* or stream number for open/close             */
  int tag;			/* char/int to pass some information */
  int line;			/* line this command has been created for */
  struct libfile_name *lib;	/* associated library */
  int switch_id;		/* TRUE, if in switch, FALSE else; used to check gotos */
};

struct array
{				/* data structure for arrays */
  int bounds[10];		/* index boundaries */
  int dimension;		/* dimension of array */
  void *pointer;		/* contents of array */
  char type;			/* decide between string- ('s') and double-Arrays ('d') */
};

struct buff_chain
{				/* buffer chain for system-input */
  char buff[SYSBUFFLEN + 1];	/* content of buffer */
  int len;			/* used length of buff */
  struct buff_chain *next;	/* next buffer in chain */
};

struct libfile_name
{				/* used to store library names */
  char *l;			/* long version, including path */
  int llen;			/* length of l */
  char *s;			/* short version */
  int slen;			/* length of s */
  int lineno;			/* linenumber within file */
  struct command *datapointer;	/* data pointer of this library */
  struct command *firstdata;	/* first data-command in library */
  struct libfile_name *next;	/* next in chain */
};

/* ------------- function prototypes defined in ... ---------------- */

/* main.c */
void error (int, char *);	/* reports an error and possibly exits */
void error_with_line (int, char *, int);	/* reports an error and possibly exits */
void *my_malloc (unsigned);	/* my own version of malloc */
void my_free (void *);		/* free memory */
char *my_strerror (int);	/* return description of error messages */
struct command *add_command (int, char *);	/* get room for new command */
void signal_handler (int);	/* handle various signals */
char *my_strdup (char *);	/* my own version of strdup */
char *my_strndup (char *, int);	/*  own version of strndup */
struct libfile_name *new_file (char *, char *);	/* create a new structure for library names */
char *dotify (char *, int);	/* add library name, if not already present */
char *strip (char *);		/* strip off to minimal name */
void do_error (struct command *);	/* issue user defined error */
void create_docu (char *);	/* create command 'docu' */
extern void add_variables (char *);	/* add pi and e to symbol table */
void compile (void);		/* create a subroutine at runtime */
void create_execute (int);	/* create command 'cEXECUTE' */
void execute (struct command *);	/* execute a subroutine */
int isbound (void);		/* check if this interpreter is bound to a program */


/* io.c */
void checkopen (void);		/* check, if open has been sucessfull */
void create_colour (int);	/* create command 'reverse' */
void colour (struct command *cmd);	/* switch reverse-printing */
void create_print (char);	/* create command 'print' */
void print (struct command *);	/* print on screen */
void create_myread (char, int);	/* create command 'read' */
void myread (struct command *);	/* read from file or stdin */
void create_onestring (char *);	/* write string to file */
void onestring (char *);	/* write string to file */
void chkprompt (void);		/* print an intermediate prompt if necessary */
void create_myopen (int);	/* create command 'myopen' */
void myopen (struct command *);	/* open specified file for given name */
void testeof (struct command *);	/* close the specified stream */
void myclose ();		/* close the specified stream */
void create_pps (int, int);	/* create command pushswitch or popswitch */
void push_switch (struct command *);	/* push current stream on stack and switch to new one */
void pop_switch (void);		/* pop current stream from stack and switch to it */
void mymove ();			/* move to specific position on screen */
void clearscreen ();		/* clear entire screen */
char *inkey (double);		/* gets char from keyboard, blocks and doesn�t print */
char *replace (char *);		/* replace \n,\a, etc. */

/* graphic.c */
void create_openwin (int);	/* create Command 'openwin' */
void openwin (struct command *);	/* open a Window */
void create_openprinter (int);	/* create command 'openprinter' */
void openprinter (struct command *);	/* opens a printer for WIN95 */
void closeprinter (void);	/* closes printer for WIN95 */
void putindrawmode (int);	/* store drawmode in previous command */
void dot (struct command *);	/* draw a dot */
void create_line (int);		/* create Command 'line' */
void line (struct command *);	/* draw a line */
void moveorigin ();		/* move origin of window */
int check_alignement (char *);	/* checks, if text-alignement is valid */
void circle (struct command *);	/* draw a circle */
void triangle (struct command *);	/* draw a triangle */
void create_text (int);		/* create Command 'text' */
void text (struct command *);	/* write a text */
void closewin (void);		/* close the window */
void clearwin (void);		/* clear the window */
void rect (struct command *);	/* draw a (filled) rect */
void putbit (void);		/* put rect onto window */
void putchars (void);		/* put rect onto screen */
void create_marker (int);	/* create command 'cMARKER' */
void marker (struct command *);	/* draw a marker */
void getwinkey (char *);	/* read a key from grafics window */
void gettermkey (char *);	/* read a key from terminal */
char *getbit (int, int, int, int);	/* get rect from window */
char *getchars (int, int, int, int);	/* get rect from screen */
void change_colour (struct command *);	/* change colour */
#ifdef WINDOWS
LRESULT CALLBACK mywindowproc (HWND, unsigned, UINT, DWORD);
#else
void calc_psscale (void);	/* calculate scale-factor for postscript */
#endif

/* function.c */
void create_exception (int);	/* create command 'exception' */
void exception (struct command *);	/* change handling of exceptions */
void create_poke (char);	/* create Command 'POKE' */
void poke ();			/* poke in internals */
void pokefile (struct command *);	/* poke into file */
void create_dblrelop (char);	/* create command dblrelop */
void dblrelop (struct command *);	/* compare topmost double-values */
void concat (void);		/* concetenates two strings from stack */
void create_strrelop (char);	/* create command strrelop */
void strrelop (struct command *);	/* compare topmost string-values */
void create_changestring (int);	/* create command 'changestring' */
void changestring (struct command *);	/* changes a string */
void glob (void);		/* check, if pattern globs string */
void create_boole (char);	/* create command boole */
void boole (struct command *);	/* perform and/or/not */
void create_function (int);	/* create command 'function' */
void function (struct command *);	/* performs a function */
int myformat (char *, double, char *, char *);	/* format number */
void create_restore (char *);	/* create command 'restore' */
void restore (struct command *);	/* reset data pointer to given label */
void create_dbldata (double);	/* create command dbldata */
void create_strdata (char *);	/* create command strdata */
void create_readdata (char);	/* create command readdata */
void readdata (struct command *);	/* read data items */
void mywait ();			/* wait given number of seconds */
void mybell ();			/* ring ascii bell */
void getmousexybm (char *, int *, int *, int *, int *);	/* get mouse coordinates */
void token (struct command *);	/* extract token from variable */
void tokenalt (struct command *);	/* extract token from variable with alternate semantics */


/* symbol.c */
struct array *create_array (int, int);	/* create an array */
void clearrefs (struct command *);	/* clear references for commands within function */
void duplicate (void);		/* duplicate topmost element of stack */
void negate (void);		/* negates top of stack */
void create_require (int);	/* create command 'cREQUIRE' */
void require (struct command *);	/* check item on stack has right type */
void create_makelocal (char *, int);	/* create command 'cMAKELOCAL' */
void create_makestatic (char *, int);	/* create command 'cMAKESTATIC' */
void create_arraylink (char *, int);	/* create command 'cARRAYLINK' */
void create_pusharrayref (char *, int);	/* create command 'cPUSHARRAYREF' */
void pusharrayref (struct command *);	/* push an array reference onto stack */
void arraylink (struct command *);	/* link a local symbol to a global array */
void makestatic (struct command *);	/* makes symbol static */
void makelocal (struct command *);	/* makes symbol local */
void create_numparam (void);	/* create command 'cNUMPARAM' */
void numparam (struct command *);	/* count number of function parameters */
void pushdblsym (struct command *);	/* push double symbol onto stack */
void popdblsym (struct command *);	/* pop double from stack */
void create_pushdbl (double);	/* create command 'pushdbl' */
void pushdbl (struct command *);	/* push double onto stack */
void create_dblbin (char);	/* create binary expression calculation */
void dblbin (struct command *);	/* compute with two numbers from stack */
void pushstrsym (struct command *);	/* push string symbol onto stack */
void popstrsym (struct command *);	/* pop string from stack */
void create_pushstr (char *);	/* creates command pushstr */
void pushstr (struct command *);	/* push string onto stack */
void pushname (char *);		/* push a name on stack */
void pushstrptr (struct command *);	/* push string-pointer onto stack */
void forcheck (void);		/* check, if for-loop is done */
void forincrement (void);	/* increment value on stack */
void startfor (void);		/* compute initial value of for-variable */
void create_goto (char *);	/* creates command goto */
void create_gosub (char *);	/* creates command gosub */
void create_call (char *);	/* creates command function call */
void create_label (char *, int);	/* creates command label */
void create_sublink (char *);	/* create link to subroutine */
void pushgoto (void);		/* generate label and push goto on stack */
void popgoto (void);		/* pops a goto and generates the matching command */
void jump (struct command *);	/* jump to specific Label */
void myreturn (struct command *);	/* return from gosub */
void findnop ();		/* used for on_gosub, find trailing nop command */
void skipper (void);		/* used for on_goto/gosub, skip commands */
void skiponce (struct command *);	/* skip next command once */
void resetskiponce (struct command *);	/* find and reset next skip */
void decide (void);		/*  skips next command, if not 0 on stack */
void logical_shortcut (struct command *type);	/* shortcut and/or if possible */
void create_doarray (char *, int);	/* creates array-commands */
void doarray (struct command *);	/* call an array */
void create_dim (char *, char);	/* create command 'dim' */
void dim (struct command *);	/* get room for array */
void pushlabel (void);		/* generate goto and push label on stack */
void poplabel (void);		/* pops a label and generates the matching command */
void storelabel ();		/* push label on stack */
void matchgoto ();		/* generate goto matching label on stack */
void swap (void);		/*swap topmost elements on stack */
struct stackentry *push (void);	/* push element on stack and enlarge it */
struct stackentry *pop (int);	/* pops element to memory */
struct symbol *get_sym (char *, int, int);	/* find and/or add a symbol */
void link_symbols (struct symbol *, struct symbol *);	/* link one symbol to the other */
void pushsymlist (void);	/* push a new list on symbol stack */
void popsymlist (void);		/* pop list of symbols and free symbol contents */
void dump_sym ();		/* dump the stack of lists of symbols */
void dump_sub (int);		/* dump the stack of subroutine calls */
void create_retval (int, int);	/* create command 'cRETVAL' */
void retval (struct command *);	/* check return value of function */
void create_endfunction (void);	/* create command cEND_FUNCTION */
void function_or_array (struct command *);	/* decide whether to do perform function or array */
struct command *search_label (char *, int);	/* search label */
void reshufflestack (struct stackentry *);	/* reorganize stack for function call */
void push_switch_mark (void);	/* push a switch mark */
void create_clean_switch_mark (int, int);	/* add command clean_switch_mark */
void clean_switch_mark (struct command *);	/* pop everything up to (and including) first switch_mark from stack */
void push_switch_id (void);	/* generate a new switch id */
void pop_switch_id (void);	/* get previous switch id */
int get_switch_depth (void);	/* get current depth of switch id stack */
extern void create_break_mark (int, int);	/* create marks for break */
extern void mybreak (struct command *);	/* find break_here statement */
void next_case (void);		/* go to next case in switch statement */
void mycontinue (struct command *cmd);	/* find continue_here statement */

/* flex.c */
void yyerror (char *);		/* yyerror message */
void open_main (FILE *, char *, char *);	/* switch to file */
void open_string (char *);	/* open string with commands */
FILE *open_library (char *, char **, int);	/* search and open a library */
void switchlib (void);		/* switch library, called by bison */

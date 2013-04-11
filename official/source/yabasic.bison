%{
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
#include "yabasic.h"     /* definitions of yabasic */
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

void __yy_bcopy(char *,char *,int); /* prototype missing */

int tileol; /* true, read should go to eon of line */
int yylineno=1; /* line number; counts fresh in every new file */
int main_lineno=1; /* line number of main */
int function_type=ftNONE; /* contains function type while parsing function */
char *current_function=NULL; /* name of currently parsed function */
int exported=FALSE; /* true, if function is exported */
int yylex(void);
extern struct libfile_name *current_libfile; /*  defined in main.c: name of currently parsed file */
int missing_endif=0;
int missing_endif_line=0;
int missing_endsub=0;
int missing_endsub_line=0;
int missing_next=0;
int missing_next_line=0;
int missing_wend=0;
int missing_wend_line=0;
int missing_until=0;
int missing_until_line=0;
int missing_loop=0;
int missing_loop_line=0;
int in_loop=0;

void report_missing(int severity,char *text) {
  if (missing_loop || missing_endif || missing_next || missing_until || missing_wend) {
    error(severity,text);
    string[0]='\0';
    if (missing_endif)
      sprintf(string,"if statement starting at line %d has seen no 'endif' yet",missing_endif_line);
    else if (missing_next)
      sprintf(string,"for-loop starting at line %d has seen no 'next' yet",missing_next_line);
    else if (missing_wend)
      sprintf(string,"while-loop starting at line %d has seen no 'wend' yet",missing_wend_line);
    else if (missing_until)
      sprintf(string,"repeat-loop starting at line %d has seen no 'until' yet",missing_until_line);
    else if (missing_loop)
      sprintf(string,"do-loop starting at line %d has seen no 'loop' yet",missing_wend_line);
    if (string[0]) error(severity,string);
  }
}
     
%}

%union {
  double fnum;          /* double number */
  int inum;             /* integer number */
  int token;            /* token of command */
  int sep;              /* number of newlines */
  char *string;         /* quoted string */
  char *symbol;         /* general symbol */
  char *digits;         /* string of digits */
  char *docu;		/* embedded documentation */
}

%type <fnum> const
%type <fnum> number
%type <symbol> symbol_or_lineno
%type <symbol> function_name
%type <symbol> function_or_array
%type <symbol> stringfunction_or_array
%type <sep> tSEP sep_list

%token <fnum> tFNUM
%token <symbol> tSYMBOL
%token <symbol> tSTRSYM
%token <symbol> tDOCU
%token <digits> tDIGITS
%token <string> tSTRING

%token tFOR tTO tSTEP tNEXT tWHILE tWEND tREPEAT tUNTIL tIMPORT
%token tGOTO tGOSUB tLABEL tON tSUB tENDSUB tLOCAL tSTATIC tEXPORT tERROR 
%token tEXECUTE tEXECUTE2 tCOMPILE tRUNTIME_CREATED_SUB
%token tINTERRUPT tBREAK tCONTINUE tSWITCH tSEND tCASE tDEFAULT tLOOP tDO tSEP tEOPROG
%token tIF tTHEN tELSE tELSIF tENDIF tUSING
%token tPRINT tINPUT tLINE tRETURN tDIM tEND tEXIT tAT tSCREEN 
%token tREVERSE tCOLOUR tBACKCOLOUR
%token tAND tOR tNOT tEOR
%token tNEQ tLEQ tGEQ tLTN tGTN tEQU tPOW
%token tREAD tDATA tRESTORE
%token tOPEN tCLOSE tSEEK tTELL tAS tREADING tWRITING tORIGIN
%token tWINDOW tDOT tLINE tCIRCLE tTRIANGLE tTEXT tCLEAR tFILL tPRINTER
%token tWAIT tBELL tLET tARDIM tARSIZE tBIND
%token tRECT tGETBIT tPUTBIT tGETCHAR tPUTCHAR tNEW tCURVE

%token tSIN tASIN tCOS tACOS tTAN tATAN tEXP tLOG
%token tSQRT tSQR tMYEOF tABS tSIG
%token tINT tFRAC tMOD tRAN tLEN tVAL tLEFT tRIGHT tMID tLEN tMIN tMAX
%token tSTR tINKEY tCHR tASC tHEX tDEC tBIN tUPPER tLOWER tMOUSEX tMOUSEY tMOUSEB tMOUSEMOD
%token tTRIM tLTRIM tRTRIM tINSTR tRINSTR
%token tSYSTEM tSYSTEM2 tPEEK tPEEK2 tPOKE 
%token tDATE tTIME tTOKEN tTOKENALT tSPLIT tSPLITALT tGLOB

%left tOR
%left tAND
%left tNOT
%left tNEQ
%left tGEQ
%left tLEQ
%left tLTN
%left tGTN
%left tEQU
%left '-' '+'
%left '*' '/'
%nonassoc UMINUS
%left tPOW

%%

program: statement_list tEOPROG {YYACCEPT;}
  ;

statement_list: statement
  | statement_list {if (errorlevel<=ERROR) {YYABORT;}} 
    tSEP {if ($3>=0) yylineno+=$3; else switchlib();} statement
  ;

statement:  /* empty */
  | string_assignment 
  | tLET string_assignment 
  | assignment
  | tLET assignment
  | tIMPORT {report_missing(ERROR,"do not import a library in a loop or an if-statement");switchlib();}
  | tERROR string_expression {add_command(cERROR,NULL);}
  | for_loop 
  | switch_number_or_string
  | repeat_loop
  | while_loop
  | do_loop
  | tBREAK {add_command(cBREAK,NULL);if (!in_loop) error(ERROR,"break outside loop");}
  | tCONTINUE {add_command(cCONTINUE,NULL);if (!in_loop) error(ERROR,"continue outside loop");}
  | function_definition
  | function_or_array {create_call($1);add_command(cPOP,NULL);}
  | stringfunction_or_array {create_call($1);add_command(cPOP,NULL);}
  | tLOCAL {if (function_type==ftNONE) error(ERROR,"no use for 'local' outside functions");} local_list
  | tSTATIC {if (function_type==ftNONE) error(ERROR,"no use for 'static' outside functions");} static_list
  | if_clause
  | short_if
  | tGOTO symbol_or_lineno {create_goto((function_type!=ftNONE)?dotify($2,TRUE):$2);}
  | tGOSUB symbol_or_lineno {create_gosub((function_type!=ftNONE)?dotify($2,TRUE):$2);}
  | tON tINTERRUPT tBREAK {create_exception(TRUE);}
  | tON tINTERRUPT tCONTINUE {create_exception(FALSE);}
  | tON expression tGOTO {add_command(cSKIPPER,NULL);}
    goto_list {add_command(cNOP,NULL);}
  | tON expression tGOSUB {add_command(cSKIPPER,NULL);} 
    gosub_list {add_command(cNOP,NULL);}
  | tLABEL symbol_or_lineno {create_label((function_type!=ftNONE)?dotify($2,TRUE):$2,cLABEL);}
  | open_clause {add_command(cCHECKOPEN,NULL);}
  | tCLOSE hashed_number {add_command(cCLOSE,NULL);}
  | seek_clause {add_command(cCHECKSEEK,NULL);}
  | tCOMPILE string_expression {add_command(cCOMPILE,NULL);}
  | tEXECUTE '(' call_list ')' {create_execute(0);add_command(cPOP,NULL);add_command(cPOP,NULL);}
  | tEXECUTE2 '(' call_list ')' {create_execute(1);add_command(cPOP,NULL);add_command(cPOP,NULL);}
  | tPRINT printintro printlist {create_colour(0);create_print('n');create_pps(cPOPSTREAM,0);} 
  | tPRINT printintro printlist ';' {create_colour(0);create_pps(cPOPSTREAM,0);}
  | tPRINT printintro printlist ',' {create_colour(0);create_print('t');create_pps(cPOPSTREAM,0);}
  | tINPUT {tileol=FALSE;} inputbody
  | tLINE tINPUT {tileol=TRUE;} inputbody
  | tCOLOUR expression ',' expression ',' expression {add_command(cGCOLOUR,NULL);}
  | tCOLOUR string_expression {add_command(cGCOLOUR2,NULL);}
  | tBACKCOLOUR expression ',' expression ',' expression {add_command(cGBACKCOLOUR,NULL);}
  | tBACKCOLOUR string_expression {add_command(cGBACKCOLOUR2,NULL);}
  | tREAD readlist
  | tDATA datalist
  | tRESTORE {create_restore("");}
  | tRESTORE symbol_or_lineno {create_restore((function_type!=ftNONE)?dotify($2,TRUE):$2);}
  | tRETURN {if (get_switch_id()) create_clean_switch_mark(0,TRUE);
             if (function_type!=ftNONE) {
	       add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;
	       add_command(cPOPSYMLIST,NULL);
               create_retval(ftNONE,function_type);
               add_command(cRET_FROM_FUN,NULL);
            } else {
               add_command(cRETURN,NULL);
            }}
  | tRETURN expression {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNUMBER,function_type);add_command(cRET_FROM_FUN,NULL);}
  | tRETURN string_expression {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftSTRING,function_type);add_command(cRET_FROM_FUN,NULL);}
  | tDIM dimlist
  | tOPEN tWINDOW expression ',' expression {create_openwin(FALSE);}
  | tOPEN tWINDOW expression ',' expression ',' string_expression 
         {create_openwin(TRUE);}
  | tWINDOW tORIGIN string_expression {add_command(cMOVEORIGIN,NULL);}
  | tDOT coordinates {add_command(cDOT,NULL);}
  | tCLEAR tDOT coordinates {add_command(cDOT,NULL);putindrawmode(dmCLEAR);}
  | tLINE coordinates to coordinates {create_line(2);}
  | tCLEAR tLINE coordinates to coordinates {create_line(2);putindrawmode(dmCLEAR);}
  | tLINE tTO coordinates {create_line(1);}
  | tLINE coordinates {create_line(1);}
  | tCLEAR tLINE tTO coordinates {create_line(1);putindrawmode(dmCLEAR);}
  | tCLEAR tLINE coordinates {create_line(1);putindrawmode(dmCLEAR);}
  | tPUTBIT string_expression to expression ',' expression ',' string_expression {add_command(cPUTBIT,NULL);}
  | tPUTBIT string_expression to expression ',' expression {create_pushstr("solid"); add_command(cPUTBIT,NULL);}
  | tPUTCHAR string_expression to expression ',' expression {add_command(cPUTCHAR,NULL);}
  | tNEW tCURVE {create_line(-1);}
  | tCLOSE tCURVE {create_line(0);}
  | clear_fill_clause tCIRCLE coordinates ',' expression {add_command(cCIRCLE,NULL);putindrawmode(0);}
  | clear_fill_clause tTRIANGLE coordinates to coordinates to coordinates {add_command(cTRIANGLE,NULL);putindrawmode(0);}
  | tTEXT coordinates ',' string_expression {add_command(cTEXT1,NULL);}
  | tTEXT coordinates ',' string_expression ',' string_expression {add_command(cTEXT2,NULL);}
  | tTEXT coordinates ',' string_expression ',' string_expression ',' string_expression {add_command(cTEXT3,NULL);}
  | clear_fill_clause tRECT coordinates to coordinates {add_command(cRECT,NULL);putindrawmode(0);}
  | tCLOSE tWINDOW {add_command(cCLOSEWIN,NULL);}
  | tCLEAR tWINDOW {add_command(cCLEARWIN,NULL);}
  | tCLEAR tSCREEN {add_command(cCLEARSCR,NULL);}
  | tOPEN tPRINTER {create_openprinter(0);}
  | tOPEN tPRINTER string_expression {create_openprinter(1);}
  | tCLOSE tPRINTER {add_command(cCLOSEPRN,NULL);}
  | tWAIT expression {add_command(cWAIT,NULL);}
  | tBELL {add_command(cBELL,NULL);}
  | tINKEY {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}
  | tINKEY '(' ')' {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}
  | tINKEY '(' expression ')' {create_function(fINKEY);add_command(cPOP,NULL);}
  | tSYSTEM2 '(' string_expression ')' {create_function(fSYSTEM2);
	add_command(cPOP,NULL);}
  | tPOKE string_expression ',' string_expression {create_poke('s');}
  | tPOKE string_expression ',' expression {create_poke('d');}
  | tPOKE hashed_number ',' string_expression {create_poke('S');}
  | tPOKE hashed_number ',' expression {create_poke('D');}
  | tEND {add_command(cEND,NULL);}
  | tEXIT {create_pushdbl(0);add_command(cEXIT,NULL);}
  | tEXIT expression {add_command(cEXIT,NULL);}
  | tDOCU {create_docu($1);}
  | tBIND string_expression {add_command(cBIND,NULL);}
  ;


clear_fill_clause: /* empty */ {drawmode=0;}
  | tCLEAR {drawmode=dmCLEAR;}
  | tFILL {drawmode=dmFILL;}
  | tCLEAR tFILL {drawmode=dmFILL+dmCLEAR;}
  | tFILL tCLEAR {drawmode=dmFILL+dmCLEAR;}
  ;


string_assignment: tSTRSYM tEQU string_expression {add_command(cPOPSTRSYM,dotify($1,FALSE));}
  | tMID '(' string_scalar_or_array ',' expression ',' expression ')' tEQU string_expression {create_changestring(fMID);}
  | tMID '(' string_scalar_or_array ',' expression ')' tEQU string_expression {create_changestring(fMID2);}
  | tLEFT '(' string_scalar_or_array ',' expression ')' tEQU string_expression {create_changestring(fLEFT);}
  | tRIGHT '(' string_scalar_or_array ',' expression ')' tEQU string_expression {create_changestring(fRIGHT);}
  | stringfunction_or_array tEQU string_expression {create_doarray(dotify($1,FALSE),ASSIGNSTRINGARRAY);}
  ;

to: ','
  | tTO
  ;

open_clause: tOPEN hashed_number ',' string_expression ',' string_expression {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}
  | tOPEN hashed_number ',' string_expression {create_myopen(OPEN_HAS_STREAM);}
  | tOPEN hashed_number ',' tPRINTER {create_myopen(OPEN_HAS_STREAM+OPEN_PRINTER);}
  | tOPEN string_expression tFOR tREADING tAS hashed_number {add_command(cSWAP,NULL);create_pushstr("r");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}
  | tOPEN string_expression tFOR tWRITING tAS hashed_number {add_command(cSWAP,NULL);create_pushstr("w");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}
  ;

seek_clause: tSEEK hashed_number ',' expression {add_command(cSEEK,NULL);}
  | tSEEK hashed_number ',' expression ',' string_expression {add_command(cSEEK2,NULL);}
  ;

string_scalar_or_array: tSTRSYM {add_command(cPUSHSTRPTR,dotify($1,FALSE));}
  | tSTRSYM '(' call_list ')' {create_doarray(dotify($1,FALSE),GETSTRINGPOINTER);} 
  ;

string_expression: tSTRSYM {add_command(cPUSHSTRSYM,dotify($1,FALSE));}
  | string_function
  | stringfunction_or_array {add_command(cSTRINGFUNCTION_OR_ARRAY,$1);}
  | tSTRING {if ($1==NULL) {error(ERROR,"String not terminated");create_pushstr("");} else {create_pushstr($1);}}
  | string_expression '+' string_expression {add_command(cCONCAT,NULL);}
  | '(' string_expression ')'
  ;

string_function: tLEFT '(' string_expression ',' expression ')' {create_function(fLEFT);}
  | tRIGHT '(' string_expression ',' expression ')' {create_function(fRIGHT);}
  | tMID '(' string_expression ',' expression ',' expression ')' {create_function(fMID);}
  | tMID '(' string_expression ',' expression ')' {create_function(fMID2);}
  | tSTR '(' expression ')' {create_function(fSTR);}
  | tSTR '(' expression ',' string_expression ')' {create_function(fSTR2);} 
  | tSTR '(' expression ',' string_expression ',' string_expression ')' {create_function(fSTR3);} 
  | tINKEY {create_pushdbl(-1);create_function(fINKEY);}
  | tINKEY '(' ')' {create_pushdbl(-1);create_function(fINKEY);}
  | tINKEY '(' expression ')' {create_function(fINKEY);}
  | tCHR '(' expression ')' {create_function(fCHR);}
  | tUPPER '(' string_expression ')' {create_function(fUPPER);}
  | tLOWER '(' string_expression ')' {create_function(fLOWER);}
  | tLTRIM '(' string_expression ')' {create_function(fLTRIM);}
  | tRTRIM '(' string_expression ')' {create_function(fRTRIM);}
  | tTRIM '(' string_expression ')' {create_function(fTRIM);}
  | tSYSTEM '(' string_expression ')' {create_function(fSYSTEM);}
  | tDATE {create_function(fDATE);}
  | tDATE '(' ')' {create_function(fDATE);}
  | tTIME {create_function(fTIME);}
  | tTIME '(' ')' {create_function(fTIME);}
  | tPEEK2 '(' string_expression ')' {create_function(fPEEK2);}
  | tPEEK2 '(' string_expression ',' string_expression ')' {create_function(fPEEK3);}
  | tTOKENALT '(' string_scalar_or_array ',' string_expression ')' {add_command(cTOKENALT2,NULL);}
  | tTOKENALT '(' string_scalar_or_array ')' {add_command(cTOKENALT,NULL);}
  | tSPLITALT '(' string_scalar_or_array ',' string_expression ')' {add_command(cSPLITALT2,NULL);}
  | tSPLITALT '(' string_scalar_or_array ')' {add_command(cSPLITALT,NULL);}
  | tGETBIT '(' coordinates to coordinates ')' {create_function(fGETBIT);}
  | tGETCHAR '(' expression ',' expression to expression ',' expression ')' {create_function(fGETCHAR);}
  | tHEX '(' expression ')' {create_function(fHEX);}
  | tBIN '(' expression ')' {create_function(fBIN);}
  | tEXECUTE2 '(' call_list ')' {create_execute(1);add_command(cSWAP,NULL);add_command(cPOP,NULL);}
  ;

assignment: tSYMBOL tEQU expression {add_command(cPOPDBLSYM,dotify($1,FALSE));} 
  | function_or_array tEQU expression {create_doarray($1,ASSIGNARRAY);}
  ;

expression: expression tOR {add_command(cORSHORT,NULL);pushlabel();} expression {poplabel();create_boole('|');}
  | expression tAND {add_command(cANDSHORT,NULL);pushlabel();} expression {poplabel();create_boole('&');}
  | tNOT expression {create_boole('!');}
  | expression tEQU expression {create_dblrelop('=');}
  | expression tNEQ expression {create_dblrelop('!');}
  | expression tLTN expression {create_dblrelop('<');}
  | expression tLEQ expression {create_dblrelop('{');}
  | expression tGTN expression {create_dblrelop('>');}
  | expression tGEQ expression {create_dblrelop('}');}
  | tMYEOF '(' hashed_number ')' {add_command(cTESTEOF,NULL);}
  | tGLOB '(' string_expression ',' string_expression ')' {add_command(cGLOB,NULL);}
  | number {create_pushdbl($1);}
  | tARDIM '(' arrayref ')' {add_command(cARDIM,"");}
  | tARDIM '(' string_arrayref ')' {add_command(cARDIM,"");}
  | tARSIZE '(' arrayref ',' expression ')' {add_command(cARSIZE,"");}
  | tARSIZE '(' string_arrayref ',' expression ')' {add_command(cARSIZE,"");}
  | function_or_array {add_command(cFUNCTION_OR_ARRAY,$1);}
  | tSYMBOL {add_command(cPUSHDBLSYM,dotify($1,FALSE));}
  | expression '+' expression {create_dblbin('+');}
  | expression '-' expression {create_dblbin('-');}
  | expression '*' expression {create_dblbin('*');}
  | expression '/' expression {create_dblbin('/');}
  | expression tPOW expression {create_dblbin('^');}
  | '-' expression %prec UMINUS {add_command(cNEGATE,NULL);}
  | string_expression tEQU string_expression {create_strrelop('=');}
  | string_expression tNEQ string_expression {create_strrelop('!');}
  | string_expression tLTN string_expression {create_strrelop('<');}
  | string_expression tLEQ string_expression {create_strrelop('{');}
  | string_expression tGTN string_expression {create_strrelop('>');}
  | string_expression tGEQ string_expression {create_strrelop('}');}
  | function
  | '(' expression ')'
  ;

arrayref: tSYMBOL '(' ')' {create_pusharrayref(dotify($1,FALSE),stNUMBERARRAYREF);}
  ;

string_arrayref: tSTRSYM '(' ')' {create_pusharrayref(dotify($1,FALSE),stSTRINGARRAYREF);}
  ;

coordinates: expression ',' expression
  ;

function: tSIN '(' expression ')' {create_function(fSIN);}
  | tASIN '(' expression ')' {create_function(fASIN);}
  | tCOS '(' expression ')' {create_function(fCOS);}
  | tACOS '(' expression ')' {create_function(fACOS);}
  | tTAN '(' expression ')' {create_function(fTAN);}
  | tATAN '(' expression ')' {create_function(fATAN);}
  | tATAN '(' expression ',' expression  ')' {create_function(fATAN2);}
  | tEXP '(' expression ')' {create_function(fEXP);}
  | tLOG '(' expression ')' {create_function(fLOG);}
  | tLOG '(' expression ',' expression ')' {create_function(fLOG2);}
  | tSQRT '(' expression ')' {create_function(fSQRT);}
  | tSQR '(' expression ')' {create_function(fSQR);}
  | tINT '(' expression ')' {create_function(fINT);}
  | tFRAC '(' expression ')' {create_function(fFRAC);}
  | tABS '(' expression ')' {create_function(fABS);}
  | tSIG '(' expression ')' {create_function(fSIG);}
  | tMOD '(' expression ',' expression ')' {create_function(fMOD);}
  | tRAN '(' expression ')' {create_function(fRAN);}
  | tRAN '(' ')' {create_function(fRAN2);}
  | tMIN '(' expression ',' expression ')' {create_function(fMIN);}
  | tMAX '(' expression ',' expression ')' {create_function(fMAX);}
  | tLEN '(' string_expression ')' {create_function(fLEN);}
  | tVAL '(' string_expression ')' {create_function(fVAL);}
  | tASC '(' string_expression ')' {create_function(fASC);}
  | tDEC '(' string_expression ')' {create_function(fDEC);}
  | tDEC '(' string_expression ',' expression ')' {create_function(fDEC2);}
  | tINSTR '(' string_expression ',' string_expression ')' {if (check_compat) error(WARNING,"instr() has changed in version 2.712"); create_function(fINSTR);}
  | tINSTR '(' string_expression ',' string_expression ',' expression ')' {create_function(fINSTR2);}
  | tRINSTR '(' string_expression ',' string_expression ')' {create_function(fRINSTR);}
  | tRINSTR '(' string_expression ',' string_expression  ',' expression ')' {create_function(fRINSTR2);}
  | tSYSTEM2 '(' string_expression ')' {create_function(fSYSTEM2);}
  | tPEEK '(' hashed_number ')' {create_function(fPEEK4);}
  | tPEEK '(' string_expression ')' {create_function(fPEEK);}
  | tMOUSEX '(' string_expression ')' {create_function(fMOUSEX);}
  | tMOUSEX {create_pushstr("");create_function(fMOUSEX);}
  | tMOUSEX '(' ')' {create_pushstr("");create_function(fMOUSEX);}
  | tMOUSEY '(' string_expression ')' {create_function(fMOUSEY);}
  | tMOUSEY {create_pushstr("");create_function(fMOUSEY);}
  | tMOUSEY '(' ')' {create_pushstr("");create_function(fMOUSEY);}
  | tMOUSEB '(' string_expression ')' {create_function(fMOUSEB);}
  | tMOUSEB {create_pushstr("");create_function(fMOUSEB);}
  | tMOUSEB '(' ')' {create_pushstr("");create_function(fMOUSEB);}
  | tMOUSEMOD '(' string_expression ')' {create_function(fMOUSEMOD);}
  | tMOUSEMOD {create_pushstr("");create_function(fMOUSEMOD);}
  | tMOUSEMOD '(' ')' {create_pushstr("");create_function(fMOUSEMOD);}
  | tAND '(' expression ',' expression ')' {create_function(fAND);}
  | tOR '(' expression ',' expression ')' {create_function(fOR);}
  | tEOR '(' expression ',' expression ')' {create_function(fEOR);}
  | tTELL '(' hashed_number ')' {create_function(fTELL);}
  | tTOKEN '(' string_expression ',' string_arrayref ',' string_expression ')' {add_command(cTOKEN2,NULL);}
  | tTOKEN '(' string_expression ',' string_arrayref ')' {add_command(cTOKEN,NULL);}
  | tSPLIT '(' string_expression ',' string_arrayref ',' string_expression ')' {add_command(cSPLIT2,NULL);}
  | tSPLIT '(' string_expression ',' string_arrayref ')' {add_command(cSPLIT,NULL);}
  | tEXECUTE '(' call_list ')' {create_execute(0);add_command(cSWAP,NULL);add_command(cPOP,NULL);}
  | tOPEN '(' tPRINTER ')' {create_myopen(OPEN_PRINTER);}
  | tOPEN '(' string_expression ')' {create_myopen(0);}
  | tOPEN '(' string_expression ',' string_expression ')' {create_myopen(OPEN_HAS_MODE);}
  | tOPEN '(' hashed_number ',' tPRINTER ')' {create_myopen(OPEN_PRINTER+OPEN_HAS_STREAM);}
  | tOPEN '(' hashed_number ',' string_expression ')' {create_myopen(OPEN_HAS_STREAM);}
  | tOPEN '(' hashed_number ',' string_expression ',' string_expression ')' {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}
  ;

const: number {$$=$1;}
  | '+' number {$$=$2;}
  | '-' number {$$=-$2;}
  ;

number: tFNUM {$$=$1;}
  | tDIGITS {$$=strtod($1,NULL);}
  ;

symbol_or_lineno: tDIGITS {$$=my_strdup(dotify($1,FALSE));}
  | tSYMBOL {$$=my_strdup(dotify($1,FALSE));}
  ;

dimlist: tSYMBOL '(' call_list ')' {create_dim(dotify($1,FALSE),'D');}
  | dimlist ',' tSYMBOL '(' call_list ')' {create_dim(dotify($3,FALSE),'D');}
  | tSTRSYM '(' call_list ')' {create_dim(dotify($1,FALSE),'S');}
  | dimlist ',' tSTRSYM '(' call_list ')' {create_dim(dotify($3,FALSE),'S');}
  ;

function_or_array: tSYMBOL '(' call_list ')' {$$=my_strdup(dotify($1,FALSE));}
  ;

stringfunction_or_array: tSTRSYM '(' call_list ')' {$$=my_strdup(dotify($1,FALSE));}
  ;

call_list: {add_command(cPUSHFREE,NULL);} calls
  ;

calls: /* empty */
  | call_item
  | calls ',' call_item
  ;

call_item: string_expression
  | expression
  ;
 
function_definition: export tSUB {missing_endsub++;missing_endsub_line=yylineno;pushlabel();report_missing(WARNING,"do not define a function in a loop or an if-statement");if (function_type!=ftNONE) {error(ERROR,"nested functions not allowed");YYABORT;}}
	function_name {if (exported) create_sublink($4); create_label($4,cUSER_FUNCTION);
	               add_command(cPUSHSYMLIST,NULL);add_command(cCLEARREFS,NULL);firstref=lastref=lastcmd;
		       create_numparam();}
	'(' paramlist ')' {create_require(stFREE);add_command(cPOP,NULL);}
	statement_list
	endsub {add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNONE,function_type);function_type=ftNONE;add_command(cRET_FROM_FUN,NULL);lastref=NULL;create_endfunction();poplabel();}
  ;

endsub: tEOPROG {if (missing_endsub) {sprintf(string,"%d end-sub(s) are missing (last at line %d)",missing_endsub,missing_endsub_line);error(ERROR,string);} YYABORT;}
  | tENDSUB {missing_endsub--;}
  ;

function_name: tSYMBOL {function_type=ftNUMBER;current_function=my_strdup(dotify($1,FALSE));$$=my_strdup(dotify($1,FALSE));}
  | tSTRSYM {function_type=ftSTRING;current_function=my_strdup(dotify($1,FALSE));$$=my_strdup(dotify($1,FALSE));}
  ;

export: /* empty */ {exported=FALSE;}
  | tEXPORT {exported=TRUE;}
  | tRUNTIME_CREATED_SUB {exported=FALSE;}
  | tRUNTIME_CREATED_SUB tEXPORT {exported=TRUE;}
  ;

local_list: local_item
  | local_list ',' local_item
  ;

local_item: tSYMBOL {create_makelocal(dotify($1,FALSE),syNUMBER);}
  | tSTRSYM {create_makelocal(dotify($1,FALSE),sySTRING);}
  | tSYMBOL '(' call_list ')' {create_makelocal(dotify($1,FALSE),syARRAY);create_dim(dotify($1,FALSE),'d');}
  | tSTRSYM '(' call_list ')' {create_makelocal(dotify($1,FALSE),syARRAY);create_dim(dotify($1,FALSE),'s');}
  ;
  
static_list: static_item
  | static_list ',' static_item
  ;

static_item: tSYMBOL {create_makestatic(dotify($1,TRUE),syNUMBER);}
  | tSTRSYM {create_makestatic(dotify($1,TRUE),sySTRING);}
  | tSYMBOL '(' call_list ')' {create_makestatic(dotify($1,TRUE),syARRAY);create_dim(dotify($1,TRUE),'D');}
  | tSTRSYM '(' call_list ')' {create_makestatic(dotify($1,TRUE),syARRAY);create_dim(dotify($1,TRUE),'S');}
  ;
  
paramlist: /* empty */
  | paramitem
  | paramlist ',' paramitem
  ;
  
paramitem: tSYMBOL {create_require(stNUMBER);create_makelocal(dotify($1,FALSE),syNUMBER);add_command(cPOPDBLSYM,dotify($1,FALSE));}
  | tSTRSYM {create_require(stSTRING);create_makelocal(dotify($1,FALSE),sySTRING);add_command(cPOPSTRSYM,dotify($1,FALSE));}
  | tSYMBOL '(' ')' {create_require(stNUMBERARRAYREF);create_arraylink(dotify($1,FALSE),stNUMBERARRAYREF);}
  | tSTRSYM '(' ')' {create_require(stSTRINGARRAYREF);create_arraylink(dotify($1,FALSE),stSTRINGARRAYREF);}
  ;

for_loop: tFOR {missing_next++;missing_next_line=yylineno;} tSYMBOL tEQU 
            {pushname(dotify($3,FALSE)); /* will be used by next_symbol to check equality */
	     add_command(cRESETSKIPONCE,NULL);
	     pushgoto();add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);}
	  expression tTO expression 
	  step_part { /* pushes another expression */
	     add_command(cSKIPONCE,NULL);
	     pushlabel();
	     add_command(cSTARTFOR,NULL);
	     add_command(cPOPDBLSYM,dotify($3,FALSE));
	     poplabel();
	     add_command(cPUSHDBLSYM,dotify($3,FALSE));
	     add_command(cFORINCREMENT,NULL);
	     add_command(cPOPDBLSYM,dotify($3,FALSE));
	     add_command(cPUSHDBLSYM,dotify($3,FALSE));
	     add_command(cFORCHECK,NULL);
	     add_command(cDECIDE,NULL);
             pushlabel();}
          statement_list {
             swap();popgoto();poplabel();}
          next next_symbol {create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}
  ;

next: tEOPROG {if (missing_next) {sprintf(string,"%d next(s) are missing (last at line %d)",missing_next,missing_next_line);error(ERROR,string);} YYABORT;}
  | tNEXT {missing_next--;}
  ;

step_part: {create_pushdbl(1);} /* can be omitted */
  | tSTEP expression
  ;

next_symbol:  {pop(stSTRING);}/* can be omitted */
  | tSYMBOL {if (strcmp(pop(stSTRING)->pointer,dotify($1,FALSE))) 
             {error(ERROR,"'for' and 'next' do not match"); YYABORT;}
           }
  ;

switch_number_or_string: tSWITCH {push_switch_id();add_command(cPUSH_SWITCH_MARK,NULL);create_break_mark(0,1);
	add_command(cCONTINUE_CORRECTION,NULL);} 
                number_or_string sep_list case_list default tSEND {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);create_clean_switch_mark(0,FALSE);pop_switch_id();}
  ;

sep_list: tSEP {if ($1>=0) yylineno+=$1;} 
  | sep_list tSEP {if ($2>=0) yylineno+=$2;} 
  ;

number_or_string: expression
  | string_expression
  ;


case_list: /* empty */
  | case_list tCASE {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);} number_or_string
      {add_command(cSWITCH_COMPARE,NULL);add_command(cDECIDE,NULL);add_command(cMINOR_BREAK,NULL);create_break_mark(1,0);} statement_list {add_command(cNEXT_CASE,NULL);}
  ;


default: /* empty */
  | tDEFAULT tSEP {if ($2>=0) yylineno+=$2; create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);} statement_list
  ;


do_loop: tDO {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_loop++;missing_loop_line=yylineno;pushgoto();}
	      statement_list
            loop
  ;


loop: tEOPROG {if (missing_loop) {sprintf(string,"%d loop(s) are missing (last at line %d)",missing_loop,missing_loop_line);error(ERROR,string);} YYABORT;}
  | tLOOP {missing_loop--;popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}
  ;


while_loop: tWHILE {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_wend++;missing_wend_line=yylineno;pushgoto()} '(' expression ')'
	      {add_command(cDECIDE,NULL);
	      pushlabel();}
	      statement_list
            wend
  ;	    

wend: tEOPROG {if (missing_wend) {sprintf(string,"%d wend(s) are missing (last at line %d)",missing_wend,missing_wend_line);error(ERROR,string);} YYABORT;}
  | tWEND {missing_wend--;swap();popgoto();poplabel();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}
  ;


repeat_loop: tREPEAT {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_until++;missing_until_line=yylineno;pushgoto();} 
	       statement_list
	     until
  ;

until: tEOPROG {if (missing_until) {sprintf(string,"%d until(s) are missing (last at line %d)",missing_until,missing_until_line);error(ERROR,string);} YYABORT;}
  | tUNTIL '(' expression ')'
	       {missing_until--;add_command(cDECIDE,NULL);popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}
  ;

if_clause: tIF expression {add_command(cDECIDE,NULL);storelabel();pushlabel();}
           tTHEN {missing_endif++;missing_endif_line=yylineno;} statement_list {swap();matchgoto();swap();poplabel();}
	   elsif_part
           else_part {poplabel();}
           endif
  ;

endif: tEOPROG {if (missing_endif) {sprintf(string,"%d endif(s) are missing (last at line %d)",missing_endif,missing_endif_line);error(ERROR,string);} YYABORT;}
  | tENDIF {missing_endif--;}
  ;

short_if:  tIF expression {fi_pending++;add_command(cDECIDE,NULL);pushlabel();}
	statement_list tENDIF {poplabel();}
  ;

else_part: /* can be omitted */
  | tELSE statement_list
  ;

elsif_part: /* can be omitted */
  | tELSIF expression maybe_then
    	{add_command(cDECIDE,NULL);pushlabel();} 
    statement_list 
	{swap();matchgoto();swap();poplabel();} 
    elsif_part
  ;

maybe_then: /* can be omitted */
  | tTHEN
  ;

inputlist: input
  | input ',' {add_command(cCHKPROMPT,NULL);} inputlist
  ;

input: tSYMBOL {create_myread('d',tileol);add_command(cPOPDBLSYM,dotify($1,FALSE));}
  | tSYMBOL '(' call_list ')' 
    	{create_myread('d',tileol);create_doarray(dotify($1,FALSE),ASSIGNARRAY);}
  | tSTRSYM {create_myread('s',tileol);add_command(cPOPSTRSYM,dotify($1,FALSE));}
  | tSTRSYM '(' call_list ')' 
    	{create_myread('s',tileol);create_doarray(dotify($1,FALSE),ASSIGNSTRINGARRAY);}
  ;

readlist: readitem
  | readlist ',' readitem
  ;

readitem: tSYMBOL {create_readdata('d');add_command(cPOPDBLSYM,dotify($1,FALSE));}
  | tSYMBOL '(' call_list ')' 
    {create_readdata('d');create_doarray(dotify($1,FALSE),ASSIGNARRAY);}
  | tSTRSYM {create_readdata('s');add_command(cPOPSTRSYM,dotify($1,FALSE));}
  | tSTRSYM '(' call_list ')' 
    {create_readdata('s');create_doarray(dotify($1,FALSE),ASSIGNSTRINGARRAY);}
  ;

datalist: tSTRING {create_strdata($1);}
  | const {create_dbldata($1);}
  | datalist ','  tSTRING {create_strdata($3);}
  | datalist ',' const {create_dbldata($3);}
  ;

printlist:  /* possible empty */
  | expression using
  | printlist ',' expression using
  | string_expression {create_print('s');} 
  | printlist ',' string_expression {create_print('s');}
  ;

using: {create_print('d');} /* possible empty */
  | tUSING string_expression {create_print('u');}
  | tUSING '(' string_expression ',' string_expression ')' {create_print('U');}
  ;

inputbody: '#' tSYMBOL {add_command(cPUSHDBLSYM,dotify($2,FALSE));create_pps(cPUSHSTREAM,1);} inputlist {create_pps(cPOPSTREAM,0);}
  | '#' tDIGITS {create_pushdbl(atoi($2));create_pps(cPUSHSTREAM,1);} inputlist {create_pps(cPOPSTREAM,0);}
  | '#' '(' expression ')' {create_pps(cPUSHSTREAM,1);} inputlist {create_pps(cPOPSTREAM,0);}
  | tAT '(' expression ',' expression ')' {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);} prompt inputlist {create_pps(cPOPSTREAM,0);}
  | {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);} prompt inputlist {create_pps(cPOPSTREAM,0);}
  ;

prompt: /* empty */ {create_pushstr("?");create_print('s');} 
  | tSTRING {create_pushstr($1);create_print('s');}
  ;

printintro: /* may be empty */ {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | '#' tSYMBOL {add_command(cPUSHDBLSYM,dotify($2,FALSE));create_pps(cPUSHSTREAM,0);}
  | '#' tDIGITS {create_pushdbl(atoi($2));create_pps(cPUSHSTREAM,0);}
  | '#' '(' expression ')' {create_pps(cPUSHSTREAM,0);}
  | tREVERSE {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tCOLOUR '(' string_expression ')' {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tCOLOUR '(' string_expression ',' string_expression ')' {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tAT '(' expression ',' expression ')' {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tREVERSE tAT '(' expression ',' expression ')' {add_command(cMOVE,NULL);create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tCOLOUR '(' string_expression ')' tAT '(' expression ',' expression ')' {add_command(cMOVE,NULL);create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tCOLOUR '(' string_expression ',' string_expression ')' tAT '(' expression ',' expression ')' {add_command(cMOVE,NULL);create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}
  | tAT '(' expression ',' expression ')' tREVERSE {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}
  | tAT '(' expression ',' expression ')' tCOLOUR '(' string_expression ')' {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}
  | tAT '(' expression ',' expression ')' tCOLOUR '(' string_expression ',' string_expression ')' {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}
  ;  

hashed_number: '#' expression
  | expression;

goto_list: symbol_or_lineno {create_goto((function_type!=ftNONE)?dotify($1,TRUE):$1);add_command(cFINDNOP,NULL);}
  | goto_list ',' symbol_or_lineno {create_goto((function_type!=ftNONE)?dotify($3,TRUE):$3);add_command(cFINDNOP,NULL);}
  ;

gosub_list: symbol_or_lineno {create_gosub((function_type!=ftNONE)?dotify($1,TRUE):$1);add_command(cFINDNOP,NULL);}
  | gosub_list ',' symbol_or_lineno {create_gosub((function_type!=ftNONE)?dotify($3,TRUE):$3);add_command(cFINDNOP,NULL);}
  ;


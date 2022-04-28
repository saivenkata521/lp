%{
  #include<stdio.h>
  #include<stdlib.h>
  #include "lex.yy.c"
  
  void yyerror(char* s)
{  
  extern int yylineno;
  printf("At line  %d %s \n",yylineno/2+1,s);
}

int i=0;

char vname[20][10]={"int","float","double","long","bool","if","else","include","while","for",
                       "do","return","struct","main","char","string","cin","cout","void","endl"};

void verify(char* s)
{
  
  for( i=0;i<20;i++)
  {
    
    if(strcmp(vname[i],s)==0)
    {
      extern int yylineno;
      printf("At line %d Standard Variable Declaration\n",yylineno/2+1);
      exit(0);
     }
  }
}

%}

%union {
char* c;
int i;
float f;
}

%token <c> ID
%token HEADER1 HEADER2 DEFINE NAME MAIN
%token FLOAT CHAR LONG INT STRING DIG FRAC CH
%token COMP INC OP FOR WHILE CONDOP IF
%token ELSE ELSEIF COUT CIN ENDL LS RS
%token RETURN STRUCT STR SID


%%

START : s {printf("\nvalid code\n");}
      ;
s : HEADER1 P
  | HEADER2 P
  | DEFINE P
  ;
  
P : s
  | Q
  ;
  
Q : NAME STRUCTURES MAIN  E
  ;
  
STRUCTURES :STRUCT ID '{'  D '}'A ';'
           |
           ;

A  : ID B 
   |
   ;


s2   : STRUCT ID'{' D '}' ID ';'
     ;

D    : INT  ID{verify($2);} B  ';' D
     | FLOAT ID{verify($2);} B  ';' D
     | STRING ID{verify($2);} B  ';' D
     | CHAR ID{verify($2);} B  ';' D
     | s2  D
     |
     ;

B    : ',' ID B
     |
     ;

E : '{' U RETURN DIG ';''}'
  ;
  
U : DECLARATION  U
  | SDECLARTION U
  | INCREMENT ';' U
  | FLOOP U
  | WHLOOP U
  | IFCOND U
  | ELIFCOND U
  | OUTPUT U
  | INPUT U
  |
  ; 
SDECLARTION : STRUCT ID ID EXTRA ';'
            ;

EXTRA       : ',' ID EXTRA
            |
            ;


DECLARATION : FLOAT DEF M ';'
            | CHAR DEF M ';'
            | INT DEF M ';'
            | STRING DEF M ';'
            ;

M : ',' DEF M
  | 
  ;
DEF : ID{verify($1);}  T

T   : '=' DIG | '=' STR | '=' FRAC |'=' CH
    |
    ;

FLOOP : FOR '(' INTIALISATION ';' CONDITION ';' INCREMENT ')''{' U '}'
      ;

INTIALISATION : FLOAT ID '=' FRAC
              | INT ID '=' DIG
              | ID '=' EXPRESSION
              | SID '=' EXPRESSION
              ;


EXPRESSION : EXPRESSION OP EXPRESSION
           | '(' EXPRESSION OP EXPRESSION ')'
           | ID
           | SID
           | DIG
           | FRAC
           ;
CONDITION : ID COMP EXPRESSION 
          | SID COMP EXPRESSION
          ;


INCREMENT : ID INC
          | SID INC
          | ID '=' EXPRESSION
          | SID '=' EXPRESSION
          ;


WHLOOP  : WHILE '(' CONDITION ')''{' U '}'
        ;


IFCOND : IF '(' OPERATION ')' '{' U '}'

OPERATION : OPERATION CONDOP OPERATION
          | '('OPERATION CONDOP OPERATION')'
          | CONDITION
          ;



ELIFCOND : IFCOND ELIFPART ELSE '{' U '}'
         ;

ELIFPART : ELSEIF '(' OPERATION ')' '{' U '}' ELIFPART
         | 
         ;

OUTPUT   : COUT E2 ';'
         ;
E1       : ID
         | DIG
         | STR
         | FRAC
         | CH
         | SID
         ;
E2       : LS E1 E2
         | LS E1 E3
         |
         ;
E3       : LS ENDL
         ;
INPUT    : CIN RS ID I1 ';'
         | CIN RS SID I1 ';'
         ;
I1       : RS ID I1
         | RS SID I1
         |
         ;
%%

int main()
{
  
  yyparse();
  return 0;
}






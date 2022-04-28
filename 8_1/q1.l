%{

   #include<stdio.h>
   #include "y.tab.h"
   //int yylineno=1;
  
%}

%option yylineno

%%



#include[ ]*<.+[\.h]?>       {return HEADER1;}
#include[ ]*\".+\"           {return HEADER2;}
using[ ]+namespace[ ]+std;   {return NAME;}
struct                 		   {return STRUCT;}
#define[ ]+.+[ ]+.+          {return DEFINE;}
int[ ]+main\([ ]*\)          {return MAIN;}
int                          {return INT;}
float                        {return FLOAT;}
char                         {return CHAR;}
string                       {return STRING;}
for                          {return FOR;}
while                        {return WHILE;}
if                           {return IF;}
elseif                       {return ELSEIF;}
else                         {return ELSE;}
cin                          {return CIN;}
cout                         {return COUT;}
endl                         {return ENDL;}
return                       {return RETURN;}
[A-Za-z][A-Za-z0-9]*            {yylval.c=yytext;return ID;}
[A-Za-z][A-Za-z0-9\.]*          {return SID;}
0|[-]?[1-9][0-9]*               {return DIG;}
0|[-]?[1-9][0-9]*[\.[0-9]*]?    {return FRAC;}
\".+\"                          {return STR;}
\'[. ]\'                        {return CH;}
"++"|"--"                       {return INC;}
"<<"                            {return LS;}
">>"                            {return RS;}
&&|\|\|                         {return CONDOP;}
\+|\-|\*|\/|\%                  {return OP;}
==|!=|<=|>=|<|>                 {return COMP;}
[\t ]         			            {;}
[\n]                            {yylineno++;}
.            			{return yytext[0];}


%%

int yywrap()
{
  return 1;
}



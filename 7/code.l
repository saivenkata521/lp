%{
	#include<stdio.h>
	#include "y.tab.h"

%}


DIGIT [0-9]
ALPHA [a-zA-Z]


%%

[ \t\n]				{;}
"struct"            {return STRUCT;}
"int"                {return INT;}
"float"              {return FLOAT;}
"char"               {return CHAR;}
"double"             {return DOUBLE;}
{DIGIT}+			{return NUM;}
{ALPHA}({ALPHA}|{DIGIT})*	{return ID;}
.				     {return yytext[0];}

%%


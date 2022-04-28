%{
	#include<stdio.h>
	void yyerror(char*);
	
%}



%token  ID NUM STRUCT INT FLOAT CHAR DOUBLE
%start S
%right '='


%%

S : E {printf("Given structure syntax is correct \n"); } 
E : STRUCT ID '{' BODY '}' ';' 


BODY : E
       | INT ID ';' BODY 
	   | FLOAT ID ';' BODY
	   | DOUBLE  ID ';' BODY
	   | CHAR ID ';' BODY
       | ID ';' BODY 
	   | 


%%

void yyerror(char *s)
{
	printf(stderr, "Invalid Syntax!\n");
}

int main()
{
	extern FILE *yyin;
	yyin = fopen("input.txt","r");
	yyparse();
	return 0;
} 



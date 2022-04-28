/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    HEADER1 = 259,
    HEADER2 = 260,
    DEFINE = 261,
    NAME = 262,
    MAIN = 263,
    FLOAT = 264,
    CHAR = 265,
    LONG = 266,
    INT = 267,
    STRING = 268,
    DIG = 269,
    FRAC = 270,
    CH = 271,
    COMP = 272,
    INC = 273,
    OP = 274,
    FOR = 275,
    WHILE = 276,
    CONDOP = 277,
    IF = 278,
    ELSE = 279,
    ELSEIF = 280,
    COUT = 281,
    CIN = 282,
    ENDL = 283,
    LS = 284,
    RS = 285,
    RETURN = 286,
    STRUCT = 287,
    STR = 288,
    SID = 289
  };
#endif
/* Tokens.  */
#define ID 258
#define HEADER1 259
#define HEADER2 260
#define DEFINE 261
#define NAME 262
#define MAIN 263
#define FLOAT 264
#define CHAR 265
#define LONG 266
#define INT 267
#define STRING 268
#define DIG 269
#define FRAC 270
#define CH 271
#define COMP 272
#define INC 273
#define OP 274
#define FOR 275
#define WHILE 276
#define CONDOP 277
#define IF 278
#define ELSE 279
#define ELSEIF 280
#define COUT 281
#define CIN 282
#define ENDL 283
#define LS 284
#define RS 285
#define RETURN 286
#define STRUCT 287
#define STR 288
#define SID 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "q1.y"

char* c;
int i;
float f;

#line 131 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

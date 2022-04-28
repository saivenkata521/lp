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
    HEADER = 258,
    DEFINE = 259,
    INT = 260,
    VOID = 261,
    ID = 262,
    RETURN = 263,
    IF = 264,
    ELSE = 265,
    DIGIT = 266,
    FOR = 267,
    WHILE = 268,
    OPERATOR = 269,
    UNOP = 270,
    STD = 271,
    COUT = 272,
    CIN = 273,
    OUT = 274,
    IN = 275,
    SENTINEL = 276,
    STRUCT = 277,
    DOUBLE = 278,
    FLOAT = 279,
    CHAR = 280
  };
#endif
/* Tokens.  */
#define HEADER 258
#define DEFINE 259
#define INT 260
#define VOID 261
#define ID 262
#define RETURN 263
#define IF 264
#define ELSE 265
#define DIGIT 266
#define FOR 267
#define WHILE 268
#define OPERATOR 269
#define UNOP 270
#define STD 271
#define COUT 272
#define CIN 273
#define OUT 274
#define IN 275
#define SENTINEL 276
#define STRUCT 277
#define DOUBLE 278
#define FLOAT 279
#define CHAR 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

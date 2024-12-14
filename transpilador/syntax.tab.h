/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PHP_OPEN = 258,                /* PHP_OPEN  */
    PHP_CLOSE = 259,               /* PHP_CLOSE  */
    VARIAVEIS = 260,               /* VARIAVEIS  */
    PONTOVIRGULA = 261,            /* PONTOVIRGULA  */
    RECEBE = 262,                  /* RECEBE  */
    MAIORQUE = 263,                /* MAIORQUE  */
    MENORQUE = 264,                /* MENORQUE  */
    IGUAL = 265,                   /* IGUAL  */
    DIFERENTE = 266,               /* DIFERENTE  */
    SENAOSE = 267,                 /* SENAOSE  */
    MAIORIGUAL = 268,              /* MAIORIGUAL  */
    MENORIGUAL = 269,              /* MENORIGUAL  */
    PRINT = 270,                   /* PRINT  */
    FOR = 271,                     /* FOR  */
    MAISMAIS = 272,                /* MAISMAIS  */
    MENOSMENOS = 273,              /* MENOSMENOS  */
    SE = 274,                      /* SE  */
    SENAO = 275,                   /* SENAO  */
    ABREP = 276,                   /* ABREP  */
    FECHAP = 277,                  /* FECHAP  */
    ABREC = 278,                   /* ABREC  */
    FECHAC = 279,                  /* FECHAC  */
    E = 280,                       /* E  */
    OU = 281,                      /* OU  */
    ENQUANTO = 282,                /* ENQUANTO  */
    FUNC = 283,                    /* FUNC  */
    RETURN = 284,                  /* RETURN  */
    VIRGULA = 285,                 /* VIRGULA  */
    BREAK = 286,                   /* BREAK  */
    NUM = 287,                     /* NUM  */
    STR = 288,                     /* STR  */
    PALAVRAS = 289,                /* PALAVRAS  */
    MAIS = 290,                    /* MAIS  */
    MENOS = 291,                   /* MENOS  */
    MULTIPLICA = 292,              /* MULTIPLICA  */
    DIVIDE = 293                   /* DIVIDE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "syntax.y"

    char *str;

#line 106 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

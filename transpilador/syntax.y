%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "syntax.tab.h"

extern FILE *yyin;
extern int yylex(void);
void yyerror(const char *s);
%}

%union {
    char *str;
}

%token<str> PHP_OPEN PHP_CLOSE VARIAVEIS PONTOVIRGULA RECEBE MAIORQUE MENORQUE IGUAL DIFERENTE SENAOSE MAIORIGUAL MENORIGUAL PRINT FOR MAISMAIS MENOSMENOS SE SENAO ABREP FECHAP ABREC FECHAC E OU ENQUANTO FUNC RETURN VIRGULA BREAK NUM STR PALAVRAS

%type<str> PROGRAMA DECLARACAO CODIGOS CODIGO ATRIBUICAO EXPRESSAO LOOP COMANDO CONDICAO CONDICIONAL CONDICOES FUNCAO INCREMENTO

%left MAIS MENOS
%left MULTIPLICA DIVIDE
%left MAIORQUE MENORQUE MAIORIGUAL MENORIGUAL DIFERENTE IGUAL E OU

%start PROGRAMA

%%

PROGRAMA : PHP_OPEN CODIGOS PHP_CLOSE;

CODIGOS : CODIGOS CODIGO | CODIGO;

CODIGO : DECLARACAO | ATRIBUICAO | LOOP | COMANDO | INCREMENTO | CONDICIONAL | FUNCAO;


DECLARACAO :
    VARIAVEIS PONTOVIRGULA {
        printf("local %s\n", $1);
        free($1);
    };

COMANDO:
    PRINT STR PONTOVIRGULA {
        printf("print(%s)\n", $3); // Traduz 'echo "texto";' para 'print("texto")'
    }
    | PRINT VARIAVEIS PONTOVIRGULA {
        printf("print(%s)\n", $3); // Traduz 'echo $var;' para 'print(var)'
    }
    | PRINT STR VIRGULA VARIAVEIS PONTOVIRGULA {
        printf("print(f\"%s { %s }\")\n", $3, $5); // Traduz 'echo "Texto", $var;' para 'print(f"Texto {var}")'
    };

INCREMENTO:
    VARIAVEIS MAISMAIS PONTOVIRGULA {
        printf("    %s += 1\n    ", $1); // Traduz '$i++;' para 'i += 1'
        free($1);
    }
    | VARIAVEIS MENOSMENOS PONTOVIRGULA {
        printf("    %s -= 1\n    ", $1); // Traduz '$i--;' para 'i -= 1'
        free($1);
    };

ATRIBUICAO:
    VARIAVEIS RECEBE EXPRESSAO PONTOVIRGULA {
        printf("%s = %s\n", $1, $3); // Adicionada indentação para Python
        free($1);
        free($3);
    }
    | VARIAVEIS RECEBE PALAVRAS ABREP VARIAVEIS FECHAP PONTOVIRGULA {
        printf("%s = %s(%s)\n", $1, $3, $5); // Adicionada indentação para Python
        free($1);
        free($3);
        free($5);
    }
    | VARIAVEIS RECEBE PALAVRAS ABREP VARIAVEIS VIRGULA VARIAVEIS FECHAP PONTOVIRGULA {
        printf("%s = %s(%s, %s)\n", $1, $3, $5, $7); // Adicionada indentação para Python
        free($1);
        free($3);
        free($5);
    }
    | VARIAVEIS RECEBE STR PONTOVIRGULA {
        printf("%s = %s\n", $1, $3); // Adicionada indentação para Python
        free($1);
    };


EXPRESSAO :
      EXPRESSAO MAIS EXPRESSAO {
          $$ = malloc(100);
          snprintf($$, 100, "%s + %s", $1, $3);
          free($1);
          free($3);
      }| EXPRESSAO MENOS EXPRESSAO {
          $$ = malloc(100);
          snprintf($$, 100, "%s - %s", $1, $3);
          free($1);
          free($3);
      }| EXPRESSAO MULTIPLICA EXPRESSAO {
          $$ = malloc(100);
          snprintf($$, 100, "%s * %s", $1, $3);
          free($1);
          free($3);
      }| EXPRESSAO DIVIDE EXPRESSAO {
          $$ = malloc(100);
          snprintf($$, 100, "%s / %s", $1, $3);
          free($1);
          free($3);
      }| ABREP EXPRESSAO FECHAP {
          $$ = malloc(strlen($2) + 3);
          snprintf($$, 100, "(%s)", $2);
          free($2);
      }| NUM {
          $$ = strdup($1);
      }| VARIAVEIS {
          $$ = strdup($1);
      };

LOOP:
    ENQUANTO ABREP CONDICAO FECHAP ABREC {
        printf("while %s:\n    ", $3); // Para Python, ':' no final com indentação clara.        
        free($3);
    }| CODIGOS FECHAC {
        printf("    \n"); // Indente o bloco corretamente
    };

CONDICAO:
      CONDICOES E CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s and %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES OU CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s or %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES MAIORQUE CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s > %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES MENORQUE CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s < %s", $1, $3);
          free($1);
          free($3);
      } | CONDICOES MAIORIGUAL CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s >= %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES MENORIGUAL CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s <= %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES IGUAL CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s == %s", $1, $3);
          free($1);
          free($3);
      }| CONDICOES DIFERENTE CONDICOES {
          $$ = malloc(100);
          snprintf($$, 100, "%s != %s", $1, $3);
          free($1);
          free($3);
      };

CONDICOES:
    CONDICAO | EXPRESSAO;

CONDICIONAL:
    SE ABREP CONDICAO FECHAP ABREC {
        printf("if %s:\n    ", $3); // Adiciona ':' e indentação
        free($3);
    }| FECHAC SENAO ABREC{
        printf("else:\n    "); // ':' para Python
    }| FECHAC SENAOSE ABREP CONDICAO FECHAP ABREC {
        printf("elif %s:\n    ", $4); // Python usa com 'elif' e ':'
    };

FUNCAO:
    FUNC PALAVRAS ABREP VARIAVEIS FECHAP ABREC {
        printf("def %s(%s):\n", $2, $4); // Adicionado ':' ao final
        free($2);
        free($4);
    }
    | RETURN VARIAVEIS PONTOVIRGULA {
        printf("    return %s\n", $2); // Ajuste na indentação
        free($2);
    }
    | FUNC PALAVRAS ABREP VARIAVEIS VIRGULA VARIAVEIS FECHAP ABREC {
        printf("def %s(%s, %s):\n    ", $2, $4, $6); // Adicionado ':' ao final
        free($2);
        free($4);
        free($6);
    }

%%

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Modo de uso: ./transpilador arquivo.php\n");
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (!arquivo) {
        printf("Arquivo %s não encontrado!\n", argv[1]);
        return 1;
    }

    yyin = arquivo;
    yyparse();

    fclose(arquivo);
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}

## Transpilador de Php para Python

Foram utilizadas as bibliotecas gcc, flex e bison. Basta que instale, para que funcione.

Passo a passo de como rodar:

1 -bison -d syntax.y
2 - flex lexer.l
3 - gcc -o transpilador lex.yy.c syntax.tab.c -lfl
4 - ./transpilador php.txt

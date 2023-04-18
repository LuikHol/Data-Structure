#include <stdio.h>
#include "pilha.c"

int main() {
    char expr1[] = "(())";
    char expr2[] = "(()())";
    char expr3[] = "()()";
    char expr4[] = ")(()";
    char expr5[] = "))((";

    printf("%s: %s\n", expr1, verifica_parenteses(expr1) ? "Correto" : "Incorreto");
    printf("%s: %s\n", expr2, verifica_parenteses(expr2) ? "Correto" : "Incorreto");
    printf("%s: %s\n", expr3, verifica_parenteses(expr3) ? "Correto" : "Incorreto");
    printf("%s: %s\n", expr4, verifica_parenteses(expr4) ? "Correto" : "Incorreto");
    printf("%s: %s\n", expr5, verifica_parenteses(expr5) ? "Correto" : "Incorreto");

    return 0;
}
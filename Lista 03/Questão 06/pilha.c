#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "pilha.h"

void inicializa_pilha(Pilha *p) {
    p->topo = -1;
}

bool pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

bool pilha_cheia(Pilha *p) {
    return p->topo == MAX - 1;
}

void push(Pilha *p, char item) {
    if (pilha_cheia(p)) {
        printf("Erro: pilha cheia!\n");
        exit(1);
    } else {
        p->topo++;
        p->itens[p->topo] = item;
    }
}

char pop(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Erro: pilha vazia!\n");
        exit(1);
    } else {
        char item = p->itens[p->topo];
        p->topo--;
        return item;
    }
}

bool verifica_parenteses(char *expr) {
    Pilha p;
    inicializa_pilha(&p);

    int tam = strlen(expr);

    for (int i = 0; i < tam; i++) {
        if (expr[i] == '(') {
            push(&p, expr[i]);
        } else if (expr[i] == ')') {
            if (pilha_vazia(&p) || pop(&p) != '(') {
                return false;
            }
        }
    }

    return pilha_vazia(&p);
}


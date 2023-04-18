#ifndef PILHA_H
#define PILHA_H
#define MAX 100

typedef struct {
    char itens[MAX];
    int topo;
} Pilha;

void inicializa_pilha(Pilha *p);

bool pilha_vazia(Pilha *p);

bool pilha_cheia(Pilha *p);

void push(Pilha *p, char item);

char pop(Pilha *p);

bool verifica_parenteses(char *expr);

#endif
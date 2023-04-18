#ifndef PILHA_H
#define PILHA_H

#define MAX 100

typedef struct pilha {
  int qtd;
  char dados[MAX];
} pilha;

pilha* cria_pilha();
int insere_pilha(pilha* pi, char c);
char remove_pilha(pilha* pi);
int pilha_vazia(pilha* pi);
int pilha_cheia(pilha* pi);

#endif
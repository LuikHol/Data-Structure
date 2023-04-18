#include "pilha.h"
#include <stdlib.h>

pilha* cria_pilha() {
  pilha* pi = (pilha*)malloc(sizeof(pilha));
  if (pi != NULL) {
    pi->qtd = 0;
  }
  return pi;
}

int insere_pilha(pilha* pi, char c) {
  if (pi == NULL) {
    return 0;
  }
  if (pi->qtd == MAX) {
    return 0;
  }
  pi->dados[pi->qtd] = c;
  pi->qtd++;
  return 1;
}

char remove_pilha(pilha* pi) {
  if (pi == NULL || pi->qtd == 0) {
    return -1;
  }
  char c = pi->dados[pi->qtd - 1];
  pi->qtd--;
  return c;
}

int pilha_vazia(pilha* pi) {
  if (pi == NULL || pi->qtd == 0) {
    return 1;
  }
  return 0;
}

int pilha_cheia(pilha* pi) {
  if (pi == NULL || pi->qtd == MAX) {
    return 1;
  }
  return 0;
}

int is_palindrome(char *str) {
  pilha *pi = cria_pilha();
  int len = strlen(str);
  int i;

  for(i = 0; i < len; i++) {
    str[i] = tolower(str[i]);
  }

  for(i = 0; i < len/2; i++) {
    insere_pilha(pi, str[i]);
  }

  for(i = len/2 + len%2; i < len; i++) {
    if(str[i] != remove_pilha(pi)) {
      return 0;
    }
  }

  return 1;
}

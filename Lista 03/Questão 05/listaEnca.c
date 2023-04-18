#include <stdio.h>
#include <stdlib.h>
#include "listaEnca.h"

Lista* criaLista() {
    Lista *lista = (Lista*) malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->fim = NULL;
    return lista;
}

No* criaNo(int valor) {
    No *novoNo = (No*) malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->prox = NULL;
    novoNo->ant = NULL;
    return novoNo;
}

void insereInicio(Lista *lista, int valor) {
    No *novoNo = criaNo(valor);
    if (lista->inicio == NULL) {
        lista->inicio = novoNo;
        lista->fim = novoNo;
    } else {
        novoNo->prox = lista->inicio;
        lista->inicio->ant = novoNo;
        lista->inicio = novoNo;
    }
}

void insereFim(Lista *lista, int valor) {
    No *novoNo = criaNo(valor);
    if (lista->inicio == NULL) {
        lista->inicio = novoNo;
        lista->fim = novoNo;
    } else {
        novoNo->ant = lista->fim;
        lista->fim->prox = novoNo;
        lista->fim = novoNo;
    }
}

void inserePosicao(Lista *lista, int posicao, int valor) {
    if (posicao == 0) {
        insereInicio(lista, valor);
        return;
    }
    No *novoNo = criaNo(valor);
    No *atual = lista->inicio;
    int i;
    for (i = 0; i < posicao - 1 && atual != NULL; i++) {
        atual = atual->prox;
    }
    if (atual == NULL) {
        return;
    }
    novoNo->prox = atual->prox;
    novoNo->ant = atual;
    if (atual->prox != NULL) {
        atual->prox->ant = novoNo;
    } else {
        lista->fim = novoNo;
    }
    atual->prox = novoNo;
}

void removeInicio(Lista *lista) {
    if (lista->inicio == NULL) {
        return;
    }
    No *temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    if (lista->inicio == NULL) {
        lista->fim = NULL;
    } else {
        lista->inicio->ant = NULL;
    }
    free(temp);
}

void removeFim(Lista *lista) {
    if (lista->inicio == NULL) {
        return;
    }
    No *temp = lista->fim;
    lista->fim = lista->fim->ant;
    if (lista->fim == NULL) {
        lista->inicio = NULL;
    } else {
        lista->fim->prox = NULL;
    }
    free(temp);
}

void removePosicao(Lista *lista, int posicao) {
    if (lista->inicio == NULL) {
        return;
    }
    No *atual = lista->inicio;
    int i;
    for (i = 0; i < posicao && atual != NULL; i++) {
        atual = atual->prox;
    }
    if (atual == NULL) {
        return;
    }
    if (atual == lista->inicio) {
        removeInicio(lista);
    } else if (atual == lista->fim) {
        remove;
    } else {
        atual->ant->prox = atual->prox;
        if (atual->prox != NULL) {
            atual->prox->ant = atual->ant;
        } else {
            lista->fim = atual->ant;
        }
        free(atual);
    }
}

void imprimeLista(Lista *lista) {
    No *atual = lista->inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

void destroiLista(Lista *lista) {
    No *atual = lista->inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(lista);
}

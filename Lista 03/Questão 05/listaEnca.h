#ifndef _LISTAENCA_H_
#define _LISTAENCA_H_

typedef struct _no {
    int valor;
    struct _no *prox;
    struct _no *ant;
} No;

typedef struct _lista {
    No *inicio;
    No *fim;
} Lista;

Lista* criaLista();
No* criaNo(int valor);
void insereInicio(Lista *lista, int valor);
void insereFim(Lista *lista, int valor);
void inserePosicao(Lista *lista, int posicao, int valor);
void removeInicio(Lista *lista);
void removeFim(Lista *lista);
void removePosicao(Lista *lista, int posicao);
void imprimeLista(Lista *lista);
void destroiLista(Lista *lista);

#endif

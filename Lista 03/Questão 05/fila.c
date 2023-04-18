#include <stdio.h>
#include <stdlib.h>
#include "listaEnca.c"

typedef Lista Fila;

Fila* criaFila() {
    return criaLista();
}

void enqueue(Fila *fila, int valor) {
    insereFim(fila, valor);
}

void dequeue(Fila *fila) {
    removeInicio(fila);
}

void imprimeFila(Fila *fila) {
    imprimeLista(fila);
}

void destroiFila(Fila *fila) {
    destroiLista(fila);
}

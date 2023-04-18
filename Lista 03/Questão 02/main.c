#include <stdio.h>
#include "listaEnca.c"

int main() {
    Lista *lista = criaLista();
    insereInicio(lista, 5);  // lista: 5
    insereFim(lista, 7); // lista: 5 -> 7
    inserePosicao(lista, 1, 6); // lista: 5 -> 6 -> 7
    inserePosicao(lista, 0, 4); // lista: 4 -> 5 -> 6 -> 7
    inserePosicao(lista, 2, 9); // lista: 4 -> 5 -> 9 -> 6 -> 7
    imprimeLista(lista); // imprime "4 5 9 6 7"
    removeInicio(lista); // lista: 5 -> 9 -> 6 -> 7
    removeFim(lista);  // lista: 5 -> 9 -> 6
    removePosicao(lista, 1); // lista: 5 -> 6
    imprimeLista(lista);
    destroiLista(lista);
    return 0;
}

#include <stdio.h>
#include "time.h"
#include "time.c"

int main(){
    //Exemplos

    time *tim = atribuir("Flamengo", 22, 6, 5, 2);

    imprimir(tim);

    pontuacao(tim);

    printf("\n");

    tim = atribuir("Fortaleza", 23, 8, 3, 2);

    imprimir(tim);

    pontuacao(tim);

}
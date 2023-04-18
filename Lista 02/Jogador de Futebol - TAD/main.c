#include <stdio.h>
#include "jogador.h"
#include "jogador.c"

int main(){
    //Exemplos

    jogador *jog = atribuir("Paulo da Silva", 10, 5, 3);
    
    imprimir(jog);

    bomJogador(jog);

    printf("\n"); 

    jog = atribuir("Lucas", 20, 13, 2);

    imprimir(jog);

    bomJogador(jog);

    printf("\n");
}
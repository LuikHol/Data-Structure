#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main() {
    pilhaEst *pilha = cria_Pilha();
    insere_Pilha(pilha, 1);
    insere_Pilha(pilha, 0);
    insere_Pilha(pilha, 1);
    insere_Pilha(pilha, 1);

    int decimal = converte_Base_para_Decimal(2, pilha);
    printf("Decimal: %d\n", decimal);

    libera_Pilha(pilha);

    return 0;
}
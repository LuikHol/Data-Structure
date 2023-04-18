#include <stdio.h>
#include <stdlib.h>
#include "pilhaEst.h"

pilhaEst *cria_Pilha(){
    pilhaEst *pi;
    pi = (pilhaEst *)malloc(sizeof(struct pilhaEst));
    if(pi != NULL){
        pi->qnt = 0;
    }
    return pi;
}

int insere_Pilha(pilhaEst *pi, int nu){
    if(pi->qnt == MAX){
        return 0;
    }
    pi->nu[pi->qnt] = nu;
    pi->qnt++;
    return 1;
}

int remove_Pilha(pilhaEst *pi, int *elemento){
    if(pi == NULL || pi->qnt == 0){
        return 0;
    }
    *elemento = pi->nu[pi->qnt-1];
    pi->qnt--;
    return 1;
}

int pilha_Vazia(pilhaEst *pi) {
    if (pi == NULL || pi->qnt == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

void printar_Pilha(pilhaEst *pi){
    if(pi == NULL || pi->qnt == 0){
        printf("Pilha vazia\n");
        return;
    }
    printf("Os Elementos da pilha são: ");
    for(int i = 0; i < pi->qnt; i++){  
        printf("%d ", pi->nu[i]);
    }
    printf("\n");
}


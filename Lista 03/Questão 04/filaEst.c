#include <stdio.h>
#include <stdlib.h>
#include "filaEst.h"
#include "pilhaEst.h"

filaEst *cria_Fila(){
    filaEst *fi;
    fi = (filaEst *)malloc(sizeof(struct filaEst));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qnt = 0;
    }
    return fi;
}

int insere_Fila(filaEst *fi, int nu){
    if(fi == NULL){
        return 0;
    }
    if(fi->qnt-1 == MAX){
        return 0;
    }
    fi->nu[fi->final] = nu;
    fi->final = (fi->final+1)%MAX;
    fi->qnt++;
    return 1;
}

int remove_Fila(filaEst *fi, int *elemento) {
    if(fi == NULL || fi->qnt == 0) {
        return 0;
    }
    *elemento = fi->nu[fi->inicio];
    fi->inicio = (fi->inicio+1) % MAX;
    fi->qnt--;
    return 1;
}

int fila_Vazia(filaEst *fi) {
    if (fi == NULL || fi->inicio == fi->final) {
        return 1; 
    } else {
        return 0;
    }
}

void printar_Fila(filaEst *fi){
    printf("Os Elementos da fila estática são: ");
    for(int i = fi->inicio; i <= fi->final-1; i++){
        printf("%d ", fi->nu[i]);
    }
    printf("\n");
}
 
void inverte_Fila(filaEst *fi){ // função para Inverter
    pilhaEst *pi = cria_Pilha();
    int elemento;

    while(remove_Fila(fi, &elemento)){
        insere_Pilha(pi, elemento);
    }

    while(remove_Pilha(pi, &elemento)){
        insere_Fila(fi, elemento);
    }

}
#include <stdio.h>
#include <stdlib.h>
#include "filaDin.h"
#include "pilhaEst.h"

struct no {
    int info;
    No *prox;
};

struct filaDin {
    No *inicio;
    No *final;
};

filaDin *cria_FilaDin(){
    filaDin *fi = (filaDin*) malloc(sizeof(filaDin));
    if(fi != NULL){
        fi->inicio = NULL;
        fi->final = NULL;
    }
    return fi;
}

void libera_FilaDin(filaDin *fi){
    if(fi != NULL){
        No *no;
        while(fi->inicio != NULL){
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
}

int filaDin_Vazia(filaDin *fi){
    if(fi == NULL || fi->inicio == NULL){
        return 1;
    }
    return 0;
}

int insere_FilaDin(filaDin *fi, int elemento){
    if(fi == NULL){
        return 0;
    }
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        return 0;
    }
    no->info = elemento;
    no->prox = NULL;
    if(fi->final == NULL){
        fi->inicio = no;
    } else {
        fi->final->prox = no;
    }
    fi->final = no;
    return 1;
}

int remove_FilaDin(filaDin *fi, int *elemento){
    if(fi == NULL || fi->inicio == NULL){
        return 0;
    }
    No *no = fi->inicio;
    *elemento = no->info;
    fi->inicio = fi->inicio->prox;
    if(fi->inicio == NULL){
        fi->final = NULL;
    }
    free(no);
    return 1;
}

void printar_FilaDin(filaDin *fi){
    if(fi == NULL || fi->inicio == NULL){
        printf("Fila vazia!\n");
        return;
    }
    No *no = fi->inicio;
    printf("Os elementos da fila dinâmica são: ");
    while(no != NULL){
        printf("%d ", no->info);
        no = no->prox;
    }
    printf("\n");
}

void inverte_FilaDin(filaDin *fi){
    pilhaEst *pi = cria_Pilha();
    int elemento;

    while(remove_FilaDin(fi, &elemento)){
        insere_Pilha(pi, elemento);
    }

    while(remove_Pilha(pi, &elemento)){
        insere_FilaDin(fi, elemento);
    }

}
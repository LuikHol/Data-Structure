#include <stdio.h>
#include <stdlib.h>
#include "pilhaEst.c"
#include "filaEst.c"
#include "filaDin.c"


int main(){
    
    //FILA ESTÁTICA

    filaEst *fi = cria_Fila();

    insere_Fila(fi, 10);
    insere_Fila(fi, 15);
    insere_Fila(fi, 20);
    insere_Fila(fi, 13);
    printf("ANTES\n");
    printar_Fila(fi);

    inverte_Fila(fi);
    printf("DEPOIS\n");
    printar_Fila(fi);

    printf("\n\n");

    //FILA DINÂMICA

    filaDin *fiD = cria_FilaDin();

    insere_FilaDin(fiD, 4);
    insere_FilaDin(fiD, 5);
    insere_FilaDin(fiD, 6);
    printf("ANTES\n");
    printar_FilaDin(fiD);

    inverte_FilaDin(fiD);
    printf("DEPOIS\n");
    printar_FilaDin(fiD);
}


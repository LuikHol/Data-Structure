#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include <string.h>


time *atribuir(char nome[], int jogadores, int vit, int der, int emp){
    time *tim = (time *)malloc(sizeof(time));

    strcpy(tim->nome, nome);
    tim->jogadores = jogadores;
    tim->vit = vit;
    tim->der = der;
    tim->emp = emp;

    return tim;
}

void imprimir(time *tim){

    printf("Nome: %s\n", tim->nome);
    printf("Número de Jogadores: %d\n", tim->jogadores);
    printf("Número de Vitórias: %d\n", tim->vit);
    printf("Número de Derrotas: %d\n", tim->der);
    printf("Número de Empates: %d\n", tim->emp);

}

int pontuacao(time *tim){
    int pont = 0;

    for(int i = 1; i<=tim->vit; i++){
        pont += 3;
    }
    for(int i = 1; i<=tim->emp; i++){
        pont++;
    }

    printf("A pontuação atual do %s é: %d\n", tim->nome, pont);
    return 0;
}
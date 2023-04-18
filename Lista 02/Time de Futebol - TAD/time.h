#ifndef TIME_H
#define TIME_H
#include <stdio.h>
#include <stdlib.h>

typedef struct time
{

    char nome[50];
    int jogadores;
    int vit;
    int der;
    int emp;

} time;

time *atribuir(char nome[], int jogadores, int vit, int der, int emp);

void imprimir(time *);

int pontuacao(time *);

#endif


#ifndef JOGADOR_H
#define JOGADOR_H
#include <stdio.h>
#include <stdlib.h>

typedef struct jogador
{
    char nome[50];
    int jogos;
    int gols;
    int assis;    
    
} jogador;

jogador *atribuir(char nome[], int jogos, int gols, int assis);

void imprimir(jogador *);

int bomJogador(jogador *);


#endif
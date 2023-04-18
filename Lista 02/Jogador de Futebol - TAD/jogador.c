#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"
#include <string.h>


jogador *atribuir(char nome[], int jogos, int gols, int assis) {
    jogador *jog = (jogador *)malloc(sizeof(jogador));

    jog->jogos = jogos;
    jog->gols = gols;
    jog->assis = assis;
    strcpy(jog->nome,nome);

    return jog;
}

void imprimir(jogador *jog){

    printf("Nome: %s\n", jog->nome);
    printf("Jogos: %d\n", jog->jogos);
    printf("Gols: %d\n", jog->gols);
    printf("Assistências: %d\n", jog->assis);

}

int bomJogador(jogador *jog){
    int pontuacao = jog->gols + jog->assis;
    
    for(int i = 1; i<=jog->jogos; i++){
        if(i % 4 == 0){
            pontuacao -= 1;
        }
    }
    if(pontuacao>=8){
        printf("É um bom jogador\n");
        return 1;
    }

    printf("Não é um bom jogador\n");
    return 0;
}


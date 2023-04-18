#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "ponto.c"

int main(){
    
    ponto *p1 = criar(2, 4); //criando ponto 1
    atribui(p1, 5, 5); //modificando ponto 1
    printf("Ponto 1:\n");
    imprimir(p1);

    ponto *p2 = criar(2, 4); //criando ponto 2
    printf("Ponto 2:\n");
    imprimir(p2);

    printf("\n");

    float dist = distancia(p1, p2); //cálculando e mostrando a distância
    printf("A distância entre os dois pontos é: %.2f\n", dist); 

    ponto *som = soma(p1, p2);
    printf("A soma entre esses dois pontos é:\n");
    imprimir(som);

    ponto *sub = subtr(p1,p2);
    printf("A subtração entre esses dois pontos é:\n");
    imprimir(sub);


    libera(p1); libera(p2); libera(som); libera(sub);
}
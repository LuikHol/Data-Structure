#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"


ponto *criar(float x, float y){
    ponto *p = (ponto *)malloc(sizeof(ponto));
    if (p == NULL)
    {
        printf("Memória Insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void libera(ponto *p){

    free(p);

}

void acessa(ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void atribui(ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia(ponto *p1, ponto *p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

void imprimir(ponto *p){ //adicionando um método de Printar 
    printf("P: (%.2f, %.2f)\n", p->x, p->y);
}

ponto *soma(ponto *p1, ponto *p2){ //adicionando método de soma entre pontos
    ponto *res = (ponto *)malloc(sizeof(ponto));

    res->x = p1->x + p2->x;
    res->y = p1->y + p2->y;

    return res; 
}

ponto *subtr(ponto *p1, ponto *p2){ ///adicionando método de subtração entre pontos
    ponto *res = (ponto *)malloc(sizeof(ponto));

    res->x = p1->x - p2->x;
    res->y = p1->y - p2->y;

    return res; 
}

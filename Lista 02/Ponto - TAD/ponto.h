#ifndef PONTO_H
#define PONTO_H

typedef struct ponto
{
    float x;
    float y;
} ponto;

ponto *criar(float x, float y);

void atribui(ponto *, float x, float y);

void libera(ponto *);

void acessa(ponto *, float *x, float *y);

float distancia(ponto *, ponto *);

void imprimir(ponto *);

ponto *soma(ponto *, ponto *);

ponto *subtr(ponto *, ponto *);

#endif
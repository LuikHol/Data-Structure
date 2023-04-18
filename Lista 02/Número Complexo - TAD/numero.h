#ifndef NUMERO_H
#define NUMERO_H
#include <stdio.h>
#include <stdlib.h>


typedef struct numero
{
    float real;
    float imag;
    
} numero;

numero *criar_num(float x, float y);

void imprimir(numero *);

void destr_num(numero *);

numero *soma_num(numero *, numero *);

numero *mult_num(numero *, numero *);


#endif
#include <stdio.h>
#include "numero.h"
#include <stdlib.h>

numero *criar_num(float x, float y){
    numero *num = (numero *)malloc(sizeof(numero));

    num->real = x;
    num->imag = y;

    return num;
}

void destr_num(numero *num){

    free(num);

    printf("O número foi destruido.\n");

}

numero *soma_num(numero *num, numero *num2){
    numero *res = (numero *)malloc(sizeof(numero));

    res->real = num->real + num2->real;
    res->imag = num->imag + num2->imag;

    return res;
}

numero *mult_num(numero *num, numero *num2){
    numero *res = (numero *)malloc(sizeof(numero));

    res->real = num->real * num2->real - num->imag * num2->imag;
    res->imag = num->real * num2->imag + num->imag * num2->real;

    return res;
}

void imprimir(numero *num){

    printf("Número -> z = %0.f + %0.fi\n\n", num->real, num->imag);
}
#include <stdio.h>
#include "esfera.h"
#include "esfera.c"

int main(){
    //Exemplos

    esfera *esf = inic(10);
    imprimir(esf);

    esfera *esf2 = inic(5);
    esf2 = cal_raio(esf2);
    esf2 = cal_vol(esf2);
    imprimir(esf2);

    esfera *esf3 = inic(2);
    esf3 = cal_raio(esf3);
    esf3 = cal_vol(esf3);
    esf3 = cal_area(esf3);
    imprimir(esf3);

    destruir(esf);
    destruir(esf2);
    destruir(esf3);
}
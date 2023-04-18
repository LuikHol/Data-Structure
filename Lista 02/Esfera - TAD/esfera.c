#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"
#include <math.h>
#define PI 3.14159265358979323846


esfera *inic(double diametro){
    esfera *esf = (esfera *)malloc(sizeof(esfera));
    esf->diametro = diametro;
    esf->raio = nan(""); // iniciando sem um valor, usando a math.h
    esf->volume = nan("");
    esf->area = nan("");

    return esf;
}

esfera *cal_raio(esfera *esf){
    
    esf->raio = esf->diametro/2; 
    
    return esf;
}

esfera *cal_area(esfera *esf){

    double raio = esf->diametro/2;
    esf->area = 4 * PI * pow(raio, 2);
    
    return esf;
}

esfera *cal_vol(esfera *esf){

    double raio = esf->diametro/2;
    esf->volume = (4/3) * PI * pow(raio,3);

    return esf;
}

void imprimir(esfera *esf){
    printf("Diâmetro: %.2f\n", esf->diametro);
    if(isnan(esf->raio)){ // testando se é nan ou há um valor dentro
        printf("Raio: Ainda não descoberto.\n");
    } else {
        printf("Raio: %.2f\n", esf->raio);
    }
    if(isnan(esf->volume)){
        printf("Volume: Ainda não descoberto.\n");
    } else {
        printf("Volume: %.2f\n", esf->volume);
    }
    if(isnan(esf->area)){
        printf("Área: Ainda não descoberta.\n");
    } else{
        printf("Área: %.2f\n", esf->area);
    }
    printf("\n");
}

void destruir(esfera *esf){

    free(esf);

}
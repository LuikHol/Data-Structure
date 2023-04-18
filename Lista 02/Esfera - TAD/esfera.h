#ifndef ESFERA_H
#define ESFERA_H


typedef struct esfera
{
    double diametro;
    double raio;
    double volume;
    double area;

} esfera;

esfera *inic(double diametro);

esfera *cal_raio(esfera *);

esfera *cal_area(esfera *);

esfera *cal_vol(esfera *);

void imprimir(esfera *);

void destruir(esfera *);


#endif
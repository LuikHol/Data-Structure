#include <stdio.h>
#include "numero.h"
#include "numero.c"

int main(){

    numero *num = criar_num(1, 3);
    numero *num2 = criar_num(2, 4);

    imprimir(num);
    imprimir(num2);

    numero *som = soma_num(num, num2);
    imprimir(som);

    numero *mult = mult_num(num, num2);
    imprimir(mult); 

}
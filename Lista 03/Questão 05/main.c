#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main() {
    Fila *fila = criaFila();
    
    enqueue(fila, 1);
    enqueue(fila, 2);
    enqueue(fila, 3);
    imprimeFila(fila);    // imprime "1 2 3"
    
    dequeue(fila);
    imprimeFila(fila);    // imprime "2 3"
    
    enqueue(fila, 4);
    imprimeFila(fila);    // imprime "2 3 4"
    
    destroiFila(fila);
    
    return 0;
}

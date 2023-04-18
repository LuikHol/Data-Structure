#ifndef FILAEST_H
#define FILAEST_H
#define MAX 20


typedef struct filaEst
{
    int inicio, final, qnt;
    int nu[MAX];

} filaEst;

filaEst *cria_Fila();
int insere_Fila(filaEst *, int);
int remove_Fila(filaEst *, int *);
void printar_Fila(filaEst *);
int fila_Vazia(filaEst *);


#endif
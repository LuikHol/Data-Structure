#ifndef PILHAEST_H
#define PILHAEST_H
#define MAX 20

typedef struct pilhaEst
{
    int qnt;
    int nu[MAX];

} pilhaEst;

pilhaEst *cria_Pilha();
int insere_Pilha(pilhaEst *, int nu);
int remove_Pilha(pilhaEst *, int *);
void printar_Pilha(pilhaEst *);
int pilha_Vazia(pilhaEst *);

#endif
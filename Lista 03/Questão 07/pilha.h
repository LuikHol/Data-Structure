#ifndef PILHA_H
#define PILHA_H
#define MAX 20

typedef struct pilhaEst
{
    int qnt;
    int nu[MAX];

} pilhaEst;

pilhaEst *cria_Pilha();
int insere_Pilha(pilhaEst *, int nu);
int remove_Pilha(pilhaEst *, int *);
void printa_Pilha(pilhaEst *);
int pilha_Vazia(pilhaEst *);
int converte_Base_para_Decimal(int, pilhaEst *);
void libera_Pilha(pilhaEst *);

#endif
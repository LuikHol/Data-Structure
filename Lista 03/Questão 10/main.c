#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // tamanho máximo do array A

int A[MAX]; // array que armazenará as duas pilhas
int topo1 = -1; // variável que controla o topo da pilha 1
int topo2 = MAX; // variável que controla o topo da pilha 2

// procedimento Empilha para a pilha 1
void Empilha1(int elemento) {
    if (topo1 + 1 == topo2) { // verifica se as duas pilhas estão cheias
        printf("Erro: as duas pilhas estao cheias.\n");
        return;
    }
    topo1++;
    A[topo1] = elemento;
}

// procedimento Empilha para a pilha 2
void Empilha2(int elemento) {
    if (topo2 - 1 == topo1) { // verifica se as duas pilhas estão cheias
        printf("Erro: as duas pilhas estao cheias.\n");
        return;
    }
    topo2--;
    A[topo2] = elemento;
}

// procedimento Desempilha para a pilha 1
int Desempilha1() {
    if (topo1 == -1) { // verifica se a pilha 1 está vazia
        printf("Erro: a pilha 1 esta vazia.\n");
        return -1;
    }
    int elemento = A[topo1];
    topo1--;
    return elemento;
}

// procedimento Desempilha para a pilha 2
int Desempilha2() {
    if (topo2 == MAX) { // verifica se a pilha 2 está vazia
        printf("Erro: a pilha 2 esta vazia.\n");
        return -1;
    }
    int elemento = A[topo2];
    topo2++;
    return elemento;
}

// exemplo de uso dos procedimentos
int main() {
    Empilha1(1); // insere o elemento 1 na pilha 1
    Empilha2(2); // insere o elemento 2 na pilha 2
    Empilha1(3); // insere o elemento 3 na pilha 1
    Empilha2(4); // insere o elemento 4 na pilha 2
    printf("%d\n", Desempilha1()); // remove e imprime o topo da pilha 1 (deve ser 3)
    printf("%d\n", Desempilha2()); // remove e imprime o topo da pilha 2 (deve ser 4)
    printf("%d\n", Desempilha1()); // remove e imprime o topo da pilha 1 (deve ser 1)
    printf("%d\n", Desempilha2()); // remove e imprime o topo da pilha 2 (deve ser 2)
    return 0;
}

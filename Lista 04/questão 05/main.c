#include <stdio.h>
#include <string.h>
#include "EstoqueHash.c"

int main(){
    Hash *ha = criaHash(13);
    struct produto p1, p2, p3, p4, p5;
    strcpy(p1.nome, "Chocolate Garoto");
    p1.codigo = 1552553;
    p1.preco = 8.90;
    p1.qtd = 123;
    strcpy(p2.nome, "Sucrilhos - 300g");
    p2.codigo = 1665002;
    p2.preco = 11.99;
    p2.qtd = 908;
    strcpy(p3.nome, "Dove");
    p3.codigo = 9823371;
    p3.preco = 29.53;
    p3.qtd = 33;
    strcpy(p4.nome, "Cerveja Skol Latão - 800ml");
    p4.codigo = 4444444;
    p4.preco = 8.74;
    p4.qtd = 16;
    strcpy(p5.nome, "Lápis faber castel");
    p5.codigo = 1010101;
    p5.preco = 1.90;
    p5.qtd = 367;
    insereHash_EncSep(ha, p1);
    insereHash_EncSep(ha, p2);
    insereHash_EncSep(ha, p3);
    insereHash_EncSep(ha, p4);
    insereHash_EncSep(ha, p5);
    buscaMaisCaro(ha);
    imprimeHash(ha);
    buscaHash_EncSep(ha, 9900000);
    buscaHash_EncSep(ha, 4444444);
    buscaHash_EncSep(ha, 9823371);
    removeHash_EncSep(ha, 9823371);
    buscaMaisCaro(ha);
    imprimeHash(ha);
    buscaHash_EncSep(ha, 9900000);
    buscaHash_EncSep(ha, 4444444);
    buscaHash_EncSep(ha, 9823371);
    atualizaPreco(ha, 4444444, 16.50);
    atualizaPreco(ha, 1010101, 2.50);
    buscaMaisCaro(ha);
    imprimeHash(ha);
    buscaHash_EncSep(ha, 9900000);
    buscaHash_EncSep(ha, 4444444);
    buscaHash_EncSep(ha, 9823371);

    return 0;
}
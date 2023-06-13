#include<stdio.h>
#include<stdlib.h>
#include"AlunoHash.c"

int main(){
    Hash *ha = criaHash(10);
    insereHash_EncSep(ha, "Pedro", 1612629);
    insereHash_EncSep(ha, "Gabryella", 1514605);
    insereHash_EncSep(ha, "Samuel", 1612568);
    insereHash_EncSep(ha, "Kalil", 1312456);
    insereHash_EncSep(ha, "Vinicios", 1553452);
    insereHash_EncSep(ha, "Clara", 1554755);
    imprimeHash(ha);
    buscaHash_EncSep(ha, 1612629);
    buscaHash_EncSep(ha, 1514605);
    buscaHash_EncSep(ha, 1312456);
    buscaHash_EncSep(ha, 1228831);
    printf("\nMédia dos números de matrículas: %.2f\n\n",mediaMatriculas(ha));
    removeHash_EncSep(ha, 1612629);
    removeHash_EncSep(ha, 1612568);
    imprimeHash(ha);
    buscaHash_EncSep(ha, 1612629);
    buscaHash_EncSep(ha, 1612568);
    printf("\nMédia dos números de matrículas: %.2f\n\n",mediaMatriculas(ha));


    return 0;

}
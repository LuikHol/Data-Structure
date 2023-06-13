#include <stdio.h>
#include <stdlib.h>
#include "EncadSeparado.c"

int main(){
    Hash* ha = criaHash(12);
    int num[12] = {
        15,
        28,
        33,
        41,
        57,
        64,
        72, 
        83,
        95,
        102,
        117,
        128
    };

    for(int i = 0; i<12; i++){
        insereHash_EncadSep(ha, num[i]);
    }
    buscaHash_EncadSep(ha, 102);
    buscaHash_EncadSep(ha, 83);
    removeHash_EncadSep(ha, 15);
    removeHash_EncadSep(ha, 83);
    buscaHash_EncadSep(ha, 15);
    buscaHash_EncadSep(ha, 83);

    return 0;
}
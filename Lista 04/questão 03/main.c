#include <stdio.h>
#include <stdlib.h>
#include "EncadAberto.c"

int main(){
    Hash* ha = criaHash(20);
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
        insereHash_EncadAbe(ha, num[i]);
    }
    buscaHash_EncadAbe(ha, 102);
    buscaHash_EncadAbe(ha, 83);
    return 0;
}
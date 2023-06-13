#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CidadeHash.c"

int main() {
    Hash* ha = criaHash();
    struct cidade cidades[31] = {
        {"Acarape"},
        {"Acaraú"},
        {"Aquiraz"},
        {"Aracati"},
        {"Arneiroz"},
        {"Aratuba"},
        {"Assaré"},
        {"Amontada"},
        {"Caridade"},
        {"Cascavel"},
        {"Caucaia"},
        {"Crato"},
        {"Cruz"},
        {"Cariré"},
        {"Croatá"},
        {"Fortaleza"},
        {"Farias Brito"},
        {"Forquilha"},
        {"Frecheirinha"},
        {"Pacajus"},
        {"Pacatuba"},
        {"Paraipaba"},
        {"Parambu"},
        {"Paramoti"},
        {"Pentecoste"},
        {"Pereiro"},
        {"Pindoretama"},
        {"Poranga"},
        {"Porteiras"},
        {"Potiretama"},
    };

    for (int i = 0; i < 31; i++) {
        insereCidade(ha, cidades[i]);
    }
    imprimeResultados(ha);
    liberaHash(ha);

    return 0;
}

#ifndef FILADIN_H
#define FILADIN_H

typedef struct no No;
typedef struct filaDin filaDin;

filaDin *cria_FilaDin();
void libera_FilaDin(filaDin *);
int filaDin_Vazia(filaDin *);
int insere_FilaDin(filaDin *, int);
int remove_FilaDin(filaDin *, int *);
void printar_FilaDin(filaDin *);
void inverte_FilaDin(filaDin *);



#endif
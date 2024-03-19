#include"fila.h"

Fila CriaFila(int max_size){

    Fila *Q = (Fila *) calloc(1, sizeof(Fila));

    Q->val = (int*) calloc(max_size, sizeof(int));
    Q->max_size = max_size;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;
}

void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){

    return (Q->qtde == 0);
}

int FilaCheia(Fila *Q){
    return (Q->qtde == Q->max_size);
}

int InsereFila(Fila *Q, int elem){

    if(FilaCheia(Q)){
        return 0;
    }
    else{
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim + 1) % Q->max_size;
        Q->qtde++;
        return 1;
    }
}

int RemoveFila(Fila *Q){

    if (FilaVazia(Q)){

        return 0;
    }
    else {
        Q->ini = (Q->ini + 1) % Q->max_size;
        Q->qtde--;
        return 1;
    }
}
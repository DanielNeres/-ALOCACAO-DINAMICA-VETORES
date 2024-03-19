#include"fila.h"

Fila CriaFila(int max_size){

    Fila *Q = (Fila *) calloc(1, sizeof(Fila));

    Q->val = (int*) calloc(max_size, sizeof(int));
    Q->max_size = max_size;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;
}
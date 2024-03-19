#include "fila.h"

int main(){

    Fila *Q;

    Q->max_size = 50;

    Q = CriaFila(Q->max_size);
    DestruirFila(&Q);

    int vazia = FilaVazia;
    
}
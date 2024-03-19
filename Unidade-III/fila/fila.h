#include <stdlib.h>

typedef struct  _fila
{
    int ini, fim;
    int qtde;
    int max_size;
    int *val;
}Fila;

Fila *CriaFila(int max_siz);
void DestruirFila(Fila **Q);
int FilaVazia(Fila *Q);
int FilaCheia(Fila *Q);
int InsereFila(Fila *Q, int elem);
int RemoveFila(Fila *Q);
int ConsultaFila(Fila *Q, int *elem);
typedef struct  _fila
{
    int ini, fim;
    int qtde;
    int max_size;
    int *val;
}Fila;

Fila *CriaFila(int max_siz);
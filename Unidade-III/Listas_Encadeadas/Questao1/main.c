#include "lista.h"

int main(){

    Lista* Lista_encadeada = criar_Lista();
    Lista_encadeada = insere_elemento(Lista_encadeada, 3);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 13);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Imprimir_Elementos(Lista_encadeada);
    int Miores = Elementos_Maior_Que_N(Lista_encadeada, 20);
    printf("%d\n", Miores);
}
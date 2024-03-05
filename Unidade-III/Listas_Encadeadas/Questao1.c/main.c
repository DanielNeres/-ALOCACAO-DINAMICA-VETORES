#include "lista.h"

int main(){

    Lista* Lista_encadeada = criar_Lista();
    Lista_encadeada = insere_elemento(Lista_encadeada, 3);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 13);
    Imprimir_Elementos(Lista_encadeada);
    Lista_encadeada = Eliminar_Elemento(Lista_encadeada, 32);
    Imprimir_Elementos(Lista_encadeada);
}
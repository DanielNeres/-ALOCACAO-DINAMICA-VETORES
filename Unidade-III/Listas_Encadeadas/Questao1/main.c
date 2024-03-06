#include "lista.h"

int main()
{

    Lista *Lista_encadeada = criar_Lista();
    Lista_encadeada = insere_elemento(Lista_encadeada, 3);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 13);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 23);
    Imprimir_Elementos(Lista_encadeada);

    Lista *ultimo = Ultimo_Elemento(Lista_encadeada);
    Imprimir_Elementos(ultimo);

    // Faça algo com o elemento 'ultimo' (por exemplo, imprimir seu valor)
}
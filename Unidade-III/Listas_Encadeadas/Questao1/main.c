#include "lista.h"

int main()
{

    Lista *Lista_encadeada = criar_Lista();
    Lista_encadeada = insere_elemento(Lista_encadeada, 3);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 13);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 23);
    Lista *Lista_encadeada2 = criar_Lista();
    Lista_encadeada2 = insere_elemento(Lista_encadeada2, 1);
    Lista_encadeada2 = insere_elemento(Lista_encadeada2, 2);
    Lista_encadeada2 = insere_elemento(Lista_encadeada2, 3);
    Lista_encadeada2 = insere_elemento(Lista_encadeada2, 4);
    Lista_encadeada2 = insere_elemento(Lista_encadeada2, 5);
    Lista *Lista_Concatenada = Concatenar_Lista(Lista_encadeada, Lista_encadeada2);
    Imprimir_Elementos(Lista_Concatenada);
    Lista_Concatenada = Retira_N_Elementos(Lista_Concatenada, 3);
    printf("lista retirada\n");
    Imprimir_Elementos(Lista_Concatenada);

    // Faça algo com o elemento 'ultimo' (por exemplo, imprimir seu valor)
}
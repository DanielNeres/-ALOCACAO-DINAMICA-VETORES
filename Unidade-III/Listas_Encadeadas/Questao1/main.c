#include "lista.h"

int main()
{

    Lista *Lista_encadeada = criar_Lista();
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 13);
    Lista_encadeada = insere_elemento(Lista_encadeada, 32);
    Lista_encadeada = insere_elemento(Lista_encadeada, 23);
    Lista_encadeada = Retira_N_Elementos(Lista_encadeada, 32);
    printf("lista retirada\n");
    Imprimir_Elementos(Lista_encadeada);
}
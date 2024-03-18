#include "pilha.h"

int main(){

    Pilha *pilha_var = pilha_cria();

    pilha_push(&pilha_var, 4);
    pilha_push(&pilha_var, 9);
    printf("%d\n", pilha_var->valor);

    float valor = pilha_pop(&pilha_var);
    printf("%f\n", valor);

    int vazia = pilha_vazia(pilha_var);
    printf("%d\n", vazia);

    pilha_libera(&pilha_var);
    vazia = pilha_vazia(pilha_var);
    printf("%d\n", vazia);

}
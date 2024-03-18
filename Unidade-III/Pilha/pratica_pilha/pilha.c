#include "pilha.h"

struct pilha
{
    float valor;
    Pilha *proxima;
};

Pilha* pilha_cria(void){

    Pilha *pilha_var = NULL;
    return pilha_var;
}

void pilha_push(Pilha* pilha, float valor){
    
    Pilha *pilha_var = (Pilha *)malloc(sizeof(Pilha));
    if (pilha_var == NULL){
        printf("Erro de alocacao\n");
    }
    pilha_var->valor = valor;
    pilha->proxima = pilha_var;

}


float pilha_pop(Pilha* pilha){

    Pilha *key = pilha;
    float valor = key->valor;
    pilha = pilha->proxima;
    free(key);
    return valor;
}

int pilha_vazia(Pilha* pilha){

    int pilha_vazia;
    if (pilha == NULL){
        return 1;
    }
    return 0;
}

void pilha_libera(Pilha* pilha){

    while (pilha == NULL)
    {
        Pilha *key = pilha;
        pilha = pilha->proxima;
        free(key);
    }
    
}
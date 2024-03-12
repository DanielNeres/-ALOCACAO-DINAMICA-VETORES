#include "pilha.h"
#define N 50
struct pilha
{
    int n;
    float vet[N];
};

Pilha *pilha_cria(){
    Pilha* pilha_var = (Pilha*) malloc(sizeof(Pilha));
    pilha_var->n = 0;
    return pilha_var;
}

void pilha_push(Pilha* pilha_var, float valor){

    if(pilha_var->n){
        exit(1);
    }

    pilha_var->vet[pilha_var->n] = valor;
    pilha_var->n++;
}

float pilha_pop(Pilha* pilha_var){

    float v;
    if (pilha_vazia){
        printf("pilha vazia");
        exit(1);
    }
    v = pilha_var->vet[pilha_var->n -1] = 0;
    pilha_var->n--;
    return v;
}

void pilha_libera(Pilha* pilha_var){
    int contador;
    for(contador = 0; contador < pilha_var->n; contador++){
        free(pilha_var[contador].vet);
    }
    free(pilha_var);
}

pilha_vazia(Pilha* pilha_var){
    return (pilha_var->n == 0);
}
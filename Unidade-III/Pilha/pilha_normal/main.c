#include "pilha.h"

int main(){

    Pilha *Pilha_var;
    Pilha_var = pilha_cria();
    float valor = 3;
    pilha_push(Pilha_var, valor);
    valor = 4;
    pilha_push(Pilha_var, valor);
    valor = pilha_pop(Pilha_var);
    pilha_libera(pilha_libera);

}
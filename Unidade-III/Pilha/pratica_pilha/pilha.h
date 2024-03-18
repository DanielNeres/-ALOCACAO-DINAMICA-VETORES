#ifndef PILHA_H
#define PILHA_H


#include <stdlib.h>
#include <stdio.h>

typedef struct Pilha {
    float valor;
    struct Pilha *proxima;
} Pilha;

Pilha* pilha_cria(void);
void pilha_push(Pilha **pilha, float valor);
float pilha_pop(Pilha **pilha);
int pilha_vazia(Pilha *pilha);
void pilha_libera(Pilha **pilha);

#endif // PILHA_H
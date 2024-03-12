#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

/**
 * função que cria uma pilha
 * @return Pilha*
*/
Pilha* pilha_cria();

/**
 * adiciona um novo elemento a pilha
 * @param Pilha*
*/
void pilha_push(Pilha* pilha_var, float valor);

float pilha_pop(Pilha* pilha_var);

int pilha_vazia(Pilha* pilha_var);

void pilha_libera(Pilha* pilha);
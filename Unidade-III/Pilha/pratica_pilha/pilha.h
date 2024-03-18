#include <stdlib.h>
#include <stdio.h>

typedef struct pilha Pilha;

Pilha* pilha_cria(void);
void pilha_push(Pilha* ppilha, float valor);
float pilha_pop(Pilha* ppilha);
int pilha_vazia(Pilha* pilha);
void pilha_libera(Pilha* pilha);
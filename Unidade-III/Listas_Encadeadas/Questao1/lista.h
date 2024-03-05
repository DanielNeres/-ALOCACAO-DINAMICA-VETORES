#include <stdlib.h>
#include <stdio.h>

typedef struct lista Lista;
 

/**
 * Função para criar o primeiro elemento da lista
 * @return Lista
*/
Lista* criar_Lista(void);

/**
 * Função para criar novo elemento
 * @return Lista
*/
Lista *insere_elemento(Lista *lista, int valor);

/**
 * Função para imprimir os elementos da lista
 * @return Nada
*/
void Imprimir_Elementos(Lista *lista);

/**
 * Função para buscar um elmento na lista
 * @return Nada
*/
void Busca_Elemento(Lista *lista, int Busca);

/**
 * Função para eliminar um elemento da lista
 * @return Lista
*/
Lista *Eliminar_Elemento(Lista *lista, int Apagar);

/*1) Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l,
int n);*/
int Elementos_Maior_Que_N(Lista *lista, int N);

/*2) Implemente uma função que tenha como valor de retorno o ponteiro para o
último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo(Lista* l);*/
Lista *Ultimo_Elemento(Lista *lista);

/*3) Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:
Essa função deve obedecer ao protótipo: Lista* contatena(Lista* l1, Lista* l2);*/
Lista *Concatenar_Lista(Lista *lista1, Lista *lista2);

/*4) Considere listas de valores inteiros e implemente uma função que receba como
parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao
protótipo: Lista* retira_n(Lista* l, int n);*/
Lista *Retira_Elemnetos_N(Lista *lista, int N);
#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *arquivo = fopen("Entrada_q2.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        exit(1);
    }
    int tamanhovetor;
    printf("digite o tamanho do vetor");
    scanf("%d", &tamanhovetor);
    int *vetor[10] = malloc(sizeof(int) * tamanhovetor);
}
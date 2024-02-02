/*Questão 2) Escreva um programa em C que preencha um vetor de 10 inteiros com informações
vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
como a média dos elementos do vetor, como ilustrado a seguir.

Exemplo oficial:
10
2
8
1
12
8
10
5
4
19
*/

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
    printf("digite o tamanho do vetor\n");
    scanf("%d", &tamanhovetor);
    int *vetor = malloc(sizeof(int) * tamanhovetor);
    for(;tamanhovetor > 0;tamanhovetor--){
    printf("digite um numero");
    scanf("%d", vetor[tamanhovetor]);
    fprintf(arquivo, "%d", vetor[tamanhovetor]);
    }
    fclose(arquivo);
    return 0;
}
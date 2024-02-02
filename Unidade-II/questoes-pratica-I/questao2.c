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

int main()
{

    FILE *arquivo1 = fopen("Entrada_q2.txt", "wt");
    if (arquivo1 == NULL)
    {
        printf("Erro!!!");
        exit(1);
    }
    int tamanhovetor, media, menornumero, maiornumero;
    printf("digite o tamanho do vetor\n");
    scanf("%d", &tamanhovetor);
    int *vetor = malloc(sizeof(int) * tamanhovetor);
    for (; tamanhovetor > 0; tamanhovetor--)
    {
        printf("digite um numero\n");
        scanf("%d", &vetor[tamanhovetor]);
        fprintf(arquivo1, "%d", vetor[tamanhovetor]);
    }

    fclose(arquivo1);

    fopen("Entrada_q2.txt", "rt");
    FILE *arquivo2 = fopen("Saida_q2", "wr");
    menornumero = vetor[tamanhovetor];
    maiornumero = vetor[tamanhovetor];
    for (; tamanhovetor > 0; tamanhovetor--)
    {
        media = vetor[tamanhovetor];
    if(vetor[tamanhovetor] < menornumero){
        menornumero = vetor[tamanhovetor];
    } else if(vetor[tamanhovetor] > maiornumero){
        maiornumero = vetor[tamanhovetor];
    }
    }
    fprintf(arquivo2, "media = %d", media/tamanhovetor);
    fprintf(arquivo2, "maior nummero = %d", maiornumero);
    fprintf(arquivo2, "menor numero = %d", menornumero);
    return 0;
}
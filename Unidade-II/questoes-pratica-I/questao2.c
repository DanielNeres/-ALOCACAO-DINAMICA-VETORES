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
    int tamanhovetor, media = 0, menornumero, maiornumero, i;
    printf("digite o tamanho do vetor\n");
    scanf("%d", &tamanhovetor);
    int *vetor = malloc(sizeof(int) * tamanhovetor);
    if(vetor == NULL){
        exit(1);
    }
    for (i = 0; i < tamanhovetor; i++)
    {
        printf("digite um numero\n");
        scanf("%d", &vetor[i]);
        fprintf(arquivo1, "%d\n", vetor[i]);
    }

    fclose(arquivo1);

    fopen("Entrada_q2.txt", "rt");
    FILE *arquivo2 = fopen("Saida_q2.txt", "wt");
    menornumero = vetor[0];
    maiornumero = vetor[0];
    for (i = 0; i < tamanhovetor; i++)
    {
        media += vetor[i];
        if (vetor[i] < menornumero)
        {
            menornumero = vetor[i];
        }
        else if (vetor[i] > maiornumero)
        {
            maiornumero = vetor[i];
        }
    }
    fprintf(arquivo2, "media = %d\n", media / tamanhovetor);
    fprintf(arquivo2, "maior nummero = %d\n", maiornumero);
    fprintf(arquivo2, "menor numero = %d\n", menornumero);
    fclose(arquivo1);
    fclose(arquivo2);
    return 0;
}
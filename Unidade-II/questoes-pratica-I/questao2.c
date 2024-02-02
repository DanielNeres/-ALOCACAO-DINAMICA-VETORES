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
        printf("Erro ao abrir o arquivo de entrada!");
        exit(1);
    }

    int tamanhovetor, media = 0, menornumero, maiornumero, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhovetor);

    int *vetor = malloc(sizeof(int) * tamanhovetor);
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória!");
        exit(1);
    }

    for (i = 0; i < tamanhovetor; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        fprintf(arquivo1, "%d\n", vetor[i]);
    }

    fclose(arquivo1);

    arquivo1 = fopen("Entrada_q2.txt", "rt");
    if (arquivo1 == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada para leitura!");
        exit(1);
    }

    FILE *arquivo2 = fopen("Saida_q2.txt", "wt");
    if (arquivo2 == NULL)
    {
        printf("Erro ao abrir o arquivo de saída!");
        exit(1);
    }

    menornumero = vetor[0];
    maiornumero = vetor[0];

    for (i = 0; i < tamanhovetor; i++)
    {
        fscanf(arquivo1, "%d", &vetor[i]);
    }

    for (i = 0; i < tamanhovetor; i++)
    {
        media += vetor[i];

        if (vetor[i] < menornumero)
        {
            menornumero = vetor[i];
        }
        if (vetor[i] > maiornumero)
        {
            maiornumero = vetor[i];
        }
    }

    fprintf(arquivo2, "Media = %.2f\n", (float)media / tamanhovetor);
    fprintf(arquivo2, "Maior numero = %d\n", maiornumero);
    fprintf(arquivo2, "Menor numero = %d\n", menornumero);

    fclose(arquivo1);
    fclose(arquivo2);
    free(vetor);

    return 0;
}
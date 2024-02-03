#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("Entrada_q1.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
    char nome[40];
    int QuantidadeAlunos, i, j;
    float nota;
    float notas[3];
    printf("digite a quantidade de alunos\n");
    scanf("%d", &QuantidadeAlunos);
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        printf("digite o nome do aluno %d:\t", i);
        scanf(" %s", nome);
        fprintf(arquivo, "%s\t", nome);
        for (j = 1; j <= 3; j++)
        {
            printf("digite a nota %d: \t", j);
            scanf("%f", &nota);
            fprintf(arquivo, "\t%.2f", nota);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}
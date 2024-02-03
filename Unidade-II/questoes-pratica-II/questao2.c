#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("NotasAlunos.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
    int QuantidadeNotas, QuantidadeAlunos, i, j;
    printf("digite quantas notas os alunos tem alunos\n");
    float *notas = malloc(sizeof(float)*QuantidadeNotas);
    printf("digite a quantidade de alunos\n");
    scanf("%d", &QuantidadeAlunos);
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        fprintf(arquivo, "notas do aluno %d\n", i);
        for (j = 0; j <= QuantidadeNotas; j++)
        {
            printf("digite a nota %d: \t", j + 1);
            scanf("%f", &notas[j]);
            fprintf(arquivo, "\t%.2f", notas[j]);
        }
        fprintf(arquivo, "\n\n");
    }
    fclose(arquivo);
}
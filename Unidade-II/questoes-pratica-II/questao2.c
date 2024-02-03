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
    int QuantidadeNotas, QuantidadeAlunos, i;
    printf("digite quantas notas os alunos tem alunos\n");
    float *notas = malloc(sizeof(float)*QuantidadeNotas);
    printf("digite a quantidade de alunos\n");
    scanf("%d", &QuantidadeAlunos);
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("digite a nota %d: \t", j);
            scanf("%f", &nota);
            fprintf(arquivo, "\t%.2f", nota);
        }
        fprintf(arquivo, "\n\n");
    }
    fclose(arquivo);
}
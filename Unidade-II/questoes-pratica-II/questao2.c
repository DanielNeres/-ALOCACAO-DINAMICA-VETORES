/*2. Implemente um programa em C para ler o nome e as notas de um n´umero N de alunos e armazená-los
em um arquivo.
*/

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
    scanf("%d", &QuantidadeNotas);
    float *notas = malloc(sizeof(float)*QuantidadeNotas);
    printf("digite a quantidade de alunos\n");
    scanf("%d", &QuantidadeAlunos);
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        system("cls");
        fprintf(arquivo, "notas do aluno %d\n", i);
        printf("aluno %d\n", i);
        for (j = 0; j < QuantidadeNotas; j++)
        {
            printf("digite a nota %d: \t", j + 1);
            scanf("%f", &notas[j]);
            fprintf(arquivo, "%.2f\t", notas[j]);
        }
        fprintf(arquivo, "\n\n");
    }
    fclose(arquivo);
}
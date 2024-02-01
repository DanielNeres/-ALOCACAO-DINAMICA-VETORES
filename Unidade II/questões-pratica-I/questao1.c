#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("Entrada.txt", "wt");
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
        scanf("%s", nome);
        fgets(nome, 40, stdin);
        nome[strcspn(nome, "\n")] = 0;
        for (j = 1; j <= 3; j++)
        {
            printf("digite a nota %d: \t", j);
            scanf("%f", &nota);
            fprintf(arquivo, "\t%f", nota);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);

    fopen("Entrada.txt", "rt");
    FILE *arquivo2 = fopen("Saida.txt", "wt");
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        fscanf(arquivo, "%50[^\t] \t%f \t%f \t%f", nome, notas[0], notas[1], notas[2]);
        fprintf(arquivo2, "%s\t", nome);
        fprintf(arquivo2, "%f\t", (notas[0] + notas[1] + notas[2]) / 3);
        if ((notas[0] + notas[1] + notas[2]) / 3 >= 7)
        {
            fprintf(arquivo2, "Aprovado\n");
        }
        else
        {
            fprintf(arquivo2, "Reprovado\n");
        }
    }
    fclose(arquivo);
    fclose(arquivo2);
    return 0;
}
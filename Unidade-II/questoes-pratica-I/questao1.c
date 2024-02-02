/*Questão 1) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir.

exemplo oficial:
Amanda	7.0	6.5	9.0
Alberto	5.0	7.0	3.5
Jane	8.0	6.8	4.5
Igor	9.0	9.0	8.5
Samara	10.0	10.0	7.0
Maria Luiza	10.0	10.0	10.0
Cesar 	10.0	9.0	8.0
Pedro Felipe	7.0	7.0	7.0
*/

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

    arquivo = fopen("Entrada_q1.txt", "rt");
    FILE *arquivo2 = fopen("Saida_q1.txt", "wt");
    for (i = 1; QuantidadeAlunos >= i; i++)
    {
        fscanf(arquivo, " %50[^\t] \t%f \t%f \t%f", nome, &notas[0], &notas[1], &notas[2]);
        fprintf(arquivo2, "%s\t", nome);
        fprintf(arquivo2, "%.2f\t", (notas[0] + notas[1] + notas[2]) / 3);
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
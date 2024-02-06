#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno *recebe_dados(void)
{
    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno));
    if (estudante == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }
    printf("Informe o nome do aluno\n");
    scanf(" %[^\n]", estudante->nome);

    printf("Informe a matricula do aluno\n");
    scanf(" %d", &estudante->matricula);

    printf("Informe o ira do aluno\n");
    scanf(" %f", &estudante->IRA);

    return estudante;
}

void imprimir_dados(Aluno *imprimir, int QuantidadeAlunos)
{
    int i;
    for(i = 0; i < QuantidadeAlunos; i++){
    printf("\nnome = %s\n", imprimir[i].nome);
    printf("matricula = %d\n", imprimir[i].matricula);
    printf("IRA = %f\n", imprimir[i].IRA);
    }
}

void liberar_memoria(Aluno *liberar)
{
    free(liberar);
    printf("\nmemoria liberada com sucesso\n");
}

void matricula_N_alunos(Aluno *estudante, int Quantidade_Alunos)
{
    int  i;
    for (i = 0; i < Quantidade_Alunos; i++)
    {
        printf("\nDados do aluno %d\n", i + 1);
        printf("Informe o nome do aluno\n");
        scanf(" %[^\n]", estudante[i].nome);

        printf("Informe a matricula do aluno\n");
        scanf("%d", &estudante[i].matricula);

        printf("Informe o ira do aluno\n");
        scanf("%f", &estudante[i].IRA);
    }
}
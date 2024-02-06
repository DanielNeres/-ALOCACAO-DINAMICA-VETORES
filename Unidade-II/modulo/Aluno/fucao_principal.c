#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int QuantidadeAlunos;
    printf("Informe a quantidade de alunos\n");
    scanf(" %d", &QuantidadeAlunos);

    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno*) * QuantidadeAlunos);
    if (estudante == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }
    matricula_N_alunos(estudante, QuantidadeAlunos);
    imprimir_dados(estudante, QuantidadeAlunos);
    liberar_memoria(estudante);

    return 0;
}
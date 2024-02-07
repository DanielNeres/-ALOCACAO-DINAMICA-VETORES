#include <stdio.h>
#include "TAD2.h"

struct funcionario
{
    char Funcional[3];
    char Nome[60];
    char Departamento;
    float Salario;
};

void copia_dados(FILE *fl, int n, Funcionario **pessoal)
{

    int i;
    for (i = 0; i < n; i++)
    {
        fopen(fl, "wr");
        printf("Digite os dados do Funcionario %d\n\n", i + 1);
        printf("Digite o funcional do Funcionario: \t");
        scanf(" %[^\n]", pessoal[i]->Funcional);

        printf("Digite o nome do Funcionario: \t");
        scanf(" %[^\n]", pessoal[i]->Nome);

        printf("Digite o Departamento do Funcionario: \t");
        scanf(" %c", pessoal[i]->Departamento);

        printf("Digite o salario do Funcionario: \t");
        scanf(" %[^\n]", pessoal[i]->Salario);
    }
}

void imprime_folha_pagamento(int n, Funcionario ** pessoal, char depto){

}
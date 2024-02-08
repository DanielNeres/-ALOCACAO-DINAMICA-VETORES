#include <stdio.h>
#include <stdlib.h>
#include "TAD2.h"

int main(){

    int n;
    char depto;
    printf("Digite a quantidade de funcionarios\n");
    scanf("%d", &n);
    Funcionario **pessoal = (Funcionario **)malloc(sizeof(Funcionario*) * n);
    FILE *fl = fopen("Funcionario.txt", "wr");
    copia_dados(fl, n, pessoal);
    printf("Digite o departento\n");
    scanf(" %c", &depto);
    depto = toupper(depto);
    imprime_folha_pagamento(n, pessoal, depto);

    return 0;
}
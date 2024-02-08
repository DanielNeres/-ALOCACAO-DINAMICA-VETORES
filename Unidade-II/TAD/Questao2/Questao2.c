#include <stdio.h>
#include <stdlib.h>
#include "TAD2.h"

int main(){

    int n;
    printf("Digite a quantidade de funcionarios");
    scanf("%d", &n);
    Funcionario **pessoal = (Funcionario **)malloc(sizeof(Funcionario*) * n);
    FILE *fl = fopen("Funcionario.txt", "wr");
    void copia_dados(FILE *fl, int n, Funcionario **pessoal);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "TAD2.h"

int main(){

    int quanditade_funcionarios;
    printf("Digite a quantidade de funcionarios");
    scanf("%d", &quanditade_funcionarios);
    Funcionario **pessoal;
    void copia_dados(FILE *fl, int n, Funcionario **pessoal);
    return 0;
}
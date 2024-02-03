/*1. Faça um programa em C que solicita ao usuário informaçõoes de funcionários via teclado. 
As informações digitadas pelo o usuário são: id, nome e salário do funcionário. Armazene 
as informações digitadas pelo usuário em um arquivo texto.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int ID;
    float Salario;
    char nome[50];
}Funcionarios;
 

int main()
{
    FILE *arquivo = fopen("Funcionarios.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
    int QuantidadeFuncionarios, i;
    printf("digite a quantidade de funcionarios\n");
    scanf("%d", &QuantidadeFuncionarios);
    Funcionarios funcionarios_var;
    for (i = 1; QuantidadeFuncionarios >= i; i++)
    {
        fprintf(arquivo, "Dados do Funcionario %d\n", i);

        printf("digite o nome do funcionario %d:\n", i);
        scanf(" %s", funcionarios_var.nome);
        fprintf(arquivo, "Nome: %s\t", funcionarios_var.nome);

        printf("digite o ID do funcionario %d:\n", i);
        scanf("%d", &funcionarios_var.ID);
        fprintf(arquivo, "ID: %d\n", funcionarios_var.ID);

        printf("digite o salario do funcionario %d:\n", i);
        scanf("%f", &funcionarios_var.Salario);
        fprintf(arquivo, "Salario:  R$%.2f\n\n", funcionarios_var.Salario);
        system("cls");
    }
    fclose(arquivo);
}
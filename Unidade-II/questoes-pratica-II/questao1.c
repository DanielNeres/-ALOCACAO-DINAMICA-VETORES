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
        printf("digite o nome do funcionario %d:\t", i);
        scanf(" %s", funcionarios_var.nome);
        fprintf(arquivo, "%s\t", funcionarios_var.nome);
        printf("digite o ID do funcionario %d:\t", i);
        scanf("%d", funcionarios_var.ID);
        fprintf(arquivo, "%d\n", funcionarios_var.ID);
        printf("digite o salario do funcionario %d:\t", i);
        scanf("%f", funcionarios_var.Salario);
        fprintf(arquivo, "%f\n", funcionarios_var.Salario);
    }
    fclose(arquivo);
}
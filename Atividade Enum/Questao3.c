#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    janeiro = 1,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
} tipo;

typedef struct
{
    int dia;
    int mes;
    int ano;

} data;

void preencher(data *data_var);
void imprimir(data *data_var);

int main()
{
    data *data_var = malloc(sizeof(data));
    preencher(data_var);
    imprimir(data_var);
    free(data_var);
    return 0;
}

void preencher(data *data_var)
{
    int escolha;
    printf("Digite o dia: ");
    scanf("%d", &data_var->dia);
    printf("digite o mes:\n");
    scanf("%d", data_var->mes);
    printf("digite o ano:\n");
    scanf("%d", &data_var->mes);
}

void imprimir(data *data_var)
{
    printf("dia: %02d\n", data_var->dia);
    printf("mes: %02d\n", data_var->mes);
    switch (data_var->dia)
    {
    case janeiro:
        printf("01\n");
        break;
    case fevereiro:
        printf("02\n");
        break;
    case marco:
        printf("03\n");
        break;
    case abril:
        printf("04\n");
        break;
    case maio:
        printf("05\n");
        break;
    case junho:
        printf("06\n");
        break;
    case julho:
        printf("07\n");
        break;
    case agosto:
        printf("08\n");
        break;
    case setembro:
        printf("09\n");
        break;
    case outubro:
        printf("10\n");
        break;
    case novembro:
        printf("11\n");
        break;
    case dezembro:
        printf("12\n");
        break;
    default:
        exit(1);
        break;
    }
     printf("ano: %04d", data_var->dia);
}


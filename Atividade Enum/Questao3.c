#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    janeiro = 1,
    fevereiro,
    março,
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
    char mes[15];
    int ano;

} data;

void preencher(data *p)
{
    // funÃ§Ã£o que preenche os dados de uma variavel tipo pessoa (struct)
    int escolha;
    printf("Digite o dia: ");
    scanf("%d", data_var->dia);
    printf("digite o mes:\n");
    scanf(" [^\n]", data_var->mes);
    printf("digite o ano:\n");
    scanf("%d", data_var->mes);
}

void imprimir(data *p)
{
    printf("dia: %s\n", data_var->dia);
    printf("mes: %f\n", data_var->mes);
    printf("tipo: ");
    switch (escolha)
    {
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    case janeiro:
        printf("01\n");
        break;
    default:
        exit(1);
        break;
    }
}

int main()
{
    data *data_var = malloc(sizeof(data));
    preencher(data_var);
    imprimir(data_var);
    free(data_var);
    return 0;
}
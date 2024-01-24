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
    char mes[20];
    int mes_numero;
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
    printf("Digite o dia: ");
    scanf("%d", &data_var->dia);
    printf("digite o mes:\n");
    scanf(" %[^\n]", data_var->mes);
    if (strcmp(data_var->mes, "janeiro") == 0) {
        data_var->mes_numero = janeiro;
    } else if (strcmp(data_var->mes, "fevereiro") == 0) {
        data_var->mes_numero = fevereiro;
    } else if (strcmp(data_var->mes, "marco") == 0) {
        data_var->mes_numero = marco;
    } else if (strcmp(data_var->mes, "abril") == 0) {
        data_var->mes_numero = abril;
    } else if (strcmp(data_var->mes, "maio") == 0) {
        data_var->mes_numero = maio;
    } else if (strcmp(data_var->mes, "junho") == 0) {
        data_var->mes_numero = junho;
    } else if (strcmp(data_var->mes, "julho") == 0) {
        data_var->mes_numero = julho;
    } else if (strcmp(data_var->mes, "agosto") == 0) {
        data_var->mes_numero = agosto;
    } else if (strcmp(data_var->mes, "setembro") == 0) {
        data_var->mes_numero = setembro;
    } else if (strcmp(data_var->mes, "outubro") == 0) {
        data_var->mes_numero = outubro;
    } else if (strcmp(data_var->mes, "novembro") == 0) {
        data_var->mes_numero = novembro;
    } else if (strcmp(data_var->mes, "dezembro") == 0) {
        data_var->mes_numero = dezembro;
    } else {
        printf("Mes nao reconhecido.\n");
        exit(1);
    }
    printf("digite o ano:\n");
    scanf("%d", &data_var->ano);
}

void imprimir(data *data_var)
{
    printf("dia: %02d\n", data_var->dia);
    printf("mes: %02d\n", data_var->mes_numero);
	printf("ano: %04d", data_var->dia);
}

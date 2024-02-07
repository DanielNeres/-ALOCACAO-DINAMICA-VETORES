#include <stdio.h>
#include <stdlib.h>
#include "TAD1.h"

typedef struct
{
	float preco;
	char local[60];
	char atracao[60];
} Ingresso;

void preencher(Ingresso * i, int QuantidadeIngresso)
	{
		printf("preencha dados do ingresso %d\n", QuantidadeIngresso + 1);
		printf("digite o local\n");
		scanf(" %[^\n]", i[QuantidadeIngresso].local);
		printf("digite a atracao\n");
		scanf(" %[^\n]", i[QuantidadeIngresso].atracao);
		printf("digite o preco\n");
		scanf("%f", &i[QuantidadeIngresso].preco);
	}

void imprimir(Ingresso * i, int QuantidadeIngresso)
	{
		int j;
		for (j = 0; j < QuantidadeIngresso; j++)
		{
			printf("dados do ingresso %d\n", j + 1);
			printf("local: %s\n", i[j].local);
			printf("atracao: %s\n", i[j].atracao);
			printf("preco: R$%f\n\n", i[j].preco);
		}
	}

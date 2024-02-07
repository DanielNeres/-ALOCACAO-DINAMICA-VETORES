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

void alterar_preco(Ingresso * i, float valor, int j)
	{
		i[j].preco = valor;
	}

void imprimir_menor_maior_preco(int n, Ingresso * i)
	{
		int j, Maiorpreco = 0, Menorpreco = 0;
		for (j = 1; j < n; j++)
		{
			if (i[j].preco < i[Menorpreco].preco)
			{
				Menorpreco = j;
			}
			if (i[j].preco > i[Maiorpreco].preco)
			{
				Maiorpreco = j;
			}
		}
		printf("%s e a atracao mais barata, com o preco de R$%f;\n", i[Menorpreco].atracao, i[Menorpreco].preco);
		printf("%s e a atracao mais cara, com o preco de R$%f.\n", i[Maiorpreco].atracao, i[Maiorpreco].preco);
	}
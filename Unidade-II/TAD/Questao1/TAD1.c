#include <stdio.h>
#include <stdlib.h>
#include "TAD1.h"

typedef struct
{
	float preco;
	char local[60];
	char atracao[60];
} ingresso;

void menu()
{
	int escolhamenu, MaxIngresso, QuantidadeIngresso = 0, Menu = 0, j;
	float valor;
	printf("digite a quantidade de ingressos maxima\n");
	scanf("%i", &MaxIngresso);
	ingresso *i = (ingresso *)malloc(sizeof(ingresso) * MaxIngresso);
	if (i == NULL)
	{
		exit(1);
	}
	system("cls");
	do
	{
		printf("MENU\n");
		printf("1. preencher informacoes do ingresso\n");
		printf("2. imprimir informacoes do ingresso\n");
		printf("3. mudar preco dos ingressos\n");
		printf("4. imprecao do Ingresso com maior e menor preco\n");
		printf("escolha o numero de uma das opicoes acima\n");

		scanf("%i", &escolhamenu);
		switch (escolhamenu)
		{
		case 1:
			if (QuantidadeIngresso == MaxIngresso)
			{
				system("cls");
				printf("quantidade maxima de ingressos atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			preenche(i, QuantidadeIngresso);
			QuantidadeIngresso++;
			Menu = RetornarMenu();
			break;
		case 2:
			if (QuantidadeIngresso == 0)
			{
				system("cls");
				printf("nenhum ingresso cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprime(i, QuantidadeIngresso);
			Menu = RetornarMenu();
			break;
		case 3:
			if (QuantidadeIngresso == 0)
			{
				system("cls");
				printf("nenhum ingresso cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			printf("escolha o ingresso entre os numeros ");
			for (j = 1; j <= QuantidadeIngresso; j++)
			{
				printf("%d ", j);
			}
			printf("para mudar o preco\n");
			scanf("%f", &valor);
			printf("digite o novo preco do ingresso\n");
			scanf("%f", &valor);
			altera_preco(i, valor, j);
			Menu = RetornarMenu();
			break;
		case 4:
			if (QuantidadeIngresso == 0)
			{
				system("cls");
				printf("nenhum ingresso cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprime_menor_maior_preco(QuantidadeIngresso, i);
			Menu = RetornarMenu();
			break;
		default:
			exit(1);
			break;
		}

	} while (Menu == 1);
	free(i);
}

int RetornarMenu()
{
	char retornoMenu;
	printf("caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	while (getchar() != '\n')
		;
	retornoMenu = getchar();
	if (retornoMenu == 'M' || retornoMenu == 'm')
	{
		system("cls");
		return 1;
	}
	else
	{
		system("cls");
		return 0;
	}
}

void preencher(ingresso * i, int QuantidadeIngresso)
	{
		printf("preencha dados do ingresso %d\n", QuantidadeIngresso + 1);
		printf("digite o local\n");
		scanf(" %[^\n]", i[QuantidadeIngresso].local);
		printf("digite a atracao\n");
		scanf(" %[^\n]", i[QuantidadeIngresso].atracao);
		printf("digite o preco\n");
		scanf("%f", &i[QuantidadeIngresso].preco);
	}

void imprimir(ingresso * i, int QuantidadeIngresso)
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

void alterar_preco(ingresso * i, float valor, int j)
	{
		i[j].preco = valor;
	}

void imprimir_menor_maior_preco(int n, ingresso * i)
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
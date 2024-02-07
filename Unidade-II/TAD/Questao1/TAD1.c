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

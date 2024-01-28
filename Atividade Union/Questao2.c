/*2. Escreva um programa que implementa uma struct Produto com os campos nome, preço e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union
{
	char Tipo[20];
} tipo;

typedef struct
{
	char nome[20];
	float preco;
	tipo var_tipo;
} produto;

void preencher(produto *p)
{
	// função que preenche os dados de uma variavel tipo pessoa (struct)
	int escolha;
	printf("Digite o nome: ");
	scanf(" %[^\n]", p->nome);
	printf("Digite o preco: ");
	scanf("%f", &p->preco);
	printf("digite 1 para ALIMENTO ou 2 para BEBIDA ou 3 para ELETRONICO\n");
	scanf("%d", &escolha);
	switch(escolha)
	{
	case 1:
		strcpy(p->var_tipo.Tipo, "ALIMENTO");
		break;
	case 2:
		strcpy(p->var_tipo.Tipo, "BEBIDA");
		break;
	case 3:
		strcpy(p->var_tipo.Tipo, "ELETRONICO");
		break;
	default:
		exit(1);
		break;
	}
}

void imprimir(produto *p){
	printf("nome: %s\n", p->nome);
	printf("preco: %.2f\n", p->preco);
	printf("tipo: %s\n", p->var_tipo.Tipo);
}

int main()
{
	produto *P = malloc(sizeof(produto));
	preencher(P);
	imprimir(P);
	free(P);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union
{
	char ALIMENTO[20];
	char BEBIDA[20];
	char ELETRONICO[20];
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
		strcpy(p->var_tipo.ALIMENTO, "ALIMENTO");
		break;
	case 2:
		strcpy(p->var_tipo.BEBIDA, "BEBIDA");
		break;
	case 3:
		strcpy(p->var_tipo.ELETRONICO, "ELETRONICO");
		break;
	default:
		exit(1);
		break;
	}
}

void imprimir(produto *p){
	printf("nome: %s\n", p->nome);
	printf("preco: %f\n", p->preco);
	printf("tipo: %s\n", p->var_tipo.ALIMENTO);
}

int main()
{
	produto *P = malloc(sizeof(produto));
	preencher(P);
	imprimir(P);
	free(P);
	return 0;
}

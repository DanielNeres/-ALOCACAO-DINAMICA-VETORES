#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum
{
ALIMENTO = 1,
BEBIDA = 2,
ELETRONICO = 3
} tipo;

typedef struct
{
	char nome[20];
	float preco;
} produto;

int preencher(produto *p)
{
	// funÃ§Ã£o que preenche os dados de uma variavel tipo pessoa (struct)
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
		return escolha;
		break;
	case 2:
		return escolha;
		break;
	case 3:
		return escolha;
		break;
	default:
		exit(1);
		break;
	}
}

void imprimir(produto *p, int escolha){
	printf("nome: %s\n", p->nome);
	printf("preco: %f\n", p->preco);
	printf("tipo: ");
		switch(escolha)
	{
	case ALIMENTO:
		printf("ALIMENTO\n");
		break;
	case BEBIDA:
		printf("BEBIDA\n");
		break;
	case ELETRONICO:
		printf("ELETRONICO\n");
		break;
	default:
		exit(1);
		break;
	}
}

int main()
{
	produto *P = malloc(sizeof(produto));
	int escolha = preencher(P);
	imprimir(P, escolha);
	free(P);
	return 0;
}
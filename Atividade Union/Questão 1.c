#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum
{
	MASCULINO = 1, FEMININO
} genero;

typedef struct
{
	char nome[20];
	int idade;
	genero var_genero;
} pessoa;

int preencher(pessoa *p)
{
	// função que preenche os dados de uma variavel tipo pessoa (struct)
	int escolha;
	printf("Digite o nome: ");
	scanf(" %[^\n]", p->nome);
	printf("Digite a idade: ");
	scanf("%d", &p->idade);
	printf("digite 1 para MASCULINO ou 2 para FEMININO\n");
	scanf("%d", &escolha);
	switch(escolha)
	{
	case 1:
		return escolha;
		break;
	case 2:
		return escolha;
		break;
	default:
		exit(1);
		break;
	}
}

void imprimir(pessoa *p, int escolha){
	printf("nome: %s\n", p->nome);
	printf("idade: %d\n", p->idade);
	printf("Genero: %s\n", p->var_genero.escolha);
}

int main()
{
	int escolha;
	escolha = preencher();
	pessoa *P = malloc(sizeof(pessoa));
	preencher(P);
	imprimir(P, escolha);
	free(P);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union
{
	char Masculino[20];
	char Feminino[20];
} genero;

typedef struct
{
	char nome[20];
	int idade;
	genero var_genero;
} pessoa;

void preencher(pessoa *p)
{
	// fun��o que preenche os dados de uma vari�vel tipo pessoa (struct)
	int escolha;
	printf("Digite o nome: ");
	scanf(" %[^\n]", p->nome);
	printf("Digite a idade: ");
	scanf("%d", &p->idade);
	printf("digite 1 para MASCULINO ou 2 para FEMININO\n");
	scanf("%d", &escolha);
	switch(escolha)
	{
	case 1:
		strcpy(p->var_genero.Masculino, "Masculino");
		break;
	case 2:
		strcpy(p->var_genero.Feminino, "Feminino");
		break;

	default:
		exit(1);
		break;
	}
}

void imprimir(pessoa *p){
	printf("nome: %s\n", p->nome);
	printf("idade: %d\n", p->idade);
	printf("Genero: %s\n", p->var_genero.Feminino);
}

int main()
{
	pessoa *P = malloc(sizeof(pessoa));
	preencher(P);
	imprimir(P);
	free(P);
	return 0;
}
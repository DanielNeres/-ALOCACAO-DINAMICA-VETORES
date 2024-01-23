#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum
{
	MASCULINO, FEMININO
} genero;

typedef struct
{
	char nome[20];
	int idade;
	genero var_genero;
} pessoa;

void preencher(pessoa *p)
{
	// funÃ§Ã£o que preenche os dados de uma variavel tipo pessoa (struct)
	printf("Digite o nome: ");
	scanf(" %[^\n]", p->nome);
	printf("Digite a idade: ");
	scanf("%d", &p->idade);
	printf("digite 0 para MASCULINO ou 1 para FEMININO\n");
	scanf("%d", &p->var_genero);
}

void imprimir(pessoa *p){
	printf("nome: %s\n", p->nome);
	printf("idade: %d\n", p->idade);
	printf("Genero: %s\n", p->var_genero == MASCULINO? "MASCULINO" : "FEMININO");
}

int main()
{
	pessoa *P = malloc(sizeof(pessoa));
	preencher(P);
	imprimir(P);
	free(P);
	return 0;
}
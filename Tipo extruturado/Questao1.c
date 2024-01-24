#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	float preço;
	char local[30];
	char atracao[30];
} Ingresso;

void preenche(Ingresso* i);
void imprime(Ingresso* i);
void altera_preco(Ingresso* i, float valor);
void imprime_menor_maior_preco(int n, Ingresso* vet);


int main()
{
	int quantidadeIngresso;
	Ingresso *i = (Ingresso*)malloc(sizeof(Ingresso) * quantidadeIngresso)
}

void preenche(Ingresso* i){
	printf("preencha dados do Ingresso %d\n", quantidadefuncionarios + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].nome);
	printf("digite a cargo\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].cargo);
	printf("digite a identificacao\n");
	scanf("%d", &Funcionario[quantidadefuncionarios].identificador);
	printf("digite o salario\n");
	scanf("%f", &Funcionario[quantidadefuncionarios].salario);
}

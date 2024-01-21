#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	char cargo[20];
	int identificador;
	float salario;
} Dadosfuncionario;

void preencher(Dadosfuncionario *Funcionario);
void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void mudarsalario(Dadosfuncionario *Funcionario);

int main(){
	int escolhamenu, quantidadefuncionarios = 0;
	Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario));
	if(Funcionario == NULL){
		exit(1);
	}
	printf("\tMENU\n");
	printf("1. preencher informacoes do funcionario\n");
	printf("2. imprimir informacoes do funcionario\n");
	printf("3. preencher informacoes do funcionario\n");
	printf("escolha o numero de uma das opicoes acima\n");

	scanf("%i", &escolhamenu);
	switch(escolhamenu){
	case 1:
		preencher(Funcionario);
		quantidadefuncionarios++;
		break;
	case 2:
		imprimir(Funcionario, quantidadefuncionarios);
		break;
	case 3:
		mudarsalario(Funcionario);
	default:
		exit(1);
		break;
	}
	return 0;
}

void preencher(Dadosfuncionario *Funcionario){
	printf("digite o nome\n");
	scanf(" %[^\n]", (*Funcionario).nome);
	printf("digite a cargo\n");
	scanf(" %[^\n]", (*Funcionario).cargo);
	printf("digite a identificacao\n");
	scanf("%d", &(*Funcionario).identificador);
	printf("digite o salario\n");
	scanf("%f", &(*Funcionario).salario);
}

void mudarsalario(Dadosfuncionario *Funcionario){
	printf("digite o novo salario do funcionario");
	scanf("%f", &(*Funcionario).salario);
}

void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
    printf(" dados do funcionario %d\nnome: %s\n cargo: %s\n identificacao: %d\n salario: %f\n", quantidadefuncionarios, (*Funcionario).nome, (*Funcionario).cargo, (*Funcionario).identificador, (*Funcionario).salario);
}


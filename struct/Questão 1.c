#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	char cargo[20];
	int identificador;
	float salario;
} Dadosfuncionario;

void preencher(Dadosfuncionario *Funcionario);
//void imprimir(Dadosfuncionario *Funcionario);
void mudarsalario(Dadosfuncionario *Funcionario);

int main(){
	Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario));
	if(Funcionario == NULL){
		exit(1);
	}
	printf("\tMENU\n");
	printf("escolha o numero de uma das opicoes abaixo\n");
	printf("1. preencher informacoes do funcionario\n");
	printf("2. imprimir informacoes do funcionario\n");
	printf("3. preencher informacoes do funcionario\n");
	int escolhamenu;
	scanf("%i", &escolhamenu);
	switch(escolhamenu){
	case 1:
		preencher(Funcionario);
		break;
	default:
		exit(1);
		break;
	}
	preencher(Funcionario);
	//imprimir(Funcionario);
	free(Funcionario);
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
/*
void imprimir(Dadosfuncionario *Funcionario){
    printf(" nome: %s\n idade: %d\n RG: %d\n cargo: %s\n", (*Funcionario).nome, (*Funcionario).idade, (*Funcionario).RG, (*Funcionario).cargo );
}
*/

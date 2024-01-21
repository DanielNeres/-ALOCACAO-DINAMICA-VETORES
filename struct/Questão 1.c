#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	char cargo[20];
	int identificador;
	float salario;
} Dadosfuncionario;

void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void menu();

int main(){
	menu();
	return 0;
}

void menu(){
	int escolhamenu, quantidadefuncionarios = 0, maxfuncionario;
	printf("digite a quantidade de funcionario maxima\n");
	scanf("%i", &maxfuncionario);
	Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario)*maxfuncionario);
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
		preencher(Funcionario, quantidadefuncionarios);
		quantidadefuncionarios++;
		break;
	case 2:
		imprimir(Funcionario, quantidadefuncionarios);
		break;
	case 3:
		mudarsalario(Funcionario, quantidadefuncionarios);
	default:
		exit(1);
		break;
	}
}

void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	printf("preencha dados do funcionario %d\n", quantidadefuncionarios);
	printf("digite o nome\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].nome);
	printf("digite a cargo\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].cargo);
	printf("digite a identificacao\n");
	scanf("%d", &Funcionario[quantidadefuncionarios].identificador);
	printf("digite o salario\n");
	scanf("%f", &Funcionario[quantidadefuncionarios].salario);
}

void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	printf("digite o novo salario do funcionario");
	scanf("%f", &(*Funcionario).salario);
}

void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int i;
	for(i = 0; i < quantidadefuncionarios; i++){
    	printf("dados do funcionario %d\n", (i + 1));
		printf("nome: %s\n", Funcionario[quantidadefuncionarios].nome);
		printf("cargo: %s\n", Funcionario[quantidadefuncionarios].cargo);
		printf("identificacao: %d\n", Funcionario[quantidadefuncionarios].identificador);
		printf("salario: %f\n", Funcionario[quantidadefuncionarios].salario);
	}
}


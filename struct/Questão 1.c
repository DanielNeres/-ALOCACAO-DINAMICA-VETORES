#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	char cargo[20];
	int identificador;
	float salario;
} Dadosfuncionario;

void menu();
void RetornarMenu();
void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios);

int main(){
	menu();
	return 0;
}

void menu(){
	int escolhamenu, quantidadefuncionarios = 0, maxfuncionarios;
	printf("digite a quantidade de funcionario maxima\n");
	scanf("%i", &maxfuncionarios);
	Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario)*maxfuncionarios);
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
		if(quantidadefuncionarios == maxfuncionarios){
			printf("quantidade maxima de funcionarios atingida\n");
			menu();
		}
		preencher(Funcionario, quantidadefuncionarios);
		quantidadefuncionarios++;
		break;
	case 2:
		if(quantidadefuncionarios == 0){
			printf("nenhum funcionario cadastrado\n");
			menu();
		}
		imprimir(Funcionario, quantidadefuncionarios);
		break;
	case 3:
		if(quantidadefuncionarios == 0){
			printf("nenhum funcionario cadastrado\n");
			menu();
		}
		mudarsalario(Funcionario, quantidadefuncionarios);
	default:
		exit(1);
		break;
	}
}

void RetornarMenu(){
	char retornoMenu;
	printf("caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	scanf("%c", &retornoMenu);
	if(retornoMenu == 'M' || retornoMenu == 'm'){
		menu();
	}
}

void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	printf("preencha dados do funcionario %d\n", quantidadefuncionarios + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].nome);
	printf("digite a cargo\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].cargo);
	printf("digite a identificacao\n");
	scanf("%d", &Funcionario[quantidadefuncionarios].identificador);
	printf("digite o salario\n");
	scanf("%f", &Funcionario[quantidadefuncionarios].salario);
	RetornarMenu();
}

void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int escolhaMudar, i;
	printf("escolha o funcionario ");
	for(i = 1; i <= quantidadefuncionarios; i++){
		printf("%d ", i);
	}
	scanf("%d", &escolhaMudar);
	printf("para mudar o salario\n");
	printf("digite o novo salario do funcionario\n");
	scanf("%f", &Funcionario[escolhaMudar - 1].salario);
	RetornarMenu();
}

void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int i;
	for(i = 0; i < quantidadefuncionarios; i++){
    	printf("dados do funcionario %d\n", (i + 1));
		printf("nome: %s\n", Funcionario[i].nome);
		printf("cargo: %s\n", Funcionario[i].cargo);
		printf("identificacao: %d\n", Funcionario[i].identificador);
		printf("salario: %f\n", Funcionario[i].salario);
	}
	RetornarMenu();
}


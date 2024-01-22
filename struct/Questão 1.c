#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	char cargo[20];
	int identificador;
	float salario;
} Dadosfuncionario;

void menu();
int RetornarMenu();
void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios);
void MaioreMenorSalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios);

int main(){
	menu();
	return 0;
}


void menu(){
	int escolhamenu, maxfuncionarios, quantidadefuncionarios = 0, Menu = 0;
	printf("digite a quantidade de funcionario maxima\n");
	scanf("%i", &maxfuncionarios);
	Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario)*maxfuncionarios);
	if(Funcionario == NULL){
		exit(1);
	}
	do{
	printf("MENU\n");
	printf("1. preencher informacoes do funcionario\n");
	printf("2. imprimir informacoes do funcionario\n");
	printf("3. preencher informacoes do funcionario\n");
	printf("escolha o numero de uma das opicoes acima\n");

	scanf("%i", &escolhamenu);
	switch(escolhamenu){
		case 1:
			if(quantidadefuncionarios == maxfuncionarios){
				system("cls");
				printf("quantidade maxima de funcionarios atingida\n\n");
				menu();
			}
			system("cls");
			preencher(Funcionario, quantidadefuncionarios);
			quantidadefuncionarios++;
			RetornarMenu();
			break;
		case 2:
			if(quantidadefuncionarios == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				menu();
			}
			system("cls");
			imprimir(Funcionario, quantidadefuncionarios);
			RetornarMenu();
			break;
		case 3:
			if(quantidadefuncionarios == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				menu();
			}
			system("cls");
			mudarsalario(Funcionario, quantidadefuncionarios);
			RetornarMenu();
			default:
				exit(1);
				break;
			}
		
	}while(Menu == 1);
}

int RetornarMenu(){
	char retornoMenu;
	printf("caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	while (getchar() != '\n');
	retornoMenu = getchar();
	if(retornoMenu == 'M' || retornoMenu == 'm'){
		system("cls");
		return 1;
	}else
	{
		system("cls");
		return 0;
	}
}

void preencher(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	printf("%d\n", quantidadefuncionarios);
	printf("preencha dados do funcionario %d\n", quantidadefuncionarios + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].nome);
	printf("digite a cargo\n");
	scanf(" %[^\n]", Funcionario[quantidadefuncionarios].cargo);
	printf("digite a identificacao\n");
	scanf("%d", &Funcionario[quantidadefuncionarios].identificador);
	printf("digite o salario\n");
	scanf("%f", &Funcionario[quantidadefuncionarios].salario);
}

void imprimir(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int i;
	printf("%d\n", quantidadefuncionarios);
	for(i = 0; i < quantidadefuncionarios; i++){
    	printf("dados do funcionario %d\n", i);
    		printf("%d\n", i);
		printf("nome: %s\n", Funcionario[0].nome);
		printf("cargo: %s\n", Funcionario[0].cargo);
		printf("identificacao: %d\n", Funcionario[0].identificador);
		printf("salario: %f\n", Funcionario[0].salario);
	}
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
}

void MaioreMenorSalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int i, MaiorSalario = 0, MenorSalario = 0;
	for(i = 0; i < quantidadefuncionarios; i++){
    	if(Funcionario[i].salario < Funcionario[MenorSalario].salario){
			MenorSalario = i;
		}
		if(Funcionario[i].salario > Funcionario[MaiorSalario].salario){
			MaiorSalario = i;
		}
	}
	printf("%s e o cargo que recebe menos, com o salario de R$%f;", Funcionario[MenorSalario].cargo, Funcionario[MenorSalario].salario);
	printf("%s e o cargo que recebe mais, com o salario de R$%f.", Funcionario[MaiorSalario].cargo, Funcionario[MaiorSalario].salario);
}







/*1. Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos.
c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário.*/

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
	system("cls");
	do{
	printf("MENU\n");
	printf("1. preencher informacoes do funcionario\n");
	printf("2. imprimir informacoes do funcionario\n");
	printf("3. mudar salario dos funcionarios\n");
	printf("4. imprecao do cargo com maior e menor salario\n");
	printf("escolha o numero de uma das opicoes acima\n");

	scanf("%i", &escolhamenu);
	switch(escolhamenu){
		case 1:
			if(quantidadefuncionarios == maxfuncionarios){
				system("cls");
				printf("quantidade maxima de funcionarios atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			preencher(Funcionario, quantidadefuncionarios);
			quantidadefuncionarios++;
			Menu = RetornarMenu();
			break;
		case 2:
			if(quantidadefuncionarios == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprimir(Funcionario, quantidadefuncionarios);
			Menu = RetornarMenu();
			break;
		case 3:
			if(quantidadefuncionarios == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			mudarsalario(Funcionario, quantidadefuncionarios);
			Menu = RetornarMenu();
			break;
			case 4:
			if(quantidadefuncionarios == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			MaioreMenorSalario(Funcionario, quantidadefuncionarios);
			Menu = RetornarMenu();
			break;
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
	for(i = 0; i < quantidadefuncionarios; i++){
    	printf("dados do funcionario %d\n", i + 1);
		printf("nome: %s\n", Funcionario[i].nome);
		printf("cargo: %s\n", Funcionario[i].cargo);
		printf("identificacao: %d\n", Funcionario[i].identificador);
		printf("salario: R$%f\n\n", Funcionario[i].salario);
	}
}

void mudarsalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int escolhaMudar, i;
	printf("escolha o funcionario entre os numeros ");
	for(i = 1; i <= quantidadefuncionarios; i++){
		printf("%d ", i);
	}
	printf("para mudar o salario\n");
	scanf("%d", &escolhaMudar);
	printf("digite o novo salario do funcionario\n");
	scanf("%f", &Funcionario[escolhaMudar - 1].salario);
}

void MaioreMenorSalario(Dadosfuncionario *Funcionario, int quantidadefuncionarios){
	int i, MaiorSalario = 0, MenorSalario = 0;
	for(i = 1; i < quantidadefuncionarios; i++){
    	if(Funcionario[i].salario < Funcionario[MenorSalario].salario){
			MenorSalario = i;
		}
		if(Funcionario[i].salario > Funcionario[MaiorSalario].salario){
			MaiorSalario = i;
		}
	}
	printf("%s e o cargo que recebe menos, com o salario de R$%f;\n", Funcionario[MenorSalario].cargo, Funcionario[MenorSalario].salario);
	printf("%s e o cargo que recebe mais, com o salario de R$%f.\n", Funcionario[MaiorSalario].cargo, Funcionario[MaiorSalario].salario);
}
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	int NumeroDocumento;
	int idade;
} DadosPessoais;

void menu();
int RetornarMenu();
void preencher(DadosPessoais *Pessoas, int quantidadePessoas);
void imprimir(DadosPessoais *Pessoas, int quantidadePessoas);
void mudarIdade(DadosPessoais *Pessoas, int quantidadePessoas);
void MaioreMenorIdade(DadosPessoais *Pessoas, int quantidadePessoas);

int main(){
	menu();
	return 0;
}


void menu(){
	int escolhamenu, maxPessoas, quantidadePessoas = 0, Menu = 0;
	printf("digite a quantidade de Pessoas maxima\n");
	scanf("%i", &maxPessoas);
	DadosPessoais * Pessoas = (DadosPessoais*) malloc(sizeof(DadosPessoais)*maxPessoas);
	if(Pessoas == NULL){
		exit(1);
	}
	system("cls");
	do{
	printf("MENU\n");
	printf("1. preencher informacoes pessoais\n");
	printf("2. imprimir informacoes pessoais\n");
	printf("3. mudar idade das pessoas\n");
	printf("4. imprecao do Nome da pessoa mais velha e mais nova\n");
	printf("escolha o numero de uma das opicoes acima\n");

	scanf("%i", &escolhamenu);
	switch(escolhamenu){
		case 1:
			if(quantidadePessoas == maxPessoas){
				system("cls");
				printf("quantidade maxima de funcionarios atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			preencher(Pessoas, quantidadePessoas);
			quantidadePessoas++;
			Menu = RetornarMenu();
			break;
		case 2:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprimir(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
		case 3:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			mudarIdade(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
			case 4:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			MaioreMenorIdade(Pessoas, quantidadePessoas);
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

void preencher(DadosPessoais *Pessoas, int quantidadePessoas){
	printf("preencha dados da pessoa %d\n", quantidadePessoas + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Pessoas[quantidadePessoas].nome);
	printf("digite o numero do documento\n");
	scanf("%d", &Pessoas[quantidadePessoas].NumeroDocumento);
	printf("digite a idade\n");
	scanf("%d", &Pessoas[quantidadePessoas].idade);
}

void imprimir(DadosPessoais *Pessoas, int quantidadePessoas){
	int i;
	for(i = 0; i < quantidadePessoas; i++){
    	printf("dados da pessoa %d\n", i + 1);
		printf("nome: %s\n", Pessoas[i].nome);
		printf("numero do documento: %d\n", Pessoas[i].NumeroDocumento);
		printf("salario: R$%d\n\n", Pessoas[i].idade);
	}
}

void mudarIdade(DadosPessoais *Pessoas, int quantidadePessoas){
	int escolhaMudar, i;
	printf("escolha a pessoa entre os numeros ");
	for(i = 1; i <= quantidadePessoas; i++){
		printf("%d ", i);
	}
	printf("para mudar a idade\n");
	scanf("%d", &escolhaMudar);
	printf("digite o nova idade da pessoa\n");
	scanf("%d", &Pessoas[escolhaMudar - 1].idade);
}

void MaioreMenorIdade(DadosPessoais *Pessoas, int quantidadePessoas){
	int i, MaiorIdade = 0, MenorIdade = 0;
	for(i = 1; i < quantidadePessoas; i++){
    	if(Pessoas[i].idade < Pessoas[MenorIdade].idade){
			MenorIdade = i;
		}
		if(Pessoas[i].idade > Pessoas[MaiorIdade].idade){
			MaiorIdade = i;
		}
	}
	printf("%s e a pessoa mais nova, com %d de idade;\n", Pessoas[MenorIdade].nome, Pessoas[MenorIdade].idade);
	printf("%s e a pessoa maisvelha, com %d de idade.\n", Pessoas[MaiorIdade].nome, Pessoas[MaiorIdade].idade);
}
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	int NumeroIdentidade;
	int idade;
} DadosPessoais;

void menu();
int RetornarMenu();
void preencher(DadosPessoais *Pessoas, int quantidadePessoas);
void imprimir(DadosPessoais *Pessoas, int quantidadePessoas);
void mudarIdade(DadosPessoais *Pessoas, int quantidadePessoas);
void MaioreMenorIdade(DadosPessoais *Pessoas, int quantidadePessoas);

int main(){
	menu();
	return 0;
}


void menu(){
	int escolhamenu, maxPessoas, quantidadePessoas = 0, Menu = 0;
	printf("digite a quantidade de Pessoas maxima\n");
	scanf("%i", &maxPessoas);
	DadosPessoas * Pessoas = (DadosPessoas*) malloc(sizeof(DadosPessoas)*maxPessoass);
	if(Pessoas == NULL){
		exit(1);
	}
	system("cls");
	do{
	printf("MENU\n");
	printf("1. preencher informacoes da pessoa\n");
	printf("2. imprimir informacoes da pessoa\n");
	printf("3. mudar salario dos funcionarios\n");
	printf("4. imprecao do cargo com maior e menor salario\n");
	printf("escolha o numero de uma das opicoes acima\n");

	scanf("%i", &escolhamenu);
	switch(escolhamenu){
		case 1:
			if(quantidadePessoas == maxPessoas){
				system("cls");
				printf("quantidade maxima de funcionarios atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			preencher(Pessoas, quantidadePessoas);
			quantidadePessoas++;
			Menu = RetornarMenu();
			break;
		case 2:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprimir(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
		case 3:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			mudarsalario(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
			case 4:
			if(quantidadePessoas == 0){
				system("cls");
				printf("nenhum funcionario cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			MaioreMenorSalario(Pessoas, quantidadePessoas);
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

void preencher(Dadosfuncionario *Pessoas, int quantidadePessoas){
	printf("preencha dados da pessoa %d\n", quantidadePessoas + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Pessoas[quantidadePessoas].nome);
	printf("digite a identificacao\n");
	scanf("%d", &Funcionario[quantidadePessoas].NumeroIdentidade);
	printf("digite a idade\n");
	scanf("%d", &Funcionario[quantidadePessoas].idade);
}

void imprimir(Dadosfuncionario *Pessoas, int quantidadePessoas){
	int i;
	for(i = 0; i < quantidadePessoas; i++){
    	printf("dados da pessoa %d\n", i + 1);
		printf("nome: %s\n", Pessoas[i].nome);
		printf("cargo: %s\n", Pessoas[i].cargo);
		printf("identificacao: %d\n", Pessoas[i].NumeroIdentidade);
		printf("salario: R$%d\n", Pessoas[i].idade);
	}
}

void mudarIdade(Dadosfuncionario *Pessoas, int quantidadePessoas){
	int escolhaMudar, i;
	printf("escolha a pessoa entre os numeros ");
	for(i = 1; i <= quantidadePessoas; i++){
		printf("%d ", i);
	}
	printf("para mudar a idade\n");
	scanf("%d", &escolhaMudar);
	printf("digite o nova idade da pessoa\n");
	scanf("%d", &Funcionario[escolhaMudar - 1].idade);
}

void MaioreMenorIdade(Dadosfuncionario *Pessoas, int quantidadePessoas){
	int i, MaiorIdade = 0, MenorIdade = 0;
	for(i = 1; i < quantidadePessoas; i++){
    	if(Funcionario[i].idade < Funcionario[MenorIdade].idade){
			MenorIdade = i;
		}
		if(Funcionario[i].idade > Funcionario[MaiorIdade].idade){
			MaiorIdade = i;
		}
	}
	printf("%s e o cargo que recebe menos, com a idade de R$%d;\n", Pessoas[MenorIdade].cargo, Pessoas[MenorIdade].idade);
	printf("%s e o cargo que recebe mais, com a idade de R$%d.\n", Pessoas[MaiorIdade].cargo, Pessoas[MaiorIdade].idade);
}
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome[40];
	int NumeroIdentidade;
	int idade;
} DadosPessoais;

void menu();
int RetornarMenu();
void preencher(DadosPessoais *Pessoas, int quantidadePessoas);
void imprimir(DadosPessoais *Pessoas, int quantidadePessoas);
void mudarIdade(DadosPessoais *Pessoas, int quantidadePessoas);
void MaioreMenorIdade(DadosPessoais *Pessoas, int quantidadePessoas);

int main(){
	menu();
	return 0;
}


void menu(){
	int escolhamenu, maxPessoas, quantidadePessoas = 0, Menu = 0;
	printf("digite a quantidade de funcionario maxima\n");
	scanf("%i", &maxPessoas);
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
			if(quantidadefuncionarios == maxPessoas){
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
		printf("salario: R$%f\n", Funcionario[i].salario);
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
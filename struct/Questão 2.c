#include<stdio.h>
#include<stdlib.h>

typedef struct
{
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

int main()
{
	menu();
	return 0;
}

void menu()
{
	int escolhamenu, maxPessoas, quantidadePessoas = 0, Menu = 0;
	printf("digite a quantidade de Pessoas maxima\n");
	scanf("%i", &maxPessoas);
	DadosPessoais *Pessoas = (DadosPessoais*)malloc(sizeof(DadosPessoais) * maxPessoas);
	if(Pessoas == NULL)
	{
		exit(1);
	}
	system("cls");
	do
	{
		printf("MENU\n");
		printf("1. preencher informacoes pessoais\n");
		printf("2. imprimir informacoes pessoais\n");
		printf("3. mudar idade das pessoas\n");
		printf("4. imprecao do Nome da pessoa mais velha e mais nova\n");
		printf("escolha o numero de uma das opicoes acima\n");

		scanf("%i", &escolhamenu);
		switch (escolhamenu)
		{
		case 1:
			if (quantidadePessoas == maxPessoas)
			{
				system("cls");
				printf("quantidade maxima de pessoas atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			preencher(Pessoas, quantidadePessoas);
			quantidadePessoas++;
			Menu = RetornarMenu();
			break;
		case 2:
			if (quantidadePessoas == 0)
			{
				system("cls");
				printf("nenhuma pessoa cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprimir(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
		case 3:
			if (quantidadePessoas == 0)
			{
				system("cls");
				printf("nenhuma pessoa cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			mudarIdade(Pessoas, quantidadePessoas);
			Menu = RetornarMenu();
			break;
		case 4:
			if (quantidadePessoas == 0)
			{
				system("cls");
				printf("nenhuma pessoa cadastrado\n\n");
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

	}
	while (Menu == 1);
}

int RetornarMenu()
{
	char retornoMenu;
	printf("caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	while (getchar() != '\n');
	retornoMenu = getchar();
	if (retornoMenu == 'M' || retornoMenu == 'm')
	{
		system("cls");
		return 1;
	}
	else
	{
		system("cls");
		return 0;
	}
}

void preencher(DadosPessoais *Pessoas, int quantidadePessoas)
{
	printf("preencha dados da pessoa %d\n", quantidadePessoas + 1);
	printf("digite o nome\n");
	scanf(" %[^\n]", Pessoas[quantidadePessoas].nome);
	printf("digite o numero do documento\n");
	scanf("%d", &Pessoas[quantidadePessoas].NumeroDocumento);
	printf("digite a idade\n");
	scanf("%d", &Pessoas[quantidadePessoas].idade);
}

void imprimir(DadosPessoais *Pessoas, int quantidadePessoas)
{
	int i;
	for (i = 0; i < quantidadePessoas; i++)
	{
		printf("dados da pessoa %d\n", i + 1);
		printf("nome: %s\n", Pessoas[i].nome);
		printf("numero do documento: %d\n", Pessoas[i].NumeroDocumento);
		printf("idade: %d\n\n", Pessoas[i].idade);
	}
}

void mudarIdade(DadosPessoais *Pessoas, int quantidadePessoas)
{
	int escolhaMudar, i;
	printf("escolha a pessoa entre os numeros ");
	for (i = 1; i <= quantidadePessoas; i++)
	{
		printf("%d ", i);
	}
	printf("para mudar a idade\n");
	scanf("%d", &escolhaMudar);
	printf("digite o nova idade da pessoa\n");
	scanf("%d", &Pessoas[escolhaMudar - 1].idade);
}

void MaioreMenorIdade(DadosPessoais *Pessoas, int quantidadePessoas)
{
	int i, MaiorIdade = 0, MenorIdade = 0;
	for (i = 1; i < quantidadePessoas; i++)
	{
		if (Pessoas[i].idade < Pessoas[MenorIdade].idade)
		{
			MenorIdade = i;
		}
		if (Pessoas[i].idade > Pessoas[MaiorIdade].idade)
		{
			MaiorIdade = i;
		}
	}
	printf("%s e a pessoa mais nova, com %d anos;\n", Pessoas[MenorIdade].nome, Pessoas[MenorIdade].idade);
	printf("%s e a pessoa mais velha, com %d anos.\n", Pessoas[MaiorIdade].nome, Pessoas[MaiorIdade].idade);
}
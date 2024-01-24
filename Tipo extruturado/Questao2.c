#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int matrícula;
	float notas[3], media;
	char nome[80];
	char turma;
} Aluno;

void menu();
int RetornarMenu();
void matricula(int n,Aluno** alunos);
void lanca_notas(int n, Aluno** alunos);
void imprime_tudo(int n, Aluno** alunos);
void imprime_turma(int n, Aluno** alunos, char turma);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int escolhamenu, MaxAluno, QuantidadeAluno = 0, Menu = 0, j;
	float valor;
	printf("digite a quantidade de Alunos maxima\n");
	scanf("%i", &MaxAluno);
	Aluno *alunos = (Aluno *)malloc(sizeof(Aluno) * MaxAluno);
	if (alunos == NULL)
	{
		exit(1);
	}
	system("cls");
	do
	{
		printf("MENU\n");
		printf("1. Fazer a matricula do aluno\n");
		printf("2. imprimir informacoes do aluno\n");
		printf("3. mudar preco dos alunos\n");
		printf("4. imprecao do Aluno com maior e menor preco\n");
		printf("escolha o numero de uma das opicoes acima\n");

		scanf("%i", &escolhamenu);
		switch (escolhamenu)
		{
		case 1:
			if (QuantidadeAluno == MaxAluno)
			{
				system("cls");
				printf("quantidade maxima de Alunos atingida\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			matricula(QuantidadeAluno, alunos);
			QuantidadeAluno++;
			Menu = RetornarMenu();
			break;
		case 2:
			if (QuantidadeAluno == 0)
			{
				system("cls");
				printf("nenhum Aluno cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			lanca_notas(QuantidadeAluno, alunos);
			Menu = RetornarMenu();
			break;
		case 3:
			if (QuantidadeAluno == 0)
			{
				system("cls");
				printf("nenhum Aluno cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			printf("escolha o Aluno entre os numeros ");
			for (j = 1; j <= QuantidadeAluno; j++)
			{
				printf("%d ", j);
			}
			printf("para mudar o preco\n");
			scanf("%f", &valor);
			printf("digite o novo preco do Aluno\n");
			scanf("%f", &valor);
			altera_preco(alunos, valor, j);
			Menu = RetornarMenu();
			break;
		case 4:
			if (QuantidadeAluno == 0)
			{
				system("cls");
				printf("nenhum Aluno cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprime_menor_maior_preco(QuantidadeAluno, alunos);
			Menu = RetornarMenu();
			break;
		default:
			exit(1);
			break;
		}

	} while (Menu == 1);
	free(alunos);
}

int RetornarMenu()
{
	char retornoMenu;
	printf("caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	while (getchar() != '\n')
		;
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

	void preenche(Aluno * alunos, int QuantidadeAluno)
	{
		printf("preencha dados do Aluno %d\n", QuantidadeAluno + 1);
		printf("digite o local\n");
		scanf(" %[^\n]", alunos[QuantidadeAluno].local);
		printf("digite a atracao\n");
		scanf(" %[^\n]", alunos[QuantidadeAluno].atracao);
		printf("digite o preco\n");
		scanf("%f", &alunos[QuantidadeAluno].preco);
	}

	void matricula(int QuantidadeAluno,Aluno** alunos);
	{
		int j;
		for (j = 0; j < QuantidadeAluno; j++)
		{
			printf("dados do Aluno %d\n", j + 1);
			printf("local: %s\n", alunos[j].local);
			printf("atracao: %s\n", alunos[j].atracao);
			printf("preco: R$%f\n\n", alunos[j].preco);
		}
	}

	void altera_preco(Aluno * alunos, float valor, int j)
	{
		alunos[j].preco = valor;
	}

	void imprime_menor_maior_preco(int n, Aluno * alunos)
	{
		int j, Maiorpreco = 0, Menorpreco = 0;
		for (j = 1; j < n; j++)
		{
			if (alunos[j].preco < alunos[Menorpreco].preco)
			{
				Menorpreco = j;
			}
			if (alunos[j].preco > alunos[Maiorpreco].preco)
			{
				Maiorpreco = j;
			}
		}
		printf("%s e a atracao mais barata, com o preco de R$%f;\n", alunos[Menorpreco].atracao, alunos[Menorpreco].preco);
		printf("%s e a atracao mais cara, com o preco de R$%f.\n", alunos[Maiorpreco].atracao, alunos[Maiorpreco].preco);
	}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int matricula;
	float notas[3], media;
	char nome[80];
	char turma;
} Aluno;

void menu();
int RetornarMenu();
void matricula(int QuantidadeAluno, Aluno *alunos);
void lanca_notas(int QuantidadeAluno, Aluno *alunos);
void imprime_tudo(int QuantidadeAluno, Aluno *alunos);
void imprime_turma(int QuantidadeAluno, Aluno *alunos, char turma);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int escolhamenu, MaxAluno, QuantidadeAluno = 0, Menu = 0;
	char turma;
	printf("Digite a quantidade de Alunos maxima\n");
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
		printf("2. Cadastrar as notas dos alunos\n");
		printf("3. Imprimir dados dos alunos\n");
		printf("4. Imprimir dados de uma turma\n");
		printf("Escolha o numero de uma das opcoes acima\n");

		scanf("%d", &escolhamenu);
		switch (escolhamenu)
		{
		case 1:
			if (QuantidadeAluno == MaxAluno)
			{
				system("cls");
				printf("Quantidade maxima de Alunos atingida\n\n");
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
				printf("Nenhum Aluno cadastrado\n\n");
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
				printf("Nenhum Aluno cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			imprime_tudo(QuantidadeAluno, alunos);
			Menu = RetornarMenu();
			break;
		case 4:
			if (QuantidadeAluno == 0)
			{
				system("cls");
				printf("Nenhum Aluno cadastrado\n\n");
				Menu = 1;
				break;
			}
			system("cls");
			printf("Digite a turma:\n");
			scanf(" %c", &turma);
			imprime_turma(QuantidadeAluno, alunos, turma);
			Menu = RetornarMenu();
			break;
		default:
			exit(1);
			break;
		}

	}
	while (Menu == 1);
	free(alunos);
}

int RetornarMenu()
{
	char retornoMenu;
	printf("Caso desejar retornar para o menu digite M, ou digite qualquer tecla para sair\n");
	scanf(" %c", &retornoMenu);
	if((retornoMenu == 'M') || (retornoMenu == 'm'))
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

void matricula(int QuantidadeAluno, Aluno *alunos)
{
	printf("Preencha dados do Aluno %d\n", QuantidadeAluno + 1);
	printf("Digite o nome\n");
	scanf(" %s", alunos[QuantidadeAluno].nome);
	printf("Digite a matricula\n");
	scanf("%d", &alunos[QuantidadeAluno].matricula);
	printf("Digite a turma\n");
	scanf(" %c", &alunos[QuantidadeAluno].turma);
}

void lanca_notas(int QuantidadeAluno, Aluno *alunos)
{
	int j, i;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		printf("Digite as notas do Aluno %d\n", j + 1);
		for (i = 0; i < 3; i++)
		{
			scanf("%f", &alunos[j].notas[i]);
		}
		alunos[j].media = (alunos[j].notas[0] + alunos[j].notas[1] + alunos[j].notas[2]) / 3;
	}
}

void imprime_tudo(int QuantidadeAluno, Aluno *alunos)
{
	int i, j;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		printf("Dados do aluno %d\n", j + 1);
		printf("Nome: %s\n", alunos[j].nome);
		printf("Matricula: %d\n", alunos[j].matricula);
		printf("Notas: ");
		for (i = 0; i < 3; i++)
		{
			printf("%f ", alunos[j].notas[i]);
		}
		printf("\nMedia: %f\n\n", alunos[j].media);
	}
}

void imprime_turma(int QuantidadeAluno, Aluno *alunos, char turma)
{
	int i, j;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		if (alunos[j].turma == turma)
		{
			printf("Dados do aluno %d\n", j + 1);
			printf("Nome: %s\n", alunos[j].nome);
			printf("Matricula: %d\n", alunos[j].matricula);
			printf("Notas: ");
			for (i = 0; i < 3; i++)
			{
				printf("%f ", alunos[j].notas[i]);
			}
			printf("\nMedia: %f\n\n2e", alunos[j].media);
		}
	}
}

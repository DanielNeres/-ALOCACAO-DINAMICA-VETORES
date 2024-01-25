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
void matricula(int QuantidadeAluno, Aluno** alunos);
void lanca_notas(int QuantidadeAluno, Aluno** alunos);
void imprime_tudo(int QuantidadeAluno, Aluno** alunos);
void imprime_turma(int QuantidadeAluno, Aluno** alunos, char turma);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int escolhamenu, MaxAluno, QuantidadeAluno = 0, Menu = 0, j;
	char turma;
	printf("digite a quantidade de Alunos maxima\n");
	scanf("%i", &MaxAluno);
	Aluno **alunos = (Aluno **)malloc(sizeof(Aluno *) * MaxAluno);
	if (alunos == NULL)
	{
		exit(1);
	}
	system("cls");
	do
	{
		printf("MENU\n");
		printf("1. Fazer a matricula do aluno\n");
		printf("2. Cadastrar as notas  dos alunos\n");
		printf("3. imprimir dados dos alunos\n");
		printf("4. imprimir dados de uma turma\n");
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
			imprime_tudo(QuantidadeAluno, alunos);
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
			void imprime_turma(int QuantidadeAluno, Aluno** alunos, char turma);
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

	void matricula(int QuantidadeAluno, Aluno** alunos);
	{
		printf("preencha dados do Aluno %d\n", QuantidadeAluno + 1);
		printf("digite o nome\n");
		scanf(" %[^\n]", alunos[QuantidadeAluno].nome);
		printf("digite a matricula\n");
		scanf("%d", &alunos[QuantidadeAluno].matricula);
		printf("digite a turma\n");
		scanf("%c", &alunos[QuantidadeAluno].turma);
	}

	void lanca_notas(int QuantidadeAluno, Aluno** alunos);
	{
		int j, i;
		for (j = 0; j < QuantidadeAluno; j++)
		{
			printf("digite as notas do Aluno %d\n", j + 1);
			for (i = 0; i < 3; i++){
				scanf("%f", &alunos[QuantidadeAluno].notas[i]);
			}
			alunos[QuantidadeAluno].media = (alunos[QuantidadeAluno].notas[0] + alunos[QuantidadeAluno].notas[1] + alunos[QuantidadeAluno].notas[2])/3;
		}
	}

	void imprime_tudo(int QuantidadeAluno, Aluno** alunos);
	{
	int j, i;
	for (j = 0; j < QuantidadeAluno; j++)
		{
			printf("dados do aluno %d\n", j + 1);
			printf("nome: %s\n", alunos[j].nome);
			printf("matricula: %d\n", alunos[j].matricula);
			printf("turma: %c\n", alunos[j].turma);
			printf("notas: ");
			for (i = 0; i < 3; i++){
				printf("%f ", alunos[j].notas[i]);
			}
			printf("\nmedia: %f", alunos[j].media);
		}
	}

	void imprime_turma(int QuantidadeAluno, Aluno** alunos, char turma);
	{
	int j;
	for (j = 0; j < QuantidadeAluno; j++)
		{
			if(alunos[j].turma == turma){
			printf("dados do aluno %d\n", j + 1);
			printf("nome: %s\n", alunos[j].nome);
			printf("matricula: %d\n", alunos[j].matricula);
			printf("turma: %c\n", alunos[j].turma);
			printf("notas: ");
			for (i = 0; i < 3; i++){
				printf("%f ", alunos[j].notas[i]);
			}
			printf("\nmedia: %f", alunos[j].media);
			}
		}
	}
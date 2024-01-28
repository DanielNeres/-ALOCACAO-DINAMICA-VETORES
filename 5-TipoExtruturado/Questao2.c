/*Questão 2) Escreva um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de
Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes
informações: matrícula (inteiro), nome (80 caracteres), turma (caractere), três notas (reais em um vetor) e uma
média (real). Seu programa deve levar em consideração que é ofertado um número máximo de vagas para a
disciplina. Sabendo dessas informações, faça o que se pede nos itens a seguir:
a) Implemente uma função que recebe os dados de um aluno e o matricula na disciplina, caso haja vaga
disponível. Protótipo: void matricula(int n,Aluno** alunos);
b) Implemente uma função que lança as notas e calcula a média dos alunos da disciplina. Protótipo: void
lanca_notas(int n, Aluno** alunos);
c) Implemente uma função que imprime os dados de todos os alunos da disciplina. Protótipo: void
imprime_tudo(int n, Aluno** alunos);
d) Implemente uma função que imprime os dados de todos os alunos de uma turma. Protótipo: void
imprime_turma(int n, Aluno** alunos, char turma);
e) Implemente uma função que imprime os alunos aprovados de uma determinada turma. Para ser
aprovado, o aluno deve ter média maior que ou igual a 7,0. Protótipo: void imprime_turma_aprovados(int n,
Aluno**alunos, char turma);
Sugestões: i) Use um vetor de ponteiros para estrutura; ii) Use uma constante simbólica para representar o número
máximo de alunos. Iii) Antes de manipular o vetor de ponteiros, inicialize cada um de seus elementos com NULL
(você pode escrever uma função para isso).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int matricula;
	float notas[3], media;
	char nome[80];
	char turma;
} Aluno;

void declaracaodealunos();
void menu(Aluno *alunos_declaracao, int MaxAluno);
int RetornarMenu();
void matricula(int QuantidadeAluno, Aluno **alunos);
void lanca_notas(int QuantidadeAluno, Aluno **alunos);
void imprime_tudo(int QuantidadeAluno, Aluno **alunos);
void imprime_turma(int QuantidadeAluno, Aluno **alunos, char turma);
void imprime_turma_aprovados(int QuantidadeAluno, Aluno **alunos, char turma);

int main()
{
	declaracaodealunos();
	return 0;
}

void declaracaodealunos()
{
	int MaxAluno, i, j;
	printf("Digite a quantidade de Alunos maxima\n");
	scanf("%i", &MaxAluno);

	Aluno *alunos_declaracao = (Aluno *)malloc(sizeof(Aluno) * MaxAluno);
	if (alunos_declaracao == NULL)
	{
		exit(1);
	}

	for (i = 0; i < MaxAluno; i++)
	{
		alunos_declaracao[i].matricula = 0;
		alunos_declaracao[i].media = 0.0;
		for(j = 0; j < 3; j++)
		{
			alunos_declaracao[i].notas[j] = 0.0;
		}
	}

	system("cls");
	menu(alunos_declaracao, MaxAluno);
}


void menu(Aluno *alunos_declaracao, int MaxAluno)
{
	int escolhamenu, QuantidadeAluno = 0, Menu = 0;
	char turma;
	Aluno **alunos = &alunos_declaracao;
	do
	{
		printf("MENU\n");
		printf("1. Fazer a matricula do aluno\n");
		printf("2. Cadastrar as notas dos alunos\n");
		printf("3. Imprimir dados dos alunos\n");
		printf("4. Imprimir dados de uma turma\n");
		printf("5. Imprimir alunos aprovados de uma turma\n");
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
		case 5:
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
			imprime_turma_aprovados(QuantidadeAluno, alunos, turma);
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

void matricula(int QuantidadeAluno, Aluno **alunos)
{
	int i;
	alunos[QuantidadeAluno] = (Aluno *)malloc(sizeof(Aluno));
	printf("Preencha dados do Aluno %d\n", QuantidadeAluno + 1);
	printf("Digite o nome\n");
	scanf(" %s", alunos[QuantidadeAluno]->nome);
	printf("Digite a matricula\n");
	scanf("%d", &alunos[QuantidadeAluno]->matricula);
	printf("Digite a turma\n");
	scanf(" %c", &alunos[QuantidadeAluno]->turma);
	alunos[QuantidadeAluno]->media = 0.0;
	for (i = 0; i < 3; i++)
	{
		alunos[QuantidadeAluno]->notas[i] = 0.0;
	}
}

void lanca_notas(int QuantidadeAluno, Aluno **alunos)
{
	int j, i;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		printf("Digite as notas do Aluno %d\n", j + 1);
		for (i = 0; i < 3; i++)
		{
			scanf("%f", &alunos[j]->notas[i]);
		}
		alunos[j]->media = (alunos[j]->notas[0] + alunos[j]->notas[1] + alunos[j]->notas[2]) / 3;
	}
}

void imprime_tudo(int QuantidadeAluno, Aluno **alunos)
{
	int i, j;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		printf("Dados do aluno %d\n", j + 1);
		printf("Nome: %s\n", alunos[j]->nome);
		printf("Matricula: %d\n", alunos[j]->matricula);
		printf("turma: %c\n", alunos[j]->turma);
		printf("Notas: |");
		for (i = 0; i < 3; i++)
		{
			printf("%.2f |", alunos[j]->notas[i]);
		}
		printf("\nMedia: %.2f\n\n", alunos[j]->media);
	}
}

void imprime_turma(int QuantidadeAluno, Aluno **alunos, char turma)
{
	int i, j;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		if (alunos[j]->turma == turma)
		{
			printf("Dados do aluno %d\n", j + 1);
			printf("Nome: %s\n", alunos[j]->nome);
			printf("Matricula: %d\n", alunos[j]->matricula);
			printf("turma: %c\n", alunos[j]->turma);
			printf("Notas: |");
			for (i = 0; i < 3; i++)
			{
				printf("%.2f |", alunos[j]->notas[i]);
			}
			printf("\nMedia: %.2f\n\n", alunos[j]->media);
		}
	}
}

void imprime_turma_aprovados(int QuantidadeAluno, Aluno **alunos, char turma)
{
	int j;
	for (j = 0; j < QuantidadeAluno; j++)
	{
		if (alunos[j]->turma == turma && (alunos[j]->media > 7))
		{
			printf("o aluno %s foi aprovado, com media igual %.2f\n", alunos[j]->nome, alunos[j]->media);
		}
	}
}
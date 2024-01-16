/*
	Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
    a) a nota obtida para cada aluno;
    b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numeroquestoes, numeroalunos, i, j;
    float numeroacertos = 0, numerosaprovados = 0;
    printf("Digite a quantidade de questoes\n");
    scanf("%d", &numeroquestoes); 
    char *gabarito = (char *) malloc(numeroquestoes * sizeof(char));
	printf("Agora digite o gabarito\n");
    for(i = 0; i < numeroquestoes; i++){
        scanf(" %c", gabarito + i);
    }
    printf("Digite a quantidade de alunos\n");
    scanf("%d", &numeroalunos);

    char **alunos = (char **) malloc(numeroalunos * sizeof(char *));
    for (i = 0; i < numeroalunos; i++){
        alunos[i] = (char *) malloc(numeroquestoes * sizeof(char));
    }

    for(i = 0; i < numeroalunos; i++){
        printf("Digite as respostas do aluno %d\n", i + 1);
        for(j = 0; j < numeroquestoes; j++){
            scanf(" %c", &alunos[i][j]);
        }
    }
    for(i = 0; i < numeroalunos; i++){
		for(j = 0; j < numeroquestoes; j++){
			if(alunos[i][j] == gabarito[j]){
				numeroacertos += 1;
			}
		}
		printf("a nota do %d e %.2f\n", i, (10 * numeroacertos) / (numeroquestoes));
		if((10 * numeroacertos) / (numeroquestoes) < 6){
			numerosaprovados += 1;
		}
		numeroacertos = 0;
	}
	printf("a porcentagem de alunos aprovados e %.2f%%", (numerosaprovados * 100) / numeroalunos);
 	for(i = 0; i < numeroalunos; i++){
		free(alunos[i]);
	}
	free(alunos);
 	free(gabarito);
    return 0;
}
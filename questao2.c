#include<stdio.h>
#include<stdlib.h>

int main(){
	int numeroquestoes, numeroalunos, i, j;
	printf("digite a quantidede de questoes\n");
	scanf("%d", numeroquestoes); 
	char *gabarito = (char *) malloc(numeroquestoes * sizeof(char));
	for(i = 0; numeroquestoes > i; i++){
		scanf("%c", *(gabarito + i));
	}
	int **alunos = (int **) malloc(numeroalunos * sizeof(int));
	for (i = 0; i < numeroalunos; i++){
		alunos[i] = (int *) malloc(numeroquestoes * sizeof(int));
	}
	for(i = 0; numeroalunos > i; i++){
		printf("digite o gabarito do aluno %d\n", i);
		for(j = 0; numeroquestoes > j; j++){
			
		}
	}
	return 0;
}
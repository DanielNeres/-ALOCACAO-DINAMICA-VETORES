#include<stdio.h>
#include<stdlib.h>

int main(){
    int numeroquestoes, numeroalunos, i, j;
    float numeroacertos = 0;
    printf("Digite a quantidade de questoes\n");
    scanf("%d", &numeroquestoes); 
    char *gabarito = (char *) malloc(numeroquestoes * sizeof(char));
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
        printf("Digite as respostas do aluno %d\n", i);
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
		printf("a nota do %d e %f\n", i, (10/numeroquestoes) * (numeroacertos));
		numeroacertos = 0;
	}
 	for(i = 0; i < numeroalunos; i++){
		free(alunos[i]);
	}
	free(alunos);
 	free(gabarito);
    return 0;
}
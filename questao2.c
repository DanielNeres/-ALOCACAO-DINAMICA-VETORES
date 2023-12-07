#include<stdio.h>
#include<stdlib.h>

int main(){
    int numeroquestoes, numeroalunos, i, j;
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

    return 0;
}
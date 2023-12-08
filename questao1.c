#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int numeroparticipantes = 0, numerohomens = 0, numeromulheres = 0, i, j;
    printf("didite o numero de participantes\n");
    scanf("%d", &numeroparticipantes);
	char **genero = (char **) malloc(numeroparticipantes * sizeof(char *));
	char **opinao = (char **) malloc(numeroparticipantes * sizeof(char *));
    for (i = 0; i < numeroparticipantes; i++){
        genero[i] = (char *) malloc(5 * sizeof(char));
    }
    for (i = 0; i < numeroparticipantes; i++){
        opinao[i] = (char *) malloc(12 * sizeof(char));
    }
    for(i = 0; numeroparticipantes > i; i++){
        printf("Qual o genero do participante %d", i +!);
        scanf("%c", genero + i);
        scanf("%c", opinao + i);
    }
    for(i = 0; i < numeroparticipantes; i++){
        if((strcmp("M", genero[i]) == 0) || (strcmp("m", opinao[i]))){
            numerohomens += 1;
        }
        else if ((strcmp("M", genero[i]) == 0) || (strcmp("m", opinao[i]))){
            numeromulheres += 1;
        }else{
            numeroparticipantes -= 1;
        }
        
    }
	free(genero);
    free(opinao);
    return 0;
}
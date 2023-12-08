#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numeroparticipantes, i, j;
    printf("didite o numero de participantes\n");
    scanf("%d", &numeroparticipantes);
	char **genero = (char **) malloc(numeroparticipantes * sizeof(char *));
	char **opinao = (char **) malloc(numeroparticipantes * sizeof(char *));
    for(i = 0; numeroparticipantes > i; i++){
        scanf("%c", genero + i);
    }
	free(genero);
    free(opinao);
    return 0;
}
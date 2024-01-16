/*
	Quest√£o 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou n√£o de um
novo produto. Um n√∫mero N de pessoas de ambos os sexos foi entrevistado, e o question√°rio
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opini√£o sobre o
produto (gostou/n√£o gostou). Escreva um programa em C que:
	a) leia as respostas contidas no question√°rio e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
	b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
	c) determine a porcentagem de pessoas do sexo masculino que responderam que n√£o
gostaram do produto.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int numeroparticipantes = 0, numerohomens = 0, numeromulheres = 0, numerohomensNgostaram = 0, numeromulheresGostaram = 0, i;
    printf("digite o numero de participantes\n");
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
        printf("Qual o genero do participante %d M/F\n", i +1);
        scanf("%s", genero[i]);
        printf("Qual a opiniao do participante %d gostou/nao gostou\n", i +1);
        scanf(" %[^\n]", opinao[i]);
    }
    for(i = 0; i < numeroparticipantes; i++){
        if((strcmp("M", genero[i]) == 0) || (strcmp("m", genero[i]) == 0)){
            numerohomens += 1;
        }
        else if ((strcmp("F", genero[i]) == 0) || (strcmp("f", genero[i]) == 0)){
            numeromulheres += 1;
        }
        if(((strcmp("M", genero[i]) == 0) || (strcmp("m", genero[i]) == 0)) && ((strcmp("nao gostou", opinao[i]) == 0) || (strcmp("Nao gostou", opinao[i]) == 0))){
            numerohomensNgostaram += 1;
        } else if (((strcmp("F", genero[i]) == 0) || (strcmp("f", genero[i]) == 0)) && ((strcmp("gostou", opinao[i]) == 0) || (strcmp("Gostou", opinao[i]) == 0))){
            numeromulheresGostaram += 1;
        }
    }
    printf("a porcentagem de homens que nao gostaram e %.2f%%\n", ((float)numerohomensNgostaram / numerohomens) * 100);
    printf("a porcentagem de mulheres que gostaram e %.2f%%\n", ((float)numeromulheresGostaram / numeromulheres) * 100);
    for (i = 0; i < numeroparticipantes; i++) {
        free(genero[i]);
        free(opinao[i]);
    }
	free(genero);
    free(opinao);
    return 0;
}
/*
	Quest„o 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou n„o de um
novo produto. Um n˙mero N de pessoas de ambos os sexos foi entrevistado, e o question·rio
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opini„o sobre o
produto (gostou/n„o gostou). Escreva um programa em C que:
	a) leia as respostas contidas no question·rio e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
	b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
	c) determine a porcentagem de pessoas do sexo masculino que responderam que n„o
gostaram do produto.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int numeroparticipantes = 0, numerohomens = 0, numeromulheres = 0, numerohomensNgostaram = 0, numeromulheresGostaram = 0, i;
    printf("digite o numero de participantes\n");
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
        printf("Qual o genero do participante %d M/F\n", i +1);
        scanf("%s", genero[i]);
        printf("Qual a opiniao do participante %d gostou/nao gostou\n", i +1);
        scanf(" %[^\n]", opinao[i]);
    }
    for(i = 0; i < numeroparticipantes; i++){
        if((strcmp("M", genero[i]) == 0) || (strcmp("m", genero[i]) == 0)){
            numerohomens += 1;
        }
        else if ((strcmp("F", genero[i]) == 0) || (strcmp("f", genero[i]) == 0)){
            numeromulheres += 1;
        }
        if(((strcmp("M", genero[i]) == 0) || (strcmp("m", genero[i]) == 0)) && ((strcmp("nao gostou", opinao[i]) == 0) || (strcmp("Nao gostou", opinao[i]) == 0))){
            numerohomensNgostaram += 1;
        } else if (((strcmp("F", genero[i]) == 0) || (strcmp("f", genero[i]) == 0)) && ((strcmp("gostou", opinao[i]) == 0) || (strcmp("Gostou", opinao[i]) == 0))){
            numeromulheresGostaram += 1;
        }
    }
    printf("a porcentagem de homens que nao gostaram e %.2f%%\n", ((float)numerohomensNgostaram / numerohomens) * 100);
    printf("a porcentagem de mulheres que gostaram e %.2f%%\n", ((float)numeromulheresGostaram / numeromulheres) * 100);
    for (i = 0; i < numeroparticipantes; i++) {
        free(genero[i]);
        free(opinao[i]);
    }
	free(genero);
    free(opinao);
    return 0;
}
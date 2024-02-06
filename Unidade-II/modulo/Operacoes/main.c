#include <stdio.h>
#include "operacoes.h"

int main(){
    float numeroa, numerob, expoente;
    printf("digite\n");
    scanf("%f", &numeroa);
    printf("digite\n");
    scanf("%f", &numerob);
    float soma = Soma(numeroa, numerob);
    float subtracao = Subtracao(numeroa, numerob);
    float multiplicacao = Multiplicacao(numeroa, numerob);
    float Divisao = divisao(numeroa, numerob);
    printf("%f\n", soma);
    printf("%f\n", subtracao);
    printf("%f\n", multiplicacao);
    printf("%f\n", Divisao);

}
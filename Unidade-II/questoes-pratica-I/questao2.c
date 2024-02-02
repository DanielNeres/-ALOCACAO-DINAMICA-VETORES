#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *arquivo = fopen("Entrada_q1.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
}
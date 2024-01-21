#include<stdio.h>
#include<stdlib.h>
typedef struct SVpublico{
char nome[20];
int idade;
int RG;
char funcao[30];
} SVpublico;

void preencher(SVpublico *Leandros);
void imprimir(SVpublico *Leandros);

int main(){
    SVpublico * Leandros = (SVpublico*) malloc(sizeof(SVpublico));
    if(Leandros == NULL){
        exit(1);
    }
    preencher(Leandros);
    imprimir(Leandros);
    free(Leandros);
    return 0;
}

void preencher(SVpublico *Leandros){
    printf("digite o nome\n");
    scanf("%[^\n]", (*Leandros).nome);
    printf("digite a idade\n");
    scanf("%d", &(*Leandros).idade);
    printf("digite a funcao\n");
    scanf(" %[^\n]", (*Leandros).funcao);
    printf("digite o RG\n");
    scanf("%d", &(*Leandros).RG);
}
void imprimir(SVpublico *Leandros){
    printf(" nome: %s\n idade: %d\n RG: %d\n Funcao: %s\n", (*Leandros).nome, (*Leandros).idade, (*Leandros).RG, (*Leandros).funcao );
}
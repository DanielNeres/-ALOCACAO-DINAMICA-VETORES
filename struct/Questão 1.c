#include<stdio.h>
#include<stdlib.h>
typedef struct{
char nome[40];
char funcao[20];
int identificador;
float salario;
} Dadosfuncionario;

void preencher(Dadosfuncionario *Funcionario);
void imprimir(Dadosfuncionario *Funcionario);
void mudarsalario(Dadosfuncionario *Funcionario);

int main(){
    Dadosfuncionario * Funcionario = (Dadosfuncionario*) malloc(sizeof(Dadosfuncionario));
    if(Funcionario == NULL){
        exit(1);
    }
    preencher(Funcionario);
    imprimir(Funcionario);
    free(Funcionario);
    return 0;
}

void preencher(SVpublico *Funcionario){
    printf("digite o nome\n");
    scanf("%[^\n]", (*Funcionario).nome);
    printf("digite a idade\n");
    scanf("%d", &(*Funcionario).idade);
    printf("digite a funcao\n");
    scanf(" %[^\n]", (*Funcionario).funcao);
    printf("digite o RG\n");
    scanf("%d", &(*Funcionario).RG);
}
void imprimir(SVpublico *Funcionario){
    printf(" nome: %s\n idade: %d\n RG: %d\n Funcao: %s\n", (*Funcionario).nome, (*Funcionario).idade, (*Funcionario).RG, (*Funcionario).funcao );
}
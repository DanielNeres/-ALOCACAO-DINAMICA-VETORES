#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Nome[40];
    float Preco;
}Frutas;
 

int main()
{
    FILE *arquivo = fopen("Frutas.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
    Frutas frutas_var;
    int permanencia = 1, i;
    char escolhapermanencia;
    do
    {
        system("cls");
        fprintf(arquivo, "Dados da fruta %d\n", i);

        printf("digite o nome da fruta %d:\n", i);
        scanf(" %s", frutas_var.Nome);
        fprintf(arquivo, "Nome: %s\t", frutas_var.Nome);

        printf("digite o ID do funcionario %d:\n", i);
        scanf("%d", &frutas_var.Preco);
        fprintf(arquivo, "ID: %d\n\n", frutas_var.Preco);

        printf("Se deseja continuar fazendo cadastro digite 'C'");
        scanf("%c", &escolhapermanencia);
        if(escolhapermanencia != 'c' || escolhapermanencia != 'C'){
            permanencia = 1;
        }

    }while (permanencia != 0);
    
    fclose(arquivo);
}
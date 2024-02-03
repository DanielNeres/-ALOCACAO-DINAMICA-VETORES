/*Você foi contratado para desenvolver um programa em C que permita 
o cadastro de frutas e seus preços em um arquivo de dados. O programa
deve usar uma estrutura (struct) para armazenar os detalhes de cada fruta, 
incluindo o nome da fruta e o preço.

O programa deve realizar as seguintes ações:

Definir uma estrutura chamada Fruta com os seguintes campos:

nome (string) para armazenar o nome da fruta.
preço (float) para armazenar o preço da fruta.

Permitir que o usuário insira os dados das frutas via teclado. 
O usuário poderá cadastrar múltiplas frutas em uma única execução 
do programa. Para cada fruta, o programa deve solicitar:

O nome da fruta.
O preço da fruta.

Após inserir os dados de cada fruta, o programa deve salvar as 
informações no arquivo ‘frutas.txt’. Cada linha do arquivo deve 
conter o nome da fruta e seu preço, separados por vírgula.

O programa deve continuar solicitando os dados das frutas até que 
o usuário decida parar. Quando o usuário decidir parar de cadastrar 
frutas, o programa deve exibir uma mensagem de encerramento e fechar o arquivo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Nome[40];
    float preco;
}Frutas;
 

int main()
{
    FILE *arquivo = fopen("frutas.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro!!!");
        return 1;
    }
    Frutas frutas_var;
    int permanencia = 1, i = 1;
    char escolhapermanencia;
    do
    {
        system("cls");
        fprintf(arquivo, "Dados da fruta %d\n", i);

        printf("digite o nome da fruta %d:\n", i);
        scanf(" %s", frutas_var.Nome);
        fprintf(arquivo, "%s, ", frutas_var.Nome);

        printf("digite o preco da fruta %d:\n", i);
        scanf("%d", &frutas_var.preco);
        fprintf(arquivo, "%d\n\n", frutas_var.preco);

        printf("Se deseja continuar fazendo cadastro digite 'C'\n");
        scanf(" %c", escolhapermanencia);
        if(escolhapermanencia != 'c' || escolhapermanencia != 'C'){
            permanencia = 1;
            printf("Programa encerrado com sucesso");
            return 0;
        }
        i++;
    }while (permanencia != 0);
    
    fclose(arquivo);
}
#include "lista.h"


struct lista
{
    int informacao;
    Lista *pro_informacao;
    Lista *ant_informacao;
};

Lista *criar_Lista(void)
{
    return NULL;
}

Lista *insere_elemento(Lista *lista, int valor)
{

    Lista *Novo_No = (Lista *)malloc(sizeof(lista));
    
    Novo_No->informacao = valor;
    Novo_No->pro_informacao = lista;
    Novo_No->ant_informacao = NULL;
    if (Novo_No == NULL)
    {
        lista->ant_informacao = Novo_No;
    }
    
    return Novo_No;
}

void Imprimir_Elementos(Lista *lista)
{

    Lista *contador;
    for (contador = lista; contador != NULL; contador = contador->pro_informacao)
    {
        printf("%d\n", contador->informacao);
    }
}

void Verica_Vazio(Lista *lista)
{
    if (lista == NULL)
    {
        printf("Lista vazia\n");
    }
    printf("Lista nao vazia\n");
}

void Busca_Elemento(Lista *lista, int Busca)
{

    Lista *contador;
    for (contador = lista; contador != NULL; contador = contador->pro_informacao)
    {
        if (contador->informacao == Busca)
        {
            printf("%d\n", contador->informacao);
            break;
        }
    }
    printf("objeto não encontrado\n");
}

Lista *Eliminar_Elemento(Lista *lista, int Apagar)
{

    Lista *Atual = lista;
    Lista *Anterior = NULL;
    while (Atual->informacao != Apagar && Atual != NULL)
    {

        Anterior = Atual;
        Atual = Atual->pro_informacao;
    }
    if (Anterior == NULL)
    {
        free(Atual);
        return lista;
    }
    else if (Atual == NULL)
    {
        return lista;
    }
    else
    {
        Anterior->pro_informacao = Atual->pro_informacao;
        free(Atual);
        return lista;
    }
    printf("objeto não encontrado\n");
    return lista;
}

int Elementos_Maior_Que_N(Lista *lista, int N)
{

    Lista *contador;
    int Contador_de_Maiores = 0;
    for (contador = lista; contador != NULL; contador = contador->pro_informacao)
    {
        if (contador->informacao > N)
        {
            Contador_de_Maiores++;
        }
    }
    return Contador_de_Maiores;
}

Lista *Ultimo_Elemento(Lista *lista)
{

    Lista *Ultimo_Elemento;
    if (lista == NULL)
    {
        return NULL;
    }

    while (lista->pro_informacao != NULL)
    {
        Ultimo_Elemento = lista;
        lista = lista->pro_informacao;
    }
    return lista;
}

Lista *Concatenar_Lista(Lista *lista1, Lista *lista2)
{

    Lista *Ultimo_Elemento_lista1 = Ultimo_Elemento(lista1);
    Ultimo_Elemento_lista1->pro_informacao = lista2;
    return lista1;
}

Lista *Retira_N_Elementos(Lista *lista, int N)
{
    Lista *Atual;
    Lista *Anterior;

    Lista *Primeiro_Elemento;
    while (lista != NULL && lista->informacao == N)
    {
        Primeiro_Elemento = lista->pro_informacao;
        free(lista);
        lista = Primeiro_Elemento;
    }

    for (Atual = lista; Atual != NULL;)
    {
        if (Atual->informacao == N)
        {
            Anterior->pro_informacao = Atual->pro_informacao;
            Lista *temp = Atual;
            Atual = Atual->pro_informacao;
            free(temp);
        }
        else
        {
            Anterior = Atual;
            Atual = Atual->pro_informacao;
        }
    }
    return lista;
}

void Imprimir_Reverso(lista){

    Lista *Ultimo_elemento = Ultimo_Elemento(lista);
    for(; Ultimo_elemento != NULL; Ultimo_elemento = Ultimo_elemento->ant_informacao){
        printf("%d", Ultimo_elemento);
    }
}
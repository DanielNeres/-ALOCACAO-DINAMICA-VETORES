#include "lista.h"

struct lista
{
    int informacao;
    Lista *pro_informacao;
};

Lista *criar_Lista(void)
{
    return NULL;
}

Lista *insere_elemento(Lista *lista, int valor)
{

    Lista *Novo_No = (Lista *)malloc(sizeof(Lista));
    if (Novo_No == NULL)
    {
        exit(1);
    }
    Novo_No->informacao = valor;
    Novo_No->pro_informacao = lista;
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
    Lista *Lista_Concatenada = Ultimo_Elemento_lista1;
    Lista_Concatenada = lista2;
}

Lista *Retira_Elemnetos_N(Lista *lista, int N)
{

    Lista *Atual = lista;
    Lista *Anterior = NULL;
    int Continuar_Loop = 1;

    while (Continuar_Loop == 1)
    {
        Continuar_Loop = 0;
        while (Atual->informacao != N && Atual != NULL)
        {

            Anterior = Atual;
            Atual = Atual->pro_informacao;
            Continuar_Loop = 1;
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
}
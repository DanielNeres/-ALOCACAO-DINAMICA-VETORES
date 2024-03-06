#include<stdio.h>

typedef struct ponto
{
    float x;
    float y;
}Ponto;

typedef struct circulo
{
    Ponto *centro;
    float raio;
}Circulo;

typedef struct Lista_circulo{

    Circulo *Circulo_var;
    Lista_Circulo *Proximo_informacao;
    Lista_Circulo *Anterior_Elemeto;
}Lista_Circulo;

Lista_Circulo *Alocando_lista(float x, float y, float raio, Lista_Circulo *lista){
    Lista_Circulo *Novo_No = (Lista_Circulo*)malloc(sizeof(Lista_Circulo));

    Novo_No->Circulo_var->centro->x = x;
    Novo_No->Circulo_var->centro->y = y;
    Novo_No->Circulo_var->raio = raio;
    if (Novo_No == NULL)
    {
        lista->Anterior_Elemeto = Novo_No;
    }
    
    return Novo_No;
}
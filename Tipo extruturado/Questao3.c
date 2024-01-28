/*Questão 3) Defina estruturas para representar retângulos (dadas a base e a altura) e círculos (dado o raio), e
implemente as funções a seguir:
a) Dado um círculo, crie e retorne o maior retângulo circunscrito de altura h. Considere que h é menor do
que o diâmetro do círculo.
Protótipo: Ret* ret_circunscrito(Circ* c, float h);
b) Dado um retângulo, crie e retorne o maior círculo interno ao retângulo.
Protótipo: Circ* circ_interno(Ret* r);*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
	float base, altura;
}Ret;

typedef struct{
	float raio;
}Circ;

Ret *ret_circunscrito(Circ *c, float h);
Circ *circ_interno(Ret *r);

int main(){
	float h;
	Ret *r = (Ret*)malloc(sizeof(Ret));
	if(r == NULL){
        printf("Erro!\n");
        exit(1);
    }
	Circ *c = (Circ*)malloc(sizeof(Circ));
	if(c == NULL){
        printf("Erro!\n");
        exit(1);
    }
	printf("digite o raio do circulo\n");
	scanf("%f", &c->raio);
	printf("digite a altura do retangulo\n");
	scanf("%f", &h);
	if(h > 2*c->raio){
		printf("altura inconpativel\n");
		exit(1);
	}
	Ret *retangulo_circunscrito = ret_circunscrito(c, h);
	printf("Base = %f; Altura = %f.\n\n", retangulo_circunscrito->base, retangulo_circunscrito->altura);
	
	printf("digite a base do retangulo\n");
	scanf("%f", &r->base);
	printf("digite a altura do retangulo\n");
	scanf("%f", &r->altura);
	Circ *circulo_interno = circ_interno(r);
	printf("Raio = %f.\n", circulo_interno->raio);
	
	free(r);
	free(c);
	return 0;
}

Ret *ret_circunscrito(Circ *c, float h){
	Ret *retangulo_circunscrito_var = (Ret*)malloc(sizeof(Ret));
    if (retangulo_circunscrito_var == NULL) {
        printf("Erro!\n");
        exit(1);
    }

    retangulo_circunscrito_var->altura = h;
    retangulo_circunscrito_var->base =  2 * sqrt(pow(c->raio, 2) - pow(h/2, 2));
	return retangulo_circunscrito_var;
}

Circ *circ_interno(Ret *r){
	Circ *circulo_interno_var = (Circ*)malloc(sizeof(Circ));
    if (circulo_interno_var == NULL) {
        printf("Erro!\n");
        exit(1);
    }
    if(r->base <= r->altura){
		circulo_interno_var->raio = (r->base)/2;
	} else{
		circulo_interno_var->raio = (r->altura)/2;
	}
	return circulo_interno_var;
}
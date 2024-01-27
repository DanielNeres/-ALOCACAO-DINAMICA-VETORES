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
	Ret *retangulo_circunscrito = ret_circunscrito(c, h);
	printf("Base = %f; Altura = %f.", retangulo_circunscrito->base, retangulo_circunscrito->altura);
}

Ret *ret_circunscrito(Circ *c, float h){
	Ret *retangulo_circunscrito_var = (Ret*)malloc(sizeof(Ret));
    if (retangulo_circunscrito_var == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    retangulo_circunscrito_var->altura = h;
    retangulo_circunscrito_var->base =  2 * sqrt(pow(c->raio, 2) - pow(h/2, 2));

}
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
	Ret retangulo_circunscrito = ret_circunscrito(c, h);
	printf("base = %f; altura = %f.", retangulo_circunscrito.base, retangulo_circunscrito.altura);
}

Ret *ret_circunscrito(Circ *c, float h){
	Ret retangulo_circunscrito;
	retangulo_circunscrito->altura = h;
	retangulo_circunscrito->base =  2 * sqrt(pow(c->raio, 2) - pow(h/2, 2));
	return h;
}
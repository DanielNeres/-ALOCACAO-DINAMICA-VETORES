#include<stdio.h>
#include "tentandofazer.h"

float AoQuadrado(float numero){
    return (numero * numero);
}

float AoCubo(float numero){
    return (numero * numero) * (numero);
}

float Potencia(float numero, int expoente){
    if(expoente == 0){
        return 1;
    }
    float resultado = numero;
    for(; expoente != 0; expoente--){
        resultado = numero * resultado; 
    }
    return resultado;
}

float Soma(float a, float b){
    return (a + b);
}

float Subtracao(float a, float b){
    return (a - b);
}

float Multiplicacao(float a, float b){
    return (a*b);
}

float divisao(float a, float b){
    if(b == 0){
        return -1;
    }
    return (a / b);
}
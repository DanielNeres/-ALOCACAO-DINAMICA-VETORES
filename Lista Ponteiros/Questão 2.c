// Questão 2) Considere o trecho de código abaixo:
#include <stdio.h>
int main(void) {
int x, *p;
x = 100;
p = x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);
}
/*
Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem é de erro ou advertência?
b) Por que o compilador emite tal mensagem?
c) Compile e execute o programa. A execução foi bem sucedida?
d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida 
pelo compilador.
e) Compile e execute novamente o programa. A execução foi bem sucedida?

Respostas:

a) Sim.
b) Por que, a variavel P e um ponteiro, ou seja, guarda um endereço, o que não acontece na atribuição da variavel "p = x;", o que acarreta em outro erro no "printf(“Valor de p = %p", pois a variavel p não guarda um endereço.
c) Não.
d) 
*/
int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);
}
//c) Sim.

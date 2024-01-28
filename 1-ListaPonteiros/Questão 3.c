//Questão 3) Qual será a saída exibida pelo programa a seguir:

#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}
/*
Observe que, se int *p é uma variável do tipo ponteiro para inteiro, então int **pp é uma 
variável do tipo ponteiro para ponteiro de inteiro, isto é, uma varável que poderá armazenar o 
endereço de um ponteiro do tipo int. 


 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2; então p1 = &a
 *p2 = 10; ou seja, a = 10
 b = 20;
 int **pp;
 pp = &p1; então pp = &p1 = &a, o que implica que *pp = 10
 *p3 = **pp; então c = 10
 int *p4 = &d;
 *p4 = b + (*p1)++; ou seja, *p4 = 20 + 10++ então *p4 = 30 e a = 11, pois a adição de *p1 só acontece após a soma em *p4
  a = 11
  b = 20
  c = 10
  d = 30


  Saida: 11   20   10   30
*/
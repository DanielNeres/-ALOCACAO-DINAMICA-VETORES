#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Aluno * estudante = matricula_N_alunos();
    imprimir_dados(estudante);
    liberar_memoria(estudante);

    return 0;
}
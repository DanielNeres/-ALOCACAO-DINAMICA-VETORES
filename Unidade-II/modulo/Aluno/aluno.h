
typedef struct aluno Aluno;
/*Função que aloca memoria para um struct Aluno via teclado, e retorna um ponteiro para Aluno*/
Aluno * recebe_dados();

/*Função que imprimi os dados de um struct Aluno, recebe como aregumento um ponteiro Aluno*/
void imprimir_dados(Aluno *imprimir, int QuantidadeAlunos);

/*Função que libera a memoria de uma variavel struct Aluno, recebe como aregumento um ponteiro Aluno*/
void liberar_memoria(Aluno *liberar);

/*Função que aloca memoria para um struct Aluno via teclado, e retorna um ponteiro para Aluno*/
void matricula_N_alunos(Aluno *estudante, int Quantidade_Alunos);
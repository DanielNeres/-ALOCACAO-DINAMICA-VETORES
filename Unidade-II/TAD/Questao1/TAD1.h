typedef struct ingresso Ingresso;

void menu();

int RetornarMenu();

void preenche(Ingresso *i, int QuantidadeIngresso);

void imprime(Ingresso *i, int QuantidadeIngresso);

void altera_preco(Ingresso *i, float valor, int QuantidadeIngresso);

void imprime_menor_maior_preco(int n, Ingresso * i);
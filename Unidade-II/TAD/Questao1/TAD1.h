typedef struct ingresso Ingressos;

void menu();

int RetornarMenu();

void preenche(Ingressos *i, int QuantidadeIngresso);

void imprime(Ingressos *i, int QuantidadeIngresso);

void altera_preco(Ingressos *i, float valor, int QuantidadeIngresso);

void imprime_menor_maior_preco(int n, Ingressos * i);
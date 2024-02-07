typedef struct ingresso Ingressos;

void menu();

int RetornarMenu();

void preencher(Ingressos * i, int QuantidadeIngresso);

void imprimir(Ingressos *i, int QuantidadeIngresso);

void alterar_preco(Ingressos *i, float valor, int QuantidadeIngresso);

void imprimir_menor_maior_preco(int n, Ingressos * i);
typedef struct ingresso Ingressos;

void menu();

int RetornarMenu();

void preencher(Ingressos * i);

void imprimir(Ingressos *i);

void alterar_preco(Ingressos *i, float valor);

void imprimir_menor_maior_preco(int n, Ingressos * i);
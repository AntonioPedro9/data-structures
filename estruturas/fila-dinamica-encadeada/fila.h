typedef struct fila *Fila;

Fila cria_fila();

int fila_vazia(Fila f);

int insere_final(Fila f, int elemento);
int remove_inicio(Fila f, int *elemento);

void imprime(Fila f);

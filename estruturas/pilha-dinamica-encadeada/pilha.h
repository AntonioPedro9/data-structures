typedef struct no *Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha p);

int push(Pilha *p, int elemento);
int pop(Pilha *p, int *elemento);

void imprime(Pilha *p);

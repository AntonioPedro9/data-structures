#include <stdio.h>
#include "pilha.h"

int main() {
    int elemento;

    Pilha p = cria_pilha();

    push(&p, 1);
    push(&p, 2);
    push(&p, 3);
    push(&p, 4);

    imprime(&p);

    pop(&p, &elemento);
    printf("Elemento removido: %d\n", elemento);

    imprime(&p);

    return 0;
}

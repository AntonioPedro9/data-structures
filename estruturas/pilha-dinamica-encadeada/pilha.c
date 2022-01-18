#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no {
    int valor;
    struct no *proximo;
};

Pilha cria_pilha() {
    return NULL;
}

int pilha_vazia(Pilha p) {
    if (p == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int push(Pilha *p, int elemento) {
    Pilha N = (Pilha) malloc(sizeof(struct no));

    if (N == NULL) {
        return 0;
    }

    N->valor = elemento;
    N->proximo = *p;
    *p = N;

    return 1;
}

int pop(Pilha *p, int *elemento) {
    if (pilha_vazia(p) == 1) {
        return 0;
    }

    Pilha auxiliar = *p;
    *elemento = auxiliar->valor;
    *p = auxiliar->proximo;
    free(auxiliar);

    return 1;
}

void imprime(Pilha *p) {
    Pilha auxiliar = *p;

    if (pilha_vazia(p) != 1) {
        while (auxiliar != NULL) {
            printf("%d ", auxiliar->valor);
            auxiliar = auxiliar->proximo;
        }
        printf("\n");
    }
}

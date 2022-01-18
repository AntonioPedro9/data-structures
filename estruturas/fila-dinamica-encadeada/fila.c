#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no {
    int valor;
    struct no *proximo;
};

struct fila {
    struct no *inicio;
    struct no *fim;
};

Fila cria_fila() {
    Fila f = (Fila) malloc(sizeof(struct fila));

    if (f != NULL) {
        f->inicio = NULL;
        f->fim = NULL;
    }

    return f;
}

int fila_vazia(Fila f) {
    if (f->inicio == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int insere_final(Fila f, int elemento) {
    struct no *N;

    N = (struct no *) malloc(sizeof(struct no));

    if (N == NULL) {
        return 0;
    }

    N->valor = elemento;
    N->proximo = NULL;

    if (fila_vazia(f) == 1) {
        f->inicio = N;
    }
    else {
        (f->fim)->proximo = N;
    }

    f->fim = N;

    return 1;
}

int remove_inicio(Fila f, int *elemento) {
    if (fila_vazia(f) == 1) {
        return 0;
    }

    struct no *auxiliar = f->inicio;
    *elemento = auxiliar->valor;

    if (f->inicio == f->fim) {
        f->fim = NULL;
    }

    f->inicio = auxiliar->proximo;
    free(auxiliar);

    return 1;
}

void imprime(Fila f) {
    if (fila_vazia(f) != 1) {
        struct no* auxiliar = f->inicio;

        while (auxiliar != NULL){
            printf("%d ", auxiliar->valor);
            auxiliar = auxiliar->proximo;
        }
        printf("\n");
    }
}

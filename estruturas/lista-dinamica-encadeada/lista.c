#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no {
    int valor;
    struct no *proximo;
};

Lista cria_lista() {
    return NULL;
}

int lista_vazia(Lista lst) {
    if (lst == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int insere_elemento(Lista *lst, int elemento) {
    Lista N = (Lista) malloc(sizeof(struct no));

    if (N == NULL) {
        return 0;
    }

    N->valor = elemento;
    N->proximo = *lst;
    *lst = N;

    return 1;
}

int remove_elemento(Lista *lst, int elemento) {
    if (lista_vazia(lst) == 1) {
        return 0;
    }

    Lista auxiliar = *lst;

    if (elemento == (*lst)->valor) {
        *lst = auxiliar->proximo;
        free(auxiliar);

        return 1;
    }

    while (auxiliar->proximo != NULL && auxiliar->proximo->valor != elemento) {
        auxiliar = auxiliar->proximo;
    }

    if (auxiliar->proximo == NULL) {
        return 0;
    }

    Lista auxiliar2 = auxiliar->proximo;
    auxiliar->proximo = auxiliar2->proximo;
    free(auxiliar2);

    return 1;
}

void imprime(Lista *lst) {
    Lista auxiliar = *lst;

    if (lista_vazia(lst) != 1) {
        while (auxiliar != NULL) {
            printf("%d ", auxiliar->valor);
            auxiliar = auxiliar->proximo;
        }
        printf("\n");
    }
}

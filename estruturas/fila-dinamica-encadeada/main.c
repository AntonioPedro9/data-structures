#include <stdio.h>
#include "fila.h"

int main() {
    int elemento;

    Fila f = cria_fila();

    insere_final(f, 1);
    insere_final(f, 2);
    insere_final(f, 3);
    insere_final(f, 4);

    imprime(f);

    remove_inicio(f, &elemento);
    printf("Elemento removido: %d\n", elemento);

    imprime(f);

    return 0;
}

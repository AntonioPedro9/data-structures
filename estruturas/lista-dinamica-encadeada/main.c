#include <stdio.h>
#include "lista.h"

int main() {
    Lista lst = cria_lista();

    insere_elemento(&lst, 1);
    insere_elemento(&lst, 2);
    insere_elemento(&lst, 3);
    insere_elemento(&lst, 4);

    imprime(&lst);

    remove_elemento(&lst, 1);

    imprime(&lst);

    return 0;
}

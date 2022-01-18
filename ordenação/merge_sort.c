#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int vetor[], int inicio, int meio, int fim) {
  int i, j, k, *auxiliar, p1, p2, tamanho;
  int fim1 = 0, fim2 = 0;

  tamanho = fim - inicio + 1;

  p1 = inicio;
  p2 = meio + 1;

  auxiliar = (int *) malloc(tamanho * sizeof(int));

  if (auxiliar != NULL) {
    for (i = 0; i < tamanho; i++) {
      if (!fim1 && !fim2) {

        if (vetor[p1] < vetor[p2]) {
          auxiliar[i] = vetor[p1++];
        }
        else {
          auxiliar[i] = vetor[p2++];
        }

        if (p1 > meio) fim1 = 1;
        if (p2 > fim) fim2 = 1;
      }
      else {
        if (!fim1) {
          auxiliar[i] = vetor[p1++];
        }
        else {
          auxiliar[i] = vetor[p2++];
        }
      }
    }
    for (j = 0, k = inicio; j < tamanho; j++, k++) {
      vetor[k] = auxiliar[j];
    }
  }
  free(auxiliar);
}

void merge_sort(int vetor[], int inicio, int fim) {
  int meio;

  if (inicio < fim) {
    meio = floor((inicio+fim)/2);

    merge_sort(vetor, inicio, meio);
    merge_sort(vetor, meio+1, fim);

    merge(vetor, inicio, meio, fim);
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};

  merge_sort(vetor, 0, 5);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}
  
#include <stdio.h>

void selection_sort(int vetor[], int n) {
  int i, j, menor, auxiliar;

  for (i = 0; i < n-1; i++) {
    menor = i;

    for (j = i+1; j < n; j++) {
      if (vetor[j] < vetor[menor]) {
        menor = j;
      }
    }

    if (i != menor) {
      auxiliar = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = auxiliar;
    }
  }
}

int main() {
  int vetor[] = {5, 4, 3, 2, 1};

  selection_sort(vetor, 5);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}
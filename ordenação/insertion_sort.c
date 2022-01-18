#include <stdio.h>

void insertion_sort(int vetor[], int n) {
  int i, j, auxiliar;

  for (i = 1; i < n; i++) {
    auxiliar = vetor[i];

    for (j = i; (j > 0) && (auxiliar < vetor[j-1]); j--) {
      vetor[j] = vetor[j-1];
    }

    vetor[j] = auxiliar;
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};

  insertion_sort(vetor, 5);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}
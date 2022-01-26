#include <stdio.h>

void heapify(int vetor[], int n, int i) {
  int esquerda, direita, maior, auxiliar;
  
  maior = i;
  esquerda = 2 * i + 1;
  direita = 2 * i + 2;

  if (esquerda < n && vetor[esquerda] > vetor[maior]) {
    maior = esquerda;
  }

  if (direita < n && vetor[direita] > vetor[maior]) {
    maior = direita;
  }

  if (maior != i) {
    auxiliar = vetor[i];
    vetor[i] = vetor[maior];
    vetor[maior] = auxiliar;
    
    heapify(vetor, n, maior);
  }
}

void heap_sort(int vetor[], int n) {
  int i, auxiliar;
  
  for (i = (n / 2) - 1; i >= 0; i--) {
    heapify(vetor, n, i);
  }

  for (i = n - 1; i >= 0; i--) {
    auxiliar = vetor[0];
    vetor[0] = vetor[i];
    vetor[i] = auxiliar;
    
    heapify(vetor, i, 0);
  }
}

int main() {
  int vetor[] = {5, 4, 3, 2, 1};
  int n = sizeof(vetor) / sizeof(vetor[0]);

  heap_sort(vetor, n);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}
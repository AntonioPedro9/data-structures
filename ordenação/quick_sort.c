#include <stdio.h>

int particiona(int vetor[], int inicio, int fim) {
  int esquerda, direita, pivo, auxiliar;

  esquerda = inicio;
  direita = fim;
  pivo = vetor[inicio];

  while (esquerda < direita) {
    while (esquerda <= fim && vetor[esquerda] <= pivo) {
      esquerda++;
    }

    while (direita >= 0 && vetor[direita] > pivo) {
      direita--;
    }

    if (esquerda < direita) {
      auxiliar = vetor[esquerda];
      vetor[esquerda] = vetor[direita];
      vetor[direita] = auxiliar;
    }
  }
  vetor[inicio] = vetor[direita];
  vetor[direita] = pivo;

  return direita;
}

void quick_sort(int vetor[], int inicio, int fim) {
  int pivo;

  if (fim > inicio) {
    pivo = particiona(vetor, inicio, fim);
    
    quick_sort(vetor, inicio, pivo-1);
    quick_sort(vetor, pivo+1, fim);
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};

  quick_sort(vetor, 0, 5);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}

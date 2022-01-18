#include <stdio.h>

void bubble_sort(int vetor[], int n) {
  int i, continua, auxiliar, fim = n;

  do {
    continua = 0;

    for (i = 0; i < fim-1; i++) {
      if(vetor[i] > vetor[i+1]) {
        auxiliar = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = auxiliar;
        
        continua = i;
      }
    }
    
    fim--;
    
  } while (continua != 0);
}

int main() {
  int vetor[] = {5, 4, 3, 2, 1};

  bubble_sort(vetor, 5);
  
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);  
  }
  
  return 0;
}
  
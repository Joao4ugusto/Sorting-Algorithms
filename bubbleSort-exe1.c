#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
  int i, j, aux;
  for (i = 0; i < tamanho - 1; i++) {
    for (j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

int main() {
  int vetor[100], tamanho, i;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  printf("Digite os %d elementos do vetor:\n", tamanho);
  for (i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  bubbleSort(vetor, tamanho);

  printf("\nVetor ordenado em ordem crescente:\n");
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
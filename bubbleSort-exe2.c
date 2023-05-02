#include <stdio.h>
#include <string.h>

void bubble_sort(char **vetor, int tamanho) {
    int i, j;
    char *temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (strcmp(vetor[j], vetor[j+1]) > 0) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    int i, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    char *vetor[tamanho];

    printf("Digite as strings:\n");
    for (i = 0; i < tamanho; i++) {
        char *string = malloc(sizeof(char) * 100);
        scanf("%s", string);
        vetor[i] = string;
    }

    bubble_sort(vetor, tamanho);

    printf("\nVetor ordenado em ordem alfabética crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%s\n", vetor[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int *v, int n){
    bool ordenado;
    for(int i = 0; i < n-1; i++){
        ordenado = true;
        for(int j = 0; j < n - i - 1; j ++){
            if(v[j] > v[j+1]){
                int tam = v[j];
                v[j] = v[j+1];
                v[j+1] = tam;
                ordenado = false;
            }
        }
        if (ordenado) break;
    }
}

int main(){
    int vetor[5] = {1,4,5,2,3};
    bubbleSort(vetor, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}








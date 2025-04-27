#include <stdio.h>

void merge(int array[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int esquerda[n1], direita[n2];

    for (int i = 0; i < n1; i++) esquerda[i] = array[inicio + i];
    for (int j = 0; j < n2; j++) direita[j] = array[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            array[k++] = esquerda[i++];
        } else {
            array[k++] = direita[j++];
        }
    }

    while (i < n1) array[k++] = esquerda[i++];
    while (j < n2) array[k++] = direita[j++];
}

void mergeSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(array, inicio, meio);
        mergeSort(array, meio + 1, fim);
        merge(array, inicio, meio, fim);
    }
}

int main() {
    int array[] = {5, 3, 8, 1};
    int n = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particiona(int array[], int inicio, int fim) {
    int pivo = array[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (array[j] < pivo) {
            i++;
            troca(&array[i], &array[j]);
        }
    }
    troca(&array[i + 1], &array[fim]);
    return i + 1;
}

void quickSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particiona(array, inicio, fim);
        quickSort(array, inicio, pi - 1);
        quickSort(array, pi + 1, fim);
    }
}

int main() {
    int array[] = {9, 2, 5, 1, 7};
    int n = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
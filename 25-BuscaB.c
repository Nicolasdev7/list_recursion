#include <stdio.h>

int buscaBinaria(int array[], int inicio, int fim, int elemento) {
    if (inicio > fim) {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if (array[meio] == elemento) {
        return meio;
    } else if (array[meio] > elemento) {
        return buscaBinaria(array, inicio, meio - 1, elemento);
    } else {
        return buscaBinaria(array, meio + 1, fim, elemento);
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int elemento = 5;

    int resultado = buscaBinaria(array, 0, n - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}
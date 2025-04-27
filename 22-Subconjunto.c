
#include <stdio.h>

void imprimeSubconjunto(int subset[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", subset[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

void geraSubconjuntos(int array[], int n, int subset[], int tamanho, int indice) {
    if (indice == n) {
        imprimeSubconjunto(subset, tamanho);
        return;
    }
    geraSubconjuntos(array, n, subset, tamanho, indice + 1);
    subset[tamanho] = array[indice];
    geraSubconjuntos(array, n, subset, tamanho + 1, indice + 1);
}

int main() {
    int array[] = {1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int subset[n];
    geraSubconjuntos(array, n, subset, 0, 0);
    return 0;
}

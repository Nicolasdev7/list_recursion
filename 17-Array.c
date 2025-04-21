# include <stdio.h>

int buscar_array(int *array, int n, int atual){
    if (atual >= n){
        return -1;
    }

    if (array[atual] == 0){
        return atual;
    }

    return buscar_array(array, n, atual + 1);
}

int main(){
    int array[10] = {1, 2, 3, 4, 5, 0, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int posicao = buscar_array(array, n, 0);

    if (posicao != -1){
        printf("O primeiro elemento zero está na posição: %d\n", posicao);
    } else {
        printf("Não há elementos zero no array.\n");
    }

    return 0;
}


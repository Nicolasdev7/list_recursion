#include <stdio.h>  

int somaArray(int arr[], int tamanho, int indice) {  
    if (indice == tamanho) {  
        return 0;  
    } else {  
        return arr[indice] + somaArray(arr, tamanho, indice + 1);  
    }  
}   

int main(){
    int arr[] = {1, 2, 3, 4};  
    int tamanho = sizeof(arr) / sizeof(arr[0]);  
    int soma = somaArray(arr, tamanho, 0);  
    printf("A soma dos elementos do array é: %d\n", soma);  
    return 0;
}

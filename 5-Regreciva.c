#include <stdio.h>

void regreciva(int n) {
    if (n < 0) { 
        return;
    }
    printf("%d ", n);  
    regreciva(n - 1);  
}

int main() {
    int n = 10;

    printf("Contagem regressiva:\n");
    regreciva(n);
    printf("\n");

    return 0;
}
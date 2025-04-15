#include <stdio.h>

int soma_naturais(int n) {
    if (n==0) {
        return 0;
    }
    else {
        return n + soma_naturais(n-1);
    }
}

int main() {
    int n = 7;
    if (n < 0) {
        printf("numero negativo nâo permitido");
    }
    else {
        printf("a soma dos primeiros %d numeros naturais é %d", n, soma_naturais(n));
    }
}

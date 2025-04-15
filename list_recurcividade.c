#include <stdio.h>

int fatorial(int n) {
    if (n==0) return 1;
    else return n * fatorial(n-1);
}

int main(){
    int n = 5;
    if (n < 0){
        printf("A função fatorial não definida para negativos.\n");
    }
    else {
        printf("Valor da fatorial de %d é %d\n", n, fatorial(n));
    }
}


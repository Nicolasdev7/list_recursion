#include <stdio.h>

int potencia(int n1, int n2){
    if (n2 == 0){
        return 1;
    }
    else {
        return n1 * potencia(n1, n2 - 1);
    }
}

int main() {
    int n1 = 4;
    int n2 = 3;

    printf("%d elevado a %d é %d", n1, n2, potencia(n1, n2));
}

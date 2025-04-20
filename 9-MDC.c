#include <stdio.h>

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    else {
        returnmdc (b, a % b);
    }
}

int main(){
    int a = 8, b = 20;

    printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));
    return 0;
}

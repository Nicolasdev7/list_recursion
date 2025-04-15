#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n = 8;

    if (n < 0){
        printf("posição negativ não é valida\n");
    }
    else {
        printf("Fibonacci '%d' é %d\n", n, fibonacci(n));
    }
}

# include <stdio.h>

int mult(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + mult(a, b - 1);
    }
}

int main() {
    int a = 5, b = 3;
    printf("A multiplicação de %d e %d é: %d\n", a, b, mult(a, b));
    return 0;
}

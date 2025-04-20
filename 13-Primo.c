# include <stdio.h>

int primo (int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 13;

    if (primo(num)) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo\n", num);
    }

    return 0;
}
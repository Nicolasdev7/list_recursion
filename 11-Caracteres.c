#include <stdio.h>
#include <string.h>

int contaCaracteres(char *str, char c, int i) {
    if (str[i] == '\0') {
        return 0;
    } else if (str[i] == c) {
        return 1 + contaCaracteres(str, c, i + 1);
    } else {
        return contaCaracteres(str, c, i + 1);
    }
}

int main() {
    char str[] = "abracadabra", c = 'a';
   

    int count = contaCaracteres(str, c, 0);
    printf("O caractere '%c' aparece %d vezes na string.\n", c, count);

    return 0;
}

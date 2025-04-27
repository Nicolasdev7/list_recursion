#include <stdio.h>

void geraParenteses(int aberto, int fechado, int n, char *combinacao, int pos) {
    if (fechado == n) {
        combinacao[pos] = '\0';
        printf("%s\n", combinacao);
        return;
    }

    if (aberto < n) {
        combinacao[pos] = '(';
        geraParenteses(aberto + 1, fechado, n, combinacao, pos + 1);
    }

    if (fechado < aberto) {
        combinacao[pos] = ')';
        geraParenteses(aberto, fechado + 1, n, combinacao, pos + 1);
    }
}

int main() {
    int n = 3;
    char combinacao[2 * n + 1];
    geraParenteses(0, 0, n, combinacao, 0);
    return 0;
}
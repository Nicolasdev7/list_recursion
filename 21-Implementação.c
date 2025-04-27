#include <stdio.h>
#include <stdlib.h>

void imprimeCombinacao(int combinacao[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%d ", combinacao[i]);
    }
    printf("\n");
}

void geraCombinacoes(int n, int k, int combinacao[], int pos, int inicio) {
    if (pos == k) {
        imprimeCombinacao(combinacao, k);
        return;
    }

    for (int i = inicio; i <= n; i++) {
        combinacao[pos] = i;
        geraCombinacoes(n, k, combinacao, pos + 1, i + 1);
    }
}

int main() {
    int n, k;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int combinacao[k];
    geraCombinacoes(n, k, combinacao, 0, 1);

    return 0;
}

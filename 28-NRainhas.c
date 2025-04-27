#include <stdio.h>
#include <stdbool.h>

#define N 4

void imprimeTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(tabuleiro[i][j] ? "Q " : ". ");
        }
        printf("\n");
    }
    printf("\n");
}

bool podeColocar(int tabuleiro[N][N], int linha, int coluna) {
    for (int i = 0; i < linha; i++) if (tabuleiro[i][coluna]) return false;
    for (int i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) if (tabuleiro[i][j]) return false;
    for (int i = linha, j = coluna; i >= 0 && j < N; i--, j++) if (tabuleiro[i][j]) return false;
    return true;
}

bool resolveNQueens(int tabuleiro[N][N], int linha) {
    if (linha == N) {
        imprimeTabuleiro(tabuleiro);
        return true;
    }
    bool encontrouSolucao = false;
    for (int coluna = 0; coluna < N; coluna++) {
        if (podeColocar(tabuleiro, linha, coluna)) {
            tabuleiro[linha][coluna] = 1;
            encontrouSolucao = resolveNQueens(tabuleiro, linha + 1) || encontrouSolucao;
            tabuleiro[linha][coluna] = 0;
        }
    }
    return encontrouSolucao;
}

int main() {
    int tabuleiro[N][N] = {0};
    resolveNQueens(tabuleiro, 0);
    return 0;
}
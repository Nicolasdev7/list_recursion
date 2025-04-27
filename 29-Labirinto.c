#include <stdio.h>
#include <stdbool.h>

#define N 3
#define M 4

bool resolveLabirinto(int labirinto[N][M], int solucao[N][M], int x, int y) {
    if (x == N - 1 && y == M - 1 && labirinto[x][y] == 0) {
        solucao[x][y] = 1;
        return true;
    }

    if (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0 && solucao[x][y] == 0) {
        solucao[x][y] = 1;

        if (resolveLabirinto(labirinto, solucao, x + 1, y)) return true;
        if (resolveLabirinto(labirinto, solucao, x, y + 1)) return true;

        solucao[x][y] = 0;
    }

    return false;
}

void imprimeSolucao(int solucao[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf(solucao[i][j] ? "* " : "0 ");
        }
        printf("\n");
    }
}

int main() {
    int labirinto[N][M] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0}
    };

    int solucao[N][M] = {0};

    if (resolveLabirinto(labirinto, solucao, 0, 0)) {
        imprimeSolucao(solucao);
    } else {
        printf("Não há solução para o labirinto.\n");
    }

    return 0;
}
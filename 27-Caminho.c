#include <stdio.h>

int contaCaminhos(int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2) {
        return 0;
    }
    if (x1 == x2 && y1 == y2) {
        return 1;
    }
    return contaCaminhos(x1 + 1, y1, x2, y2) + contaCaminhos(x1, y1 + 1, x2, y2);
}

int main() {
    int x1 = 0, y1 = 0, x2 = 2, y2 = 2;
    int totalCaminhos = contaCaminhos(x1, y1, x2, y2);
    printf("Total de caminhos de (%d,%d) até (%d,%d): %d\n", x1, y1, x2, y2, totalCaminhos);
    return 0;
}
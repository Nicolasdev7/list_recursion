//preciso fazer uma torre de hanoi com 3 discos e 3 torres

# include <stdio.h>

int hanoi(int n, char origem, char destino, char auxiliar){
    if (n == 1){
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return 0;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);
}   

int main(){
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}   
# include <stdio.h>

void pares(int atual, int n){
    if (atual > n){
        return;
    }

    if (atual % 2 == 0){
        printf("%d ", atual);
    }
    pares(atual + 1, n);
}

int main(){
    int n = 94;
    printf("Pares de 1 a %d: ", n); 
    pares(1, n);
    return 0;
}

# include <stdio.h>

int somar(int num){
    if (num == 0){
        return 0;
    }
    return num + somar(num - 1);
}

int main(){
    int num = 11;

    printf ("A soma de todos os numeros de 1 a %d é %d", num, somar(num));
}

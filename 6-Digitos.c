# include <stdio.h>

int digitos(int num){
    if (num == 0){
        return 0;
    }
    return (num % 10) + digitos(num / 10);
}

int main(){
    int num = 123456;
    printf("A soma dos digitos de %d é %d", num, digitos(num));
    return 0;
}

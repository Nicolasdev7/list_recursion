# include <stdio.h>

void decimal_binario(int num){
    if (num > 1){
        decimal_binario(num / 2);
        printf("%d", num % 2);
    }
}

int main(){
    int num = 145;
    
    decimal_binario(num);
    return 0;
}

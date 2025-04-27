# include <stdio.h>

int permutacao(char *str, int inicio, int fim){
    if (inicio == fim){
        printf("%s\n", str);
    } else {
        for (int i = inicio; i <= fim; i++){
            char temp = str[inicio];
            str[inicio] = str[i];
            str[i] = temp;
            permutacao(str, inicio + 1, fim);
            temp = str[inicio];
            str[inicio] = str[i];
            str[i] = temp;
        }
    }
}

int main(){
    char str[] = "abc";
    int n = sizeof(str) / sizeof(str[0]) - 1; 
    permutacao(str, 0, n);
    return 0;
}

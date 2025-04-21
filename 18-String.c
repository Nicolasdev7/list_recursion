# include <stdio.h>

int comprimento (char *str){
    if (*str == '\0'){
        return 0;
    }
    return 1 + comprimento(str + 1);
}

int main(){
    char palavra[] = "Otorinolaringologista";

    int tam = comprimento(palavra); 

    printf("O comprimento da string é: %d\n", tam);

    printf("A string é: %s\n", palavra);
    return 0;
}


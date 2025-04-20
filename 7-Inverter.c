# include <stdio.h>
#include <stdlib.h>

void inverter(char *str, int id){
    if (str[id] == 0){
        return;
    }    
    inverter(str, id + 1);
    printf("%c", str[id]);
}

int main(){
    char texto[100];

    printf("Digite uma palavra ou frase:");
    scanf(" %[^\n]", texto);

    printf("print invertido: ");
    inverter(texto, 0);
}
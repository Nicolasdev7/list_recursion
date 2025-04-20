# include <stdio.h>
# include <string.h>

int palindromo(char *str, int inicio, int fin) {
   if (inicio >= fin) {
      return 1;
   } 
   else if (str[inicio] != str[fin]) {
      return 0;
   } else {
      return palindromo(str, inicio + 1, fin - 1);
   }
}

int main() {
    char str[] = "omississimo";

    if (palindromo(str, 0, strlen(str) - 1)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
    return 0;
}

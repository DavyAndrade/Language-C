#include <stdio.h>
#include <stdlib.h>

/* 
"%c" para caracteres
"%d" para numeros inteiros
"%f" para numeros reais
*/

int main() {
    char letra = 'a';
    int numero = 10;
    float floaaaa = 5.5;

    printf("%c \n", letra);
    printf("%d \n", numero);
    printf("%f \n", floaaaa);

    printf("Letra %c, Inteiro %d \n", letra, numero+1);

    system("pause");
    return 0;
}
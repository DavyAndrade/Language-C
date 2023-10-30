/*
Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, negativos=0, positivos;
    float media, num, soma=0;

    for (i=1; i<=300; i++) {
        printf("%i de 5 - Digite um valor: ", i); 
        scanf("%f", &num);

        if (num < 0) {
            negativos++;
        }
        else {
            soma= soma+num;
            positivos++;
        }
    }

    if (positivos>0) {
        media=soma/positivos;
    }
    else {
        media=0;
    }


    printf("\nValores negativos: %d", negativos);
    printf("Media dos numeros positivos: %.1f", media);

}


/*
Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1
*/

#include <stdio.h>

int main() {
    int maior = 50, soma = 0, i;

    for (i=1; i<=50; i++) {
            printf("%d, %d\n", i, maior--);
            soma= soma+(i+maior);
          
    }
    printf("\nA soma dos resultados eh: %d\n", soma);
}
/*
Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, y, i;

    printf("Valor de N: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("Valor de Y: ");
    scanf("%d", &y);

    printf("Os multiplos de %d sao: ", y); 

    for (i=1; i<n; i++) {
        if (i%y==0) {
            printf("%d ", i);
        }
    }
}
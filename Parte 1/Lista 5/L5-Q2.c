/*
Desenvolver um programa que calcule a soma dos números de 1 a N, 
sendo N um número inteiro fornecido pelo usuário.
*/

#include <stdio.h>

int main() {
    int i, n, soma = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        soma = soma + i;
    }

    printf("A soma eh: %d", soma);
}
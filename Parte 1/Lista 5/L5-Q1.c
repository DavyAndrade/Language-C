/*
Dado um número inteiro N, fazer um programa que exiba os números 
	pares iguais ou inferiores a N. 
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++) {
        if (i%2==0) {
            printf("%d ", i);
        }
    }
}
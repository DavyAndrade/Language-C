/*
Fazer um programa que exiba todos os divisores de um número fornecido 
	pelo usuário. 
*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if (n%i==0) {
            printf("%d ", i);
        }
    }
}
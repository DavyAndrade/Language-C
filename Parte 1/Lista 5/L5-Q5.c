/*
Criar um programa que exiba os N primeiros termos da seguinte série: 

								1,2,4,8,16,32,... 

*/

#include <stdio.h>

int main() {
    int i, n, numero = 1;

    printf("Insira um numero: ");
    scanf("%d", &n);

    for (i=1;i<=n; i++) {
        printf("%d ", numero);
        numero = numero * 2;
    }
}
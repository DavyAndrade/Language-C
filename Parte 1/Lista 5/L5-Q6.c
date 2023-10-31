/*
Criar um programa que exiba os N primeiros termos da seguinte série: 

							1,2,8,64,1024,...
*/

#include <stdio.h>

int main() {
    int i, n, numero=1, multiplicador=2;

    printf("Insira um numero: ");
    scanf("%d", &n);
 
    for (i=1; i<=n; i++) {
        printf("%d ", numero);
        numero*=multiplicador;
        multiplicador*=2;
    }
}
/*
Implementar um programa que exiba os N primeiros termos de uma PA 
(Progressão Aritmética) com primeiro termo a1 e razão r. 
*/

#include <stdio.h>

int main() {
    int i, n, razao, a1;

    printf("Quantidade de termos: ");
    scanf("%d", &n);

    printf("Primeiro termo: ");
    scanf("%d", &a1);

     printf("Razao: ");
    scanf("%d", &razao);

    for (i=1; i<=n; i++) {
        printf("%d ", a1);
        a1 = a1 + razao;
    }
}
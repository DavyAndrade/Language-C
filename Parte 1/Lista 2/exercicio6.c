/*
Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, b, c;

    // Solicitar ao usuário os valores de i, a, b e c
    printf("Informe o valor de i (1, 2 ou 3): ");
    scanf("%d", &i);

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    printf("Informe o valor de c: ");
    scanf("%d", &c);

    // Realizar a ordenação com base no valor de i
    if (i == 1) {  // Ordem crescente
        if (a > b) { a = a + b - (b = a); }
        if (b > c) { b = b + c - (c = b); }
        if (a > b) { a = a + b - (b = a); }
    } else if (i == 2) {  // Ordem decrescente
        if (a < b) { a = a + b - (b = a); }
        if (b < c) { b = b + c - (c = b); }
        if (a < b) { a = a + b - (b = a); }
    } else if (i == 3) {  // Maior valor no meio
        if (a > b) { a = a + b - (b = a); }
        if (b > c) { b = b + c - (c = b); }
        if (a > b) { a = a + b - (b = a); }
        if (b > c) { b = b + c - (c = b); }
    } else {
        printf("Valor de i inválido. Use 1, 2 ou 3.\n");
    }

    // Exibir os valores na ordem definida por i
    printf("Valores ordenados de acordo com i: %d, %d, %d\n", a, b, c);

}

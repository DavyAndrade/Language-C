#include <stdio.h>

/* 
Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.
*/

int main(void) {
    int valor;
    int N100;
    int R100;
    int N50;
    int R50;
    int N20;
    int R20;
    int N10;
    int R10;
    int N5;
    int R5;
    int N2;
    int M1;
    int total;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    N100 = valor/100;
    R100 = valor%100;

    N50 = R100/50;
    R50 = R100%50;

    N20 = R50/20;
    R20 = R50%20;

    N10 = R20/10;
    R10 = R20%10;

    N5 = R10/5;
    R5 = R10%5;

    N2 = R5/2;
    M1 = R5%2;

    total = N100+N50+N20+N10+N5+N2+M1;

    printf("Pode ser decomposto no numero de %d", total);
}
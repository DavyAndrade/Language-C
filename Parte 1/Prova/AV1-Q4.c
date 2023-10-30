/*
Solicita-se o desenvolvimento de um programa que
leia n valores inteiros, onde n também é fornecido
pelo usuário.
Ao final, o programa deve informar se os valores, na
ordem na qual foram informados, representam uma
Progressão Aritmética (PA).
Nota: uma PA consiste em uma sequência de
valores iniciada por a1 (primeiro termo) e cada
novo termo é calculado a partir da soma do
anterior com um número especial e constante para
a sequência, chamado razão da PA.
*/

#include <stdio.h>

int main() {
    int i, n, num, razao;

    printf("Informe o Valor de N: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if (num<razao) {
            razao = num;
        }
        
        if (num/razao!=i) {
            printf("\nNao eh uma PA");
            break;
        } else if (num/razao==5) {
            printf("Eh uma PA");
        }
       
    }
}
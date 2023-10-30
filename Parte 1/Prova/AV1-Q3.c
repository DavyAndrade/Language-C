/*
Faça um programa que leia dois valores inteiros, a e
b. Essa leitura deve ser repetida até que o usuário
forneça um valor de a que seja inferior a b.
Em seguida, o programa permanecerá solicitando
valores até que o usuário forneça um número
negativo.
Ao final, exibir:
1. O maior valor fornecido, dentre aqueles que
são menores do que a;
2. A média dos valores no intervalo de a a b
(inclusive);
3. A quantidade de números maiores do que b.
Nota: o valor negativo que implicará no término da
leitura não deve ser considerado nos resultados a
serem exibidos pelo programa.
*/

#include <stdio.h>

int main() {
    int a, b, maiorQueB = 0, maiorValorA = 0, quantNum = 0;
    float media, soma = 0, num;


    // Solicitando A e B até que A seja menor que B
   do {
        printf("Insira o valor de A: ");
        scanf("%d", &a);
        fflush(stdin);

        printf("Insira o Valor de B: ");
        scanf("%d", &b);
        fflush(stdin);

    } while (a>b);


    // Solicitando um valor até que ele seja negativo
    do {
        printf("Insira um valor: ");
        scanf("%f", &num);
        fflush(stdin);

        if(num>=a && num<=b) {
            soma = soma + num;
            quantNum++;
        }

        if (num > b) {
            maiorQueB++;
        }

        if (num < a) {
            if (num > maiorValorA) {
                maiorValorA = num;
            }
        }

    } while (num>=0);

    // Média dos Valores
    media = soma/quantNum;
    printf("\nMedia dos valores no intervalo de A e B: %.2f", media);

    // Quantidade de Números Maior que B
    printf("\nQuantidade de numeros maior que B: %d", maiorQueB);

    // Exibindo o maior valor lido menor que A
    printf("\nO maior valor inferior a A: %d", maiorValorA);

}


/*
QUESTÃO 03:
Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145

n1 929
n2 299

n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    
    printf("Digite um valor inteiro entre 100 e 999: ");
    scanf("%d", &n1);

    // Verifique se o número está no intervalo especificado
    if (n1 < 100 || n1 > 999) {
        printf("Número inválido. Deve estar no intervalo de 100 a 999.\n");
    } else {
        // Organize os algarismos de n1 em ordem crescente
        int digito1 = n1 % 10;
        int digito2 = (n1 / 10) % 10;
        int digito3 = n1 / 100;

        // Encontre o menor, o do meio e o maior algarismo
        int menor = digito1 < digito2 ? (digito1 < digito3 ? digito1 : digito3) : (digito2 < digito3 ? digito2 : digito3);
        int maior = digito1 > digito2 ? (digito1 > digito3 ? digito1 : digito3) : (digito2 > digito3 ? digito2 : digito3);
        int meio = digito1 + digito2 + digito3 - menor - maior;

        // Construa o novo número n2 em ordem crescente
        n2 = menor * 100 + meio * 10 + maior;

        printf("n2: %d\n", n2);
    }

    return 0;
}
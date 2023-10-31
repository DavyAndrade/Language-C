/*
Desenvolver um programa no qual o usuário entre com vários números 
	inteiros e positivos e imprima o produto dos números ímpares e a 
	soma dos números pares. 
*/

#include <stdio.h>

void main() {
    int numero, somaPares=0, prodImpar=1;
    char opcao;

    do {
        printf("Entre com um numero: ");
        scanf("%d", &numero);

        if (numero%2==0) {
            somaPares+=numero;
        } else {
            prodImpar*=numero;
        }

        fflush(stdin);
        printf("Deseja continuar? [S/N]: ");
        scanf("%c", &opcao);
        opcao = toupper(opcao);

    } while (opcao=='S');

    printf("Soma dos pares: %d\n", somaPares);
    printf("Produto dos impares: %d\n", prodImpar);

}
#include <stdio.h>
#include <stdlib.h>

/*
QUESTÃO 03: As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.
*/

int main() {
    float valor, avista, p5, p10;

// Passo 1 - Informar o valor

    printf("Informe o valor: ");
    scanf("%f", &valor);
    fflush(stdin);

// Passo 2 - Retornar o valor com 10% de desconto para pagamento á vista

    avista = valor - (valor*0.1);
    printf("\nO valor a vista eh de: %.2f", avista);

// Passo 3 - Retornar o valor da prestação em 5x sem juros

    p5 = valor/5;
    printf("\nO valor da prestacao em 5x sem juros eh: %.2f", p5);

// Passo 4 - Retornar o valor da prestação para parcelamento com juros, em 10x, com 20% de acréscimo no valor do produto.

    p10 = (valor + (valor*0.20))/10;
    printf("\nO valor da prestacao em 10x com juros eh: %.2f", p10);

}
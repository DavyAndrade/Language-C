#include <stdio.h>

/*
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro. 
*/

int main(void)
{
    float custoFabrica;
    float distribuidor;
    float imposto;
    float porcD;
    float porcI;
    int valor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);
    printf("Digite a porcentagem do distribuidor: ");
    scanf("%f", &porcD);
    printf("Digite a porcentagem de impostos: ");
    scanf("%f", &porcI);

    imposto = porcI/100;
    distribuidor = porcD/100;

    valor = custoFabrica+(custoFabrica*distribuidor)+(custoFabrica*imposto);
    printf("O valor do carro eh: %d", valor);
}
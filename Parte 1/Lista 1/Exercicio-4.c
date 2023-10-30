#include <stdio.h>

/*
Um banco concederá um crédito especial aos
seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o
valor do crédito de acordo com a tabela abaixo.
Saldo Médio Percentual
Inferior a R$ 1000,00 nenhum crédito
De R$ 1000,00 a
R$ 1499,99 20% do saldo médio
De R$ 1500,00 a
R$ 2499,99 30% do saldo médio
R$ 2500,00 ou mais 40% do saldo médio
*/

int main(void) {
    float saldoM;
    float credito;

    printf("Digite o saldo medio: ");
    scanf("%f", &saldoM);

    if (saldoM < 1000) {
        credito = 0;
    }
    else if (saldoM <= 1449.99) {
        credito = saldoM*0.20;
    }
    else if (saldoM <= 2444.99) {
        credito = saldoM*0.30;
    }
    else {
        credito = saldoM*0.40;
    }
    printf("Seu credito eh: %f\n", credito);
}
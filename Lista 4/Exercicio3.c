/*
Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float quantia, rendMes;
    int anos, meses, i;

    printf("Valor investido: ");
    scanf("%f", &quantia);
    fflush(stdin);

    printf("Rendimento mensal: ");
    scanf("%f", &rendMes);
    fflush(stdin);

    printf("Anos de investimento: ");
    scanf("%d", &anos);
    fflush(stdin);

    meses = anos*12;
    rendMes = rendMes/100;

    for (i=1; i<meses; i++) {
        quantia = quantia+(quantia*rendMes);
    }

    printf("\n\nO valor total apos %d anos de investimento eh: R$%.2f", anos, quantia);

}
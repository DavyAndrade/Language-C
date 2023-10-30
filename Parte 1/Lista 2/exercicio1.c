#include <stdio.h>

/*
O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:
IMC < 18,5 Abaixo do peso
18,5 ≤ IMC < 25,0 Peso ideal
25,0 ≤ IMC < 30,0 Sobrepeso
30,0 ≤ IMC < 35,0 Obesidade grau I
35,0 ≤ IMC < 40,0 Obesidade grau II
IMC ≥ 40,0 Obesidade grau III
*/

int main(void)
{
    float peso;
    float altura;
    float IMC;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * 2);

    if (IMC < 18.5)
    {
        printf("Abaixo do Peso");
    }
    else if (IMC < 25)
    {
        printf("Peso ideal");
    }
    else if (IMC < 30)
    {
        printf("Sobrepeso");
    }
    else if (IMC < 35) {
        printf("Obesidade Grau I");
    }
    else if (IMC < 40) {
        printf("Obesidade Grau II");
    }
    else {
        printf("Obesidade Grau III");
    }
}

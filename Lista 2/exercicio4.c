/*
QUESTÃO 04: Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.
Ao final, o algoritmo deve determinar:
• A quantidade de combustível, em litros,
consumida durante a viagem;
• O custo total de combustível.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float percurso, distancia, custoLitro;

    printf("Informe o percurso (Ex: 1.4): ");
    scanf("%f", &percurso);
    fflush(stdin);

    printf("Informe a distancia que percorre com um litro (Ex: 1.2): ");
    scanf("%f", &distancia);
    fflush(stdin);

    printf("Informe o preco do litro do combustivel (Ex: 60.99): ");
    scanf("%f", &custoLitro);

}
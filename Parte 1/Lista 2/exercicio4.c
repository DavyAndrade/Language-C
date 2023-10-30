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
    float percurso, consumoKmPorLitro, precoLitro, consumo, custo;

    // Solicitar informações ao usuário
    printf("Informe o percurso da viagem (em quilometros): ");
    scanf("%f", &percurso);
    fflush(stdin);

    printf("Informe o consumo do carro (em km/l): ");
    scanf("%f", &consumoKmPorLitro);
    fflush(stdin);

    printf("Informe o preco do litro de combustivel: ");
    scanf("%f", &precoLitro);
    fflush(stdin);

    // Calcular o consumo de combustível em litros
    consumo = percurso / consumoKmPorLitro;

    // Calcular o custo total de combustível
    custo = consumo * precoLitro;

    // Exibir os resultados
    printf("Quantidade de combustivel consumida (litros): %.2f\n", consumo);
    printf("Custo total de combustivel: R$%.2f\n", custo);
}

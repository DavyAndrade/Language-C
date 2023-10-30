/*
Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
Número Planeta Gravidade Relativa g
1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, gravidade, pesoFinal;
    int planeta;

    // Passo 1 - Obter Peso da pessoa

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    fflush(stdin);

    // Passo 2 - Escolher um planeta

    printf("Escolha um dos planetas abaixos digitando o numero correspondente!\n1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\n6 - Urano\n\nPlaneta Escolhido: ");
    scanf("%d", &planeta);
    fflush(stdin);

    switch (planeta)
    {
    case 1:
        gravidade = 0.37;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Mercurio\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    case 2:
        gravidade = 0.88;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Venus\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    case 3:
        gravidade = 0.38;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Marte\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    case 4:
        gravidade = 2.64;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Jupiter\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    case 5:
        gravidade = 1.15;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Saturno\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    case 6:
        gravidade = 1.17;
        pesoFinal = (peso / 10) * gravidade;
        printf("\nPlaneta: Urano\nPeso no Planeta Escolhido: %.2f", pesoFinal);
        break;

    default:
        printf("\nDigite um numero valido!!\n");
        break;
    }
}
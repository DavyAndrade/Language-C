/*
Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dia1, mes1, ano1, dia2, mes2, ano2;
    int total1, total2;

    printf("Digite o dia 1: ");
    scanf("%d", &dia1);
    fflush(stdin);

    printf("Digite o mes 1: ");
    scanf("%d", &mes1);
    fflush(stdin);

    printf("Digite o ano 1: ");
    scanf("%d", &ano1);
    fflush(stdin);


    printf("Digite o dia 2: ");
    scanf("%d", &dia2);
    fflush(stdin);

    printf("Digite o mes 2: ");
    scanf("%d", &mes2);
    fflush(stdin);

    printf("Digite o ano 2: ");
    scanf("%d", &ano2);
    fflush(stdin);

    total1 = dia1 + (mes1 * 30) + (ano1 * 365);
    total2 = dia2 + (mes2 * 30) + (ano2 * 365);

    if (total1 > total2)
    {
        printf("%d/%d/%d eh a data mais recente entre as duas.", dia1, mes1, ano1);
    }
    else
    {
        printf("%d/%d/%d eh a data mais recente entre as duas.", dia2, mes2, ano2);
    }
}
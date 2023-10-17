#include <stdio.h>

/*
Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano
*/

int main(void)
{
    int dia;
    int mes;
    int ordem;

    printf("Digite o mes do ano: ");
    scanf("%d", &mes);
    printf("Digite o dia do mes: ");
    scanf("%d", &dia);

    if (mes == 1)
    {
        ordem = dia;
    }
    else if (mes == 2)
    {
        ordem = 31 + dia;
    }
    else if (mes == 3)
    {
        ordem = 31 + 28 + dia;
    }
    else if (mes == 4)
    {
        ordem = 31 + 28 + 31 + dia;
    }
    else if (mes == 5)
    {
        ordem = 31 + 28 + 31 + 30 + dia;
    }
    else if (mes == 6)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + dia;
    }
    else if (mes == 7)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + dia;
    }
    else if (mes == 8)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
    }
    else if (mes == 9)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
    }
    else if (mes == 10)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
    }
    else if (mes == 11)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
    }
    else if (mes == 12)
    {
        ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
    }

    printf("%d/%d eh o dia %d do ano!", dia, mes, ordem);
}
#include <stdio.h>
#include <stdlib.h>

/*
Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
 para homens: (72.7*h)-58
 para mulheres: (62.1*h)-44.7
*/

int main(void)
{
    char genero;
    int altura;
    int peso_ideal;

    printf("Informe seu genero\nSe for Masculino, digite 1\nSe for feminino, digite 2\nDigite aqui: ");
    scanf("%c", &genero);
    printf("Informe sua altura: ");
    scanf("%d", &altura);

    if (genero == 1 && altura >= 1)
    {
        peso_ideal = (72.4 * altura) - 58;
    }
    else if (genero == 2 && altura >= 1)
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    printf("O seu peso ideal eh: %d\n", peso_ideal);
}
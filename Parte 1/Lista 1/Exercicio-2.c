#include <stdio.h>

/*
Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:

infantil A 0 - 4 anos
infantil B 5 - 7 anos
infantil C 8-10 anos
juvenil A 11-13 anos
juvenil B 14-17 anos
Adulto 18 anos ou mais
*/

int main(void)
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Por favor, digite uma idade valida");
    }
    else if (idade <= 4)
    {
        printf("Infantil A");
    }
    else if (idade <= 7)
    {
        printf("Infantil B");
    }
    else if (idade <= 10)
    {
        printf("Infantil C");
    }
    else if (idade <= 13)
    {
        printf("Juvenil A");
    }
    else if (idade <= 17)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Adulto");
    }
}
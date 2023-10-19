/*
Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numEntre, contM = 0, contF = 0, contMG = 0, contFG= 0, quantG;
    char opiniao, genero;
    float percM, percF;

    printf("Numero de entrevistados: ");
    scanf("%d", &numEntre);
    fflush(stdin);

    for (i = 1; i<=numEntre; i++)
    {
        printf("Entre com seu genero: ");
        scanf("%c", &genero);
        genero = toupper(genero);
        fflush(stdin);


        printf("\nOpiniao ([G]ostou, [N]ao gostou): ");
        scanf("%c", &opiniao);
        opiniao = toupper(opiniao);
        fflush(stdin);

        if (genero == 'M')
        {
            contM++;

            if (opiniao == 'G')
            {
                contMG++;
            }
        }
        else if (genero == 'F')
        {
            contF++;
            if (opiniao == 'G')
            {
                contFG++;
            }
        }
    }

    // Número de pessoas que gostaram do produto
    quantG = contFG+contMG;
    printf("Numero de pessoas que gostaram: %d\n", quantG);

    // Número de pessoas que não gostaram do produto
    printf("Numero de pessoas que nao gostaram: %d\n", numEntre-quantG);

    // Informação dizendo em que gênero o produto teve uma melhor aceitação.
    if (contM > 0) {
        percM = (float)(contMG/contM)*100;
    } else {
        percM = 0;
    }
    if (contF > 0) {
        percF = (float)(contFG/contF)*100;
    } else {
        percF = 0;
    }

    if (percF>percM) {
        printf("O numero de aceitacao foi maior entre as mulheres: %.2f\n", percF);
    } else if (percM>percF) {
        printf("O numero de aceitacao foi maior entre os homens: %.2f\n", percM);
    } else {
        printf("O numero de aceitacao foi igual entre os generos: %.2f\n", percF);
    }
}
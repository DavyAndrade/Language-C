/*
QUESTÃO 05: O cardápio de uma lanchonete é
o seguinte:
Especificação Código Preço
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hamburger 103 3,00
Cheeseburger 104 4,00
Refrigerante 105 2,50
Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int pedido, quantidade;
    float valor;

    printf("\nSegue o cardapio a seguir:\n100 - Cachorro Quente (R$3,50)\n101 - Bauru simples (R$4,50)\n102 - Bauru com ovo (R$5,20)\n103 - Hamburger (R$3,00)\n104 - Cheeseburger (R$4,00)\n105 - Refrigerante (R$2,50)\n\nEscreva o codigo do pedido: ");
    scanf("%d", &pedido);
    fflush(stdin);

    printf("\nQuantidade desejada: ");
    scanf("%d", &quantidade);

    switch (pedido)
    {
    case 100:
        valor = 3.50*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;
    
    case 101:
        valor = 4.50*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;

    case 102:
        valor = 5.20*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;

    case 103:
        valor = 3*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;

    case 104:
        valor = 4*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;

    case 105:
        valor = 2.50*quantidade;
        printf("O valor da conta ficou: %.2f", valor);
        break;
    
    default:
        printf("Informe um codigo de pedido valido!!");
        break;
    }

}
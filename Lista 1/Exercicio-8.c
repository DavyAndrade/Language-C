#include <stdio.h>

/*
Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, consideranumeroDiariaso que:
a) Devem ser obtidos o nome do hóspede, o
tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede
e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
Tipo de Apartamento Valor da diária
A R$ 350,00
B R$ 275,00
C R$ 200,00
D R$ 150,00
c) O valor da taxa de serviço equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.
*/

int main(void)
{
    char nome[60];
    int tipoAp;
    int numeroDiarias;
    int consumoInterno;
    int valorDiaria;
    int subTotal;
    int taxa;
    int VTD;
    int total;

    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Digite 1 para Tipo de Apartamento A, 2 para Tipo B, 3 para Tipo C e 4 para Tipo D\nInforme o tipo de apartamento: ");
    scanf("%d", &tipoAp);

    printf("Informe o numero de diarias: ");
    scanf("%d", &numeroDiarias);
    printf("Informe o consumo interno: ");
    scanf("%d", &consumoInterno);

    if (tipoAp == 1)
    {
        valorDiaria = 350;
    }
    else if (tipoAp == 2)
    {
        valorDiaria = 275;
    }
    else if (tipoAp == 3)
    {
        valorDiaria = 200;
    }
    else if (tipoAp == 4)
    {
        valorDiaria = 150;
    }

    VTD = numeroDiarias * valorDiaria;
    subTotal = VTD + consumoInterno;
    taxa = subTotal * 0.10;
    total = subTotal + taxa;

    printf("Oi, %s! Abaixo esta a sua conta.\n", nome);
    printf("Nome: %s\n", nome);
    printf("Tipo de Apartamento: %d\n", tipoAp);
    printf("Valor Total da Diaria: %d\n", VTD);
    printf("Consumo Interno: %d\n", consumoInterno);
    printf("Sub Total: %d\n", subTotal);
    printf("Taxa de Servico: %d\n", taxa);
    printf("Total: %d\n", total);
}
/*
QUESTÃO 02:
Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:
1. Fórmulas para o cálculo das áreas:
a. Acírculo = π.raio2

, onde π = 3.14159;

b. Aretângulo = base.altura;
c. Aquadrado = lado2
;
d. Atriângulo = (base.altura)/2.
2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int base, altura, raio, lado;
  float result;
  char escolha;

  printf("Selecione uma forma geometrica\n[C]irculo\n[T]riangulo\n[Q]uadrado\n[R]etangulo\n");
  scanf("%c", &escolha);
  fflush(stdin);

  switch (escolha) {
    case 'C':
    printf("Informe o raio: ");
    scanf("%d", &raio);

    result = 3.14159*(raio*2);
    printf("A area do circulo eh: %f", result);
    break;

    case 'T': 
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    result = (base*altura)/2;
    printf("A area do triangulo eh: %f", result);
    break;
    
    case 'Q':
    printf("Informe a medida do lado: ");
    scanf("%d", &lado);

    result = lado*2;
    printf("A area do quadrado eh: %f", result);
    break;

    case 'R': 
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    result = base*altura;
    printf("A area do retangulo eh: %f", result);
    break;

    default: 
    printf("Digite uma opcao valida!");
  }
}
#include <stdio.h>
#include <stdlib.h>

/*
    char letra;
    int numero;
    float n;
    double d;

    scanf("%c", &letra);
    scanf("%d", &numero);
    scanf("%f", &n);
    scanf("%f", &d);
*/

int main() {

    int numero;
    float f;

    /*
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Numero Digitado: %d \n", numero); 
    */

   printf("Digite dois numeros: ");
   scanf("%d%f", &numero, &f);
   printf("Numeros Digitados: %d e %f \n", numero, f);

    system("pause");
    return 0;
}
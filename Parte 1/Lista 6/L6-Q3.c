/*
	QUESTÃO 03: Implementar um programa que calcule o valor de base^expoente, onde 
	base e expoente são números inteiros dados pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, base, expoente, potencia = 1;
	
	//lendo a base e o expoente
	printf ("Entre com a base: ");
	scanf ("%d", &base);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &expoente);
	
	//calculando a potência
	for (i=1;i<=expoente;i++)
	{
		potencia *= base;
	}
	
	//exibindo o resultado
	printf ("\n%d ^ %d = %d", base, expoente, potencia);
}
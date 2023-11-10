/*
	
	QUESTÃO 06: Faça um programa que leia 200 números inteiros. Ao final, exibir:

	a)	O maior número fornecido, de ordem par (isto é, o maior dentre o segundo, 
	    quarto, sexto, oitavo, etc valores fornecidos).
	b)	A média dos valores pares.

*/

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//definição de constantes
#define QUANT 10

//main
void main ()
{
	//declaração de variáveis
	int i, valor, maior = INT_MIN, somaPares = 0, pares = 0;
	float mediaPares;
	
	//lendo os QUANT elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &valor);
		
		//verificando se a ordem é par
		if (i % 2 == 0)
		{
			if (valor > maior)
			{
				maior = valor;
			}
		}
		
		//verificando se o velor lido é par
		if (valor % 2 == 0)
		{
			somaPares += valor;
			pares++;
		}
	}
	
	//calculando a média dos números pares
	mediaPares = (float)somaPares/pares;
	
	//exibindo os resultados
	printf ("\nMaior numero de ordem par: %d\n", maior);
	printf ("Media dos pares: %.1f\n", mediaPares);
	
	
}
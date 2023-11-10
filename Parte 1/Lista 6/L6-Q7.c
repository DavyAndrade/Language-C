/*
	QUESTÃO 07: Faça um programa que leia 150 números reais e, ao final, exiba:

	a)	A soma dos 50 primeiros;
	b)	menor número do 51° ao 100° valores fornecidos;
	c)	A média entre os últimos 50 valores.
*/

//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//definição de constantes
#define QUANT 15

//main
void main ()
{
	//declaração de variáveis
	int i;
	float valor, soma50 = 0, menor = FLT_MAX, somaUltimos = 0, mediaUltimos;
	
	//estrutura de repetição para obter todos os valores
	for (i=1;i<=QUANT;i++)
	{
		//lendo cada um dos valores
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//calculando a soma dos 50 primeiros
		if (i <= QUANT/3)
		{
			soma50 += valor;
		}
		else
		{
			//menor número do 51° ao 100° valores fornecidos
			if (i <= (2*QUANT/3))
			{
				if (valor < menor)
				{
					menor = valor;
				}
			}
			else
			{
				//A média entre os últimos 50 valores
				somaUltimos += valor;
			}
		}
	}
	
	//calculando a média dos elementos do último bloco
	mediaUltimos = somaUltimos/(QUANT/3);	
	
	//exibindo os resultados
	printf ("\nSoma dos elementos do primeiro bloco: %.1f\n", soma50);
	printf ("Menor valor do segundo bloco: %.1f\n", menor);
	printf ("Media dos valores do terceiro bloco: %.1f\n", mediaUltimos);
}
/*
	QUESTÃO 02: Pede-se o desenvolvimento de um programa que leia n valores e 
	determine o maior e o menor elementos do conjunto fornecido.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n, num, maior = -9999, menor = 9999;
	
	//lendo o valor de n
	printf ("Entre com a quantidade de elementos que serao fornecidos: ");
	scanf ("%d", &n);
	
	//obtendo os n valores
	for (i=1;i<=n;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &num);
		
		//verificando se o número lido é maior do que 'maior'
		if (num > maior)
		{
			maior = num;
		}
		
		//verificando se o número lido é menor do que 'menor'
		if (num < menor)
		{
			menor = num;
		}
	} 	
	
	//exibindo os resultados
	printf ("\nMaior elemento = %d\n", maior);
	printf ("Menor elemento = %d\n", menor);
}
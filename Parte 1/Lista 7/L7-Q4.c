/*
	QUESTÃO 04: Faça um programa que leia um número inteiro N e informe se 
	o mesmo é ou não primo.

	Nota: um número é dito primo quando for divisível apenas por 1 e por 
	ele mesmo.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, divisores = 0;
	
	//lendo o valor
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	/*obs: considerando a definição de número primo apresentada, podemos dizer que o valor será
	primo apenas se possuir 2 divisores: 1 e o próprio 'n'*/
	for (i=1;i<=n;i++)
	{
		//verificando se 'i' é divisor de 'numero'
		if (n%i == 0)
		{
			divisores++;
		}
	}
	
	//exibindo se 'n' é ou não primo
	if (divisores == 2)
	{
		printf ("\nO numero %d e' primo!", n);
	}
	else
	{
		printf ("\nO numero %d NAO e' primo!", n);
	}
}
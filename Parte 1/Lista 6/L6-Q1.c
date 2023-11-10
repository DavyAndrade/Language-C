/*
	
	QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite 
	ao usuário outros 50 valores inteiros. Ao final, o programa deve exibir o total 
	de múltiplos de x fornecidos.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 50

//main
void main ()
{
	//declaração de variáveis
	int x, i, num, cont = 0;
	
	//lendo o valor de x
	printf ("Entre com o valor de x: ");
	scanf ("%d", &x);
	
	//obtendo os 50 valores
	for (i=1;i<=TAM;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &num);
		
		//verificando se 'num' é múltiplo de 'x'
		if (num % x == 0)
		{
			cont++;
		}
	} 	
	
	//exibindo o resultado
	printf ("\nForam informados %d multiplos de %d.", cont, x);
}
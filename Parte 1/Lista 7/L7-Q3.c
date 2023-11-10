/*	
	QUESTÃO 03: Faça um programa que exiba na tela as tabuadas dos números de 1 a 9, como descrito 
	a seguir:
	
						1 × 0 = 0	2 × 0 = 0	...	9 × 0 = 0	
						1 × 1 = 1	2 × 1 = 2	...	9 × 1 = 9	
						1 × 2 = 2	2 × 2 = 4	...	9 × 2 = 18
							.		.		.
							.		.		.
							.		.		.
						1 × 9 = 9	2 × 9 = 18	...	9 × 9 = 81
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, j;
	
	//variando o primeiro operando de 1 a 9
	for (i=1;i<=9;i++)
	{
		//variando o segundo operando de 0 a 9
		for (j=0;j<=9;j++)
		{
			//exibindo a tabuada de 'i'
			printf ("%2d x %2d = %2d\n", i, j, i*j);
		}
		
		//deixando uma linha em branco entre as tabuadas de cada número 'i'
		printf ("\n");
	}
}
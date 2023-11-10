/*	
	QUESTÃO 08: Faça um programa que leia um número real x e um número inteiro y. 
	Em seguida, o programa deve ler 100 números reais e calcular quantos destes 
	estão no intervalo definido por [x-y,x+y].
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 100

//main
void main ()
{
	//declaração de variáveis
	float x, valor, inferior, superior;
	int y, i, cont = 0;
	
	//obtendo os valores de 'x' e 'y'
	printf ("Entre com o valor de x: ");
	scanf ("%f", &x);
	
	printf ("Entre com o valor de y: ");
	scanf ("%d", &y);
	
	//calculando os limites do intervalo
	inferior = x-y;
	superior = x+y;
	
	//lendo os QUANT elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um valor: ");
		scanf ("%f", &valor);
		
		//verificando s eo valor lido está no intervalo definido por 'x' e 'y'
		//if ((valor >= x-y) && (valor <= x+y))
		if ((valor >= inferior) && (valor <= superior))
		{
			cont++;
		} 
	}
	
	//exibindo a quantidade
	printf ("Foram digitados %d valores no intervalo.", cont);
}
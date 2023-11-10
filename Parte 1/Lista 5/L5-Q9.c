/*
	
	QUESTÃO 09:
	Escrever um programa que encontre o quinto número maior que 1000, 
	cuja divisão por 11 tenha resto 5.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int cont = 0, num = 1000;
	
	while (cont != 5)
	{
		//atualizando o número
		num++;

		//verificando se a propriedade é atendida
		if (num % 11 == 5)
		{
			cont++;
		}		
	}
	
	//exibindo o valor solicitado
	printf ("\nResposta = %d", num);
}
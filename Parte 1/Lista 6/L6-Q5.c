/*
	
	QUESTÃO 05: Elabore um programa que calcule a média ponderada de n elementos.

	Observação: na média ponderada, cada elemento possui um peso que representa 
	a sua contribuição no cálculo da média final.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n;
	float valor, peso, numerador = 0, denominador = 0, media;
	
	//lendo a quantidade de valores que comporão a média
	printf ("Entre com a qunatidade de elementos: ");
	scanf ("%d", &n);
	
	//obtendo os valores e os seus pesos
	for (i=1;i<=n;i++)
	{
		printf ("Entre com o valor: ");
		scanf ("%f", &valor);
		
		printf ("Entre com o peso: ");
		scanf ("%f", &peso);
		
		//atualizando o numerador
		numerador += (valor*peso);
		
		//atualizando o denominador
		denominador += peso;
	}
	
	//calculando a média ponderada
	media = numerador/denominador;
	
	//exibindo o resultado
	printf ("\nMedia = %.2f", media);
}
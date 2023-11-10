/*
	
	QUESTÃO 10:
	Foi feita uma pesquisa entre os habitantes de uma região e coletados 
	os dados de altura e gênero das pessoas. Faça um programa que leia 
	as informações de 50 pessoas e informe:
	 	- a maior e a menor alturas encontradas;
	 	- a média de altura das mulheres;
	 	- a média de altura da população;
	 	- o percentual de homens na população.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 5

//main
void main ()
{
	//declaração de variáveis
	int i, contMulheres = 0;
	float altura, maiorAltura = 0, menorAltura = 10, somaAlturaMulheres = 0,
	      mediaAlturaMulheres, somaAltura = 0, mediaAltura, percHomens;
	char genero;
	
	//lendo os dados de todas as pessoas
	for (i=1;i<=QUANT;i++)
	{
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		//determinando a maior e a menor alturas
		if (altura > maiorAltura)
		{
			maiorAltura = altura;
		}
		/*else
		{*/
			if (altura < menorAltura)
			{
				menorAltura = altura;
			}
		//}
		
		//verificando se é do gênero feminino
		if (genero == 'F')
		{
			somaAlturaMulheres += altura;
			contMulheres++;
		}
		
		//acumulando a soma de todas as pessoas
		somaAltura += altura;
	}
	
	//calculando a média de altura das mulheres
	mediaAlturaMulheres = somaAlturaMulheres/contMulheres;
	
	//calculando a média de altura da população
	mediaAltura = somaAltura/QUANT;
	
	//calculando o percentual de homens na população
	percHomens = ((float)(QUANT - contMulheres)/QUANT) * 100;
	//OU: percHomens = ((QUANT - contMulheres)/(float)QUANT) * 100;
	//NÃO: percHomens = (float)((QUANT - contMulheres)/QUANT) * 100;
	
	//exibindo os resultados
	printf ("\nMaior altura: %.2f\n", maiorAltura);
	printf ("\nMenor altura: %.2f\n", menorAltura);
	
	printf ("\nMedia de altura das mulheres: %.2f\n", mediaAlturaMulheres);
	
	printf ("\nMedia de altura da populacao: %.2f\n", mediaAltura);
	
	printf ("\nPercentual de homens na populacao: %.2f%%\n", percHomens);
}
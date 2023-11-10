/*
	QUESTÃO 05: Uma pesquisa foi feita coletando informações (idade, altura e peso) de um grupo 
	de pessoas.
	Pede-se a implementação de um programa que proceda com a leitura de tais informações (até que o 
	usuário opte por concluir a entrada de dados) e calcule:
	 	- A quantidade de pessoas com idade superior a 50 anos;
	 	- A média de altura das pessoas com mais de 80 kg;
	 	- O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	char opcao;
	int idade, cont50 = 0, cont80 = 0;
	float altura, peso, somaAlturas80 = 0, mediaAlturas80, maiorPeso = 0;
	
	do
	{
		//lendo os dados de cada entrevistado
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		//Determinando a quantidade de pessoas com idade superior a 50 anos
		if (idade > 50)
		{
			cont50++;
		}		
		
		//para o cálculo da média de altura das pessoas com mais de 80 kg...
		if (peso > 80)
		{
			somaAlturas80 += altura;
			cont80++;
		}
		
		//Determinando o maior peso dentre as pessoas acima de 1.65 m de altura e com idade 
		//inferior a 30 anos
		if ((altura > 1.65) && (idade < 30) && (peso > maiorPeso))
		{
			maiorPeso = peso;
		}
		
		//verificando se o usuário deseja continuar
		printf ("Deseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');
	
	//calculando a média de altura das pessoas com mais de 80 kg
	mediaAlturas80 = somaAlturas80/cont80;
	
	//exibindo os resultados
	printf ("\n\nQuantidade de pessoas com idade superior a 50 anos: %d\n", cont50);
	printf ("Media de altura das pessoas com mais de 80 kg: %.2f m\n", mediaAlturas80);
	printf ("Maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos: %.1f kg", maiorPeso);
}
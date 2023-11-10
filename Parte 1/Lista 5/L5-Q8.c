/*

QUESTÃO 08:
	Fazer um programa que auxilie o órgão regulador no cálculo do total 
	de recursos arrecadados com a aplicação de multas de trânsito. 
	O programa deve ler as seguintes informações para cada motorista: 
	 	- O número da carteira de motorista;
	 	- Número de multas;
	 	- Valor de cada uma das multas. 
	Deve ser exibido o valor da dívida de cada motorista e ao final da 
	leitura o total de recursos arrecadados (somatório de todas as multas). 
	O programa também deverá apresentar o número da carteira do motorista 
	que obteve o maior número de multas. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, j, quantidade, cnh, numMultas, maiorMultas = 0, maiorCNH;
	float valor, divida, totalArrecadado = 0;
	
	//obtendo a quantidade de motoristas
	printf ("Entre com a quantidade de motoristas: ");
	scanf ("%d", &quantidade);
	
	//obtendo os dados de todos os motoristas
	for (i=1;i<=quantidade;i++)
	{
		//lendo a cnh do motorista
		printf ("CNH: ");
		scanf ("%d", &cnh);
		
		//lendo a quantidade de multas do motorista
		printf ("Numero de multas: ");
		scanf ("%d", &numMultas);
		
		//lendo os valores de cada multa
		divida = 0;
		for (j=1;j<=numMultas;j++)
		{
			printf ("\tValor da %da. multa: ", j);
			scanf ("%f", &valor);
			
			//atualizando a dívida do motorista
			divida += valor;
		}
		
		//exibindo a dívida do motorista
		printf ("\nDivida do motorista de CNH %d: R$ %.2f\n\n", cnh, divida);
		
		//atualizando o total arrecadado
		totalArrecadado += divida;
		
		//determinando o maior número de multas (e a CNH do motorista)
		if (numMultas > maiorMultas)
		{
			maiorMultas = numMultas;
			maiorCNH = cnh;
		}
	}
	
	//exibindo os resultados
	printf ("\nTotal arrecadado com as multas: R$ %.2f\n", totalArrecadado);
	printf ("O motorista de CNH %d obteve o maior numero de multas (%d).", maiorCNH, maiorMultas);
}
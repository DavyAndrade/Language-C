/*	
	QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua plantação de café que gerou um 
	crescimento constante de C % em sua produção, por ano. Considerando que atualmente sua 
	produção anual seja de M u.p., implementar um programa que determine a quantidade de anos 
	necessária para que a produção duplique.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float m;	//produção anual atual
	float c;	//taxa de crescimento anual da produção
	int anos;	//resposta: quantidade de anos necessários para que a produção duplique
	
	float prod;
	
	//lendos os dados de entrada
	printf ("Producao anual atual: ");
	scanf ("%f", &m);
	
	printf ("Taxa de crescimento anual: ");
	scanf ("%f", &c);
	
	//inicializando a produção, que será atualizada anualmente até que chegue ao dobro
	//do valor da produçaõ inicial
	prod = m;
	
	//inicializando a quantidade de anos
	anos = 0;
	
	//calculando a quantidade de anos para que a produção duplique
	while (prod < 2*m)
	{
		//atualizando a produção
		prod += (prod*(c/100));
		
		//atualizando a quantidade de anos
		anos++;
	}
	
	//exibindo o resultado
	printf ("\n\nForam necessarios %d anos para a producao inicial (= %.1f u.p.) duplicar e chegar a %.1f u.p.", anos, m, prod);
}
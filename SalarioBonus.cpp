/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 12:48
	Description: Programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
	Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
 
    char nome [20];
	float salfix, totvendas, aux, total;
	
	scanf ("%s",&nome);
	scanf ("%f",&salfix);
	scanf ("%f",&totvendas);
	
	aux = (totvendas / 100) * 15;
	total = aux + salfix;
	
	printf ("TOTAL = R$ %.2f\n",total);
 
    return 0;
}

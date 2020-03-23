/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 10/08/2018 17:54
	Description: Programa que lê um valor inteiro. A seguir, calcula o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
	As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostra o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>
 
int main() {
 
   int x;

	scanf("%d", &x);
	
	printf ("%d\n",x);
	

	printf("%d nota(s) de R$ 100,00\n", x/100);
	printf("%d nota(s) de R$ 50,00\n", (x%100)/50);
	printf("%d nota(s) de R$ 20,00\n", (x%50)/20);
	printf("%d nota(s) de R$ 10,00\n", (((x%100)%50)%20)/10);
	printf("%d nota(s) de R$ 5,00\n", (x%10)/5);
	printf("%d nota(s) de R$ 2,00\n", (x%5)/2);
	printf("%d nota(s) de R$ 1,00\n", ((((x%100)%50)%20)%5)%2);
 
    return 0;
}

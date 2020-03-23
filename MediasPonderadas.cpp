/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 10/08/2018 17:31
	Description: Programa que lê 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
	Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresenta a média ponderada para cada um destes conjuntos de 3 valores, 
	sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
*/

#include <stdio.h>
 
int main() {
 
    int n, i;
	float v1, v2, v3, media;
	
	scanf ("%d",&n);
	
	for (i=0;i<n;i++){
	
		scanf ("%f",&v1);
		scanf ("%f",&v2);
		scanf ("%f",&v3);
		media = ((v1*2)+(v2*3)+(v3*5))/10;
		printf ("%.1f\n",media);
	}
 
    return 0;
}



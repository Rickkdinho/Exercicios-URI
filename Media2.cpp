/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:13
	Description: Programa que lê 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcula a média do aluno, 
	sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considerando que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>
 
int main() {
 
    float A, B, C, MEDIA;
	
	scanf ("%f",&A);
	scanf ("%f",&B);
	scanf ("%f",&C);
	
	MEDIA = ((A*2)+(B*3)+(C*5))/10;
	
	printf ("MEDIA = %.1f\n",MEDIA);
 
    return 0;
}


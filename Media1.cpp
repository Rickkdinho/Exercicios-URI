/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:03
	Description: Programa que l� 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno. 
	A seguir, calcula a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11). 
	Assumindo que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>
 
int main() {
 
    float A, B, MEDIA;
	
	scanf ("%f",&A);
	scanf ("%f",&B);
	
	MEDIA = ((A*3.5)+(B*7.5))/11;
	
	printf ("MEDIA = %.5f\n",MEDIA);
 
    return 0;
}

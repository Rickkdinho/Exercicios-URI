/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:50
	Description: Programa que l� o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
	o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcula e mostra o valor a ser pago.
*/

#include <stdio.h>
 
int main() {
 
    int cod1, num1, cod2, num2;
    float valor1, valor2, valort;
    
    scanf ("%d",&cod1);
    scanf ("%d",&num1);
    scanf ("%f",&valor1);
    scanf ("%d",&cod2);
    scanf ("%d",&num2);
    scanf ("%f",&valor2);
    
    valort = (num1*valor1)+(num2*valor2);
    
    printf ("VALOR A PAGAR: R$ %.2f\n",valort);
 
    return 0;
}

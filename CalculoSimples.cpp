/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:50
	Description: Programa que lê o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
	o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcula e mostra o valor a ser pago.
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

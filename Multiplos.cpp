/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 10/08/2018 17:45
	Description: Programa que lê 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos",
	indicando se os valores lidos são múltiplos entre si.
*/

#include <stdio.h>
 
int main() {
 
    int A, B;
	
	scanf ("%d",&A);
	scanf ("%d",&B);
	
	if ((A%B==0)||(B%A==0))
		printf ("Sao Multiplos\n");
	else
		printf ("Nao sao Multiplos\n");
 
    return 0;
}




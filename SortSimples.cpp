/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:11
	Description: Programa que lê 3 valores inteiros e os ordena em ordem crescente. 
	No final, mostra os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
*/

#include <stdio.h>
 
int main() {
 
    int n1,n2,n3,a,b,c,maior;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
	a = n1;
	b = n2;
	c = n3;
	
	if (a > c) 
	{
        maior = c;
        c = a;
        a = maior;
    }
    if (a > b) 
	{
        maior = b;
        b = a;
        a = maior;
    }
    if (b > c) 
	{
        maior = c;
        c = b;
        b = maior;
    }
    
    printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, n1, n2, n3);
 
    return 0;
}


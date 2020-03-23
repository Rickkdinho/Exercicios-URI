/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 10/08/2018 17:36
	Description: Programa que lê um valor inteiro N. Apresenta o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
*/

#include <stdio.h>
 
int main() {
 
    int n, i, quadrado;
	
	scanf ("%d",&n);
	
	for(i=1;i<=n;i++) {
		
		if (i%2==0){
			quadrado = i*i;
			printf("%d^2 = %d\n",i,quadrado);
		}
	}
 
    return 0;
}





/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:31
	Description: Programa que l� um valor inteiro X (1 <= X <= 1000). Em seguida mostra os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.
*/

#include <stdio.h>
 
int main() {
 
    int x,i;
	
	scanf ("%d",&x);
	
	for(i=1;i<=x;i=i+2) {
		
		printf("%d\n",i);
	}
 
    return 0;
}


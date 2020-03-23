/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 11:58
	Description: Programa que mostra os números pares entre 1 e 100, inclusive.
*/

#include <stdio.h>
 
int main() {
 
    int i;
	
	for (i=1;i<=100;i++) {
		
		if (i%2==0) {
		
			printf ("%d\n",i);
		}
	}
 
    return 0;
}

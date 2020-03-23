/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:19
	Description: Programa que lê que 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
	A seguir, mostra a quantidade de valores positivos digitados.
*/

#include <stdio.h>
 
int main() {
 
    float v;
	int i, pos=0, neg=0;
	
	for (i=0;i<6;i++){
		
		scanf ("%f",&v);
		
		if (v>0) {
			pos = pos+1;
		}
		else
			neg = neg+1;
	}
	
	printf ("%d valores positivos\n",pos);
    return 0;
}


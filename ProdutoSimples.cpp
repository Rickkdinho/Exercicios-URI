/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:44
	Description: Programa que l� dois valores inteiros. A seguir, calcula o produto entre estes dois valores e atribui esta opera��o � vari�vel PROD. 
	A seguir mostra a vari�vel PROD com mensagem correspondente.   
*/

#include <stdio.h>
 
int main() {
 
    int v1, v2, PROD;
	
	scanf ("%d",&v1);
	scanf ("%d",&v2);
	
	PROD = v1*v2;
	
	printf ("PROD = %d\n",PROD);
 
    return 0;
}

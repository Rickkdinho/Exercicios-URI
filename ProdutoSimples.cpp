/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:44
	Description: Programa que lê dois valores inteiros. A seguir, calcula o produto entre estes dois valores e atribui esta operação à variável PROD. 
	A seguir mostra a variável PROD com mensagem correspondente.   
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

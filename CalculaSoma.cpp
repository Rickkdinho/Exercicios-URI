/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 23/03/20 15:54
	Description: Programa que l� dois n�meros inteiros digitados pelo usu�rio, e calcula a soma dos n�meros digitados.
*/


#include <stdio.h>
 
int main() {
 
    int A ,B ,SOMA;
    
    scanf("%d", &A);
    scanf("%d", &B);
    SOMA = A+B;
    
    printf ("SOMA = %d\n",SOMA);
 
    return 0;
}

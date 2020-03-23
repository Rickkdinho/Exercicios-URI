/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 12:31
	Description: Programa que lê quatro valores inteiros A, B, C e D. 
	A seguir, calcula e mostra a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
*/


#include <stdio.h>
 
int main() {
 
    int A, B, C, D, DIF;
    
    scanf ("%d",&A);
    scanf ("%d",&B);
    scanf ("%d",&C);
    scanf ("%d",&D);
    
    DIF = (A*B) - (C*D);
    
    printf ("DIFERENCA = %d\n",DIF);
 
    return 0;
}

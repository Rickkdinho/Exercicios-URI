/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:55
	Description: Programa que lê três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
	maiorAB = (a+b+abs(a-b))/2
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, maiorAB, maiorABC;
    
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    
    maiorAB = (a+b+abs(a-b))/2;
    maiorABC = (maiorAB+c+abs(maiorAB-c))/2;
    
    printf ("%d eh o maior\n",maiorABC);
 
    return 0;
}



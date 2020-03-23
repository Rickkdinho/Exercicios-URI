/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:18
	Description: Programa que leia um número e aplica a formula para calcular a area de uma circunferência. Considerando para este problema que p = 3.14159:
*/

#include <stdio.h>
#define PI 3.14159;
 
int main() {
 
    double raio, A;
	
	scanf ("%lf",&raio);
	
	A = (raio*raio)*PI;
	
	printf ("A=%.4lf\n",A);
 
    return 0;
}

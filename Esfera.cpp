/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:32
	Description: Programa que que calcula e mostra o volume de uma esfera sendo fornecido o valor de seu raio (R). 
	A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159;
 
int main() {
 
    double raio, pot, volume;
	
	scanf ("%lf",&raio);
	
	pot = pow (raio,3);
	volume = ((4/3.0)*pot)*PI;
	
	printf ("VOLUME = %.3lf\n",volume);
 
    return 0;
}

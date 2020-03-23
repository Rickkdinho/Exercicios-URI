/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 10/08/2018 17:20
	Description: Programa que calcula o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) 
	e o total de combustível gasto (em litros).
*/

#include <stdio.h>
 
int main() {
 
    int X;
	float Y, consumo;
	
	scanf ("%d",&X);
	scanf ("%f",&Y);
	
	consumo = X/Y;
	
	printf ("%.3f km/l\n",consumo);
 
    return 0;
}

	

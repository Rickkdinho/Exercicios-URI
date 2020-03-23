/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 12:07
	Description: Programa que l� quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcula
	a dist�ncia entre eles, mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula:

Distancia = �v (x2-x1)�+(y2-y1)�
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1, x2, y2, aux, dist;
	
	scanf ("%f",&x1);
	scanf ("%f",&y1);
	scanf ("%f",&x2);
	scanf ("%f",&y2);
	
	aux = pow ((x2-x1),2) + pow ((y2-y1),2);
	dist = sqrt (aux);
	
	printf ("%.4f\n",dist);
 
    return 0;
}

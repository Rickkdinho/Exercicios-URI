/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:09
	Description: Programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcula e mostra:
	a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
	b) a �rea do c�rculo de raio C. (pi = 3.14159)
	c) a �rea do trap�zio que tem A e B por bases e C por altura.
	d) a �rea do quadrado que tem lado B.
	e) a �rea do ret�ngulo que tem lados A e B.
*/

#include <stdio.h>
#define PI 3.14159;
 
int main() {
 
    float A, B, C;
	float tri, cir, trap, quad, ret;
	
	scanf ("%f",&A);
	scanf ("%f",&B);
	scanf ("%f",&C);
	
	tri = (A*C)/2;
	cir = (C*C)*PI;
	trap = ((A+B)*C)/2;
	quad = B*B;
	ret = A*B;
	
	printf ("TRIANGULO: %.3f\n",tri);
	printf ("CIRCULO: %.3f\n",cir);
	printf ("TRAPEZIO: %.3f\n",trap);
	printf ("QUADRADO: %.3f\n",quad);
	printf ("RETANGULO: %.3f\n",ret);
 
    return 0;
}



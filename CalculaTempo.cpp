/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 12:41
	Description: Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante
	 de 90 Km/h. Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
	
	Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.
*/

#include <stdio.h>
 
int main() {
 
    int dist, tempo;
	
	scanf ("%d",&dist);
	
	tempo = dist*2;
	
	printf ("%d minutos\n",tempo);
 
    return 0;
}


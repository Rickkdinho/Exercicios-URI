/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:25
	Description: Programa que lê um valor inteiro X. Em seguida apresenta os 6 valores ímpares consecutivos a partir de X, um valor por linha, 
	inclusive o X ser for o caso.
*/

#include <stdio.h>
 
int main() {
 
    int i, n, cnt=0;
	scanf("%d",&n);
	
	for(i=n; cnt<6; i++){
		if(i%2==1){
			printf("%d\n",i);
			cnt++;
		}
	}
 
    return 0;
}

/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 14:01
	Description: Programa que l� o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio. 
	A seguir, mostra o n�mero e o sal�rio do funcion�rio, com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
 
    int num, horas;
    float valorh, salario;
    
    scanf ("%d",&num);
    scanf ("%d",&horas);
    scanf ("%f",&valorh);
    
    salario = horas*valorh;
    
    printf ("NUMBER = %d\n",num);
    printf ("SALARY = U$ %.2f\n",salario);
 
    return 0;
}


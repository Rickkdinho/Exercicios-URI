/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 14:01
	Description: Programa que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
	A seguir, mostra o número e o salário do funcionário, com duas casas decimais.
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


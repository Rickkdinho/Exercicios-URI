/*
	Name: 
	Copyright: 
	Author: Jose Ricardo
	Date: 09/08/2018 13:36
	Description: Programa que lê quatro notas de um aluno, calcula a média de acordo com o peso das notas (2,3,4,1), e exibe se o aluno foi aprovado, reprovado
	ou ficou de exame, caso fique de exame a média é recalculada com a nova nota.
*/

#include <stdio.h>
 
int main() {
 
    double n1,n2,n3,n4,m,e,mf;
	
	scanf ("%lf",&n1);
	scanf ("%lf",&n2);
	scanf ("%lf",&n3);
	scanf ("%lf",&n4);
	
	m = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	printf ("Media: %.1lf\n",m);
	
	if (m>=7.0)
	{
		printf ("Aluno aprovado.\n");
	}
	else if (m<5.0)
	{
		printf ("Aluno reprovado.\n");
	}
	else 
	{
		printf ("Aluno em exame.\n");
		scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        mf = (e + m)/ 2;
        if (mf>=5.0)
		{
            printf("Aluno aprovado.\n");
    	}
    	else
    	{
    		printf ("Aluno reprovado.\n");
		}
		
		printf ("Media final: %.1lf\n",mf);
	}
 
    return 0;
}

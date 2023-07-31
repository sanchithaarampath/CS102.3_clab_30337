#include<stdio.h>
#include <stdlib.h>

int main()
{
	float b_wage, n_wage;
	char name[50];

	printf("Enter employee name and basic salary respectively\n");
	scanf("%s %f",&name,&b_wage );

	if (b_wage>=10000)
		n_wage = b_wage* (115.0/100.0) ;
	else if (b_wage>=5000)
		n_wage = b_wage* (110.0/100.0) ;
	else
		n_wage = b_wage* (105.0/100.0) ;

	printf("New salary of %s is %.3f \n",name,n_wage );
}
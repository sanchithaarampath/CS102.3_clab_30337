#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[50],city;
	int w_years;
	float sales,n_wage,bonus,percentage;

	printf("Enter Employee name , city , years worked and sales respectively \n");	
	scanf("%s %c %d %f",&name,&city,&w_years,&sales);

	if (sales >= 50000)
	{
		percentage = 15.00;

	}
	else if (sales >=25000)
	{
		percentage = 12.00;
	}
	else
	{
		percentage = 10.00;
	}

	
	if (w_years>=5)
	{
		percentage = percentage + 10.00; 
	}


	bonus = (sales)*(percentage/100.00);

	printf("bonus without city bonus %f\n",bonus );

	if (city == 'c')
	{
		bonus = bonus + 2500.00;
	}

	n_wage = sales + bonus;

	printf("bonus with city bonus %f\n",bonus );
	printf("Your Monthly bonus allowance is %.2f \n",n_wage );

	return 0;
}


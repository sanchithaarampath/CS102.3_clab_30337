#include <stdio.h>
#include <stdlib.h>

int main()
{
	int emp_no=0,count = 0,i = 0;
	float b_salary;

	while(i < 100)
	{
		printf("Enter employee number \n");
		scanf("%d",&emp_no);

		if (emp_no == -999)
		{
			break;
		}

		printf("Enter basic salary \n" );
		scanf("%f",&b_salary);

		if (b_salary >= 5000.0)
		{
			count++;
		}

	
	}

	printf("No. of employees with basic salary greater than or equal to 5000 : %d\n",count );
	
	return 0;
}
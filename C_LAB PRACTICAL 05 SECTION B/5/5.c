#include <stdio.h>
#include <stdlib.h>

//Assumption : 20 hours is the limit of normal work hours

int main()
{
	int emp_no, w_hrs, o_hrs, o_pay = 0, ex_o_hrs, i=0, count = 0, tot_emp = 0;
	float percent;

	while(i < 100)
	{
		printf("\nEnter employee No : ");
		scanf("%d",&emp_no);

		if (emp_no == -999)
		{
			break;
		}

		printf("\nEnter No. of hours worked : ");
		scanf("%d",&w_hrs);

		if (w_hrs > 20)
		{
			if (w_hrs > 40)
			{
				o_hrs = w_hrs - 20;
				ex_o_hrs = w_hrs - 40;
				o_pay = o_pay + (ex_o_hrs *200)+ (20 *150); 

			}
			else 
			{
				o_hrs = w_hrs - 20;
				o_pay = o_pay + (o_hrs*150);
			}
		} 

		else
		{
			o_hrs = 0;
			o_pay = 0;
		}

		printf("\nEmployee No: %d\n",emp_no );
		printf("Over-time payment of the Employee: %d\n",o_pay );

		if (o_pay > 4000)
		{
			count++; 
		}

		tot_emp++ ;
	}

	percent = (float)count/(float)tot_emp;

	printf("\npercentage of employees whose Over-time payment > 4000\n %.2f \n",percent );

	return 0;
}
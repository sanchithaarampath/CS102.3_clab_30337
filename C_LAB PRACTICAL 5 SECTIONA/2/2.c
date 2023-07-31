#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float mark,avg,total=0;

	for (int i = 1; i <= 10 ; ++i)
	{
		printf("Enter mark of subject number %d : ",i );
		scanf(" %f",&mark);

		total= total+mark;
	}

	// printf("\nYour to is : %.2f\n",total );

	printf("\nYour total is : %d\n",(int)total );

	//To convert float to integer and vice versa we can typr the data type in brackets before the variable name in the printf

	avg = total/10.0;

	printf("\nYour average is : %.2f\n",avg );

	if (avg< 50)
	{
		printf("\nFAIL\n");
	}
	else 
	{
		printf("\nPASS\n");
	}



	return 0;
}
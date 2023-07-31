#include <stdio.h>
#include <stdlib.h>

// Checking not operand 

int main()
{
	int mark, max=0, min=100, sum = 0;
	float avg;

	for (int i = 1; i <= 10; ++i)
	{
		printf("Enter marks of student %d\n",i);
		scanf("%d",&mark);

		if (!(max > mark))
		{
			max = mark;
		}

		if (!(min < mark))
		{
			min = mark;
		}

		sum += mark;

	}

	avg = (float)sum/10.0;

	printf("Highest mark : %d\n",max );
	printf("Lowest mark : %d\n",min );
	printf("Average marks of students : %.2f\n",avg );
	
	
	return 0;
}
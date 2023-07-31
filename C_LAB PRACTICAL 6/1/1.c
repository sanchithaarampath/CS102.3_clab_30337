#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[10],min=100000,max = 0,sum = 0;
	float avg;

	for (int i = 0; i < 10; ++i)
	{
		printf("Enter input for array[%d] \n",i );
		scanf("%d",&array[i]);

		sum += array[i];
	}

	printf("Sum is %d\n",sum );

	avg = (float)sum / 10.0;

	for (int i = 0; i < 10; ++i)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	printf("\n");

	printf("Minimun value :%d\n",min );
	printf("Maximun value :%d\n",max );
	printf("Average of values :%.2f\n",avg );

	printf("\n");
	printf("Array in reverse order\n");
	
	for (int i = 9; i >= 0; --i)
	{
		printf("%d\t",array[i] );
	}
	
	
	return 0;
}
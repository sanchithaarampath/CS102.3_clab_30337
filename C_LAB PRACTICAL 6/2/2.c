#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size,sum1 = 0,sum2 = 0;

	printf("Enter size of the arrays\n");
	scanf("%d",&size);

	int array1[size],array2[size],vector_array[size];

	printf("\nEntering values to array1\n");

	for (int i = 0; i < size; ++i)
	{
		printf("Input of array1[%d] : ",i );
		scanf("%d",&array1[i]);

		sum1 += array1[i];
	}

	printf("\nEntering values to array2\n");

	for (int i = 0; i < size; ++i)
	{
		printf("Input of array2[%d] : ",i );
		scanf("%d",&array2[i]);

		sum2 += array2[i];
	}

	printf("\nScaler sum of array1 : %d\n",sum1 );
	printf("Scaler sum of array2 : %d\n\n",sum2 );

	printf("Array with Vector sum \n" );

	printf("{");
	for (int i = 0; i < size; ++i)
	{
		vector_array[i] = array1[i] + array2[i];
		printf("%d ",vector_array[i] );
	}
	printf("}");
	
	
	return 0;
}
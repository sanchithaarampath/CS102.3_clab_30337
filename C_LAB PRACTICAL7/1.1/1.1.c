#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr1[3][3],arr2[3][3],final[3][3],r1,r2,c1,c2;

	for (int r1 = 0; r1 < 3; ++r1)
	{
		for (int c1 = 0; c1 < 3; ++c1)
		{
			printf("Enter input of arr1[%d][%d] \n",r1,c1 );
			scanf("%d",&arr1[r1][c1]);
		}
	}

	printf("\n");

	for (int r2 = 0; r2 < 3; ++r2)
	{
		for (int c2 = 0; c2 < 3; ++c2)
		{
			printf("Enter input of arr2[%d][%d] \n",r2,c2 );
			scanf("%d",&arr2[r2][c2]);
		}
	}

	printf("\n");

	for (int r1 = 0; r1 < 3; ++r1)
	{
		for (int c1 = 0; c1 < 3; ++c1)
		{
			printf("%d\t",arr1[r1][c1] );
			
		}

		printf("\n");
	}

	printf("\n");

	for (int r2 = 0; r2 < 3; ++r2)
	{
		for (int c2 = 0; c2 < 3; ++c2)
		{
			printf("%d\t",arr2[r2][c2] );

		}

		printf("\n");
	}

	printf("\n");

	r1 = 0; 
	r2 = 0;

	for (int r3 = 0; r3 < 3; ++r3)
	{
		c1 = 0; 
		c2 = 0;
		
		for (int c3 = 0; c3 < 3; ++c3)
		{
			final[r3][c3] = arr1[r1][c1] + arr2[r2][c2];

			printf("%d\t",final[r3][c3] );
			++c1; 
			++c2;
		}

		++r1;
		++r2;
		printf("\n");
	}


	
	return 0;
}
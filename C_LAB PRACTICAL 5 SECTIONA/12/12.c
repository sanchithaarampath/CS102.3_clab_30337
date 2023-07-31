#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,check;

	printf("Enter your input :");
	scanf("%d",&n1);

	if (n1==0)
	{
		printf("Invalid input\nPlease restart your program\n");
		return 0;

	}

	printf("\n\nFactors of %d : \n",n1 );

	for (int i = 1; i <= n1; ++i)
	{
		if (n1%i==0)
		{
			printf("%d\n",i );

		}
	}
	
	return 0;
}
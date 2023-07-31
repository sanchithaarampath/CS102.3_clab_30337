#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no[10],count=0;

	for (int i = 0; i < 10; ++i)
	{
		printf("Enter your input number %d\n",i+1 );
		scanf("%d",&no[i]);

		if (no[i]%2==0 && no[i]!=0)
		{
			count++;	
		}
	}

	printf("Number of even numbers entered : %d\n",count );

	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//In the tutorial this Q is also shown as Q 12)

int main()
{
	int x,i=0,sum=0;


	for (i ; i < 10;)
	{
		printf("Enter your input \n");
		scanf("%d",&x);

		if (x == -1)
		{
			printf("Sum of all inputs before -1 = %d\n",sum );
			return 0;
		}
		else 
		{
			sum += x;
		}
		

	}
	
	return 0;
}
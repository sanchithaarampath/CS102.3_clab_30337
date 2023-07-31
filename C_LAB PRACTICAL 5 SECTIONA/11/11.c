#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,i;
	char check='p';

	printf("Input your number\n");
	scanf("%d",&n1);

	switch(n1)
	{
	case 0 : case 1: 	printf("%d is an invalid input \n",n1 );
						printf("Please restart the program \n",n1 );
		
						return 0;
						break;

	case 2 : 	printf("%d is a Prime number \n",n1 );
				return 0;
				break;
	}

	
	for (i = 2; i < n1; ++i)
	{
		if (n1%i == 0)
		{
			check = 'n';
			
		}
		
	}

		if (check=='p')
		{
			printf("%d is a Prime number \n",n1);	
		}
		else
		{
			printf("%d is a Non-Prime number \n",n1 );

		}

		
	
	
	return 0;
}
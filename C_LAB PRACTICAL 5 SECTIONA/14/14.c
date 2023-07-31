#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no[10];

	for (int i = 0; i < 10; ++i)
	{
		printf("Enter your input number %d\n",i+1 );
		scanf("%d",&no[i]);
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d,",no[i] );
	}
	
	return 0;
}
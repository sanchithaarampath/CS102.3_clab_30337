#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1;

	printf("Enter Number 1\n" );
	scanf("%d",&n1);

	if (n1%2==0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}

	return 0;
}
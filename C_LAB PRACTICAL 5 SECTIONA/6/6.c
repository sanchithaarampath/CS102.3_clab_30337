#include <stdio.h>
#include <stdlib.h>

int main()
{
	int base,expo,ans,i;

	printf("Enter your base value\n");
	scanf("%d",&base);

	printf("Enter your exponential value\n");
	scanf("%d",&expo);

	i = expo;
	ans = 1;

	for (i ; i > 0; --i)
	{
		ans=ans*base;
	}
	
	printf("%d to the power %d = %d\n",base,expo,ans );

	return 0;
}
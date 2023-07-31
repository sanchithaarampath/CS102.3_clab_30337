#include <stdio.h>
#include <stdlib.h>

int main()
{
	int u_n,c_n,check=0,digit;

	printf("Input your number: \n");
	scanf("%d",&u_n);

	c_n=u_n;

	while(c_n>0)
	{
		digit=c_n%10;
		check=(check)+(digit*digit*digit);
		c_n = c_n/10;
	}

	printf("Addition of the numbers raised to the power 3 = %d\n",check );

	if (check==u_n)
	{
		printf("%d is a Armstrong number \n",u_n );
	}
	else
	{
		printf("%d is not a Armstrong number\n",u_n );
	}


	
	return 0;
}
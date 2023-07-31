#include <stdio.h>
#include <stdlib.h>

/*This code is purely to test how to do
 all in the loop instead of printf outside the loop*/

int main()
{
	int n1=0,n2=0,n3,i=1;

	while (i<=10)
	{
		n3=n1+n2;
		printf("%d\n",n3 );
		
		if (i==3)
		{
			n2=1;
		}

		n1=n2;
		n2=n3;

		if (n2 == 1)
		{
			n2=0;
		}

		if (n1==0)
		{
			n2++;
		}

		i++;
	}
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Expected answer 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
	// add the previous number to the current number to get the next number

	int n1=0,n2=1,n3,i=4;

	printf("%d\n",n1);
	printf("%d\n",n2);
	printf("%d\n",n2);
	n1++;

	while (i<= 10)
		{
			n3 = n1+n2;
			n1=n2;
			n2=n3;
			printf("%d\n",n3);
			

			i++;
		
		}
	
	return 0;
}
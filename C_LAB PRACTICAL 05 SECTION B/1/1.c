#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no, no_p=0, no_n=0, no_z=0;

	for (int i = 1; i <= 10; ++i)
	{
		printf("Enter input number %d\n",i );
		scanf("%d",&no);

		if (no==0)
		{
			no_z++;
		}
		
		if (no>0)
		{
			no_p++;
		}
		
		if (no<0)
		{
			no_n++;
		}
		
	}

	printf("Number of positive numbers : %d\n",no_p );
	printf("Number of negative numbers : %d\n",no_n );
	printf("Number of Zeros : %d\n",no_z );
		
	
	return 0;
}
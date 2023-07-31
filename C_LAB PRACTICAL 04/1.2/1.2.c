#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,r;

	printf("Enter number 1 : ");
	scanf("%d",&n1);

	r=n1%2;

	switch(r)
	{
	case 0 : printf("Number is Even \n"); break;
	
	case 1: printf("Number is Odd \n"); break;
	}

	

	return 0;
}

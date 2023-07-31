#include<stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2;

	printf("Enter two numbers\n");
	scanf("%d %d",&n1,&n2);

	if (n1==0 || n2==0)
	{
		printf("\nInvaid input. \nEntered Numbers should not be zero\nPlease restart the Program");
		return 0;
	}
	if ( n1%n2 == 0)
		printf("1st number is a multiple of the 2nd number\n");
	else
		printf("1st number is not a multiple of the 2nd number\n"); 

	return 0;
}
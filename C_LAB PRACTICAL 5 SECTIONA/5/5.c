#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no, digit=0;

	printf("Enter your number : \n");
	scanf("%d",&no);

	do
	{
		digit = no%10;
		no=no/10;
		printf("%d",digit );	
	} while (no>0);

	return 0;
}
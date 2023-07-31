#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2,max;

	printf("Enter 2 numbers \n");
	scanf(" %d %d",&n1,&n2);

	
	if (n1>n2)
		max = n1;
	else 
		max = n2;

	printf("Largest value is %d\n",max );


	return 0;
}
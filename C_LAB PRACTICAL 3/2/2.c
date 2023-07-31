#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2,n3,max,min;

	printf("Enter 3 numbers \n");
	scanf(" %d %d %d",&n1,&n2,&n3);

	max =n1;
	if (n2>max)
		max = n2;
	
	if (n3>max) 
		max = n3;

	printf("Largest value is %d\n",max );

	min = n1;
	if (min>n2)
		min = n2;

	if (min>n3)
		min = n3;

	printf("Smallest value is %d\n",min );

	return 0;
}
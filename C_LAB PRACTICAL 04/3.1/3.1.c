#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	float out,r;

	printf("Do you want to calculate the \n");
	printf("a) Circumference of the circle \n");
	printf("  b)Area of the circle \n");
	printf("    c)Volume of the sphere \n\n");
	printf("Input the prefered option's letter\n");
	scanf(" %c",&ch);

	printf("\nEnter radius of circle \n");
	scanf(" %f",&r);
	
	if (ch == 'a')
	{
		out = 2.0*3.14*r;
		printf("Output is %.2f\n",out );
	}
	else if (ch == 'b')
	{
		out = 3.14*r*r;
		printf("Output is %.2f\n",out );
	}
	else if (ch == 'c')
	{
		out = (4.0/3.0)*(3.14)*r*r*r;
		printf("Output is %.2f\n",out );
	}
	else
	{
		printf("You have inputted a different value from the given one \nNow go find your own calculator and do it");
	}

	

	return 0;
}
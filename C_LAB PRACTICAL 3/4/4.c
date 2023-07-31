#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float r,d,cir,area;

	printf("Enter circle radius \n");
	scanf("%f",&r);


	printf("Diameter of the circle : %.2f \n",r*2);
	printf("Area of the circle : %.2f \n",2.0 * 3.14159 * r);
	printf("Circumference of the circle : %.2f \n",3.14159 * r * r);
	
	

	return 0;
}
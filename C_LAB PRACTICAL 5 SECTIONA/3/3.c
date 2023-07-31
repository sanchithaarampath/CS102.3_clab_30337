#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1,no,ans=1;

	printf("Enter the number you want the factorial of : " );
	scanf("%d" , &no);

	if (no<0)
	{
		printf("%d is an invalid input \n",no );
		return 0;
	}
	
	do
	{
		ans = ans*i;
		i++;

	} while (i <= no);

	printf("%d! = %d\n",no ,ans );

	return 0;
}
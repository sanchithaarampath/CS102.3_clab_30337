#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2,out;
	char operator,confirm;

	printf("Enter Number 1: \n");
	scanf("%d",&n1);

	printf("Enter Number 2: \n");
	scanf("%d",&n2);

	//Choosing operator
	printf("Enter the operator you like from the following \n    + - * /  \n\n");
	scanf(" %c",&operator);

	printf("You entered %c operator\n",operator);
	printf("Confirm your choice [y/n] \n",confirm );
	scanf(" %c",&confirm);

	//Confirming operator
	while (confirm == 'n')
	{
		printf("\n\nEnter the operator you like from the following \n    + - * /  \n\n");
		scanf(" %c",&operator);
		
		printf("You entered %c operator\n\n",operator);
		printf("Confirm your choice [y/n] \n",confirm );
		scanf(" %c",&confirm);
	}

	//Process
	switch (operator)
	{
	case '+' : out = n1+n2; break;
	case '-' : out = n1-n2; break;
	case '*' : out = n1*n2; break;
	case '/' : out = n1/n2; break;
	}

	printf("Output : %d\n",out );

	return 0;
}
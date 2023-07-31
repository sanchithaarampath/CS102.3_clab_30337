#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m_no,days;
	
	printf("Enter the number of the month : ");
	scanf("%d",&m_no);

	if (m_no > 12 || m_no<=0)
	{
		printf("Invalid input \n");
		return 0;
	}

	switch(m_no)
	{
	case  2 : days = 28; break;
	case  4 : days = 30; break;
	case  6 : days = 30; break;
	case  9 : days = 30; break;
	case 11 : days = 30; break;

	default :  days = 31;
	}

	printf("Your month has %d number of days\n",days );

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[4][4] = {{8,17,9,6},{5,2,11,18},{7,27,28,0},{4,1,3,10}};
	char location;

	for (int r = 0; r < 4; ++r)
	{
		for (int c = 0; c < 4; ++c)
		{
			if (arr[r][c] == 5)
			{
				printf("Array [%d][%d] \n",r,c );

				return 0;

			}
		}
	}
	
	return 0;
}
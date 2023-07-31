#include <stdio.h>
#include <stdlib.h>

int main()
{
	int item_price,sup_items = 0,total = 0;
	float avg_price;

	for (int i = 1; i <= 10; ++i)
	{
		printf("Input price of item No %d\n",i );
		scanf("%d",&item_price);

		total += item_price;	

		if (item_price > 200)
		{
			sup_items++;
		}

	}

	avg_price = (float)total/10.0;

	printf("Number of items with price greater than Rs. 200 : %d\n",sup_items );
	printf("Average of an item : %.2f\n",sup_items );
	
	return 0;
}
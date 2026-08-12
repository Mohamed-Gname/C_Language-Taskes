#include <stdio.h>

int main()
{
	int row = 6;
	int x, y;
	
	
	for(x = 1; x <= row; x++)
	{
		for(y = 1; y <= row - x; y++)
		{
			printf(" ");
		}
		for (y = 1; y <= (2 * x - 1); y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
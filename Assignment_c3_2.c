#include <stdio.h>

int main()
{
	int num, x;
	printf("enter your number\n");
	scanf("%d", &num);
	
	for (x = 1; x <= num; x++)
	{
		printf("%d * %d  \n", num, x);
	}
	return 0;
}
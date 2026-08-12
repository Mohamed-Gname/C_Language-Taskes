//Assignment 5.2
#include<stdio.h>

int main()
{
	int arr[10];
	int even_sum = 0;
	int odd_sum = 0;
	printf("Enter 10 values: \n");
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_sum = even_sum + arr[i];
		}else{
			odd_sum = odd_sum + arr[i];
		}
		
	}
	printf("THE EVEN SUM = %d \n", even_sum);
	printf("THE ODD SUM = %d \n", odd_sum);
	return 0;
}
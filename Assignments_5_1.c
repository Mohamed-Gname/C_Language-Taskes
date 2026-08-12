//assignment 5.1
/*Write C Code that get array numbers from user then sort
this array and at final print the minimum and maximum
value of the array .*/
//Assignment#5
#include<stdio.h>

int main()
{
	int ARR[6];
	int max;
	int min;
	printf("Enter the values\n");
	
	for (int i = 0; i < 6; i++) 
	{
		scanf("%d", &ARR[i]);
	}
	max = ARR[0];
	min = ARR[0];
	for (int i = 0; i < 6; i++){
		if (ARR[i] > max)
		{
			max = ARR[i];
		}
		if (ARR[i] < min)
		{
			min = ARR[i];
		}
	
	
	}
	printf("the max and min values is :\n");
	printf("Max = %d \n", max);
	printf("Min = %d \n", min);
	
	
	return 0;
}

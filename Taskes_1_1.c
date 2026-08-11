/*C function to SWAP two arrays.
don't use system string lib*/
#include <stdio.h>

// function of swap.
void swap_fu(int arr_1[] , int arr_2[] , int size)
{
	int temp;
	for (int i = 0; i < size ; i++)
	{
		temp = arr_1[i];
		arr_1[i] = arr_2[i];
		arr_2[i] = temp;
		
	}
}


int main()
{
	int arr_1[5] = {1, 2, 3, 4, 5,};
	int arr_2[5] = {10, 20, 30, 40, 50};
	swap_fu(arr_1, arr_2, 5);
	//print the array1
	printf("array after sawp : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr_1[i]);
	}
	//print the array2 
	printf("\n array 2 after swap: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr_2[i]);
	}
	return 0;
}
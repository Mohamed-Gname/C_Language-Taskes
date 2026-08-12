#include <stdio.h>

int main()
{
	int num1,num2,num3;
	int greates;
	
	printf("please Enter Your Num : \n");
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	if (num1 >= num2 && num1 >= num3){
		greates = num1;
	}else if (num2>= num1 && num2 >= num3){
		greates = num2;
	}else {
		greates = num3;
	}
	printf("The greatest num is %d", greates);
	
	return 0;
}
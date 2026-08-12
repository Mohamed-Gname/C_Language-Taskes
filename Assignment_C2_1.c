#include <stdio.h>

int main()
{
	float x ,y, R;
	int operator;
	
	printf("please enter your num1\n");
	scanf("%f", &x);
	printf("please enter your num2\n");
	scanf("%f", &y);
	// operator def
	printf("please enter your operator \n");
	printf(" 1 == add \n");
	printf(" 2 == sub \n");
	printf(" 3 == mul \n");
	printf(" 4 == div \n");
	
	printf("your num of operator");
	scanf("%d", &operator);
	
	switch(operator)
	{
		case 1:
			R = x + y;
			printf("%2f\n", R);
			break;
		case 2:
			R = x - y;
			printf("%2f\n", R);
			break;
		case 3:
			R = x * y;
			printf("%2f\n", R);
			break;
		case 4:
			if (y!=0){
				R = x / y;
				printf("%2f\n", R);
			}else{
				printf("error");
			
			}break;
		default:
			printf("invalid input");
	}
	return 0;
}
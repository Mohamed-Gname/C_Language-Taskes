#include <stdio.h>


int Factorial(int n); //prototype of func_1.
int npr(int n, int r);//prototype of func_2.


int main()
{
	
	int n;
	int r;
	printf("enter n:");
	scanf("%d", &n);
	printf("enter r:");
	scanf("%d", &r);
	
	
	if (n < 0||r > n||r < 0)
	{
		printf("invalid input\n");
		
	}else
	{
		printf("%dp%d=%d", n, r, npr(n, r));
	}
	
	return 0;
}


//function :1
int Factorial(int n){
	int F = 1;
	for (int i = 1; i <= n; i++)
	{
		
		F *= i;
		
	}
	return F;
}
// function :2
int npr(int n, int r){
	return Factorial(n) / Factorial(n - r);
}
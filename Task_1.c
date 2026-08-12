#include <stdio.h>
int main(){
	int X;
	int Y;
	int Z;
	printf("Enter first value :");
	scanf("%d,&X");
	printf("Enter the number of Bit :");
	scanf("%d,&Y");
	Z=(X>>Y)&1;
	printf("\nread Bit%d=%d\n",X,Y);
	//set value
	Z=X|(1<<Y);
	printf("after set value =%d\n",Z);
	//clear value
	Z=X&~(1>>Y);
	printf("after clear value =%d\n",Z);
	//toggel value
	Z=X^(1<<Y);
	printf("after toggel = %d\n",Z);
	
}
/*Write C Code that simulate an alarm system that ask the
user to enter the result of certain mathematical example ,
the system must keep asking the user to enter the result
till reach the correct result.
*/

#include <stdio.h>
 int main ()
 {
	 int ANWS;
	 printf("please solve the folowing equation:\n");
	 printf("100-50\n");
	 while (1){
		 printf("Enter your answer = \n");
		 scanf("%d", &ANWS);
		 if (ANWS==50){
			 printf("the correct answer\n");
			 break ;
		 }else{
			 printf("error!..please try again\n");
		 }
	 }
	 return 0;
 }
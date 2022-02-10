//Code to calculate the salary of a worker based on experience and age.
#include <stdio.h>
int main()
{
	int age, exp;
	
	loop:
	printf("Welcome User. \n");
	printf("To determine your salary, you need to input your experience level and age \n ");
	printf("Are you experienced? If yes, press 1. If you are not experienced, press zero. \n ");
	scanf("%d", &exp);
	printf(" \n");
	printf("Please enter your age. \n");
	scanf("%d", &age);
	
	if ((age >= 40) && (exp == 1)){
		printf("Your salary is 560,000 naira. \n");
		}
	
	if ((age>=30) && (age<40) && (exp == 1)){
		printf("Your salary is 480,000 naira. \n");
		}
		
	if ((age>=0) && (age<28) && (exp == 1)){
		printf("Your salary is 300,000 naira. \n");
		}
		
	if (exp == 0){
		printf("Your salary is 100,000 naira. \n");
		}
		
	if (!((exp ==1) || (exp == 0))){
		printf("You put in the wrong value for experience. Enter your values again \n");
		goto loop;
		}
			
	return 0;
}


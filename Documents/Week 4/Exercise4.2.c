//Working of increment and decrement operators
#include <stdio.h>
int main(){

	int int1, int2;
	float flt1, flt2;
	
	printf("Enter your first integer: " );
	scanf("%d", &int1);
	printf("Enter your second integer: ");
	scanf("%d", &int2);
	printf("Enter your first float: ");
	scanf("%f", &flt1);
	printf("Enter your second integer: ");
	scanf("%f", &flt2);
	
	printf("++int1 = %d \n", ++int1);
	printf("--int2 = %d \n", --int2);
	printf("++flt1 = %f \n", ++flt1);
	printf("--flt2 = %f \n", --flt2);
	return 0;
	}

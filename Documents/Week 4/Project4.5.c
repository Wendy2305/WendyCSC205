//Switch Statement for different data types
#include <stdio.h>

int main(){
	
	int intt;
	float flt;
	char cpr;
	int answer, i;
	
	printf("THis is a program that accepts any character, float or integer and prints the next four characters in multiples of three. \n");
	printf("For Character, press 1. \nFor Integer, press 2. \nFor float, press 3.\n");
	printf("Enter selection: ");
	scanf("%d", &answer);
	
	switch(answer){
	case 1:
		printf("Enter your chosen Character: ");
		scanf("%s", &cpr);
		printf("The next four characters in multiples of 3 are: ");
		for (i=0; i<4; ++i){
			cpr = cpr +3;
			printf("%s, ", &cpr);
			}
		printf("\n");
		break;
		
	case 2:
		printf("Enter your chosen Integer: ");
		scanf("%d", &intt);
		printf("The next four integers in multiples of 3 are: ");
		for (i=0; i<4; ++i){
			intt = intt +3;
			printf("%d, ", intt);
			}
		printf("\n");
		break;
			
	case 3:
		printf("Enter your chosen Integer: ");
		scanf("%f", &flt);
		printf("The next four floats in multiples of 3 are: ");
		for (i=0; i<4; ++i){
			flt = flt +3;
			printf("%f, ", flt);
			}
		printf("\n");
		break;
	
	default:
		printf("You chose an invalid number!!!" );
		}
		
return 0;
}
			
	

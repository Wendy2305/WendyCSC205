//Mama Cass Project
#include<stdio.h>
int main(){

	char order;
	int num, i;
	char reorder;
	int total = 0;

	printf("Welcome to Mama Cass Restaurant \n");
	printf("Menu. \nFor Poundo Yam/Edinkaiko Soup, press P     Price=3,200 \n");
	printf("For Fried Rice and Chicken, press F     Price=3,000 \n");
	printf("For Amala & Ewedu Soup, press A     Price=2,500 \n");
	printf("For Eba and Egusi Soup, press E     Price=2,000 \n");
	printf("For White Rice and Stew, press W     Price=2,500 \n");
	
menu:

	printf("What will you be ordering: ");
	scanf("%s", &order);
	
switch(order){
	case 'P':
	case 'p':
		printf("How many will you be ordering: ");
		scanf("%d", &num);
		//for(i=0; i<poundo; ++i){
			total = total + (num * 3200);
			printf("Your pounded yam costs %d naira: \n", total);
		//	}
		break;
			
	case 'F':
	case 'f':
		printf("How many will you be ordering: ");
		scanf("%d", &num);
		//for(i=0; i<fried; ++i){
			total = total + (num * 3000);
			printf("Your Fried Yam costs %d naira: \n", total);
		//	}
		break;
		
			
	case 'A':
	case 'a':
		printf("How many will you be ordering: ");
		scanf("%d", &num);
		//for(i=0; i<amala; ++i){
			total = total + (num*2500);
			printf("Your amala costs %d naira: \n", total);
		//	}
		break;
	
	case 'E':
	case 'e':
		printf("How many will you be ordering: ");
		scanf("%d", &num);
		//for(i=0; i<eba; ++i){
			total = total + (num * 3200);
			printf("Your Eba costs %d naira: \n", total);
		//	}
		break;
		
	default:
		printf("You entered the wrong letter. \n");
		}
loop2 :		
	printf("Do you want to order again. To order again, press A.Else, press B \n");
	scanf("%s", &reorder);
	switch(reorder){	
	case 'B':
	case 'b':
		printf("The total cost is: %d \n", total);
		printf("Have a nice day ! \n");
		break;
	
	case 'A':
	case 'a':
		goto menu;
		break;
		
	default:
		printf("Invalid statement!!!!! \n");
		break;
		}
	
	
	
	return 0;
	}

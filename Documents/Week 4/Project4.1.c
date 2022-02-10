//Voter's Verification
#include <stdio.h>

int main(){
	//char name[100][100];
	int age;
	
	//printf("Enter your name: ");
	//scanf("%s", name[i]);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age<18){
		printf("You are not allowed to vote. Re-apply when you are above 18 \n");
		printf("\n");
		}
	else{
		printf("You can vote. Welcome! \n");
		printf("\n");
		}
		
	return 0;
	}

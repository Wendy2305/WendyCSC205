//Next Letters
#include <stdio.h>

int main(){
	char lett;
	int i;
	
	loop:
	printf("Enter your letter of choice : ");
	scanf("%s", &lett);
	if (lett<='J' || lett<='j'){
		printf("The next six letters are : ");
		for(i=0; i<=6; ++i){
			lett = lett + 1;
			printf("%s, ", &lett);
			}
			printf(" \n");
		}
		
	else{
		printf("You did not pick a letter from A to J. Pick again");
		goto loop;
		}
			
	return 0;
	}

//Multiplication Table
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter your value for n: ");
	scanf("%d", &n);
	printf("Multiplication table from 1 to %d \n", n);
	
	for (i=1; i<13; ++i){
		for(j=1; j<n+1; ++j){
			printf("%d \t", i*j);
			}
		printf("\n");
		}
	return 0;
	}

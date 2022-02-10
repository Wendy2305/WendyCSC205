// Subject Calculator
#include <stdio.h>

int main(){
	int csc201, csc205, sta205, sum, average;
	float percentage;
	
	printf("Welcome Student. I am here to help you calculate your scores for CSC 201, CSC 205 and STA205 \n");
	printf("Enter your score for CSC 201: ");
	scanf("%d", &csc201);
	
	printf("Enter your score for CSC 205: ");
	scanf("%d", &csc205);
	
	printf("Enter your score for STA 205: ");
	scanf("%d", &sta205);
	
	sum= csc205+csc201+sta205;
	average =(sum/3);
	percentage= ((sum*100)/300);
	
	printf("The total score is : %d \n", sum);
	printf("The average score is : %d \n", average);
	printf("The percentage score is : %f \n", percentage);
	
	return 0;
	}
	

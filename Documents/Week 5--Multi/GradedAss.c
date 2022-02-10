//Assignment 1: Paystack operations
#include <stdio.h> //Standard input and Output
#include <stdlib.h> //Standard library
#include <unistd.h> 
#include <pthread.h> //pthread_library.

char ProbName[100][100];
int i;

void *PayStack(void *Pystk)
	{	int a;
		int *GenerateId0 = (int*)Pystk;
		printf("%s : %d. \n" ,ProbName[i], *GenerateId0); }
		
		
int main(){

int ProbNo;
int w,a;
int multiplier = 0;
pthread_t probid;

	printf("Greetings Esteemed Customer, we apologize for any challenges you may have encountered. We need you to tell us how many challenges you have experienced and the names of these problems in full \n \n");
	printf("How many problems do you have ?  ");
	scanf("%d", &ProbNo);
	
	printf("Sorry for the %d challenges you are experiencing. \n\nNow I need you to type the name of each challenge in full. Do not give space between each word but use an underscore. For example instead of typing 'Online Fraud', I need you to type 'Online_Fraud' \n", ProbNo);
	printf("Thank you for your understanding \n \n");
	
	for(i = 0; i<ProbNo; i++){
		printf("Enter operation : ");
//		scanf("%[^\n]s", ProbName[i]);
		scanf("%s", ProbName[i]);}
	
	printf(" \n");
	for(i = 0; i<ProbNo; i++){	
		multiplier +=1;
		for(int a = 0;	a < multiplier; ++a){
			for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, PayStack, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(2);
					}
			}
			
			printf("\n If you have any other problems or wish to speak to us, contact us at hello@paystack.com or call our number 01 631 6160 \n");
	printf("Thank you for working with us !");
return 0;
}
	 

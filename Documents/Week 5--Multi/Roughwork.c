//Assignment 1: Paystack operations
#include <stdio.h> //Standard input and Output
#include <stdlib.h> //Standard library
#include <unistd.h> 
#include <pthread.h> //pthread_library.

//int i=0;



void *Onlinefraud(void *Onf)
{

	int *GenerateId0 = (int*)Onf;
//	for (a=0; a<3; ++i)
	printf("Online fraud: %d. \n" ,*GenerateId0); 
}

void *Chargeback(void *cb)
{
	int *GenerateId1 = (int*) cb;
//	for (a=0; a<3; ++i)
	printf("Chargeback: %d. \n" ,*GenerateId1); 
}

void *PayGateCha(void *pgc)
{
	int a;
	int *GenerateId2 = (int*)pgc;
//	for (a=0; a<3; ++i)
	printf("Payment Online Gateway: %d. \n" ,*GenerateId2); 
}

void *ContUp(void *cu)
{
	int a;
	int *GenerateId3 = (int*)cu;
//	for (a=0; a<3; ++i)
	printf("Continuous Update: %d. \n" ,*GenerateId3); 
}

void *UserEx(void *ux)
{
	int a;
	int *GenerateId4 = (int*)ux;
//	for (a=0; a<3; ++i)
	printf("User Experience: %d. \n" ,*GenerateId4); 
	}
	
void *MultCurrPay(void *mcp)
{
	int a;
	int *GenerateId5 = (int*)mcp;
//	for (a=0; a<3; ++i)
	printf("Multi-currency payment: %d. \n" ,*GenerateId5); 
	
}

int main()
{ 
	int No_of_Problems;
	int Problem;
	int i;
	pthread_t probid;
	pthread_t *ProblemArray[] = {*Onlinefraud, *Chargeback, *PayGateCha, *ContUp, *UserEx, *MultCurrPay};
	
	printf("I need you to explain what challenge you are having. \n  For Online Fraud, press 1 \n For Chargeback, press 2 \n For Payment Gateway challenges, press 3. \n For Continuous Update, press 4. \n For User experience challenges, press 5. \n For Multi-currency payment, press 6 \n \n");
	
	printf("How many of these problems are you experiencing? ");
	scanf("%d", &No_of_Problems);
	printf("Thanks! \n");
	printf(" \n");
	
	for(int i =0; i<No_of_Problems; i++){
		printf("------------ \n What is your problem?");
		scanf("%d", &Problem);
		printf("\n");	
	}
	
	pthread_create(&probid, NULL, ProblemArray[Problem], NULL);
	pthread_join(ProblemArray[Problem], NULL);
	pthread_exit(0);
		
		
	
	return 0;
	}

//Assignment 1: Paystack operations
#include <stdio.h> //Standard input and Output
#include <stdlib.h> //Standard library
#include <unistd.h> 
#include <pthread.h> //pthread_library.

for(i=0; i<No_of_Problems; i++)
pthread_t tid;

void *Onlinefraud(void *convert)
{

	int *GenerateId = (int*)convert;
//	for (a=0; a<3; ++i)
	printf("Online fraud: %d. \n" ,*GenerateId); 
}

void *Chargeback(void *convert)
{
	int *GenerateId = (int*) convert;
//	for (a=0; a<3; ++i)
	printf("Chargeback: %d. \n" ,*GenerateId); 
}

void *PayGateCha(void *convert)
{
	int a;
	int *GenerateId = (int*)convert;
//	for (a=0; a<3; ++i)
	printf("Payment Online Gateway: %d. \n" ,*GenerateId); 
}

void *ContUp(void *convert)
{
	int a;
	int *GenerateId = (int*) convert;
//	for (a=0; a<3; ++i)
	printf("Continuous Update: %d. \n" ,*GenerateId); 
}

void *MultCurrPay(void *convert)
{
	int a;
	int *GenerateId = (int*)convert;
//	for (a=0; a<3; ++i)
	printf("Multi-currency payment: %d. \n" ,*GenerateId); 
}

int main()
{
	int No_of_Problems,i;
	int Challenge;
	
	printf("Dear customer, we apologize for the problem you are experiencing. \n These are some of the problems you may be experiencing: \n 1. Online Fraud \n 2. Chargeback \n 3. Payment Gateway challenges. \n 4. User experience challenges. \n 5. Multi-currency payment \n \n");
	
	printf("How many of these problems are you experiencing? ");
	scanf("%d ", &No_of_Problems);
	
	printf("I need you to explain what challenge you are having. \n  For Online Fraud, press 1 \n For Chargeback, press 2 \n For Payment Gateway challenges, press 3. \n For Continuous Update, press 4. \n For User experience challenges, press 5. \n For Multi-currency payment, press 6 \n \n");
//	for(i=0; i<No_of_Problems; i++)

//		getline("%d \n", &Challenge)
//		printf("What challenge are you having: ");

//	pthread_t *arraypicker[] = {&Onlinefraud, &Chargeback, &PayGateCha, &ContUp, &MultCurrPay}
//	pthread_t tid;
	
//	for(i=0; i<No_of_Problems; i++)
	pthread_t *arraypicker[] = {&Onlinefraud, &Chargeback, &PayGateCha, &ContUp, &MultCurrPay}
	
	
	if(i==0){
		pthread_create(arraypicker[0], NULL, Onlinefraud, (void *)arraypicker[0]);
			pthread_join(tid, NULL);
			sleep(1);}
		}
	pthread_exit(NULL);
	
	if(i==1){
		pthread_create(arraypicker[1], NULL, Chargeback, (void *)arraypicker[1]);
			pthread_join(tid, NULL);
			sleep(1);}
		}
	pthread_exit(NULL);
	
	if(i==2){
		pthread_create(arraypicker[2], NULL, PayGateCha, (void *)arraypicker[2]);
			pthread_join(tid, NULL);
			sleep(1);}
		}
	pthread_exit(NULL);
	
	if(i==3){
		pthread_create(arraypicker[i], NULL, ContUp, (void *)arraypicker[i]);
			pthread_join(tid, NULL);
			sleep(1);}
		}
	pthread_exit(NULL);
	
	if(i==4){
		pthread_create(arraypicker[i], NULL, MultCurrPay, (void *)arraypicker[i]);
			pthread_join(tid, NULL);
			sleep(1);}
		}
	pthread_exit(NULL);
	
/*	if(i==5)
		pthread_create(arraypicker[i], NULL, myThreadAdd, (void *)arraypicker[i]);
			pthread_join(tid, NULL);
			sleep(1);}
		
	pthread_exit(NULL);
*/		
	
	return 0;
	}

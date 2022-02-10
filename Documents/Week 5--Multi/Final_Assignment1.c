//Assignment 1: Paystack operations
#include <stdio.h> //Standard input and Output
#include <stdlib.h> //Standard library
#include <unistd.h> 
#include <pthread.h> //pthread_library.
 

	void *Onlinefraud(void *Onf)
	{	int a;
		int *GenerateId0 = (int*)Onf;
		printf("Online fraud: %d. \n" ,*GenerateId0); }

	void *Chargeback(void *cb)
	{	int a;
		int *GenerateId1 = (int*)cb;
		printf("Chargeback: %d. \n" ,*GenerateId1); }
	
	void *PayGateCha(void *pgc)
	{	int a;
		int *GenerateId2 = (int*)pgc;
		printf("Payment Online Gateway: %d. \n" ,*GenerateId2);}
	
	void *ContUp(void *cu)
	{	int a;
		int *GenerateId3 = (int*)cu;
		printf("Continuous Update: %d. \n" ,*GenerateId3);}
	
	void *UserEx(void *ux)
	{	int a;	
		int *GenerateId4 = (int*)ux;
		printf("User Experience: %d. \n" ,*GenerateId4);}
		
	void *MultCurrPay(void *mcp)
	{	int a;
		int *GenerateId5 = (int*)mcp;
		printf("Multi-currency payment: %d. \n" ,*GenerateId5); }


int main(){ 
	int No_of_Problems;
	int Problem;
	int i,w,a;
	pthread_t probid;
	int multiplier =0;


	printf("Dear customer, we apologize for the problem you are experiencing. \n These are some of the problems you may be experiencing: \n 1. Online Fraud \n 2. Chargeback \n 3. Payment Gateway challenges. \n 4. User experience challenges. \n 5. Multi-currency payment \n \n");
	printf("How many of these problems are you experiencing? ");
	scanf("%d", &No_of_Problems);
	
	printf("I need you to explain what challenge you are having. \n  For Online Fraud, press 1. \n  For Chargeback, press 2. \n  For Payment Gateway challenges, press 3. \n  For Continuous Update, press 4. \n  For User experience challenges, press 5. \n  For Multi-currency payment, press 6. \n \n");
	
	
for(int i =0; i<No_of_Problems; i++){
//	for(int a =0; a<2; a++){
		printf("------------ \n What is your problem? Enter the corresponding value: ");
		scanf("%d", &Problem);
		multiplier +=1;
		for(int a = 0;	a < multiplier; ++a){
			if(Problem==1){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, Onlinefraud, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(2);
					//pthread_exit((void*)&probid);
				}
				
			
			if(Problem==2){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, Chargeback, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(1);
//					pthread_exit((void*)&probid);
					}
				
			if(Problem==3){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, PayGateCha, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(1);
//					pthread_exit((void*)&probid);
					}
				
			if(Problem==4){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, ContUp, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(1);
//					pthread_exit((void*)&probid);
					}
				
			if(Problem==5){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, UserEx, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(1);
//					pthread_exit((void*)&probid);
					}
				
			if(Problem==6){
				for (w =0; w < 2; w++)
					pthread_create(&probid, NULL, MultCurrPay, (void*)&probid);
					pthread_join(probid, NULL);
					sleep(1);
					}	
			}
	}
	printf("\n If you encounter any other problems that are not listed above. Contact us at hello@paystack.com or call our number 01 631 6160 \n");
	printf("Thank you for working with us !");				
	return 0;
}

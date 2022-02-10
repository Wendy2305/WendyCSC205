//Redoing Assignment
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

char chalname[100][100];
//int chalno;
int i;

void *Paystack (void* uniqid){
	int *Idgenerator = (int*)uniqid;
	//for(i=0; i<chalno; ++i){
		printf("%s: \t %d\n", chalname[i], *Idgenerator);
	//}
	}
	
int main(){
	int chalno;
	int mult =0;

pthread_t chalid;

	printf("How many problems do you have: ");
	scanf("%d", &chalno);
	
	for(i=0; i<chalno; i++){
		printf("Enter problem %d :", i+1);
		scanf("%s", chalname[i]);
		}

for(i=0; i<chalno; i++){
mult +=1;
	for(int b=0; b<mult; ++b){	
		for(int a=0; a<2; a++){
			pthread_create(&chalid, NULL, Paystack, (void*)&chalid);
			pthread_join(chalid, NULL);
			sleep(0);}}}
			//pthread_exit(NULL);}}}
	
	return 0;
	}
	

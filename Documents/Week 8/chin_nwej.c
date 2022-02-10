#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

char name[100];
	int crep;
	char email[100], depart[100], soo[100], paper[100], incent[100];

void *VoterX(void *args){
	printf("Success. \n");
	printf("Name: %s. Email: %s. Department: %s State of Origin: %s\n", name, email, depart, soo); 
	printf("You can vote!! \n");
	return NULL;
	}
	
void *PubTaks(void *args){
	printf("Success. \n");
	printf("Name: %s. Email: %s. Department: %s State of Origin: %s\n", name, email, depart, soo); 
	printf("You can vote!! \n");
	return NULL;
	}

int main(){
	int choice, lvl, a, crep, nop;
	float gpa;
	pthread_t votid;
	
	printf("Welcome! You are to choose between the VoterX and PubTAKS. For VoterX, press 1. For PubTAKS, press 2. \n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	
	switch(choice){
	
	case 1:
		a = 100;
		printf("What is your name: ");
		//scanf("%[^\n]", name);
		scanf("%s", name);
		
		printf("What is your email: ");
		scanf("%s", email);
		
		printf("What is your department: ");
		scanf("%s", depart);
		
		printf("What is your state of origin: ");
		scanf("%s", soo);
		
		printf("Are you a class rep? If yes, press 1. If no, press 2 ");
		scanf("%d", &crep);
	

		printf("What level are you in: ");
		scanf("%d", &lvl);
		
		printf("What is your CGPA :");
		scanf("%f", &gpa);
		
		if((crep==1) && (lvl>a) && (gpa>4.0)){
			printf("You're in \n");
			int z=fork();
			int gap = pthread_create(&votid, NULL, VoterX, NULL);
			if(z==0){
				pthread_create(&votid, NULL, VoterX, NULL);
				pthread_join(votid, NULL);
			}
			}
		else{
			printf("You cannot vote !! \n");
		break;
		
	case 2:
		printf("How many papers do you have :");
		scanf("%d", &nop);
			for(int i=0; i<nop; ++i){
				printf("What is the name of your paper: ");
				scanf("%s", paper);
		
				printf("What is your incentive (in letters): ");
				scanf("%s", incent);
				}
				
			int z=fork();
			int gap = pthread_create(&pid, NULL, PubTaks, NULL);
			if(z==0){
				pthread_create(&pid, NULL, PubTaks, NULL);
				pthread_join(pid, NULL);
			}
			
	default:
		printf("Invalid statement!!!!! \n");
		break;
		}
	
		
	return 0;
	}

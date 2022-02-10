#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
int mypid; 
int age;
char gender[50];

void *north(void *args){
	printf("Credentials: %d,\t %s,\t North,\t %d,\t", mypid, gender, age);
	return NULL;
	}

int main(){
	pthread_t vid;
	//int age;
	int region, gap;
	mypid = getpid();
	//char gender[50];
	printf("How old are you :");
	scanf("%d", &age);
	printf("What is your gender:");
	scanf("%s", gender);
	printf("What region are you from. North = 1. South = 2. East = 3, West = 4.\n");
	scanf("%d", &region);
	
	if(region==1){
		 gap=pthread_create(&vid, NULL, &north, NULL);
		 mypid = getpid();
		if(gap==0){
			pthread_create(&vid, NULL, &north, NULL);
			}
		}
		
	return 0;
	}
		

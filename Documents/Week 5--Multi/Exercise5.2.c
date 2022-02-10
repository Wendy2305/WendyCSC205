//Basic Thread Functions
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

void *threadFunction(void* args){
	while(1){
		printf("I am the thread. \n");
		}
	}
	
int main(){
	//creating thread id
	pthread_t thread_id;
	int ret;
	
	//creating thread id
	ret = pthread_create(&thread_id, NULL, threadFunction, NULL);
	if(ret==0){
		printf("Thread created successfully. \n");
		pthread_create(&thread_id, NULL, threadFunction, NULL);}
		
	else{
		printf("THread not created. \n");
		return 0; }
		
	return 0;
	}

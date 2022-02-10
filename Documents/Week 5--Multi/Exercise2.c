//Exercise 2: Another program to demonstrate basic thread function.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// A normal C function that is executed as a thread when its name is specified in pthread_create()

void *threadFunction(void*args)
{
//	while(1)
		printf("I am Groot. \n");
		return NULL;
	
}

int main()
{
	//creating thread id
	pthread_t id;
	int ret;
	
	//creating thread
	ret = pthread_create(&id, NULL, &threadFunction, NULL);
	if (ret==0){
		printf("Thread created successfully. \n");
		pthread_create(&id, NULL, &threadFunction, NULL);
		pthread_exit(NULL);
	}
	
	else{
		printf("Thread not created. \n");
		return 0; //return from main
	}
	
	return 0;
	}
		
		
	

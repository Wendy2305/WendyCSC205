#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int mypid, myppid;

void *processcreator(void *args){
	printf("Process ID is: %d \n", mypid);
	printf("Parent Process ID is: %d \n", myppid);
	return NULL;
	}


int main(){
	int pno;
	int vape;
	pthread_t jaga;
	mypid = getpid();
	myppid = getppid();
	
	printf("How many processes do you want to create : ");
	scanf("%d", &pno);
	
	vape= pthread_create(&jaga, NULL, &processcreator, NULL);
 
for(int i=1; i<pno; i++){

	if(fork()==0){ //creates child process
		printf("Child process creation successful.\n");
		pthread_create(&jaga, NULL, &processcreator, NULL); 
		pthread_exit(NULL);
	}
	}
	//pthread_exit(NULL);
	return 0;
	}
	


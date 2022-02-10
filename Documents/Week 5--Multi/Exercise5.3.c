//Basic Thread Functions
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

int grade = 80; //create global variable to be converted to threads

//Function that will be used by all threads
void *myThreadAdd(void *vargp){
	int *myid = (int*)vargp; //stores value argument to the thread.
	static int age = 17;
	++age, ++grade;
	printf("Thread ID: %d, Age: %d, Grade: %d\n", *myid, ++age, ++grade);
	}
	
int main(){
	int i;
	pthread_t tid;
	
	//Creating five thread threads
	for (i = 0; i <5; i++)
		pthread_create(&tid, NULL, myThreadAdd, (void *)&tid);
		pthread_join(tid, NULL);
		sleep(2);
		
	pthread_exit(NULL);
	return 0;
}
	

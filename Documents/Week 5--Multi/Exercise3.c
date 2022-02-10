//Exercise 3: A program to show multiple threads with global and static variables
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int grade = 80;
//Create a global variable to change it in threads

//The function to be executed by all threads
void *myThreadAdd(void *cow)
{
	int *myid = (int *) cow; //store the value argument passed to this thread
	static int age = 17; //create a static variable to observe its changes
	++age; ++grade;
	printf("Thread ID : %d, Age: %d, Grade: %d \n", *myid, ++age, ++grade);
}

int main()
{
	int i;
	pthread_t tid;
	
	// let us create three threads
	for (i =0; i < 5; i++)
		pthread_create(&tid, NULL, myThreadAdd, (void *)&tid);
		pthread_join(tid, NULL);
		sleep(1);
		
	pthread_exit(NULL);
	return 0;
}

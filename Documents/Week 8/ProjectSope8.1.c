/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


int mypid, myppid;
void *childcreator(void* args){
	printf("This is the process ID %d\n", mypid);
	printf("This is the parent ID %d\n", myppid);	
	return NULL;
}

int main() {
	int num, gap;
	pthread_t jack;
	printf("How many process would you like to create? ");
	scanf("%d", &num);
	
	fork()*num;
	gap = pthread_create(&jack, NULL, &childcreator, NULL);
	mypid = getpid();
	myppid = getppid();
	
	if (gap==0){
	pthread_create(&jack, NULL, &childcreator, NULL);
	}
return 0;	
}
*/

//keisha's code
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{	
	int mypid,myppid;
	mypid = getpid();
	myppid = getppid();
	printf("The child process ID is %d\n", mypid);
	printf("The parent process ID is %d\n", myppid);
	return NULL;
}

int main() {
int p,i,a;
	pthread_t pid;
	printf("Enter the number of processes you want: ");
	scanf("%d",&p);
	
	for(i=1;i<=p;i++)
	{
	a=fork();
	if (a==0){
	 pthread_create(&pid, NULL, &childThread, NULL);
	 pthread_join(pid,NULL);
	 }
	 }
	 pthread_exit(NULL);
}
	




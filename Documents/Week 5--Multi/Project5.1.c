//Student name, matric and thread id
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int i, studno, matno[100];
char name[100][100];

void *Printer(void *threadid){
	int *Idgenerator = (int*)threadid;
	for(i=0; i<studno; i++){
	printf("Name : %s\t Matric No: %d\t Thread Id: %d\n.", name[i], matno[i], *Idgenerator);}
	}
	
int main(){

pthread_t tid; 
	printf("How many student credentials are you entering: ");
	scanf("%d", &studno);
	printf("You chose to input credentials of %d students.\n", studno);
	
	for(i=0; i<studno; i++){
		printf("Enter name of Student %d : ", i+1);
		scanf("%s",name[i]);
		printf("Enter Matric No of Student %d : ", i+1);
		scanf("%d", &matno[i]);}
		
	//Thread creation verification
	int ver= pthread_create(&tid, NULL, Printer, (void*)&tid);
	if(ver==0){
		printf("Thread successfully created.\n");
		for(i=0; i<studno; ++i){
			pthread_create(&tid, NULL, Printer, (void*)&tid);
			pthread_join(tid, NULL);
			sleep(2);
			pthread_exit(NULL);}
			}
	else{
		printf("Thread not created. \n");
		}
	
	return 0;
	}
		


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *popmusic (void *args){
	printf("This is the history of popmusic. \nPop is a genre of popular music that originated in its modern form during the mid-1950s in the United States and the United Kingdom. The terms popular music and pop music are often used interchangeably, although the former describes all music that is popular and includes many disparate styles.\n");
	return NULL;}
	
void *rhymusic (void *args){
	printf("This is the history of rthym music. \n.Rhythm and blues, often abbreviated as R&B or RnB, is a genre of popular music that originated in African-American communities in the 1940s.\n");
	return NULL;}

void *folkmusic (void *args){
	printf("This is the history of folk music. \nFolk music is a music genre that includes traditional folk music and the contemporary genre that evolved from the former during the 20th-century folk revival. Some types of folk music may be called world music.\n");
	return NULL;}
	
void *clcmusic (void *args){
	printf("This is the history of Classical music. \nClassical music generally refers to the formal musical tradition of the Western world, considered to be distinct from Western folk music or popular music traditions.\n");
	return NULL;}

int main(){
	int choice;
	char name[100];
	pthread_t mid;
	printf("Welcome to the PAU Music Exhibition Study Centre.\n");
	
	printf("Enter artist name: ");
	scanf("%[^\n]",name);
	printf("For Pop               \t Press 1.\n");
	printf("For Rhythms & Blues   \t Press 2.\n");
	printf("For Folk              \t Press 3.\n");
	printf("For Classic music     \t Press 4.\n");
	scanf("%d", &choice);

if(fork()==0){	
	switch(choice){
	case 1:
		//fork();
		printf("Pop music thread created. \n");
			pthread_create(&mid, NULL, popmusic, NULL);
			//pthread_join(mid, NULL);
			//pthread_exit(NULL);
			sleep(2);
			
	case 2:
		fork();
		printf("Rhythm and blues music thread created. \n");
			pthread_create(&mid, NULL, rhymusic, NULL);
			//pthread_join(mid, NULL);
			//pthread_exit(NULL);
			sleep(2);
			
	case 3:
		//fork();
		printf("Folk music thread created. \n");
			pthread_create(&mid, NULL, folkmusic, NULL);
			//pthread_join(mid, NULL);
			//pthread_exit(NULL);
			sleep(2);
			
	case 4:
		printf("Classical music thread created. \n");
			pthread_create(&mid, NULL, clcmusic, NULL);
			//pthread_join(mid, NULL);
			//pthread_exit(NULL);
			sleep(2);
			}
	
	//default:
	//	printf("You chose the wrong number dummie. \n");
		}
	return 0;
	}
/*
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

char name[100];

void *popthread(void *args){
	printf("Hello %s! this is pop\n", name);
	return NULL;
}

void *rnbthread(void *args){
	printf("Hello %s! this is rnb\n", name);
	return NULL;
}

void *folkthread(void *args){
	printf("Hello %s! this is folk music\n", name);
	return NULL;
}

void *classicthread(void *args){
	printf("Hello %s! this is classical music\n", name);
	return NULL;
}

int main(){
	int genre;
	pthread_t pop;
	pthread_t rnb;
	pthread_t folk;
	pthread_t classic;
	
	printf("artist name: ");
	scanf("%[^\n]",name);
	
	printf("1)pop \n2)RnB \n3)Folk \n4)Classic \nWhich genre are you interested in? ");
	scanf("%d",&genre);
	
	if (fork() == 0){
	
	switch (genre){
	case 1:
	pthread_create(&pop, NULL, popthread, (void *)&pop);
	sleep(1);
	break;
	
	case 2:
	pthread_create(&rnb, NULL, rnbthread, (void *)&rnb);
	sleep(1);
	break;
	
	case 3:
	pthread_create(&folk, NULL, folkthread, (void *)&folk);
	sleep(1);
	break;
	
	case 4:
	pthread_create(&classic, NULL, classicthread, (void *)&classic);
	sleep(1);
	break;

	}
	}	
}
*/

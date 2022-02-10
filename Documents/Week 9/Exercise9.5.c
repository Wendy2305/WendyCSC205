// Free method
#include <stdio.h>
#include <stdlib.h>

int main(){
	//malloc and calloc pointers
	int *ptr, *ptr1;
	int n,i;
	
	//Get the no. of elements for the array
	n=5;
	printf("Number of elements: %d \n", n);
	
	//using malloc
	ptr = (int*) malloc(n * sizeof(int));
	
	//Using calloc
	ptr1 = (int*) calloc(n, sizeof(int));
	
	//Verifying to see if it was allocated.
	if (ptr ==NULL || ptr1==NULL){
		printf("Memory not allocated. \n");
		exit(0);
		}
		
	else {
		//Successful malloc
		printf("Memory was successfully allocated using malloc \n");
		
		//free malloc
		free(ptr);
		printf("Malloc memory freed \n");
		
		//successful calloc
		printf("Memory was successfully allocated using malloc \n");
		
		//free calloc
		free(ptr1);
		printf("Calloc memory freed. \n");
		}
	return 0;
	}
		

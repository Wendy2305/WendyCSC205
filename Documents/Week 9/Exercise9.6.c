//Exercise 4: calloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// This pointer will hold the base address of the block created.
	int* ptr;
	int n,i;
	
	n=5;
	//Get the number of elements for the array
	printf("Enter number of elements: %d \n", n);
	
	//Dynamically allocate memory using malloc()
	ptr = (int*)calloc(n, sizeof(int));
	
	// Check if the memory has been successfully allocated by calloc or not
	if (ptr ==NULL) {
	printf("Memory not allocated. \n");
	exit(0);
	}
	
	else {
		//Memory has been successfully allocated
		printf("Memory successfully allocated using calloc. \n");
		
		//Get the elements of the array
		for (i=0; i<n; ++i) {
			ptr[i] =i + 1;
			}
			
		//Print the elements of the array
		printf("The elements of the array are: \n");
		for (i=0; i<n; ++i) {
			printf("%d, ", ptr[i]);
		}
			printf("\n");
	}
	
		//Get new size of array
		n =10;
		printf("Size of new array: 5 \n");
		
		//Dynamically re-allocated memory using realloc()
		ptr = realloc(ptr, n * sizeof(int));
		
		//Memory has been successfully allocated
		printf("Memory successfuly allocated using re-alloc");
		
		//Get the elements of the array
		for (i=5; i<n; ++i) {
			ptr[i] =i + 1;
			}
			
		//Print the elements of the array
		printf("The elements of the array are: \n");
		for (i=0; i<n; ++i) {
			printf("%d, ", ptr[i]);
		}
			printf("\n");
			
		free(ptr);
		
	return 0;
}

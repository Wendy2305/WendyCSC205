#include <stdio.h>

int main(){
	int a = 10;
	int *p;
	p = &a;
	
	unsigned int b = (unsigned int) a;
	
	//accessing the address
	printf("Address stored in a variable p is: %p \n", p);
	
	//getting the value
	printf("Value stored in a variable p is: %d \n", *p);
	
	return 0;
	}  

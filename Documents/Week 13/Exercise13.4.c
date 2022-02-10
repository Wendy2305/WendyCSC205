#include <stdio.h>

int main() {

	int NumValue = 10;
	int *ipointerNumValue;
	ipointerNumValue = &NumValue;
	
	//Accessing the address
	printf("Address of NumValue is: %p \n", ipointerNumValue);
	
	//Accessing the value
	printf("Value of NumValue is: %d \n", *ipointerNumValue);
	
	//Accessing address
	printf("Adress of NumValue is : %p \n", &NumValue);
	
	return 0;
	}

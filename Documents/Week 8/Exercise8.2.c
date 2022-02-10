#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	fork();
	printf("Called fork() system call \n");
	return 0;
	//when using the 'fork()' function, it prints output twice.
	//This follows the formuls 2^n, where n is the no of times we call 'fork()'.
	//This means that if we call 'fork()' 5 times, it will print 2^5 times which is 32
	
}

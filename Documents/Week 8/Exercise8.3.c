#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
	fork();
	fork();
	fork();
	printf("CSC 205: Operating systems I \n");
	//printf("\n");
	//This output should print 8 times, ideally
	return 0;
}

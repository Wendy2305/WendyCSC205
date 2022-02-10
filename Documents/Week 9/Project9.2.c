//Years of experience
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, years, max;
	int *ptra;
	printf("How many people did you interview: ");
	scanf("%d", &num);
	
	ptra = (int*) calloc(num, sizeof(int));
	
	for(int i=0; i<num; ++i){
		printf("Enter years of programming experience of person %d : ", i+1);
		scanf("%d", &years);
		ptra[i] = years;
		}
		
	max = ptra[0];
	
	for(int i=0; i<num; ++i){
		//printf("%d, ", ptra[i]);
		if (max < ptra[i]){
			max = ptra[i];
			}
		}
		 
		printf("Hire the person with %d years of experience. \n", max);
	
		printf("\n");
		
	return 0;
	}

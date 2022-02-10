// Addition of matrices using dma
#include <stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k, m, x;
	int *ptra, *ptrb;
	int mata[2][3], matb[2][3];
	printf("We will find the sum of two 2x3 matrices using dmac \n");
	
	//Entering values for matrice A
	for(i=0; i<2; ++i){
		for(j=0; j<3; ++j){
			printf("Enter element for A[%d][%d] : ", i, j);
			scanf("%d", &mata[i][j]);
		}
	}
	printf("\n");
	
	//Entering values for matrice B
	for(k=0; k<2; ++k){
		for(m=0; m<3; ++m){
			printf("Enter element for B[%d][%d] : ", k,m);
			scanf("%d", &matb[k][m]);
		}
	}
	printf("\n");
	
	ptra = (int*) calloc(i*j, sizeof(int));
	ptrb = (int*) calloc(k*m, sizeof(int));
	
	if(ptra ==NULL || ptrb==NULL){
		printf("Unable to perform dynamic memory allocation. \n");}
	
	else{
	//Printing elements for Mat A
while(x<6){
	++x;
	for(i=0; i<2; ++i){
		for(j=0; j<3; ++j){
				ptra[x] = mata[i][j];}}
				
				printf("%d, ", ptra[x]);
			}
		}
		
	//Printing 		
	//for(x=0; x<6; ++x){
	//		printf("%d, ", ptra[x]);
	//		}
	//		printf("\n");
}		
	return 0;
	}
			
	
	
	

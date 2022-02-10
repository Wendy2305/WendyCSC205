// Addition of matrices using dma
#include <stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int sum[3][2];
	float mata[3][2] = {{667, 422}, {233.5, 515}, {183.4, 335}};
	float matb[3][2] = {{100, 151.6}, {245.5, 312}, {333, 578.8}};
	
	float *ptrc; 
	ptrc = (float*) calloc(6, sizeof(float));
	
	printf("The sum of the matrices is : \n");
	for(i=0; i<3; ++i){
		for(j=0; j<2; ++j){
			sum[i][j] = mata[i][j] + matb[i][j];
		}
	}
	ptrc[0] = sum[0][0];
	ptrc[1] = sum[0][1];
	ptrc[2] = sum[1][0];
	ptrc[3] = sum[1][1];
	ptrc[4] = sum[2][0];
	ptrc[5] = sum[2][1];
		
		for(i=0; i<6; ++i){
			printf("%f, ", ptrc[i]);
			}
	
	return 0;
	}
			
			
			

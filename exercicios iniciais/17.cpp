#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int matriz[10][5];
	int j=0,k=0,i=0;
	int vet[10];
	float vet2[10];
	int soma=0;
	srand(time(NULL));
	
	
	for(j=0;j<10;j++){
		
		for(k=0;k<5;k++){
			matriz[j][k]=rand()%101;
			soma= soma+matriz[j][k];
			
		}
		vet[j]=soma;
		vet2[j]=vet[j];
		vet2[j]=vet2[j]/10;
		soma=0;	
	}


	for(j=0;j<10;j++){
		for(k=0;k<5;k++){
			printf("| %.3d |",matriz[j][k]);
		}
		printf("\n");
	}
	
	for(i=0;i<10;i++){
		printf("Soma da linha %d: %d\n",i,vet[i]);
		printf("Media da linha %d: %.2f\n",i,vet2[i]);
	}



}

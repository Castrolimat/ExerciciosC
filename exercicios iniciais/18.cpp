#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int matriz[10][5];
	int j=0,k=0,i=0;
	int vet[5];
	float vet2[5];
	int soma=0;
	srand(time(NULL));
	
	
	for(j=0;j<10;j++){
		
		for(k=0;k<5;k++){
			matriz[j][k]=rand()%101;
	
		}

	}


	for(j=0;j<10;j++){
		for(k=0;k<5;k++){
			printf("| %.3d |",matriz[j][k]);
		}
		printf("\n");
	}
	
	//somando as colunas
	
	for(j=0;j<5;j++){
		
		vet[j]=0;
		for(k=0;k<10;k++){
			vet[j]+=matriz[k][j];
			vet2[j]=vet[j];
		}
	}

	for(i=0;i<5;i++){
		printf("Soma Coluna %d: %d\n",i,vet[i]);
		printf("Media Coluna %d: %.2f\n",i,vet2[i]/5);
	}

}

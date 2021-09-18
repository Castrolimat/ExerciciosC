#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int matriz[5][5];
	int j=0,k=0;
	
	srand(time(NULL));
	
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			matriz[j][k]= rand()%21+10;
		}
	}
	//printando matriz
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("%d ",matriz[j][k]);
		}
	printf("\n");
	}
	//adicionando +5 ao elementos menores que 20
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			if (matriz[j][k]<20){
				matriz[j][k]= matriz[j][k]+5;
			}
		}
	printf("\n");
	}
	
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("%d ",matriz[j][k]);
		}
	printf("\n");
	}
	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int vet[10],i=0;
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		vet[i]=rand()%101;
		printf("%d\t",vet[i]);
	}
	printf("\n\n");
	//invertendo as posições no vetor
	
	for(i=9;i>=0;i--){
		printf("%d\t",vet[i]);
	}
	
	
}

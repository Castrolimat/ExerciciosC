#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main(){
	
	int vet[10],i=0,menor=0,maior=0;
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		vet[i]=rand()%100;
		printf("%d\t",vet[i]);
		
		if (vet[i]<=menor || menor==0){
			menor=vet[i];
		}
		
		if (vet[i]>=maior || maior==0){
			maior=vet[i];
		}
	}
	//procurar o numero 0 no vetor para que ele seja o menor
	for(i=0;i<10;i++){
		
		if(vet[i]==0){
		
			menor=0;
	
		}
	}
	
	printf("\nMaior: %d \nMenor: %d",maior,menor);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cocatenar(int*vet1,int*vet2,int*vet3){
	int i=0,j=0;
	//preenchendo o vetor 3 com o vetor 1
	for(i=0;i<5;i++){
		vet3[i]=vet1[i];
	}
	//preenchendo o vetor3 com o vetor2
	for(i=5;i<10;i++){
		vet3[i]=vet2[j];
		j++;
	}
	
	return *vet3;//retornando o vetor 3 preenchido para a main
}

int main(){
	int i=0;
	int vet1[5];
	int vet2[5];
	int vet3[10];

	srand(time(NULL));
	
	//preenchendo os vetores 
	for(i=0;i<5;i++){
		vet1[i]=rand()%51;
		vet2[i]=rand()%51;
	}
	//printando vetor1
	printf("\nvetor 1:\n");
	for(i=0;i<5;i++){
		printf("%d\t",vet1[i]);
	}
	//printando vetor2
	printf("\nvetor 2:\n");
	for(i=0;i<5;i++){
		printf("%d\t",vet2[i]);
	}
	
	//chamando funcao
	
	cocatenar(vet1,vet2,vet3);
	
	
	//printando vetor3
	printf("\nvetor 3:\n");
	for(i=0;i<10;i++){
		printf("%d\t",vet3[i]);
	}
	
	
	
	
}

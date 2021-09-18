#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencher_vetor(int *vet){
	int i=0;
	
	for(i=0;i<20;i++){
		vet[i]=rand()%6;
	}
	
	return *vet;
	
}

int printar_funcao(int *vet){
	int i=0;
	
	for(i=0;i<20;i++){
		printf("%d\n",vet[i]);
	}
	
	return *vet;
}

int contador(int*vet){
	int maior=6;
	int i=0;
	int repetido=0;
	for(i=0;i<20;i++){
	
		if(vet[i]>maior || maior==6){
		maior=vet[i];
		}
		
		if (maior==vet[i]){
			repetido++;
		}
	}
	
	printf("O maior numero eh %d e ele se repete %d vezes",maior,repetido);
	
	return *vet;
}


int main(){
	
	int vet[20];
	
	srand(time(NULL));
	
	preencher_vetor(vet);
	
	printar_funcao(vet);
	
	contador(vet);
	
}

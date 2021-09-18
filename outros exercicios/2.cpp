#include <stdio.h>
#include <stdlib.h>

 int funcao(int*vet){
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
//variaveis
int vet[20];
int i=0;


for(i=0;i<20;i++){
	vet[i]=rand()%6;
	printf(" %d\n",vet[i]);
}
	
	funcao(vet);
	
	
}

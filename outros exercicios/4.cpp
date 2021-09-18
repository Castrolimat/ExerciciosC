#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float preencher_vetor(float *vet){
	int i=0;
	
	for(i=0;i<10;i++){
		vet[i]=rand()%11;
	}
	
	return *vet;
	
}


float printar_funcao(float *vet){
	int i=0;
	
	for(i=0;i<10;i++){
		printf("%.2f\n",vet[i]);
	}
	
	return *vet;
}


float verifica_percentual(float *vet,float maior){
	int i=0;
	
	for(i=0;i<10;i++){
		if(vet[i]>6){
			maior++;
		}
	}
	return maior;
}


int main(){
	float vet[10];
	float maior=0;

	srand(time(NULL));

	preencher_vetor(vet);
	
	printar_funcao(vet);
	
	maior = verifica_percentual(vet,maior);// sem colocar que o maior recebe o valor o programa nao funciona
	
	printf("Ha %.2f valores maiores que 6: (%.2f%%)",maior,maior/10*100);
	
}

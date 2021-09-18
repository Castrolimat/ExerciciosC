#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float percent(float*vet){
	int i=0;
	float maior=0;
	float percentual;
	for(i=0;i<10;i++){
		if(vet[i]>6){
			maior++;
		}
	}
	percentual=maior;
	return percentual;
}

int main (){

float vet[10];
float resultado;
int i=0;
srand(time(NULL));
float porcentagem;
for(i=0;i<10;i++){
	vet[i]=rand()%11;
	printf("%f\n",vet[i]);
}

resultado = percent(vet);
porcentagem=resultado*10;

printf("Percentual de numeros maiores que 6: %.2f %.2f%%",resultado,porcentagem);


}

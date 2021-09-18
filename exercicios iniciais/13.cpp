#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

int vet1[5],vet2[5],vet3[10],i=0,p=0,q=0,menor=-1,maior=0,indiceMaior=0,indiceMenor=0;
srand(time(NULL));
for(i=0;i<5;i++){
	vet1[i]=rand()%101;
	printf("%d\t",vet1[i]);
	
}

printf("\n\n\n\n");

for(i=0;i<5;i++){
	vet2[i]=rand()%101;
	printf("%d\t",vet2[i]);
	
}

printf("\n\n\n\n");

for(i=0;i<10;i++){
		vet3[p]=vet1[i];
		p++;
		vet3[p]=vet2[i];
		p++;

}

for(i=0;i<10;i++){
	printf("%d\t",vet3[i]);
	if(vet3[i]<menor || menor==-1){
		menor=vet3[i];
		indiceMenor=i;
	}
	
	if(vet3[i]>maior){
		maior=vet3[i];
		indiceMaior=i;
	}
}


printf("\n\nO menor numero eh: %d ele esta no indice %d",menor,indiceMenor);

printf("\n\nO maior numero eh: %d ele esta no indice %d",maior,indiceMaior);


}

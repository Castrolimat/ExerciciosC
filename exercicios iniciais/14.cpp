#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

int vet1[5],vet2[5],vet3[10],i=0,p=0,q=0,j=0,menor=-1,aux=0;
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
}

//ordenando os vetores

for(i=0;i<10;i++){

	for(j=0;j<10;j++){
		if(vet3[i]<vet3[j]){
			
			aux=vet3[i];
			vet3[i]=vet3[j];
			vet3[j]=aux;
			
		}
	}

}
printf("\n\n\n\n");
for(i=0;i<10;i++){
	printf("%d\t",vet3[i]);
}


}

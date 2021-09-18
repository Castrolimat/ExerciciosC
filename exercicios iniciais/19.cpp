#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int matriz [25][4],j=0,i=0,somatotal=0,totalProducao[25];
	float media[25], aux=0;
	
	srand(time(NULL));
	
	//criando e preenchendo a matriz
	for(i=0;i<25;i++){
		totalProducao[i]=0;
		for(j=0;j<4;j++){
			matriz[i][j]=rand()%23+135;
			totalProducao[i]+=matriz[i][j];
			media[i]=totalProducao[i];
			
		}
	}

	printf("    |SEM1|SEM2|SEM3|SEM4|\n");

	for(i=0;i<25;i++){
		printf("P%.3d|",i);
		for(j=0;j<4;j++){
		printf("%.4d|",matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<25;i++){
		printf("Total de producao da plataforma %d: %d\nMedia de producao da plataforma %d: %.2f\n\n",i,totalProducao[i],i,media[i]/4);
	}
	


	//ordenando o vetor de media
	for(i=0;i<25;i++){
		for(j=0;j<25;j++){
			if(media[i]<media[j]){
				aux=media[i];
				media[i]=media[j];
				media[j]=aux;
				
			}
		}
	}
	
	printf("Medias ordenadas:\n");
	
	for(i=0;i<25;i++){
		printf("%.2f\n",media[i]/4);
	}
}

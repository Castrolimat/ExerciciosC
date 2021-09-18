#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	
	int habitantes=0,i=0,consumo=0,cod=0,maior=0,menor=-1,totalconsumo1=0,totalconsumo2=0,totalconsumo3=0;
	float valor=0, media=0,total=0;
	 
	srand(time(NULL));
	
	printf("Digite o numero de habitantes: ");
		scanf("%d",&habitantes);
	
	printf("Digite o valor do kwh: ");
		scanf("%f",&valor);
		
	do{
		consumo = rand()%501;
		cod = rand()%3+1;
		
		printf("Consumo: %d codigo: %d\n",consumo,cod);
		
		if(consumo>maior){
			maior = consumo;
		}
		
		if(consumo<menor || menor == -1){
			menor = consumo;
		}
		total=total+consumo;
		
		if(cod==1){
			totalconsumo1=totalconsumo1+consumo;
		}
		
			 else if(cod==2){
				totalconsumo2=totalconsumo2+consumo;
			}
				else if(cod==3){
					totalconsumo3=totalconsumo3+consumo;
				}
		
		
		i++;
	}while(i<habitantes);
	
	media=total/habitantes;
	
	
	printf("\n\nMaior: %d Menor: %d media de consumo: %.2f\n\n",maior,menor,media);
	printf("Consumo 1 (Residencial): %d\t Consumo 2(Comercial): %d \t Consumo 3(Industrial): %d",totalconsumo1,totalconsumo2,totalconsumo3);
	
}

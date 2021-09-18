#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main (){

	float num[20],percent,result;
	int i=0;
	
	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<20;i++){
		num[i]= rand()%51 + 50;
		printf("%.2f \t",num[i]);
		
	
		if(num[i]>80){
		
			percent++;
					
			}	
	}
	
	result=(percent*5)/100;	
			
	printf("\nOs numeros maiores que 80 são: %.2f.\nIsso representa %.2f%% dos numeros.",percent,result*100);
		
}

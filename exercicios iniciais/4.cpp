#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

main (){

	float num[2],media;
	int i=0;
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	for(i=0;i<2;i++){
		num[i]=rand()%101;
		num[i]= num[i]/10;
		printf("%.1f\t",num[i]);
	}
	
	media=(num[0]+num[1])/2;
	
	printf("\nA média dos números é: %.1f",media);
	
	if (media>=6){
		
		printf("\nAprovado\n");
	}
	
		else {
			printf("\nReprovado\n");
		}
}

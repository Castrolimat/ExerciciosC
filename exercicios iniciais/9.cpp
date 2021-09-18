#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main (){

	int lp=0,sexo=0,producao=0,i=0,mulher=0,homem=0;
	float producaoMulher=0,producaoHomem=0,mediaHomem=0,mediaMulher=0;
	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		lp=rand()%2+1;
		producao=rand()%71+80;
		sexo=rand()%2;
		
		printf("LP: %d\t Producao: %d\t Sexo: %d\n",lp,producao,sexo);
		
		if(sexo==0){
			producaoMulher=producaoMulher+producao;
			mulher++;
		}
			else if(sexo==1){
				producaoHomem=producaoHomem+producao;
				homem++;
			}
		
	}
	
	mediaHomem=(producaoHomem/homem);
	mediaMulher=(producaoMulher/mulher);
	
	printf("Media producao homem: %.2f\t Media producao mulher: %.2f",mediaHomem,mediaMulher);
	
	
}

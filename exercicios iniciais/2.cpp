#include <stdio.h>
#include <locale.h>

main(){
	
	int numero1, numero2;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
		scanf("%d",&numero1);
	
	printf("Digite o segundo n�mero: ");
		scanf("%d",&numero2);
		
	
	if(numero1>numero2){
		printf("O maior n�mero �: %d",numero1);
	}
		else if (numero2>numero1){
			printf("O maior n�mero �: %d",numero2);
		}
			else {
				printf("Os n�meros digitados s�o iguais.");
			}
					
}

#include <stdio.h>
#include <locale.h>

main(){
	
	int numero1, numero2;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
		scanf("%d",&numero1);
	
	printf("Digite o segundo número: ");
		scanf("%d",&numero2);
		
	
	if(numero1>numero2){
		printf("O maior número é: %d",numero1);
	}
		else if (numero2>numero1){
			printf("O maior número é: %d",numero2);
		}
			else {
				printf("Os números digitados são iguais.");
			}
					
}

#include <stdio.h>
#include <locale.h>
main(){
	float num1, num2, num3, media;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
		scanf("%f",&num1);
	
	printf("Digite o segundo n�mero: ");
		scanf("%f",&num2);	
	
	printf("Digite o terceiro n�mero: ");
		scanf("%f",&num3);	
	
	media = (num1+num2+num3)/3;
	
	printf("A m�dia dos tr�s n�meros �: %.2f ",media);
}

#include <stdio.h>
#include <locale.h>

 int main (){
 	
 	float salarioBruto=0,prestacao;
 	
 	setlocale(LC_ALL,"Portuguese")
 	printf("Digite o valor do salario bruto: ");
 		scanf("%f",&salarioBruto);
 		
 	printf("Digite o valor da presta��o: ");
 		scanf("%f",&prestacao);
 
 	salarioBruto=salarioBruto*0.30;
 	
 	
	 if(prestacao>salarioBruto){
 		printf("EMPR�STIMO NEGADO");
	 }
 		else {
 			printf("EMPR�STIMO APROVADO");
		 }
 }

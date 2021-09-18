#include <stdio.h>
#include <locale.h>

 int main (){
 	
 	float salarioBruto=0,prestacao;
 	
 	setlocale(LC_ALL,"Portuguese")
 	printf("Digite o valor do salario bruto: ");
 		scanf("%f",&salarioBruto);
 		
 	printf("Digite o valor da prestação: ");
 		scanf("%f",&prestacao);
 
 	salarioBruto=salarioBruto*0.30;
 	
 	
	 if(prestacao>salarioBruto){
 		printf("EMPRÉSTIMO NEGADO");
	 }
 		else {
 			printf("EMPRÉSTIMO APROVADO");
		 }
 }

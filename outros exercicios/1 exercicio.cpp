#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//variaveis globais
float media[2];

//declarando struct
struct pessoa{

	float idade;
	int sexo;	
};

//criando vetor de struct 
struct pessoa pessoas[20];

//funcoes
void preencher_vetor(){

	int i=0;

	for(i=0;i<20;i++){
	pessoas[i].idade =rand()%28+(17);//colocando idades de 17 a 45 
	pessoas[i].sexo = rand()%2;
	}
}

void media_idade(){
	
	int i=0;
	float total_homem=0,total_mulher=0;
	float total_idade_homem=0,total_idade_mulher=0;
	
	for(i=0;i<20;i++){
		
		if(pessoas[i].sexo==0){
			total_mulher++;
			total_idade_mulher=total_idade_mulher+pessoas[i].idade;
		}
	
			else if (pessoas[i].sexo==1){
				total_homem++;
				total_idade_homem=total_idade_homem+pessoas[i].idade;
			}
	}
		
	media[0]=total_idade_mulher/total_mulher;//media[0] ==mulher
	media[1]=total_idade_homem/total_homem;//media[1] == homem
		
}



int main (){
int i;
srand(time(NULL));
preencher_vetor();//chamando funcao para preencher o vetor de struct
media_idade();

for(i=0;i<20;i++){
	printf(" PESSOA %d\n Idade: %f \n sexo:%d\n",i,pessoas[i].idade,pessoas[i].sexo);
}

printf("A media de idades das mulheres eh: %.2f ",media[0]);
printf("A media de idades dos homens eh: %.2f",media[1]);

	
}

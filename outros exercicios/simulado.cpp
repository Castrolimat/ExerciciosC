#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float imc[250];
float aux, aux2;

struct ficha_medica{
int codigo;
int origem;
int tipo_atendimento;
int sexo;
int idade;
int altura;
int peso;
int comorbidade;
};

struct ficha_medica ficha[250];

void preencher_struct (void){
	int i=0;
	for(i=0;i<250;i++){
	
    ficha[i].codigo = i+100;
	ficha[i].origem = rand()%2;
    ficha[i].tipo_atendimento = rand()%2;
    ficha[i].sexo = rand()%2;
    ficha[i].idade = rand()%72+18;
    ficha[i].altura = rand()%45+150;
    ficha[i].peso = rand()%70+50;
    ficha[i].comorbidade = rand()%4;
	}

}


void printar_struct(){
	int i=0;
	for(i=0;i<250;i++){
	printf("PESSOA %d\n\n",i+1);
	printf("Codigo = %d\n", ficha[i].codigo);
	printf("Origem (0 - Macae ou 1 - Regiao) = %d\n",ficha[i].origem);
	printf("Tipo de atendimento (0 - Particular, 1 - Plano ou 2 - SUS) = %d\n",ficha[i].tipo_atendimento);	
	printf("Sexo (0 - Feminino ou 1 Masculino) = %d\n",ficha[i].sexo);
	printf("Idade = %d\n",ficha[i].idade);
	printf("Altura (em centimetros)= %d\n",ficha[i].altura);
	printf("Peso (em KG) = %d\n",ficha[i].peso);
	printf("Comorbidade (0 - Nenhuma, 1- Cardiaco, 2 Respiratorio, 3 Cardiaco e Respiratorio) = %d\n",ficha[i].comorbidade);
	printf("\n\n\n");
	}
}

void calculo_imc(){
	int i=0;
	for(i=0;i<250;i++){
	aux=ficha[i].peso;
	aux2=ficha[i].altura/100;
	 imc[i]=(aux/(aux2*aux2));

	}


}


int main(){
	int i=0;
	//chamando funções
	preencher_struct();
	printar_struct();
	
	calculo_imc();
	for(i=0;i<250;i++){

	printf("O IMC DA PESSOA %d eh %.2f\n",i+1,imc[i]);
	
	}

	return 0;
}

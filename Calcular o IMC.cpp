#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso, altura, imc;
	printf("Peso:\n");
	scanf("%f", &peso);
	
    printf("Altura:\n");
	scanf("%f", &altura);
	
	imc = peso/(altura*2);
	
	if(imc<20){
		printf("Abaixo o Peso\n");	
	}
	else
	if(imc >=20 && imc<25){
		printf("Peso Normal\n");
	}
	else
	if(imc >=25 && imc<30){
		printf("Sobrepeso\n");
	}
	else
	if(imc >=30 && imc<40){
		printf("Obesop\n");
	}
	else
	if(imc >=40){
		printf("Obeso Morbido\n");
	}
	
	system("pause");
}

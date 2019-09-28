/*
Nome: MaiorNum3
Fução: Ver qual é o  maior número 
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	
	printf("Digite um número: ");
	scanf("%f", &num2);
	
	printf("Digite um número: ");
	scanf("%f", &num3);
	
	if(num1 > num2 & num1 > num3){
		printf("O número %f é maior\n",num1);
	}
	if(num2 > num1 & num2 > num3){
		printf("O número %f é maior\n",num2);
	}
	if(num3 > num1 & num3 > num2){
		printf("O número %f é maior\n",num3);
	}
	else{
		printf("Os números são iguais\n");
	}
	system("pause");
}
	

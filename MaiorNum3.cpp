/*
Nome: MaiorNum3
Fu��o: Ver qual � o  maior n�mero 
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite um n�mero: ");
	scanf("%f", &num2);
	
	printf("Digite um n�mero: ");
	scanf("%f", &num3);
	
	if(num1 > num2 & num1 > num3){
		printf("O n�mero %f � maior\n",num1);
	}
	if(num2 > num1 & num2 > num3){
		printf("O n�mero %f � maior\n",num2);
	}
	if(num3 > num1 & num3 > num2){
		printf("O n�mero %f � maior\n",num3);
	}
	else{
		printf("Os n�meros s�o iguais\n");
	}
	system("pause");
}
	

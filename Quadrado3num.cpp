/*
Nome: Quadrado3num
Fução: Somar 3 números e mostrar o quadrado do resultado 
Autor: Pedro Perobelli
Data de criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 3.14;
	int num2 = 0;
	int num3 = 0;
	int quad = 0;
	int soma = 0;
	
	printf("Digite o 1º número:");
	scanf("%i", &num1);
	
	printf("Digite o 2º número:");
	scanf("%i", &num2);
	
	printf("Digite o 3º número:");
	scanf("%i", &num3);
	
	soma = num1 + num2 + num3;
	quad = soma * soma;
	
	printf("\nO quadrado da soma é: %i \n",quad);
	system("pause");
}
	

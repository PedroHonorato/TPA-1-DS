/*
Nome: Quadrado3num
Fu��o: Somar 3 n�meros e mostrar o quadrado do resultado 
Autor: Pedro Perobelli
Data de cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
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
	
	printf("Digite o 1� n�mero:");
	scanf("%i", &num1);
	
	printf("Digite o 2� n�mero:");
	scanf("%i", &num2);
	
	printf("Digite o 3� n�mero:");
	scanf("%i", &num3);
	
	soma = num1 + num2 + num3;
	quad = soma * soma;
	
	printf("\nO quadrado da soma �: %i \n",quad);
	system("pause");
}
	

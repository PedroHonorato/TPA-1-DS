/*
Nome: Divisao
Fução: Dividir 2 números e Calcular o resto
Autor: Pedro Perobelli
Data de criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0;
	int num2 = 0;
	int quoc = 0;
	int rest = 0;
	
	printf("Informe um número inteiro: ");
	scanf("%i", &num1);
	printf("Informe um segundo número inteiro: ");
	scanf("%i", &num2);
	quoc = num1 / num2;
	rest = num1 - (quoc * num2);
	printf("O resto é: %i \nE seu quocinte é: %i",rest,quoc);
	return 0; 
}

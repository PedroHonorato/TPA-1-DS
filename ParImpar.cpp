/*
Nome: ParImpar
Fução: Ver se o número é par ou impar
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	int divisao = 0;
	
	printf("Informe um número: ");
	scanf("%i",&n);
	
	divisao=n/2;
	
    if (n==divisao*2){
		printf("Seu número é par\n");
	}
	else{
		printf("Seu número é impar\n");
	}
	system("pause");
}

/*
Nome: ParImpar
Fu��o: Ver se o n�mero � par ou impar
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	int divisao = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i",&n);
	
	divisao=n/2;
	
    if (n==divisao*2){
		printf("Seu n�mero � par\n");
	}
	else{
		printf("Seu n�mero � impar\n");
	}
	system("pause");
}

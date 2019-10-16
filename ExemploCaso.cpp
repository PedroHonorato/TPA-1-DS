/*
Nome: ExemploCaso
Função: Exemplo de caso selecione
Autor: Pedro Perobelli
Data de criação: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "");
	int n;
	
	printf("Informe o número: ");
	scanf("%i", &n);
	
	switch(n){
		case 1 :
			printf("Um");
			break;
		case 2 :
			printf("Dois");
			break;
		
	default:
			printf("Número invalido");
			break;
	}
return 0;
}

/*
Nome: M�s30,31,28
Fun��o: Escolher o m�s que tem 30, 31 ou 28 dias
Autor: Pedro Perobelli
Data de cria��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "");
	int n;
	
	printf("Informe o n�mero do m�s: ");
	scanf("%i", &n);
	
	switch(n){
		case 1 or 3 or 5 or 7 or 9 or 11:
			printf("Este m�s tem 30 dias");
			break;
		case 4 :
			printf("Este m�s tem 31 dias");
			break;
		case 6 :
			printf("Este m�s tem 31 dias");
			break;
		case 8 :
			printf("Este m�s tem 31 dias");
			break;
		case 10 :
			printf("Este m�s tem 31 dias");
			break;
		case 12 :
			printf("Este m�s tem 31 dias");
			break;
		case 2 :
			printf("Este m�s tem 28 dias");
		default:
			printf("N�mero invalido");
			break;
	}
return 0;
}

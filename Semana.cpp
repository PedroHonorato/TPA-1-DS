/*
Nome: Semana
Fun��o: Escolher o dia da semana
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
	
	printf("Informe o n�mero: ");
	scanf("%i", &n);
	
	switch(n){
		case 1 :
			printf("Domingo");
			break;
		case 2 :
			printf("Segunda");
			break;
		case 3 :
			printf("Ter�a");
			break;
		case 4 :
			printf("Quarta");
			break;
		case 5 :
			printf("Quinta");
			break;
		case 6 :
			printf("Sexta");
			break;
		case 7 :
			printf("Sabado");
			break;
		default:
			printf("Dia inexistente");
			break;
	}
return 0;
}

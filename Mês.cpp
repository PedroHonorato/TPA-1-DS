/*
Nome: M�s
Fun��o: Escolher o m�s do ano
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
		case 1 :
			printf("Janeiro");
			break;
		case 2 :
			printf("Fevereiro");
			break;
		case 3 :
			printf("Mar�o");
			break;
		case 4 :
			printf("Abril");
			break;
		case 5 :
			printf("Maio");
			break;
		case 6 :
			printf("Junho");
			break;
		case 7 :
			printf("Julho");
			break;
		case 8 :
			printf("Agosto");
			break;
		case 9 :
			printf("Setembro");
			break;
		case 10 :
			printf("Outubro");
			break;
		case 11 :
			printf("Novenbro");
			break;
		case 12 :
			printf("Dezembro");
			break;
		default:
			printf("M�s inexistente");
			break;
	}
return 0;
}

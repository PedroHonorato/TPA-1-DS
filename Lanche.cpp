/*
Nome: Lanche
Função: Escolher o lanche e mostrar o preço
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
	
	printf("Informe o codigo do lanche: ");
	scanf("%i", &n);
	
	switch(n){
		case 1 :
			printf("+------------------------+\n");
			printf("|Cachorro-Quente - R$3,50|\n");
			printf("+------------------------+\n");
			break;
		case 2 :
			printf("+-----------------+\n");
			printf("|X-Salada - R$5,00|\n");
			printf("+-----------------+\n");
			break;
		case 3 :
			printf("+------------------+\n");
			printf("|X-Burguer - R$8,90|\n");
			printf("+------------------+\n");
			break;
		case 4 :
			printf("+----------------+\n");
			printf("|X-Tudo - R$12,70|\n");
			printf("+----------------+\n");
			break;
		default:
			
			printf("Codigo invalido");
			break;
	}
return 0;
}

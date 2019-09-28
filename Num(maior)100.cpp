/*
Nome: Num > 100
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
	int num = 0;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num > 100){
		num = num + 150;
	}
	printf("O número é: %i",num);
	system("pause");
}
	


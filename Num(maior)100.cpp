/*
Nome: Num > 100
Fu��o: Dividir 2 n�meros e Calcular o resto
Autor: Pedro Perobelli
Data de cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if(num > 100){
		num = num + 150;
	}
	printf("O n�mero �: %i",num);
	system("pause");
}
	


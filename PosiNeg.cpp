/*
Nome: PosiNeg
Fu��o: Ver se o n�mero � positivo ou negtivo
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num = 0;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num);
	
	if(num > 0){
		printf("O n�mero: %f � positivo\n",num);
	}
	else{
		printf("O n�mero: %f � negativo\n",num);
	}
	system("pause");
}
	


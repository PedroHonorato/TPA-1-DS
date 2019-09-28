/*
Nome: PosiNeg
Fução: Ver se o número é positivo ou negtivo
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num = 0;
	
	printf("Digite um número: ");
	scanf("%f", &num);
	
	if(num > 0){
		printf("O número: %f é positivo\n",num);
	}
	else{
		printf("O número: %f é negativo\n",num);
	}
	system("pause");
}
	


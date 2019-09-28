/*
Nome: Maior5Menor20
Fução: Ver se o número é maior que 5 e menor que 20(se estiver no intervalo exibir o cubo)
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	int cubo = 0;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num > 5 & num < 20){
		cubo = num * num;
		printf("O cubo é: %i \n",cubo);
	}
	else{
		printf("O número: %i no paticipa do intervalo\n",num);
	}
	system("pause");
}
	

/*
Nome: Maior5Menor20
Fu��o: Ver se o n�mero � maior que 5 e menor que 20(se estiver no intervalo exibir o cubo)
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	int cubo = 0;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if(num > 5 & num < 20){
		cubo = num * num;
		printf("O cubo �: %i \n",cubo);
	}
	else{
		printf("O n�mero: %i no paticipa do intervalo\n",num);
	}
	system("pause");
}
	

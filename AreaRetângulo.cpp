/*
Nome: AreaRet�ngulo
Fun��o: Calcular a �rea do ret�ngulo
Autor: Pedro Perobelli
Data de Cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float area = 0;
	float base = 0;
	float altura = 0;
	
	printf("Informe a altura do ret�ngulo: ");
	scanf("%f", &altura);
	printf("Informe a base do ret�ngulo: ");
	scanf("%f", &base);
	
	area = (base * altura);
	
	printf("A �rea �: %f * %f = %f\n" ,base,altura,area);
	system("pause");
}


/*
Nome: AreaTri�ngulo
Fun��o: Calcular a �rea do Tri�ngulo
Autor: Pedro Perobelli
Data de Cria��o: 26/09/2019
Data de Altera��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float area = 0;
	float base = 0;
	float altura = 0;
	
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	printf("Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	
	area = base * altura;
	
	printf("A �rea �: (%f * %f) = %f\n" ,base,altura,area);
	system("pause");
}


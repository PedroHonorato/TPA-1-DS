/*
Nome: AreaRetângulo
Função: Calcular a Área do retângulo
Autor: Pedro Perobelli
Data de Criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float area = 0;
	float base = 0;
	float altura = 0;
	
	printf("Informe a altura do retângulo: ");
	scanf("%f", &altura);
	printf("Informe a base do retângulo: ");
	scanf("%f", &base);
	
	area = (base * altura);
	
	printf("A área é: %f * %f = %f\n" ,base,altura,area);
	system("pause");
}


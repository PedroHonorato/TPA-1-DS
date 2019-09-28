/*
Nome: PrestAtrasada
Função: Calcular o preço de uma prestação atrasada
Autor: Pedro Perobelli
Data de Criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float valor = 0;
	float taxa = 0;
	float prest = 0;
	int tempatras = 0;
	
	printf("Informe o valor da prestação: ");
	scanf("%f", &valor);
	
	printf("Informe a taxa por dia de atraso: ");
	scanf("%f", &taxa);
	
	printf("Informe o tempo de atraso: ");
	scanf("%i", &tempatras);
	
	prest = valor + (valor * (taxa / 100) * tempatras);
	
	printf("O valor da prestação é: R$ %f\n" ,prest);
	system("pause");
}


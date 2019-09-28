/*
Nome: PrestAtrasada
Fun��o: Calcular o pre�o de uma presta��o atrasada
Autor: Pedro Perobelli
Data de Cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
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
	
	printf("Informe o valor da presta��o: ");
	scanf("%f", &valor);
	
	printf("Informe a taxa por dia de atraso: ");
	scanf("%f", &taxa);
	
	printf("Informe o tempo de atraso: ");
	scanf("%i", &tempatras);
	
	prest = valor + (valor * (taxa / 100) * tempatras);
	
	printf("O valor da presta��o �: R$ %f\n" ,prest);
	system("pause");
}


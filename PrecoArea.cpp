/*
Nome: PrecoArea
Fun��o: Calcular o pre�o da �rea do terreno ret�ngular
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
	float frente = 0;
	float lado = 0;
	float precm = 0;
	float total = 0;
	
	printf("Informe a lado do ret�ngulo em metros: ");
	scanf("%f", &lado);
	
	printf("Informe a frente do ret�ngulo em metros: ");
	scanf("%f", &frente);
	
	printf("Informe o pre�o do metro quadrado (m�): ");
	scanf("%f", &precm);
	
	area = lado * frente;
	
	total = area * precm;
	
	printf("O pre�o a pagar �: R$ %f\n" ,total);
	system("pause");
}


/*
Nome: PrecoArea
Função: Calcular o preço da Área do terreno retângular
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
	float frente = 0;
	float lado = 0;
	float precm = 0;
	float total = 0;
	
	printf("Informe a lado do retângulo em metros: ");
	scanf("%f", &lado);
	
	printf("Informe a frente do retângulo em metros: ");
	scanf("%f", &frente);
	
	printf("Informe o preço do metro quadrado (m²): ");
	scanf("%f", &precm);
	
	area = lado * frente;
	
	total = area * precm;
	
	printf("O preço a pagar é: R$ %f\n" ,total);
	system("pause");
}


/*
Nome: AreaCirculo
Fução: Calcular a área de um circulo
Autor: Pedro Perobelli
Data de criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float PI = 3.14;
	float area = 0;
	float raio = 0;
	
	printf("Digite o raio do circulo:");
	scanf("%f", &raio);
	
	area = PI * raio;
	
	printf("A área do circulo é: %f \n",area);
	system("pause");
}

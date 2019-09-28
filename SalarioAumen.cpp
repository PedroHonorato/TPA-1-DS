/*
Nome: SalarioAumen
Função: Calcular o aumento so salário
Autor: Pedro Perobelli
Data de Criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float sala = 0;
	float poraume = 0;
	float aumen = 0;
	float salan = 0;
	
	printf("Informe o valor do salário: ");
	scanf("%f", &sala);
	
	printf("Informe o percentual de aumento: ");
	scanf("%f", &poraume);
	
	aumen = sala * poraume / 100;
	
	salan = aumen + sala;
	
	printf("O valor do novo salário é: R$ %f\n" ,salan);
	system("pause");
}

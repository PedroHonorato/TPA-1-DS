/*
Nome: Mediade4
Fun��o: Calcular a m�dia de 4 notas
Autor: Pedro Perobelli
Data de Cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float nota4 = 0;
	float media = 0;
	
	printf("Informe o valor da 1� nota: ");
	scanf("%f", &nota1);
	
	printf("Informe o valor da 2� nota: ");
	scanf("%f", &nota2);
	
	printf("Informe o valor da 3� nota: ");
	scanf("%f", &nota3);
	
	printf("Informe o valor da 4� nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("O valor da m�dia �: %f\n" ,media);
	system("pause");
}
	
	

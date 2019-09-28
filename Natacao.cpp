/*
Nome: Natacao
Fução: Ler a idade e ver qual e a sua categoria
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float idade = 0;
	
	printf("Informe sua idade: ");
	scanf("%f",&idade);
	
	if(idade >= 5 & idade <= 12){
		printf("Sua categoria é : infantil\n");
	}
	if(idade > 12 & idade <= 17){
		printf("Sua categoria é : juvenil\n");
	}
	if(idade >= 18){
		printf("Sua categoria é : adulto\n");
	}
	
	system("pause");
}

/*
Nome: Natacao
Fu��o: Ler a idade e ver qual e a sua categoria
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
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
		printf("Sua categoria � : infantil\n");
	}
	if(idade > 12 & idade <= 17){
		printf("Sua categoria � : juvenil\n");
	}
	if(idade >= 18){
		printf("Sua categoria � : adulto\n");
	}
	
	system("pause");
}

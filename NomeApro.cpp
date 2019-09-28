/*
Nome: NomeApro
Fução: Mostrar o nome e se foi aprovado ou não
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[100];
	float media = 0;
	
	printf("Informe seu nome: ");
	scanf("%s",&nome);
	
	printf("Informe sua media: ");
	scanf("%f",&media);
	
	if(media >= 7){
		printf("%s, você foi aprovado\n",nome);
	}
	if(media == 6){
		printf("%string, você está de recuperação\n",nome);
	}
	if(media <= 5){
		printf("%string, você foi reprovado\n",nome);
	}
	
	system("pause");
}
	

/*
Nome: NomeApro
Fu��o: Mostrar o nome e se foi aprovado ou n�o
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
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
		printf("%s, voc� foi aprovado\n",nome);
	}
	if(media == 6){
		printf("%string, voc� est� de recupera��o\n",nome);
	}
	if(media <= 5){
		printf("%string, voc� foi reprovado\n",nome);
	}
	
	system("pause");
}
	

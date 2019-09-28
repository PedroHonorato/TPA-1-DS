/*
Nome: OrdemCrescente
Fução: Mostrar em ordem crescente
Autor: Pedro Perobelli
Data de criação: 28/09/2019
Data de Alteração: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	
	printf("Digite um número: ");
	scanf("%f", &n1);
	
	printf("Digite um número: ");
	scanf("%f", &n2);
	
	printf("Digite um número: ");
	scanf("%f", &n3);
	
	if(n1 > n2 & n2 > n3){
		printf("A ordem é: %f, %f, %f\n",n1,n2,n3);
	}
	if(n1 > n3 & n3 > n2){
		printf("A ordem é: %f, %f, %f\n",n1,n3,n2);
	}if (n3 > n1 & n1 > n2){
		printf("A ordem é: %f, %f, %f\n",n3,n1,n2);
	}if(n3 > n2 & n2 > n1){
		printf("A ordem é: %f, %f, %f\n",n3,n2,n1);
	}if(n2 > n1 & n1 > n3){
		printf("A ordem é: %f, %f, %f\n",n2,n1,n3);
	}if(n2 > n3 & n3 > n1){
		printf("A ordem é: %f, %f, %f\n",n2,n3,n1);
	}if(n1 == n2 & n2 == n3){
		printf("Os números %f  %f  %f  são iguais\n",n1,n2,n3);
	}
	system("pause");
}

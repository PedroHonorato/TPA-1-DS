/*
Nome: OrdemCrescente
Fu��o: Mostrar em ordem crescente
Autor: Pedro Perobelli
Data de cria��o: 28/09/2019
Data de Altera��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	
	printf("Digite um n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite um n�mero: ");
	scanf("%f", &n2);
	
	printf("Digite um n�mero: ");
	scanf("%f", &n3);
	
	if(n1 > n2 & n2 > n3){
		printf("A ordem �: %f, %f, %f\n",n1,n2,n3);
	}
	if(n1 > n3 & n3 > n2){
		printf("A ordem �: %f, %f, %f\n",n1,n3,n2);
	}if (n3 > n1 & n1 > n2){
		printf("A ordem �: %f, %f, %f\n",n3,n1,n2);
	}if(n3 > n2 & n2 > n1){
		printf("A ordem �: %f, %f, %f\n",n3,n2,n1);
	}if(n2 > n1 & n1 > n3){
		printf("A ordem �: %f, %f, %f\n",n2,n1,n3);
	}if(n2 > n3 & n3 > n1){
		printf("A ordem �: %f, %f, %f\n",n2,n3,n1);
	}if(n1 == n2 & n2 == n3){
		printf("Os n�meros %f  %f  %f  s�o iguais\n",n1,n2,n3);
	}
	system("pause");
}

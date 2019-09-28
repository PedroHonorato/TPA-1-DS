/*
Nome: Troca
Fução: Fazer que A fique com B e B fique com A
Autor: Pedro Perobelli
Data de criação: 27/09/2019
Data de Alteração: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int A = 0;
	int B = 0;
	int troca = 0;
	
	printf("Digite um número (A): ");
	scanf("%i", &A);
	
	printf("Digite um número (B): ");
	scanf("%i", &B);
	
	troca = A;
	A = B;
	B = troca;

	printf("O número (A) é: %i\n O número (B) é: %i \n",A,troca);
	system("pause");
}
	

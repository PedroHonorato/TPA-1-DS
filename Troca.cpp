/*
Nome: Troca
Fu��o: Fazer que A fique com B e B fique com A
Autor: Pedro Perobelli
Data de cria��o: 27/09/2019
Data de Altera��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int A = 0;
	int B = 0;
	int troca = 0;
	
	printf("Digite um n�mero (A): ");
	scanf("%i", &A);
	
	printf("Digite um n�mero (B): ");
	scanf("%i", &B);
	
	troca = A;
	A = B;
	B = troca;

	printf("O n�mero (A) �: %i\n O n�mero (B) �: %i \n",A,troca);
	system("pause");
}
	

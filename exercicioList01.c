#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba três números, calcule e mostre a multiplicação desses
números.
*/

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int a, b, c, result;

	printf("Escreva 3 números inteiros 123! \n");
	scanf_s("%d %d %d", &a, &b, &c);

	result = a * b * c;

	printf("O resultado é %d", result);

	return 0;
}

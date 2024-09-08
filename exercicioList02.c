/*
  Leia um número inteiro e verifique se divisivel por 3.
*/
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int number, result;

	printf("Digite um número! \n");
	scanf("%d", &number);

	result =  number % 3;

	if (result == 0) {
		printf("O número digitado é divisível \n");
	} else {
		printf("O número digitado não é divisível \n");
	}

	printf("Resultado: %d", result);
	//printf("O número digitado , %d , é ", result);
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	/*
		Escreva um programa que receba a velocidade máxima em uma avenida e a
	velocidade com que um motorista estava dirigindo nela. Calcule a multa que
	o motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h
	que estiver acima da velocidade permitida (considere apenas números
	inteiros). Se a velocidade do motorista estiver dentro do limite, o programa
	deve informar que não há multa.
	*/
	float velocidade_max = 0.00, velocidade_motoristaA = 0.00, multa = 5.00;
	int resultado;

	printf("########## --- Bem Vindo ao Sistema de Multas --- ############## \n");
	printf("\n");
	printf("Entre com velocidade máxima permitida na Avenida: \n");
	scanf("%f", &velocidade_max);
	printf("Entre com velocidade do Motorista: \n");
	scanf("%f", &velocidade_motoristaA);

	if (velocidade_motoristaA > velocidade_max) {
		resultado = velocidade_motoristaA * multa;
		printf("O motorista ultrapassou a velocidade máxima estabelecida, sua multa é de: R$ %d", resultado);
	}
	else {
		printf("O motorista não ultrapassou a velocidade máxima estabelecida, não há multa aplicada!");
	}

	return 0;
}

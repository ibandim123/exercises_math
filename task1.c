#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Escreva um algoritmo em linguagem C que atenda os seguintes requisitos:
✓ Crie um registro para armazenar o seu Nome de um funcionário e o seu salário.
✓ Solicite ao usuário que digite o Nome Completo e o salário.
✓ Crie um ponteiro para o registro.
✓ Através do ponteiro para o registro verifique a alíquota do imposto de renda para o
salário informado, utilize a tabela abaixo para determinar a alíquota:
✓ Através do ponteiro para o registro imprima o Nome Completo, o salário, a alíquota
do imposto de renda (em %) e o valor a ser deduzido do salário.
Para demonstrar o funcionamento faça as capturas de tela do terminal utilizando seu nome
completo e o no campo salário utilize se RU conforme indicado abaixo:
*/
//Criar um registro para armazenar o nome e o salário de um funcionário
struct funcionario {

	char nome[60];
	char nomeDoMeio[60];
	char ultimoNome[60];
	float salario;

}; struct funcionario pessoa;

typedef struct {
	
	float base;
	float primeiraAliquota;
	float segundaAliquota;
	float terceiraAliquota;
	float quartaAliquota;

} aliquota;

int main() {
	
	aliquota dado;
	
	aliquota *ponteiro = &dado;

	dado.primeiraAliquota = 7.50;
	dado.segundaAliquota = 15.00;
	dado.terceiraAliquota = 22.50;
	dado.quartaAliquota = 27.50;

	//Fazer entender língua Portuguesa	
	setlocale(LC_ALL, "Portuguese");
	printf("========== Olá, Bem vindo ao cálculo de imposto de renda!==========");
	//Solicitar ao usuário que digite o nome completo e o salário
	printf(" \n");
	printf("Por favor, Digite seu nome completo: \n");
	printf("Primeiro nome: \n");
	scanf_s("%s", &pessoa.nome, sizeof(pessoa.nome));
	printf("Nome do meio: \n");
	scanf_s("%s", &pessoa.nomeDoMeio, sizeof(pessoa.nomeDoMeio));
	printf("Último nome: \n");
	scanf_s("%s", &pessoa.ultimoNome, sizeof(pessoa.ultimoNome));


	printf("\n");

	printf("Por favor, agora, digite o seu salário:");
	scanf_s("%f", &pessoa.salario);
	printf("\n");



	float resultado;
	//Criar um ponteiro para o registro.

	if (pessoa.salario < 0) {
		printf("Não há salários negativos!");
	};

	printf("\n");

	if (pessoa.salario < 1903.98) {
		printf("Você está isento de imposto de renda  \n");

	};

	if (pessoa.salario >= 1903.98 && pessoa.salario <= 2826.65) {
		resultado = pessoa.salario * ponteiro->primeiraAliquota / 100.00;
		printf("O imposto que você deverá pagar é R$ %.2f", resultado);
		printf("\n");
		printf(" Alíquota de: (%.2f)%%", ponteiro->primeiraAliquota);
		printf("\n");
	};

	if (pessoa.salario > 2826.66 && pessoa.salario <= 3751.05) {
		resultado = pessoa.salario * ponteiro->segundaAliquota / 100.00;
		printf("O imposto que você deverá pagar é R$ %.2f", resultado);
		printf("\n");
		printf(" Alíquota de: (%.2f)%%", ponteiro->segundaAliquota);
		printf("\n");
	};
	if (pessoa.salario > 3751.06 && pessoa.salario <= 4664.68) {
		resultado = pessoa.salario * ponteiro->terceiraAliquota / 100.00;
		printf("O imposto que você deverá pagar é R$ %.2f", resultado);
		printf("\n");
		printf(" Alíquota de: (%.2f)%%", ponteiro->terceiraAliquota);
		printf("\n");
	};
	if (pessoa.salario > 4664.68) {
		resultado = pessoa.salario * ponteiro->quartaAliquota / 100.00;
		printf("O imposto que você deverá pagar é R$ %.2f", resultado);
		printf("\n");
		printf(" Alíquota de: (%.2f)%%", ponteiro->quartaAliquota);
		printf("\n");
	};

	printf("O seu salário:R$ %.2f \n", pessoa.salario);

	
	printf("Nome completo: %s  %s %s", pessoa.nome, pessoa.nomeDoMeio, pessoa.ultimoNome);
	printf("\n");

	return 0;
}

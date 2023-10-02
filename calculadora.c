#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	int opcao, num1, num2, result;

	setlocale(LC_ALL, "");
	
	printf("==========Calculadora==========");
	printf("\n1- Adição");
	printf("\n2- Subtração");
	printf("\n3- Multiplicação");
	printf("\n4- Divisão");
	printf("\n5- Resto");
	printf("\nEscolha uma opção: ");
	scanf("%d", &opcao);

	printf("\n=========Escolha de Número=======");
	printf("\nEscolha o primeiro número: ");
	scanf("%d", &num1);
	printf("\nEscolha o segundo número: ");
	scanf("%d", &num2);

	switch(opcao){
		case 1:
			result = num1 + num2;
			printf("\nResultado: %d\n", result);
			break;
		case 2:
			result = num1 - num2;
			printf("\nResultado: %d\n", result);
			break;
		case 3:
			result = num1 * num2;
			printf("\nResultado: %d\n", result);
			break;
		case 4:
			result = num1 / num2;
			printf("\nResultado: %d\n", result);
			break;
		case 5:
			result = num1 % num2;
			printf("\nResultado: %d\n", result);
	}
}

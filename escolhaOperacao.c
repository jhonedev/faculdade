/* Estrutura case em C */
#include <stdio.h>

int main() {
	
	float num1, num2, resultado;
	int op;
	
	printf("Digite o primeiro n�mero:\n");
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero:\n");
	scanf("%f", &num2);
	
	printf("Escolha a opera��o: \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o \n");
	scanf("%d", &op);

	switch (op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma �: %.3f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtra��o �: %.3f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplica��o �: %.3f\n", resultado);
			break;
		case 4:
			if (num2 != 0) {
				resultado = num1 / num2;
				printf("A divis�o �: %.3f\n", resultado);
			} else {
				printf("Erro: divis�o por zero.\n");
			}
			break;
		default:
			printf("Op��o inv�lida.\n");
			break;
	}
	return 0;
}


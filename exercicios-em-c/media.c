#include <stdio.h>

int main() {
	float nota, media = 0;
	int numero;
	
	printf("Digite 4 notas para saber a m�dia.\n");
	
	for (numero = 1; numero <= 4; numero++) {
		printf("Nota %d: ", numero);
		scanf("%f", &nota);
		media += nota;
	}
	
	media = media / 4;
	printf("A m�dia foi: %.2f\n", media);
	return 0;
}

#include <stdio.h>

int main () {
	
	int idade, ano;
	float altura;
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	ano = 2024 - idade;
	printf("\nO nome �: %s", nome);
	printf("\nA altura �: %.2f", altura);
	printf("\nO ano de nascimento �: %d", ano);
	
	return(0);
}

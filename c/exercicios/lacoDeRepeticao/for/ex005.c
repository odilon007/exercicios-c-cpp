#include <stdio.h>

// Faça um programa que leia 10 inteiros e imprima sua média.

int main() {
	float soma=0;
	float media;

	for (int i=0; i<10; i++) {
		int valor;
		printf("digite um valor: ");
		scanf("%d", &valor);
		soma += valor;
	}

	media = soma/10.0;
	printf("a media eh igual a %.2f\n", media);

	return 0;
}
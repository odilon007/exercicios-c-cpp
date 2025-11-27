#include <stdio.h>

// Elabore um programa que peC'a ao usuC!rio para digitar 10 valores. Some esses valores e apresente o resultado na tela.

int main() {
	int valor, soma=0;

	for (int i=0; i<10; i++) {
		printf("digite um valor: ");
		scanf("%d", &valor);
		soma += valor;
	}

	printf("a soma eh igual a %d\n", soma);

	return 0;
}
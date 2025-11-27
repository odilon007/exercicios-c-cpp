#include <stdio.h>

// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

int main() {
    
    int soma=0;

    for (int i=1; i<51; i++) {
        soma += i*2;
    }

    printf("%d\n", soma);

    return 0;
}
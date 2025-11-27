#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um número N, some todos os números inteiros de 1 a N, e mostre o
resultado obtido.
*/

int main()
{
    int n, soma=0;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    while (n >=1) {
        soma += n;
        n--;
    }
    
    printf("A soma eh igual a: %d", soma);
    
    return 0;
}

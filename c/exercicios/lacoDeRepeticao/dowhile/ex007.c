
#include <stdio.h>

/*
Escreva um programa que calcule o fatorial de um número inteiro lido, sabendo-se que:
N ! = 1 x 2 x 3 x ... x N-1 x N
0 ! = 1
*/

int main()
{
    int num, fatorial=1;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(int i=2; i<=num; i++) {
        fatorial *= i;
    }
    printf("%d! eh igual a: %d", num, fatorial);
    
    return 0;
}
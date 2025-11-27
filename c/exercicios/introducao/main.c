#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int soma;

    printf("escreva o primeiro numero: ");
    scanf("%d", &a);
    printf("escreva o segundo numero: ");
    scanf("%d", &b);
    soma = a+b;
    printf("a soma de %d com %d eh igual a: %d", a, b, soma);

    return 0;
}
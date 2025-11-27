#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float x, y;

    printf("digite o simbolo da operacao: ");
    scanf(" %c", &op);
    printf("digite dois numeros: ");
    scanf("%f%f", &x, &y);

    if (op == '+') {
        printf("a soma eh igual a %f", x+y);
    } else if (op == '-') {
        printf("a subtracao eh igual a: %f", x-y);
    } else if (op == '/') {
        printf("a divisao eh igual a: %.1f", x/y);
    } else if (op == '*') {
        printf("a multiplicacao eh igual a: %f", x*y);
    } else {
        printf("operador invalido");
    }

    return 0;
}
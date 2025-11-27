# Questão 2 (2,5 pontos)

Escreva um programa que receba a base e a altura de um retângulo e determine se o
perímetro deste retângulo (soma dos lados) é maior que a sua área (base * altura) ou não. Por exemplo, a
área de um retângulo com base 5 e altura 4 é maior que o seu perímetro.
```c
#include <stdio.h>

int main()
{
    float b, h;
    
    printf("Digite o valor da base e da altura do retangulo: ");
    scanf("%f%f", &b, &h);
    
    float p, a;
    
    p = b*2 + h*2;
    a = b*h;
    
    if (p > a) {
        printf("O perimetro eh maior que a area.\n");
    } else if (p <a) {
        printf("A area eh maior que o perimetro.\n");
    } else {
        printf("a area e o perimetro sao iguais.\n");
    }
    
    return 0;
}
```
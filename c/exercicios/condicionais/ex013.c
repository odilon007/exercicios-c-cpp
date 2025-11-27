#include <stdio.h>
#include <math.h>

int main()
{
    int b, comissao =0;
    const float salarioMin = 260.00f;

    printf("Digite a quantidade de pecas: ");
    scanf("%d",&b);

    if (b>30) {
        b -= 30;
        b *= 5;
        comissao = b;
    }

    printf("salario da classe A: %.2f\n", salarioMin);
    printf("salario da classe B: %.2f", salarioMin+comissao);
    
    return 0;
    
}
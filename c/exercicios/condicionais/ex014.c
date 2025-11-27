#include <stdio.h>
#include <math.h>

int main()
{
    float qtdkw, valor;

    printf("Digite a quantidade de KW consumido: ");
    scanf("%f", &qtdkw);
    valor = qtdkw*5;

    if (valor < 40) {
        valor = 40;
    }

    printf("valor eh igual a: %.2f R$", valor);

    return 0;
    
}
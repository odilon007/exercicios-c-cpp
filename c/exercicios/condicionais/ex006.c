#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float verba=8000.00f;
    float valorAtual, x, y, z;

    printf("Digite os valores de gasto com passagem, hospedagem e alimentacao respectivamente: ");
    scanf("%f%f%f", &x, &y, &z);
    valorAtual = verba-x-y-z;

    if (valorAtual < 0) {
        printf("nao eh possivel");
    } else {
        printf("eh possivel");
    }

    return 0;
}
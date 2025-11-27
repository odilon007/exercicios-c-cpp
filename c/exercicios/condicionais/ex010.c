#include <stdio.h>
#include <stdlib.h>

int main()
{
    int df, dp;
    float percentual;

    printf("Digite o total de deputados federais: ");
    scanf("%d", &df);

    printf("Digite o número de deputados da Paraíba: ");
    scanf("%d", &dp);

    if (df == 0) {
        printf("Erro: o número total de deputados não pode ser zero.\n");
        return 1;
    }

    percentual = ((float)dp / df) * 100.0;

    printf("Percentual: %.2f por cento\n", percentual);

    return 0;
}

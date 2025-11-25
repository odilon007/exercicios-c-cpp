#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marcha;
    printf("Digite a marcha atual: ");
    scanf("%d", &marcha);

    switch(marcha) {
        case 0:
            printf("Ponto morto.\n");
            break;
        case 1:
            printf("Primeira marcha - forca maxima!\n");
            break;
        case 2:
            printf("Segunda marcha � aceleracao suave.\n");
            break;
        case 3:
            printf("Terceira marcha � velocidade media.\n");
            break;
        case 4:
            printf("Quarta marcha � otimo desempenho.\n");
            break;
        case 5:
            printf("Quinta marcha � economia de combustivel.\n");
            break;
        case 6:
            printf("Re � cuidado!\n");
            break;
        default:
            printf("Marcha invalida.\n");
            break;
    }

    return 0;
}

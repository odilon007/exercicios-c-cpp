#include <stdio.h>
#include <stdlib.h>

#define TAM 8

int main()
{
    float vetor[TAM], soma=0;

    printf("Digite 8 valores representando as amplitudes medidas:\n");
    for (int i=0; i<TAM; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    float media = soma/TAM;
    int qtd=0, alerta=0;


    for (int i=0; i<TAM; i++){
        if (vetor[i] > 12) {
            alerta = 1;
        }
        if (vetor[i] > media) {
            qtd++;
        }
    }
    printf("Media: %.2f\n", media);

    if (alerta) {
        printf("ALERTA: Vibracao excessiva detectada!\n");
    }

    return 0;
}

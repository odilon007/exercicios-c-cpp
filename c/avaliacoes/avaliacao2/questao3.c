#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, qtd=0, qtda=0, qtdb=0;
    float t;

    printf("Digite quantas medicoes serao feitas: ");
    scanf("%d", &m);

    for (int i=0; i<m; i++) {
        printf("Digite a temperatura: ");
        scanf("%f", &t);
        if (t <95) {
            printf("Seguro\n");
            qtdb++;
        } else if (t <= 110) {
            printf("Risco moderado\n");
            qtd++;
        } else {
            printf("Risco critico - desligar\n");
            qtda++;
        }
    }

    printf("\n");
    printf("======== RESUMO DAS CLASSIFICACOES ========\n");
    printf("Seguro: %d\n", qtdb);
    printf("Risco Moderado: %d\n", qtd);
    printf("Risco Critico: %d\n", qtda);

    return 0;

}

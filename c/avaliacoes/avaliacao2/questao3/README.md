# Questão 3 (25 pontos) – Controle de Tensão de Motores

A temperatura de operação de mancais deve permanecer abaixo de 95 oC.
Faça um programa que:
1. Leia quantas medições serão feitas;
2. Para cada temperatura medida:
• Exiba “Seguro” se T < 95;
• Exiba “Risco moderado” se 95 ≤ T ≤ 110;
• Exiba “Risco crítico – desligar” se T > 110;
3. Conte quantas medições caíram em cada categoria;
4. Ao final, exiba o resumo das classificações.
### C99
```c
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

```
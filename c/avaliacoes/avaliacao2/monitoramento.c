#include <stdio.h>
#include <stdlib.h>
/*
Questão 1 (25 pontos) – Monitoramento de Níveis de Tanque
Um sensor registra, em intervalos regulares, a vazão de fluido em uma tubulação (em
L/min). A operação é considerada estável quando a vazão permanece entre 450 e 520
L/min.
Crie um programa em C que:
• Pergunte quantas medições serão inseridas;
• Conte:
o quantas leituras ficaram dentro da faixa estável,
o quantas ficaram acima e quantas abaixo;
• Calcule a média da vazão registrada;
• Exiba também a maior e a menor vazão medidas.
*/
int main()
{
    int vazao;
    int qtd=0, qtdb=0, qtda=0, soma =0;
    int maior, menor;
    float m;

    printf("Pergunte quantas medições serão inseridas: ");
    scanf("%f", &m);

    for (int i=0; i<m; i++) {
        printf("Digite a vazão de fluido em uma tubulação (em L/min): ");
        scanf("%d", &vazao);
        soma += vazao;
        if (i == 0) {
            maior = vazao;
            menor = vazao;
        }
        if (vazao > maior) {
            maior = vazao;
        }
        if (vazao < menor) {
            menor = vazao;
        }
        if (vazao < 450) {
            qtdb++;
        } else if (vazao <= 520) {
            qtd++;
        } else if (vazao > 520){
            qtda++;
        }
    }
    
    if (m > 0) {
        float media = soma/m;
        printf("a media da vazao registrada: %.2f\n", media);
    }

    printf("quantas leituras ficaram dentro da faixa estavel: %d\n", qtd);
    printf("quantas ficaram acima: %d\n", qtda);
    printf("quantas ficaram abaixo: %d\n", qtdb);
    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}

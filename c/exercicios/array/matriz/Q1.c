/*
1. Escreva um programa que preencha uma matriz 3x3 com valores reais fornecidos pelo usuário. O 
programa deverá exibir:
a) A soma dos elementos da primeira linha da matriz
b) A soma dos elementos da terceira coluna da matriz
c) A soma dos elementos da diagonal principal da matri
*/

#include <stdio.h>

#define TAM 3

int main()
{
    int matriz[TAM][TAM];
    int linha1=0, coluna3=0, digonal=0;
    
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0) {
                linha1 += matriz[i][j];
            }
            if (j == 2) {
                coluna3 += matriz[i][j];
            }
            if (i == j) {
                digonal += matriz[i][j];
            }
        }
    }
    
    printf("soma da linha 1: %d\n", linha1);
    printf("soma da coluna 3: %d\n", coluna3);
    printf("soma da digonal principal: %d\n", digonal);

    return 0;
}
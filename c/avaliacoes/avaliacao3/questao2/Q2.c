#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int matriz[TAM][TAM] = {};

    printf("Digite dez pares (x, y):\n");
    
    int x, y;
    
    for (int i=0; i<TAM*2; i++) {
        scanf("%d %d", &x, &y);
        matriz[y][x]++;
    }
    
    int maior = 0;
    
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            printf("%d ", matriz[i][j]);
        } printf("\n");
    } printf("\n");

    printf("Máximo de combinações: %d\n", maior);
    printf("Combinacoes onde ocorreram o maximo: ");
    
    for (int i=0; i < TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if (matriz[i][j] == maior) {
                printf(" (%d,%d), ", j, i);
            }
        }
    }printf("\n");
    
    return 0;
}

#include <stdio.h>

#define NAIPE 4
#define VALOR 5

int main()
{
    int matriz[VALOR][NAIPE] = {};
    
    printf("Digite 10 pares (VALOR, NAIPE): ");
    
    int valor, naipe;
    
    for (int i=0; i<10; i++) {
        scanf("%d %d", &valor, &naipe);
        matriz[valor][naipe]++;
    }
    
    for (int i=0; i<VALOR; i++) {
        for (int j=0; j<NAIPE; j++) {
            printf("(%d,%d) ocorreu %d vezes\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}
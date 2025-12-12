/*
 Escreva um programa que preencha duas matrizes 2x3 com valores inteiros fornecidos pelo usuário. 
O programa deverá somar as duas matrizes, armazenando o resultado em uma terceira matriz, que 
deverá ser exibida.
*/

#include <stdio.h>

#define N 2
#define M 3

int main()
{
    int a[N][M], b[N][M], c[N][M];
    
    printf("Digite os valores da matriz 1:\n");
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Digite os valores da matriz 2:\n");
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Matriz 3:\n");
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            (j == 0) ? printf("%d", c[i][j]) : printf(" %d", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
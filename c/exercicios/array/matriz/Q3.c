/*
3. Uma matriz transposta é a matriz que se obtém da troca de linhas por colunas de uma dada matriz. 
Assim, dada uma matriz C de ordem m x n, a matriz transposta dela será representada por Ct de 
ordem n x m onde cada elemento de Ct
[i,j] = C[j,i].
Escreva um programa que preencha uma matriz 4x3 com valores reais fornecidos pelo usuário e 
mostre a sua transposta. Dada uma matriz A de ordem m x n, a matriz transposta dela será 
representada por At de ordem “invertida” n x m
*/

#include <stdio.h>

#define N 2
#define M 3

int main()
{
    int matriz[N][M], transposta[M][N];
    
    printf("Digite os valoras da matriz:\n");
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
    }
    
    printf("Matriz Transposta:\n");
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            (j == 0) ? printf("%d", transposta[i][j]) : printf(" %d", transposta[i][j]);
        }
        printf("\n");
    }
}
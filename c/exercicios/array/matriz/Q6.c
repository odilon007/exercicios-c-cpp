/*
. Uma matriz quadrada contendo valores inteiros é denominada quadrado mágico quando a soma 
dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das 
diagonais principal e secundária são todos iguais. Por exemplo, a matriz seguinte é um quadrado 
mágico.
8 0 7
4 5 6
3 10 2
Escreva um programa que preencha uma matriz com valores fornecidos pelo usuário, determine e 
mostre se a mesma é um quadrado mágico.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho da matriz:\n");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    
    printf("Digite os valores da matriz:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i=0; i<n; i++){
        int linha=0, coluna=0, pri=0, sec=0;
        for (int j=0; j<n; j++){
            linha += matriz[i][j];
            coluna += matriz[j][i];
            pri += matriz[j][j];
            sec += matriz[j][n-j-1];
        }
        if ((linha != coluna) || (coluna != pri) || (pri != sec)) {
            printf("não eh um quadrado magico!\n");
            return 0;
        }
    }
    
    printf("eh um quadrado magico!\n");
    
    return 0;
}





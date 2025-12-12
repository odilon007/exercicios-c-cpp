/*
4. A tabela seguinte apresenta a quantidade de vendas dos fabricantes de veículos durante o período 
de 2011 a 2016, em múltiplos de mil unidades.
Fabricante/Ano 2011 2012 2013 2014 2015 2016
1 204 223 230 257 290 322
2 195 192 198 203 208 228
3 220 222 217 231 245 280
4 254 262 279 284 296 330
Escreva um programa que:
a) leia os dados da tabela e os armazene;
b) determine e mostre o fabricante com maiores vendas em cada ano;
c) determine e mostre o ano onde houve o maior volume de vendas;
d) determine e mostre a média de vendas de cada fabricante no período apresentado na tabela
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho da matriz:\n");
    scanf("%d", &n);
    
    int matriz[n][n], eh_permutacao=1;
    
    
    printf("Digite os valores da matriz:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 1 || matriz[i][j] < 0) {
                eh_permutacao = 0;
            }
        }
    }
    if (!eh_permutacao) {
        printf("Não eh permutacao!\n");
        return 0;
    }
    for (int i=0; i<n; i++){
        int linha=0, coluna=0;
        for (int j=0; j<n; j++){
            linha += matriz[i][j];
            coluna += matriz[j][i];
            if (linha > 1 || coluna > 1) {
                printf("Não eh permutacao!\n");
                return 0;
            }
        }
    }
    
    printf("eh permutacao!\n");
    
    return 0;
}





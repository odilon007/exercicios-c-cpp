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

#define N 5
#define M 7

int main()
{
    int tabela[N][M] = {
        {0, 2011, 2012, 2013, 2014, 2015, 2016},
        {1, 204, 223, 230, 257, 290, 322},
        {2, 195, 192, 198, 203, 208, 228},
        {3, 220, 222, 217, 231, 245, 280},
        {4, 254, 262, 279, 284, 296, 330},
    };
    
    printf("Fabricante com maiores vendas em cada ano:\n");
    for (int j=1; j<M; j++) {
        int maior, fabricante, ano = tabela[0][j];
        for (int i=1; i<N; i++) {
            if (i == 1) {
                maior = tabela[i][j];
                fabricante = tabela[i][0];
            } else {
                if (tabela[i][j] > maior) {
                    maior = tabela[i][j];
                    fabricante = tabela[i][0];
                }
            }
        }
        printf("Ano: %d, Fabricante: %d, Vendas: %d\n", ano, fabricante, maior);
    }
    
    printf("\n");
    printf("maior numero de vendas: \n");
    int maiorVendas=0, anoVendas;
    for (int j=1; j<M; j++) {
        int soma = 0;
        for (int i=1; i<N; i++) {
            soma += tabela[i][j];
        }
        if (soma > maiorVendas) {
            maiorVendas = soma;
            anoVendas = tabela[0][j];
        }
        
    }
    printf("Ano: %d, Numero de vendas: %d\n", anoVendas, maiorVendas);

    for (int i=1; i<N; i++) {
        float media, soma=0;
        for (int j=1; j<M; j++) {
            soma += tabela[i][j];
        }
        media = soma/(float)M-1;
        printf("o fabricante %d, teve uma media de vendas: %.2f\n", tabela[i][0], media);
    }
    
    return 0;
}
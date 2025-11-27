# Questão 1 (2,5 pontos) 

O comportamento de alguns processos industriais pode ser caracterizado a partir das raízes de
uma equação denominada equação característica. Em sistemas de segunda ordem, essa equação é da forma:
a*x2+b*x+c = 0. Em outras palavras, trata-se de uma equação de segundo grau. Para determinar a natureza
da reposta do sistema, é necessário calcular o delta dessa equação como segue:

Δ = b
2 − 4ac

Escreva um programa que leia os valores dos coeficientes a, b e c, calcule o Δ e indique a natureza do sistema
segundo a seguinte relação:

Valor de Δ Natureza do sistema
0 Sistema criticamente amortecido
Δ < 0 Sistema sub-amortecido
Δ > 0 Sistema sobre-amortecido
```c
#include <stdio.h>

int main()
{
    int minutos1, segundos1;
    int minutos2, segundos2;
    
    printf("Digite o valor de minutos e segundos do piloto 1: ");
    scanf("%d%d", &minutos1, &segundos1);
    printf("Digite o valor de minutos e segundos do piloto 2: ");
    scanf("%d%d", &minutos2, &segundos2);
    
    int temp1 = minutos1*60 + segundos1;
    int temp2 = minutos2*60 + segundos2;
    
    if (temp1 > temp2) {
        printf("o piloto 2 foi mais rapido.\n");
    } else if (temp1 < temp2) {
        printf("O piloto 1 foi mais rapido.\n");
    } else {
        printf("Empataram.\n");
    }
    
    return 0;
}
```
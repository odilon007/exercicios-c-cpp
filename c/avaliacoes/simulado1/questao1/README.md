# Questão 1 (2,5 pontos) 

Faça um programa em C que deve ler os minutos e os segundos da volta de dois pilotos de Fórmula
1 e indicar qual deles foi o mais rápido.
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
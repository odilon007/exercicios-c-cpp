# Questão 4 (25 pontos)

Implemente um simulador de movimento retilíneo uniforme.

O usuário entra com:
- distância total (em metros)
- tempo total (em segundos)
O sistema deve:
- Calcular a velocidade média
- Simular a movimentação exibindo a posição a cada segundo, do tempo 0 até o tempo final

Exemplo:
tempo: 0s -> posição: 0m
tempo: 1s -> posição: Xm
(...)
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
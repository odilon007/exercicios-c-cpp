
#include <stdio.h>
/*
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
*/
int main()
{
    float metros, vm;
    int segundos;
    
    printf("Digite a distancia total (metros): ");
    scanf("%f", &metros);
    printf("Digite o tempo total: ");
    scanf("%d", &segundos);
    
    if (segundos >0) {
        vm = metros/segundos;
    } else {
        printf("Digite um valor positivo de segundos.\n");
        return 0;
    }
    float posicao;
    
    for (int i=0; i<=segundos; i++) {
        posicao = vm *i;
        printf("tempo: %ds -> posicao: %.1fm\n", i, posicao);
    }
    
    return 0;
}
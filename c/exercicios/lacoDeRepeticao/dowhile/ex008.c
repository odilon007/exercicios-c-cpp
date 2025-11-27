#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para dizer o vencedor de uma partida de ping-pongue entre o jogador 1 e o jogador
2. Para cada ponto disputado, o usuário deve informar 1 ou 2 para dizer qual o jogador venceu aquele
ponto. A partida chega ao final quando um dos jogadores tiver 21 pontos (ou mais) e a diferença de
pontos entre os jogadores for maior ou igual a dois.
*/

int main()
{
    int num, pontos1=0, pontos2=0;
    
    while (1) {
        if ((pontos1 >= 21 || pontos2 >= 21) && abs(pontos1-pontos2) >= 2) {
            break;
        }
        
        printf("Digite qual jogador venceu este ponto (1 ou 2): ");
        scanf("%d", &num);
        
        if (num == 1) {
            pontos1++;
        } else if (num == 2) {
            pontos2++;
        } else {
            printf("Entrada invalida! Digite 1 ou 2\n");
        }
    }
    
    if (pontos1 > pontos2) {
        printf("O jogador1 venceu!\n");
    } else {
        printf("O jogador2 venceu!\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*Questão 3 – Simulador de marcha (com switch-case)
Em um simulador de carro, o usuário informa a marcha atual (inteiro de 0 a 6), e o sistema
deve exibir a mensagem correspondente:
0 – “Ponto morto.”
1 – “Primeira marcha – força máxima!”
2 – “Segunda marcha – aceleração suave.”
3 – “Terceira marcha – velocidade média.”
4 – “Quarta marcha – ótimo desempenho.”
5 – “Quinta marcha – economia de combustível.”
6 – “Ré – cuidado!”
Outro valor – “Marcha inválida.”
Escreva um programa em C que implementa esta lógica.
*/

int main()
{
    int marcha;
    printf("Digite a marcha atual: ");
    scanf("%d", &marcha);

    switch(marcha) {
        case 0:
            printf("Ponto morto.\n");
            break;
        case 1:
            printf("Primeira marcha - forca maxima!\n");
            break;
        case 2:
            printf("Segunda marcha – aceleracao suave.\n");
            break;
        case 3:
            printf("Terceira marcha – velocidade media.\n");
            break;
        case 4:
            printf("Quarta marcha – otimo desempenho.\n");
            break;
        case 5:
            printf("Quinta marcha – economia de combustivel.\n");
            break;
        case 6:
            printf("Re – cuidado!\n");
            break;
        default:
            printf("Marcha invalida.\n");
            break;
    }

    return 0;
}

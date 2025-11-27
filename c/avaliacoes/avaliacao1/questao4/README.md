# Questão 4 – Calculadora de torque interativa

O torque T (em N·m) é calculado por: T = F × r, onde F é a força (N) e r é o raio (m).
O programa deve:
1. Pedir que o usuário informe o tipo de ferramenta utilizada (1 = chave pequena, 2 = chave
média, 3 = chave grande).
2. Ler o valor da força aplicada.
3. Usar switch-case para definir o raio:
- Pequena → 0.10 m
- Média → 0.25 m
- Grande → 0.40 m
4. Calcular o torque.
5. Usar if-else aninhado para classificar:
- T < 10: “Torque baixo.”
- 10 ≤ T ≤ 25: “Torque adequado.”
- T > 25: “Torque excessivo – risco de dano!”
Escreva um programa em C que implementa esta lógica.
### C99
```c
#include <stdio.h>
#include <stdlib.h>

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
            printf("Segunda marcha � aceleracao suave.\n");
            break;
        case 3:
            printf("Terceira marcha � velocidade media.\n");
            break;
        case 4:
            printf("Quarta marcha � otimo desempenho.\n");
            break;
        case 5:
            printf("Quinta marcha � economia de combustivel.\n");
            break;
        case 6:
            printf("Re � cuidado!\n");
            break;
        default:
            printf("Marcha invalida.\n");
            break;
    }

    return 0;
}
```
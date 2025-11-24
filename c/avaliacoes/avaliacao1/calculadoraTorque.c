#include <stdio.h>
#include <stdlib.h>

/*Questão 4 – Calculadora de torque interativa
O torque T (em N·m) é calculado por: T = F × r, onde F é a força (N) e r é o raio (m).
O programa deve:
1. Pedir que o usuário informe o tipo de ferramenta utilizada (1 = chave pequena, 2 = chave
média, 3 = chave grande).
2. Ler o valor da força aplicada.
3. Usar switch-case para definir o raio:
- Pequena ? 0.10 m
- Média ? 0.25 m
- Grande ? 0.40 m
4. Calcular o torque.
5. Usar if-else aninhado para classificar:
- T < 10: “Torque baixo.”
- 10 = T = 25: “Torque adequado.”
- T > 25: “Torque excessivo – risco de dano!”
Escreva um programa em C que implementa esta lógica.
*/

int main()
{
    // T = F * r
    int ferramenta;
    float forca, torque, raio;

    printf("informe o tipo de ferramenta utilizada (1 = chave pequena, 2 = chave media, 3 = chave grande): ");
    scanf("%d", &ferramenta);
    printf("Digite o valor da forca aplicada: ");
    scanf("%f", &forca);

    switch (ferramenta) {
        case 1:
            raio = 0.1;
            break;
        case 2:
            raio = 0.25;
            break;
        case 3:
            raio = 0.40;
            break;
        default:
            raio = 0;
            break;
    }

    torque = forca * raio;

    if (torque < 10) {
        printf("Torque baixo.\n");
    } else if (torque <= 25) {
        printf("Torque adequado.\n");
    } else {
        printf("Torque excessivo – risco de dano!\n");
    }

    return 0;
}

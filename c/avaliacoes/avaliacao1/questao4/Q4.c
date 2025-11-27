#include <stdio.h>
#include <stdlib.h>

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
        printf("Torque excessivo � risco de dano!\n");
    }

    return 0;
}

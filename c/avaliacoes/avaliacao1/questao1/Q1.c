#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("Digite o valor da temperatura em Celcius: ");
    scanf("%f", &temp);
    if (temp < 60) {
        printf("Motor frio  aquecer antes de operar.\n");
    } else if (temp <=90) {
        printf("Temperatura ideal de funcionamento.\n");
    } else if (temp <= 110) {
        printf("Atencao: motor superaquecendo.\n");
    } else {
        printf("Emergencia! Desligar motor imediatamente.\n");
    }
    return 0;
}

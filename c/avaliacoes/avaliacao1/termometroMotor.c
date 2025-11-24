#include <stdio.h>
#include <stdlib.h>

/* Questão 1 – Termômetro do motor
Um motor tem seu nível de temperatura monitorado por um sensor. Com base no valor lido
(em °C), o sistema deve tomar decisões conforme as faixas:
- Menor que 60: “Motor frio – aquecer antes de operar.”
- Entre 60 e 90: “Temperatura ideal de funcionamento.”
- Entre 91 e 110: “Atenção: motor superaquecendo.”
- Acima de 110: “Emergência! Desligar motor imediatamente.”
Escreva um programa em C que leia a temperatura e mostre a mensagem correspondente
usando estruturas if-else aninhadas.
*/

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

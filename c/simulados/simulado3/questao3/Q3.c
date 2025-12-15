#include <stdio.h>

#define N 10
int main()
{
    float sensor[N];
    
    printf("Digite os valores das temperaturas: ");
    float maior, menor;
    int critico = 0;
    for (int i=0; i<N; i++) {
        scanf("%f", &sensor[i]);
        if (i == 0) {
            maior = sensor[0];
            menor = sensor[0];
        }
        if (sensor[i] > maior) {
            maior = sensor[i];
        }
        if (sensor[i] < menor) {
            menor = sensor[i];
        }
        if (sensor[i] > 80) {
            critico++;
        }
    }
    printf("Maior temperatura: %.1f°C\n", maior);
    printf("Menor temperatura: %.1f°C\n", menor);
    if (critico) {
        printf("ALERTA: Temperatura crítica detectada!\n");
    }
    
    return 0;
}
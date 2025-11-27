#include <stdio.h>

int main()
{
    int minutos;
    float kmlitro, vel;
    float distancia, litrogasto;
    
    printf("Quantidade de quilômetros que o carro faz com um litro: ");
    scanf("%f", &kmlitro);
    printf("Tempo gasto em uma viagem (em minutos): ");
    scanf("%d", &minutos);
    printf("A velocidade média durante a viagem (km por hora): ");
    scanf("%f", &vel);
    
    distancia = ((float)minutos/60) * vel;
    litrogasto = distancia/kmlitro;
    
    printf("Distancia percorrida: %.2fkm\n", distancia);
    printf("quantidade de litros de combustível gasta na viagem: %.2f\n", litrogasto);
    
    return 0;
}
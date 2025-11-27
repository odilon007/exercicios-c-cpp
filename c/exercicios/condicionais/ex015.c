#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, massa;

    printf("Digite o peso e altura: ");
    scanf("%f%f", &peso, &altura);
    massa = peso/(altura*altura);
    
    if (massa < 26) {
        printf("Normal");
    } else if (massa < 30) {
        printf("Obeso");
    } else {
        printf("Obeso Morbido");
    }
    
    return 0;
}
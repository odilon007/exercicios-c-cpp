#include <stdio.h>

int main()
{
    float a, b, c;
    
    printf("Digite os valores dos coeficientes a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);
    
    float delta = b*b-4*a*c;
    
    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de zero.\n");
        return 0
    }
    
    if (delta == 0) {
        printf("Sistema criticamente amortecido\n");
    } else if (delta < 0) {
        printf("Sistema sub-amortecido\n");
    } else {
        printf("Sistema sobre-amortecido\n");
    }
    
    return 0;
}
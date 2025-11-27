#include <stdio.h>

int main()
{
    float tmax, t;
    int qtda=0, qtds=0, qtdr=0;
    
    for (int i=0;i<5;i++) {
        printf("Digite o valor do torque maximo suportado: ");
        scanf("%f", &tmax);
        printf("Digite o valor do torque aplicado: ");
        scanf("%f", &t);
        
        if (t <= 0.95*tmax) {
            printf("APROVADA\n");
            qtda++;
        } else if (t <= tmax) {
            printf("SOBRERISCO\n");
            qtds++;
        } else {
            printf("REPROVADA\n");
            qtdr++;
        }
    }
    
    printf("quantidade de pecas APROVADAS: %d\n", qtda);
    printf("quantidade de pecas SOBRERISCOS: %d\n", qtds);
    printf("quantidade de pecas REPROVADAS: %d\n", qtdr);
    
    int total= qtda+qtdr+qtds;
    
    if (total >0) {
        float indice = (qtda*100.0)/total;
        printf("O indice de aprovacao eh igual: %.2f\n", indice);
    } else {
        printf("nao ha pecas para calcular o indice de aprovacao.\n")
    }
    
    return 0;
}
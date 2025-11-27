#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, pressao, aceitas=0, somat=0, somap=0, qtd=0;
    for (int i=0;i<3; i++) {
        printf("Digite o valor da temperatura e da pressao: ");
        scanf("%d%d", &temp, &pressao);
        
        if ((temp >= 60 && temp <= 90) && (pressao >= 2 && pressao <= 5)) {
            aceitas += 1;
        } else {
            somat += temp;
            somap += pressao;
            qtd++;
        }
    }
    if (qtd >0) {
        float mediat = somat/qtd;
        float mediap = somap/qtd;
        printf("As medias da temperatura e pressao respectivamente:\n");
        printf("%.2f\n", mediat);
        printf("%.2f\n", mediap);
    } else {
        printf("nenhuma peca foi rejeitada.\n");
    }
    
    return 0;
}

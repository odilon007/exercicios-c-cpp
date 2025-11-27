#include <stdio.h>

int main()
{
    int cpf, nd;
    float ra, cp, dm, totaldeducao, base, imposto, pd, ir, aliquota;
    
    printf("CPF: ");
    scanf("%d", &cpf);
    printf("Rendimento anual: ");
    scanf("%f", &ra);
    printf("imposto retido na fonte: ");
    scanf("%d", &ir);
    printf("contribuição previdenciária: ");
    scanf("%f", &cp);
    printf("despesas médicas: ");
    scanf("%f", &dm);
    printf("número de dependentes: ");
    scanf("%d", &nd);
    
    totaldeducao = cp+dm+nd*1080.00;
    base = ra - totaldeducao;
    
    if (base <= 10800.00f) {
        aliquota = 0;
        pd = 0;
    } else if (base <= 21600.00f) {
        aliquota = 0.15;
        pd = 1620;
    } else {
        aliquota = 25;
        pd = 3780;
    }
    
    imposto = base*(aliquota/100.0) - pd;
    
    if (imposto >0 && ir>0) {
        printf("Imposto a pagar: %.2f", imposto);
    } else {
        printf("nenhum imposto a pagar");
    }
    
    return 0;
}
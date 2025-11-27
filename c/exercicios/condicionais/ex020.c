#include <stdio.h>

int main()
{
    int dd = 20, mm = 10, aaaa = 2017;
    int vd, vm, va;
    
    printf("Digite a data de vencimento no formato (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &vd, &vm, &va);
    
    int atualTotal, vencimentoTotal;
    
    atualTotal = dd+ mm*30 + aaaa*365;
    vencimentoTotal = vd+ vm*30 + va*365;
    
    if (atualTotal == vencimentoTotal) {
        printf("Deve ser feita promocao\n");
    } else if (vencimentoTotal - atualTotal == 1) {
        printf("Produto altamente perecivel\n");
    } else if ( atualTotal < vencimentoTotal) {
        printf("Pode ser comercializado\n");
    } else if (atualTotal > vencimentoTotal) {
        printf("Deve ser descartado\n");
    }
    return 0;
}